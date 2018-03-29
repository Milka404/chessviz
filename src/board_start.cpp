#include "board_start.h"

void board_start(char desk[8][8]){
	char letters[]={'r','n','b','q','k','b','n','r'};
	for (int j = 0; j<8; ++j){
		desk[0][j] = letters[j];
		desk[7][j] = letters[j]-32;
		desk[1][j] = 'p';
		desk[6][j] = 'p'-32;
		for (int i = 2; i<6; ++i){
			desk[i][j]= '  ';
			
		}
	}
}

