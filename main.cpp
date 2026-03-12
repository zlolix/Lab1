#include <iostream>
#include <string>
using namespace std;

char isVowels[] = { 'a', 'e', 'y', 'u', 'i', 'o' };

size_t CountVowels(const char* stroka) {
	size_t count = 0;
	for (size_t i = 0; stroka[i] != '\0'; i++) {
		if (strchr(isVowels, stroka[i]))
			count++;
	} return count;
}

enum class Case
{
	Upper,
	Lower
};

void ConvertCase(std::string& str, Case reg)
{
	for (char& c : str)
	{
		if (reg == Case::Upper)
			c = std::toupper(c);
		else
			c = std::tolower(c);
	}
}

int main() {
	int choice;
	std::cout << "choice function: \n 1. CountVowels \n 2. ConvertCase ";
	std::cin >> choice;
	cin.ignore();
	switch(choice) {
		case 1: 
			char input[100];
			cout << "Enter string: ";
			cin.getline(input, 100);
			size_t result = CountVowels(input);
			cout << "Count vowels: " << result << endl;
			break;
		case 2:
			std::string text = "";
			cout << "Enter string: ";
			getline(cin, text);
			std::cout << "Original: " << text << std::endl;
			ConvertCase(text, Case::Upper);
			std::cout << "Upper registry: " << text << std::endl;
			ConvertCase(text, Case::Lower);
			std::cout << "Lower registry: " << text << std::endl;
			break;
	}
	

    return 0;
}