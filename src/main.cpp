#include "board_start.h"
#include "print_plain.h"
#include "board.h"
int main() {
    char desk[8][8];
    board_start(desk);
    while(1) {
        print_plain(desk);
        board(desk);
    }
}
