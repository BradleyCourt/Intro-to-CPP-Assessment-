#include "String.h"
#include <fstream>
#include "Text Adventure.h"

using namespace std;
int testNumber;
int success;
void testing(bool test, char* function, fstream& file)
{
	++testNumber;
	if (test)
	{
		success++;
		file << "test " << testNumber << "\t" << function << "\t" << "\success\n";
	}
	else
	{
		file << "test " << testNumber << "\t" << function << "\tfailed\n";
	}
}

void test()
{
	fstream file;
	file.open("testlog.txt", ios::app);

	String test1 = "testing";
	testing(test1.length() == 7, "length", file);

	String test2 = "testing";
	testing(test2.getCharacter(5) == 'n', "character", file);

	String test3 = "testing";
	test3.compare("testing");
	testing(strcmp(test3.getString(), "testing") == 0, "compare", file);

	String test4 = "testing";
	test4.append("anything");
	testing(strcmp(test4.getString(), "testinganything") == 0, "append", file);

	String test5 = "testing";
	test5.prepend("anything");
	testing(strcmp(test5.getString(), "anythingtesting") == 0, "prepend", file);

	String test6 = "testing";
	testing(strcmp(test6.getString(), "testing") == 0, "getString", file);

	String test7 = "TeStInG";
	test7.lowerCase();
	testing(strcmp(test7.getString(), "testing") == 0, "lowercase", file);

	String test8 = "TeStInG";
	test8.upperCase();
	testing(strcmp(test8.getString(), "TESTING") == 0, "uppercase", file);


}


int main()
{
	test();
	system("pause");
	return 0;
}