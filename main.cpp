#include<iostream>
#include<string>

int main() {
	char letter;
	char tab[26][26];
	for (int j = 0; j < 26; j++){
		int o = 26 - j;
		letter = 'A';

		for (int i = 0; i < 26; i++){
			
			if (o == 26)
				o = 0;

			tab[j][o] = letter++;
			o++;
		
		}
	}

	std::string plaintext;
	std::string keyword;
	std::cout << "Enter text: ";
	std::cin >> plaintext;
	std::cout << "Enter keyword: ";
	std::cin >> keyword;
	std::string key = "";
	std::string cipertext = plaintext;

	for (int i = 0; i < plaintext.length(); i++)
	{
		key.push_back(keyword[i % keyword.length()]);

	}

	for (int j = 0; j < plaintext.length(); j++)
	{
		int index = plaintext[j] - 'A';
		int keyindex = key[j] - 'A';
		cipertext[j] = tab[index][keyindex];
	}
	std::cout << "Cipertext: " << cipertext;
	return 0;
}



