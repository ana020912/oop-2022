#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <string>
#include <map>
#include <vector>
#include <queue>
void lowercase(char word[]) {
	for (int i = 0; word[i]; ++i) {
		if (word[i] >= 'A' && word[i] <= 'Z') {
			word[i] += 32;
		}
	}
}

int main()
{
	FILE* file = fopen("lab8.txt", "rb");
	if (file == nullptr)
	{
		std::cout << "eroare: fisierul nu a fost citit.";
		exit(1);
	}

	std::string phrase;
	char buffer[4096];
	while (!feof(file)) {
		auto read = fread(buffer, 1, sizeof(buffer), file);
		phrase.append(buffer, read);
	}

	//char words[50][50];
	//int k = 0;
	//std::size_t found = phrase.find_first_of(" .,?!");
	//while (found != std::string::npos) {
	//	lowercase(buffer);
	//	strncpy(words[k++], buffer, found);
	//	words[k][found] = '\0';
	//	found = phrase.find_first_of(" .,?!", found + 1);
	//}
 
	std::string words[50];
	int k = 0;
	std::size_t found = phrase.find_first_of(" .,?!");
	while (found != std::string::npos) {
		lowercase(buffer);
		for (int i = 0; i < strlen(buffer); ++i) {
			words[k][i] = buffer[i];
		}
		words[k][strlen(buffer)] = '\0';
		found = phrase.find_first_of(" .,?!", found + 1);
	}

	std::map<std::string, int> encounters;
	for (int i = 1; i <= k; ++i) {
		encounters[words[i]]++;
	}
	
	std::priority_queue<int, std::string, std::greater<int>> sortWords;
	for (int i = 1; i <= k; ++i) {
		sortWords.push(encounters[words[i]]);
	}

	while (!sortWords.empty()) {
		std::cout << sortWords.top() << '\n';
		sortWords.pop();
	}
	return 0;
}