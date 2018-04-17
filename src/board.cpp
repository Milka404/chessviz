#include "board.h"
#include "board_read.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

void board(char desk[8][8]) {
    char input[6];
    while(1) {
        char *temp = board_read();
        strcpy(input, temp);
        free(temp);
        int move[] = {input[0]-'a', 8-(input[1]-'0'), input[3]-'a', 8-(input[4]-'0')};
        
        if (desk[move[1]][move[0]] == 'p' && ((move[2] == move[0] && desk[move[3]][move[2]] == ' ' &&
            (move[3] == move[1]+1 || (move[1] == 1 && move[3] == 3))) || (move[3] == move[1]+1 &&
            (move[2] == move[0]+1 || move[2] == move[0]-1) && desk[move[3]][move[2]]>='A' && desk[move[3]][move[2]]<='Z'))){
            desk[move[1]][move[0]] = ' ';
            desk[move[3]][move[2]] = 'p';
            break;
        }
        else if (desk[move[1]][move[0]] == 'P' && ((move[2] == move[0] && desk[move[3]][move[2]] == ' ' &&
            (move[3] == move[1]-1 || (move[1] == 6 && move[3] == 4))) || (move[3] == move[1]-1 &&
            (move[2] == move[0]+1 || move[2] == move[0]-1) && desk[move[3]][move[2]]>='a' && desk[move[3]][move[2]]<='z'))){
            desk[move[1]][move[0]] = ' ';
            desk[move[3]][move[2]] = 'P';
            break;
        }
    }
}

