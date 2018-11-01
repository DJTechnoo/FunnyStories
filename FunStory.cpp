#include<iostream>
#include"FunStory.h"
#include"constsEnums.h"



char* FunStory::appendCharToCharArray(char* array, char a)
{
	size_t len = strlen(array);

	char* ret = new char[len + 2];

	strcpy(ret, array);
	ret[len] = a;
	ret[len + 1] = '\0';

	return ret;
}


bool FunStory::isEndOfSentence(char c) {
	return (c == '.' || c == '!' || c == '?');
}

FunStory::FunStory() {
	this->sentence = new char[STRLEN];
	strcpy(this->sentence, "");
	this->beginTag = false;
	this->endTag = false;
}

bool FunStory::needInput()
{
	return (endTag && !beginTag);
}

void FunStory::getInput(char b[])
{
	strcat(sentence, b);
	endTag = false;
}

void FunStory::processFileContent(char c)
{
	if (c == '<') {
		beginTag = true; endTag = false;
	}

	else if (c == '>') {
		endTag = true; beginTag = false;
	}

	// append "!, ?, or ." to mark end of sentence, save sentence, restart buffer.
	else if (isEndOfSentence(c)) {
		sentence = appendCharToCharArray(sentence, c);
		sentences.push_back(sentence);
		sentence = new char[STRLEN];
		strcpy(sentence, "");
		endTag = false; beginTag = false;

	}


	// Write chars to screen and store in sentence
	else if (!beginTag && !endTag) {
		//std::cout << c;
		if (!isEndOfSentence(c))
			sentence = appendCharToCharArray(sentence, c);
	}


	// write the tag content to screen	
	else if (beginTag && !endTag) {
		std::cout << c;
	}

}

void FunStory::writeSentenceToFile(std::ofstream & outfile)
{
	for (int i = 0; i < sentences.size(); i++) {
		outfile << sentences[i] << std::endl;
	}
}