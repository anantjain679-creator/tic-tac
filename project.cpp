#include <iostream>
#include <string>
using namespace std;

int main() {
char board [3][3] = {{'X', 'O', 'X'}, {'X', 'O', 'X'}, {'O', 'O', 'X'} } ;

for(int i = 0; i<3 ; i++) {
    cout << board[i][0] << board[i][1] << board [i][2] << endl ;
}

cout << "   |   |   "  << endl ;
cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl ;
cout << " __|___|__"  << endl ;
cout << "   |   |   "  << endl ;
cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl ;
cout << " __|___|__"  << endl ;
cout << "   |   |   "  << endl ;
cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl ;
cout << " __|___|__"  << endl ;
cout << "   |   |   "  << endl ;


} 


