#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pack4Chars2Int(char c1, char c2, char c3, char c4);
int checkEvenParity(short input);

void main() {

}


int pack4Chars2Int(char c1, char c2, char c3, char c4) {
	int result = 0;
	result |= c1;

	result <<= 8;
	result |= c2;

	
	result <<= 8;
	result |= c3;

	result <<= 8;
	result |= c4;

	return result;
}


int checkEvenParity(short input) {