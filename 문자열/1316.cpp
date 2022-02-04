#include <iostream>
#include <string>

int main()
{
	int wordSize;
	std::cin >> wordSize;

	int groupWordCount = 0;

	for (int i = 0; i < wordSize; i++)
	{
		std::string word;
		std::cin >> word;

		int wordCount = 0;
		char curChar = NULL;

		bool alphabet[26] = { false, };
		for (wordCount = 0; wordCount < word.size(); wordCount++)
		{
			if (curChar == NULL)
				curChar = word[0];
			else
			{
				if (curChar == word[wordCount])
					continue;
				else
				{
					if (alphabet[word[wordCount] - 97] == true)
					{
						groupWordCount--;
						break;
					}
					else
						curChar = word[wordCount];
				}
			}
			alphabet[word[wordCount] - 97] = true;
		}
		groupWordCount++;
	}
	std::cout << groupWordCount;
}