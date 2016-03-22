#include "String.h"
#include <iostream>


using namespace std;



 String::String(char* string)
 {
	 char* newString = new char[strlen(string)+1];
	 newString[0] = '\0';
	 strcpy(newString, string);
	 m_string = newString;
 }

 String::~String()
 {
	 if (m_string != nullptr)
	 {
		 delete[] m_string;
	 }
 }

 String::String(String& string) 
 {
	 char* newString = new char[string.length() + 1];
	 newString[0] = '\0';
	 //strcpy(newString, string);
	 //make a loop that iterates through all character values, from index 0 to \0
	 for (int i = 0; i < string.length(); i++) {
		 newString[i] = string.getCharacter(i);
		 newString[i+1] = '\0';
	 }
	 m_string = newString;
 }

 ////1. The ability to query the string’s length, returning an integer
 const int String::length()
 {
	 return strlen(m_string);
 }

 const bool String::operator==(String& str)
 {
	 return false;
 }




 //2. The ability to access a character at a certain index within the string class
 const char String::getCharacter(int index)
 {
	 return m_string[index];
 }

 void String::setCharacter(int index, char c)
 {
	 m_string[index] = c;
 }

 // 3 The ability to compare if the string is the same as another string class
 bool String::compare(char* String)
 {
	 return strcmp(m_string, String);
}


// 4 The ability to append one string to another
void String::append(String String)
{

	char* N_String = new char[strlen(m_string) + String.length() + 1];
	N_String[0] = '\0';
	strcpy(N_String, m_string);
	strcat(N_String, String.getString());

	if (m_string != nullptr)
	{
		delete[] m_string;
	}
	m_string = N_String;



}
void String::append(char* String)
{

	char* N_String = new char[strlen(m_string) + strlen(String) + 1];
	N_String[0] = '\0';
	strcpy(N_String, m_string);
	strcat(N_String, String);

	if (m_string != nullptr)
	{
		delete[] m_string;
	}
	m_string = N_String;



}
// 5 The ability to prepend one string to another
void String::prepend(String String)
{

	char* N_String = new char[strlen(m_string) + String.length() + 1];
	N_String[0] = '\0';
	strcpy(N_String, String.getString());
	strcat(N_String, m_string);

	if (m_string != nullptr)
	{
		delete[] m_string;
	}
	m_string = N_String;
}

// 6 returns a basic c style string
const char* String::getString()
{
	return m_string;
}

// 7 The ability to convert the string to a duplicate containing all lowercase letters
String String::lowerCase()
{
	int i = 0;
	//char* c = "a";
	while (m_string[i] != '\0')
	{
		setCharacter(i, tolower(m_string[i]));
		i++;
	}
	return *this;
}

// 8 The ability to convert the string to a duplicate containing all uppercase letters
String String::upperCase()
{
	int i = 0;
	
	while (m_string[i] != '\0')
	{
		setCharacter(i, toupper(m_string[i]));
		i++;
	}
	return *this;
}

// 9 The ability to find a sub-string within the string class
int String::subStringCheck(char* string)
{
	//	 int index = 0;
	int len = length();

	for (int i = 0; i < length(); i++)
	{
		int j = 0;

		while (m_string[i] == string[j])
		{
			j++;
			i++;
			if (j == strlen(string))
			{
				return i - j;
			}
		}
	}
	return -1;
}
int String::subStringCheckIndex(String c, int start) // 10 The ability to find a sub-string within the string class, starting from a certain index within the string

{
	int i = start, j = 1;

	bool IsTrue = false;

	while (i < length())	//c = string
	{
		
		if (m_string[i] == c.getCharacter(0))
		{
			while (j < c.length())
			{
				if (m_string[i+j] == c.getCharacter(j))
				{
					IsTrue = true;
					j++;
				}
				else
				{
					IsTrue = false;
					j = 1;
					break;
				}

			}
			if (IsTrue==true)
			{
				break;
			}
			// loops done and all are the same
		}
		else
		{
			IsTrue = false;			
		}
		i++;
	}
	if (IsTrue == true)
	{
		return i;
	}
	else 
	{
		return -1;
	}
}

const int String::length(std::string input)
{
	int index = 0;
	while (input[index] != '\0')
	{
		index++;
	}
	return index;
}
	 
void String::stringReplace(String find, char* replace)// 11 The ability to replace a sub - string found within the string with a different sub - string
{
	int flength = length(find.m_string);
	int index = subStringCheck(find.m_string);
	int newLength = strlen(m_string) - flength + strlen(replace);
	int replaceLength = strlen(replace);
	char* _replacement = new char[newLength + 1];
	
	strcpy(_replacement, m_string);
	for (int i = 0; i < newLength; i++)
	{
		if (i < replaceLength)
		{
			_replacement[i + index] = replace[i];
		}
		if (i + flength + index < strlen(m_string) && i + index + replaceLength < newLength)
		{
			_replacement[i + index + replaceLength] = m_string[i + index + flength];
		}
	
	}
	_replacement[newLength] = '\0';
	if (m_string != nullptr)
	{
		delete[] m_string;
	}

	m_string = _replacement;

	if (subStringCheck(find.m_string) != -1)
	{
		stringReplace(find, replace);
	}
}

void String::setString()  // 12 The ability to set the string to an input C - style string
{
	std::string test;
	std::getline(std::cin, test);
	int len = length(test);
	char* _test = new char[len +1];
	
	for (int i = 0; i <= len;  i++)
	{
		_test[i] = test[i];
	}

	_test[len] = '\0';

	if (m_string != nullptr)
	{
		delete[] m_string;
	}

	m_string = _test;

}


String::String()
{
	m_string = nullptr;
}



// outputting method
void String::print()
{
	if (m_string == nullptr)
	{
		std::cout << "null";
	}
	else
	{
		std::cout << m_string << std::endl;
	}
}

