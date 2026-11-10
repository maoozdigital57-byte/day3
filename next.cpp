#include <iostream> // Including input/output stream library
#include <string>   // Including string library for string manipulation
using namespace std; // Using the standard namespace

// Function to change characters in a string to the next character in the ASCII sequence
string change_letter(string str) {

	int char_code; // Variable to store ASCII value of characters

	// Loop through each character in the string
	for (int x = 0; x < str.length(); x++)
	{
		char_code = int(str[x]); // Get ASCII value of the character

		// Check if the character is 'z', then change it to 'a'
		if (char_code == 122)
		{
			str[x] = char(97);
		}
		// Check if the character is 'Z', then change it to 'A'
		else if (char_code == 90)
		{
			str[x] = char(65);
		}
		// Check if the character is an uppercase or lowercase letter
		else if (char_code >= 65 && char_code <= 90 || char_code >= 97 && char_code <= 122)
		{
			str[x] = char(char_code + 1); // Change to the next character in the ASCII sequence
		}

	}

	return str; // Return the modified string
}

int main()
{
	cout << "Original string: w3resource"; // Displaying the original string
	cout << "\nNew string: " << change_letter("w3resource"); // Displaying the modified string

	cout << "\n\nOriginal string: Python"; // Displaying the original string
	cout << "\nNew string: " << change_letter("Python"); // Displaying the modified string

	return 0; // Returning 0 to indicate successful execution
}
