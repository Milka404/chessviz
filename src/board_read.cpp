#include "board_read.h"
#include <stdlib.h>
#include <iostream>
using namespace std;
char *board_read() {
    char *str = new char[7];
    do {
    cin >>str;
    } while(str[0] < 'a' || str[0] > 'h'
        || str[1] < '0' || str[1] > '8'
        || str[2] != '-'
        || str[3] < 'a' || str[3] > 'h'
        || str[4] < '0' || str[4] > '9'
        || str[5] != '\0'
      );
    return str;
}
