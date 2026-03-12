#include <iostream>
#include <cstring>
using namespace std;

char isVowels[] = { 'a', 'e', 'y', 'u', 'i', 'o' };

size_t CountVowels(const char* stroka) {
	size_t count = 0;
	for (size_t i = 0; stroka[i] != '\0'; i++) {
		if (strchr(isVowels, stroka[i]))
			count++;
	} return count;
}

int main() {
	char input[100];
	cout << "Введите строку: ";
	cin.getline(input, 100);
	size_t result = CountVowels(input);

	cout << "Количество гласных: " << result << endl;

    return 0;
}