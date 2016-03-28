#pragma once

#include <string>

class String 
{
	char* m_string; 
	
public:
	
	//const char thisexample() const;

	int length() const;  ////1. The ability to query the string’s length, returning an integer

	bool operator== (String& str) const;

	//int length(std::string input);

	char getCharacter(int index) const; //2. The ability to access a character at a certain index within the string class

	void setCharacter(int index, char c);

	bool String::compare(char* String);// 3 The ability to compare if the string is the same as another string class

	void append(String String); // 4 The ability to append one string to another

	void append(char * String);

	void prepend(String String); // 5 The ability to prepend one string to another

	const char* getString();// 6 returns a basic c style string

	String String::lowerCase(); // 7 The ability to convert the string to a duplicate containing all lowercase letters

	
	String upperCase(); // 8 The ability to convert the string to a duplicate containing all uppercase letters

	int String::subStringCheck(char* string); // 9 The ability to find a sub-string within the string class

	int String::subStringCheckIndex(String c, int z); // 10 The ability to find a sub-string within the string class, starting from a certain index within the string
												  
	void String::stringReplace(String find, char* replace); // 11 The ability to replace a sub - string found within the string with a different sub - string

	void String::setString(); // 12 The ability to set the string to an input C - style string
	
	
	
	

	String(String & string);
	
	

	String();

	String(char * string);

	~String();


	
	
	void print();
};