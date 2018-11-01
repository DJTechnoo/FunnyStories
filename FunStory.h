#pragma once

#include<vector>
#include<fstream>

class FunStory {
private:
	char * sentence;
	bool beginTag;
	bool endTag;
	std::vector<char*> sentences;

	char* appendCharToCharArray(char* array, char a);
	bool isEndOfSentence(char c);


public:
	FunStory();
	bool needInput();
	void getInput(char b[]);
	void processFileContent(char c);
	void writeSentenceToFile(std::ofstream & outfile);

};