#include "String.h"
#include <fstream>
#include "Text Adventure.h"
#include <iostream>
using namespace std;
int testNumber = 0;
int success = 0;
void testing(bool test, char* function, fstream& file)
{
	++testNumber;
	if (test)
	{
		success++;
		file << "test " << testNumber << "\t" << function << "\t" << "success ";
	}
	else
	{
		file << "test " << testNumber << "\t" << function << "\tfailed ";
	}

	float successRate = (float)success / testNumber * 100;

	file << successRate << " % \n";
}

void test()
{
	fstream file;
	file.open("testlog.txt", ios::app);

	String test1 = "testing";
	testing(test1.length() == 7, "length\t\t", file); // Length

	String test2 = "testing";
	testing(test2.getCharacter(5) == 'n', "character\t", file); // Character

	String test3 = "testing";
	test3.compare("testing");
	testing(strcmp(test3.getString(), "testing") == 0, "compare\t\t", file); // Compare

	String test4 = "testing";
	test4.append("anything");
	testing(strcmp(test4.getString(), "testinganything") == 0, "append\t\t", file); // Append

	String test5 = "testing";
	test5.prepend("anything");
	testing(strcmp(test5.getString(), "anythingtesting") == 0, "prepend\t\t", file); // Prepend

	String test6 = "testing";
	testing(strcmp(test6.getString(), "testing") == 0, "getString\t", file); // Get String

	String test7 = "TeStInG";
	test7.lowerCase();
	testing(strcmp(test7.getString(), "testing") == 0, "lowercase\t", file); // Lowercase

	String test8 = "TeStInG";
	test8.upperCase();
	testing(strcmp(test8.getString(), "TESTING") == 0, "uppercase\t", file); // Uppercase

	String test9 = "testing";
	testing(test9.subStringCheck("est") == 1, "subStringCheck\t", file); // SubStringCheck

	String test10 = "testing"; 
	String test101 = "esting";
	testing(test10.subStringCheckIndex(test101, 0) == 1, "subStringCheckIndex", file); // SubStringCheckIndex

	String test11 = "testing";
	test11.stringReplace("ing", "die");
	testing(strcmp(test11.getString(), "testdie") == 0, "stringReplace\t", file); // StringReplace

	String test12 = "a";
	cout << "type a in 'testing'";
	test12.setString();
	testing(strcmp(test12.getString(), "testing") == 0, "SetString\t", file); // SetString
	

}


int main()
{
	test();
	system("pause");
	return 0;
}