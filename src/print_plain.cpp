#include <ioastream>
using namespace std;
void print_plain(char desk[8][8]){
	for (int i=0; i<8; ++i){
		cout << 8-i;
		for (int j=0; j<8; ++j)
			cout << desk[i][j];
	}
	cout << endl;
}
cout <<"a b c d e f g h \n";
