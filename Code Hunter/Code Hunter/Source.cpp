// CodeHunter.cpp : Defines the entry point for the console application.
// Found Compile time error here. This line is not needed and breaks this version fo visual studio.
// This was only valid in visual studio 2017 for a different type of project
// #include "pch.h" // This line only needed for console C++ project, omit this for Empty C++ Project.
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string textToAnalyze;
	int foo = 0; // Easter egg part 1
	int vowels = 0; // An integer to count the amount of vowels in the string that is typed in.
	int consonants = 0; // An integer to count the amount of consonants in the string that is typed in.
	int digits = 0;// An integer to count the amount of digits in the string that is typed in.
	int spaces = 0;// An integer to count the amount of white space (spaces) in the string that is typed in.
	int lengthOfStringSubmittedForAnalysis = 0; 
	int unknownCharacters = 0; // An integer to count the amount of symbols in the string that is typed in, that can not be defined.
	int checkSum = 0; // This variable is used for the code to verify it is valid.
	int bar = 0; // Easter egg part 2, for the word 'Foobar' defined as 'f***ed up beyond recognition'

	//Welcoming the person and then getting the line to analyze
	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;
	getline(cin, textToAnalyze);
	// This loop is analyzing one letter each pass.
	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		// This is checking to see if the current letter is a vowel or not.
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			// If it is a vowel it will run this code and should add to the vowel count.
			// However this is an error because it is subtracting from our vowel count.
			// todo: Candidate for a fix!
			// --vowels;
			++vowels;
		}
		else if ((textToAnalyze[i] >= 'a' && textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A' && textToAnalyze[i] <= 'Z'))
		{
			// This was commented out for no reason, easy fix
			++consonants;
		}
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			++digits;
		}
		else if (textToAnalyze[i] == ' ')
		{
			++spaces;
		}
		else
		{
			++unknownCharacters;
		}
	}

	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();
	checkSum = unknownCharacters + vowels + consonants + digits + spaces;

	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	else
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	system("pause");

	return 0;
}