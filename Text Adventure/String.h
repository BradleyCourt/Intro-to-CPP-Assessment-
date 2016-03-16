#pragma once

#include <string>

class String 
{
	char* m_string; 
	
public:
	
	//const char thisexample() const;

	const int Length();  ////1. The ability to query the string’s length, returning an integer

	const int Length(std::string input);

	const char getCharacter(int index); //2. The ability to access a character at a certain index within the string class

	bool String::Compare(char* String);// 3 The ability to compare if the string is the same as another string class

	void Append(String String); // 4 The ability to append one string to another

	void Prepend(String String); // 5 The ability to prepend one string to another

	const char* GetString();// 6 returns a basic c style string

	char String::lowerCase(); // 7 The ability to convert the string to a duplicate containing all lowercase letters

	char String::upperCase(); // 8 The ability to convert the string to a duplicate containing all uppercase letters

	int String::subStringCheck(char* string); // 9 The ability to find a sub-string within the string class

	int String::subStringCheckIndex(String c, int z); // 10 The ability to find a sub-string within the string class, starting from a certain index within the string
												  
	char String::stringReplace(String c, int start); // 11 The ability to replace a sub - string found within the string with a different sub - string

	void String::setString(); // 12 The ability to set the string to an input C - style string
	
	
	
	

	String(String & string);
	
	

	String();

	String(char * string);

	~String();


	
	
	void print();
};