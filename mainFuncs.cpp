#include "mainFuncs.h"
#include"constsEnums.h"
#include <iostream>

void writeToFile(FunStory &story)
{
	std::ofstream outfile("result.DTA");
	story.writeSentenceToFile(outfile);
}

void processFileAndInput(FunStory &story)
{
	std::ifstream infile("omg.DTA");

	if (infile) {


		char c;

		while (infile.get(c)) {          // loop getting single characters	
			story.processFileContent(c);
			if (story.needInput()) {
				std::cout << ": ";
				char b[FIELDLEN];
				std::cin.getline(b, FIELDLEN);
				story.getInput(b);
			}
		}
		infile.close();                // close file
	}
}