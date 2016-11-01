#ifndef MorseConverter_H_
#define MorseConverter_H_
/*
GitHub: https://github.com/zen77/Morse-Code-L.O.L.
Copyright © 2016 T Malo / Zen77
*/
#include <vector>
#include <string>
#include <locale>
#include <iostream>

class MorseConverter {
public:
	MorseConverter();
	
	//Turns text into mores code
	//Simply Excludes characters that don't work
	std::string textTomores(std::string text);
	
	//Turns mores code into text
	std::string moresTotext(std::string text);

	//Turns mores code into a written form of it
	std::string moresWritten(std::string text);

	//Turns written mores code back into mores code 
	std::string moresWrittenReverse(std::string text);


	

private:
	std::string capitalization(std::string text);

	std::vector<std::string> checkText;
	void loadCheckText();

	std::vector<std::string> checkMores;
	void loadCheckMores();

	struct CheckWrittenReverse {
		std::string dot = "DOT";
		std::string dash = "DASH";
		std::string slash = "SLASH";
		std::string space = "SPACE";
	};

};

//Public Definitions
MorseConverter::MorseConverter() : checkText(), checkMores() {
	this->loadCheckText();
	this->loadCheckMores();
	
}

std::string MorseConverter::textTomores(std::string text) {

	text = this->capitalization(text);

	std::string newText = "", temp = "";
	std::vector<std::string> slpitString;
	for (int i = 0; i < text.length(); i++) {
		temp = text.at(i);
		slpitString.push_back(temp);
	}

	for (int i = 0; i < slpitString.size(); i++) {
		for (int j = 0; j < checkText.size(); j++) {
			if (slpitString[i].compare(checkText[j]) == 0) {
				for (int k = 0; k < checkMores[j].length(); k++) {
					newText.push_back(checkMores[j][k]);
				}
				//add space for readability
				newText.insert(newText.end(), ' ');

				j = checkText.size();
			}
		}
	}

	slpitString.clear();
	return newText;
}

std::string MorseConverter::moresTotext(std::string text) {
	//Change mores to text
	std::string newText = "";
	std::vector<std::string> slpitString;

	//add space at end to prevent skip
	text.push_back(' ');

	//Splits string to remove space padding
	for (int i = 0; i < text.length(); i++) {
		if (' ' != text[i]) {
			newText.push_back(text.at(i));
		}
		else {
			slpitString.push_back(newText);
			newText = "";
		}
	}

	newText = "";
	for (int i = 0; i < slpitString.size(); i++) {
		for (int j = 0; j < checkMores.size(); j++) {
			if (slpitString[i].compare(checkMores[j]) == 0) {
				for (int k = 0; k < checkText[j].length(); k++) {
					newText.push_back(checkText[j][k]);
				}
				j = checkText.size();
			}
		}
	}

	slpitString.clear();
	return newText;

}

std::string MorseConverter::moresWritten(std::string text) {
	std::string newText;

	for (int i = 0; i < text.length(); i++) {
		if (text[i] == '.') {
			newText.push_back('D');
			newText.push_back('O');
			newText.push_back('T');
		}
		else if (text[i] == '-') {
			newText.push_back('D');
			newText.push_back('A');
			newText.push_back('S');
			newText.push_back('H');
		}
		else if (text[i] == '/') {
			newText.push_back('S');
			newText.push_back('L');
			newText.push_back('A');
			newText.push_back('S');
			newText.push_back('H');
		}
		else if (text[i] == ' ') {
			newText.push_back('S');
			newText.push_back('P');
			newText.push_back('A');
			newText.push_back('C');
			newText.push_back('E');
		}
	}

	return newText;
}

std::string MorseConverter::moresWrittenReverse(std::string text) {
	std::size_t found;
	CheckWrittenReverse checkWrittenReverse;

	found = text.find(checkWrittenReverse.dot);
	while (found != std::string::npos) {
		text.replace(text.find(checkWrittenReverse.dot), checkWrittenReverse.dot.length(), ".");
		found = text.find(checkWrittenReverse.dot);
	}

	found = text.find(checkWrittenReverse.dash);
	while (found != std::string::npos) {
		text.replace(text.find(checkWrittenReverse.dash), checkWrittenReverse.dash.length(), "-");
		found = text.find(checkWrittenReverse.dash);
	}

	found = text.find(checkWrittenReverse.slash);
	while (found != std::string::npos) {
		text.replace(text.find(checkWrittenReverse.slash), checkWrittenReverse.slash.length(), "/");
		found = text.find(checkWrittenReverse.slash);
	}

	found = text.find(checkWrittenReverse.space);
	while (found != std::string::npos) {
		text.replace(text.find(checkWrittenReverse.space), checkWrittenReverse.space.length(), " ");
		found = text.find(checkWrittenReverse.space);
	}
	return text;
}

//Private Definitions

std::string MorseConverter::capitalization(std::string text) {
	std::locale cap;
	std::string newText = "";
	for (std::string::size_type i = 0; i < text.length(); i++) {
		newText.push_back(std::toupper(text[i], cap));
	}

	return newText;
}


void MorseConverter::loadCheckText() {
	//Letters
	this->checkText.push_back("A");
	this->checkText.push_back("B");
	this->checkText.push_back("C");
	this->checkText.push_back("D");
	this->checkText.push_back("E");
	this->checkText.push_back("F");
	this->checkText.push_back("G");
	this->checkText.push_back("H");
	this->checkText.push_back("I");
	this->checkText.push_back("J");
	this->checkText.push_back("K");
	this->checkText.push_back("L");
	this->checkText.push_back("M");
	this->checkText.push_back("N");
	this->checkText.push_back("O");
	this->checkText.push_back("P");
	this->checkText.push_back("Q");
	this->checkText.push_back("R");
	this->checkText.push_back("S");
	this->checkText.push_back("T");
	this->checkText.push_back("U");
	this->checkText.push_back("V");
	this->checkText.push_back("W");
	this->checkText.push_back("X");
	this->checkText.push_back("Y");
	this->checkText.push_back("Z");

	//Numbers
	this->checkText.push_back("0");
	this->checkText.push_back("1");
	this->checkText.push_back("2");
	this->checkText.push_back("3");
	this->checkText.push_back("4");
	this->checkText.push_back("5");
	this->checkText.push_back("6");
	this->checkText.push_back("7");
	this->checkText.push_back("8");
	this->checkText.push_back("9");
	
	//Punctuation
	
	this->checkText.push_back(".");
	this->checkText.push_back(",");
	this->checkText.push_back(";");
	this->checkText.push_back("?");
	this->checkText.push_back("'");
	this->checkText.push_back("-");
	this->checkText.push_back("/");
	this->checkText.push_back(")");
	this->checkText.push_back("\"");
	this->checkText.push_back("@");
	this->checkText.push_back("=");
	//Space
	this->checkText.push_back(" ");

}

void MorseConverter::loadCheckMores() {
	//Letters
	this->checkMores.push_back(".-"); //A
	this->checkMores.push_back("-..."); //B
	this->checkMores.push_back("-.-."); //C
	this->checkMores.push_back("-.."); //D
	this->checkMores.push_back("."); //E   MOVE BOTTOM?
	this->checkMores.push_back("..-."); //F
	this->checkMores.push_back("--."); //G
	this->checkMores.push_back("...."); //H
	this->checkMores.push_back(".."); //I  MOVE BOTTOM?
	this->checkMores.push_back(".---"); //J
	this->checkMores.push_back("-.-"); //K
	this->checkMores.push_back(".-.."); //L
	this->checkMores.push_back("--"); //M
	this->checkMores.push_back("-."); //N
	this->checkMores.push_back("---"); //O
	this->checkMores.push_back(".--."); //P
	this->checkMores.push_back("--.-"); //Q
	this->checkMores.push_back(".-."); //R
	this->checkMores.push_back("..."); //S
	this->checkMores.push_back("-"); //T
	this->checkMores.push_back("..-"); //U
	this->checkMores.push_back("...-"); //V
	this->checkMores.push_back(".--"); //W
	this->checkMores.push_back("-..-"); //X
	this->checkMores.push_back("-.--"); //Y
	this->checkMores.push_back("--.."); //Z

	//Numbers
	this->checkMores.push_back("-----"); //0
	this->checkMores.push_back(".----"); //1
	this->checkMores.push_back("..---"); //2
	this->checkMores.push_back("...--"); //3
	this->checkMores.push_back("....-"); //4
	this->checkMores.push_back("....."); //5
	this->checkMores.push_back("-...."); //6
	this->checkMores.push_back("--..."); //7
	this->checkMores.push_back("---.."); //8
	this->checkMores.push_back("----."); //9
	 
	//Punctuation
	
	this->checkMores.push_back(".-.-.-"); //Period
	this->checkMores.push_back("--..--"); //Comma
	this->checkMores.push_back("---..."); //Colon
	this->checkMores.push_back("..--.."); //QuestionMark
	this->checkMores.push_back(".----."); //Apostrophe
	this->checkMores.push_back("-....-"); //Hyphen
	this->checkMores.push_back("-..-."); //Slash
	this->checkMores.push_back("-.--.-"); //Parentheses
	this->checkMores.push_back(".-..-"); //QuotationMarks
	this->checkMores.push_back(".--.-."); //AtSign
	this->checkMores.push_back("-...-"); //EqualsSign
	//Space
	this->checkMores.push_back("/"); //space
}

#endif