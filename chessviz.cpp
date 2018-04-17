#include <iostream>
#include <string.h>
using namespace std;

const char startPositions [8][8] = {
                                    {'R','H','B','Q','K','B','H','R'},
                                    {'P','P','P','P','P','P','P','P'},
                                    {' ',' ',' ',' ',' ',' ',' ',' '},
                                    {' ',' ',' ',' ',' ',' ',' ',' '},
                                    {' ',' ',' ',' ',' ',' ',' ',' '},
                                    {' ',' ',' ',' ',' ',' ',' ',' '},
                                    {'p','p','p','p','p','p','p','p'},
                                    {'r','h','b','q','k','b','h','r'},
                                   };

const char horizString[] = {' ',' ','A',' ','B',' ','C',' ','D',' ','E',' ','F',' ','G',' ','H',' ',' ','\n'};

void print(char array[8][8]){
    for (int i = 0; i < 20; i++){
        cout << horizString[i];
    }

    for (int i = 0; i < 8; i++){
        cout<<  i + 1;
        for (int j = 0; j < 8; j++){
         cout << array[i][j];
        }
        cout<<"\n";
    }
    
    cout << endl;
}

int main(int argc, char *argv[]){
    char playzone [8][8];
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            playzone[i][j] = startPositions[i][j];
        }
    }
    
    cout << playzone;
    return 0;
}