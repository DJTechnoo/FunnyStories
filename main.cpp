#include "mainFuncs.h"
#include "FunStory.h"

int main() {

	FunStory story;					// has logic of file and tag processing

	processFileAndInput(story);		// replace tags with user input

	writeToFile(story);				// it's too obvious for a comment, but just to make things pretty
	

	return 0;
}





