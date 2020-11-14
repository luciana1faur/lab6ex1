#include <iostream>
using namespace std;

int main() {
  int puteriDoi, x;
  puteriDoi = 1;

  cout << "2 la 0 = 1" << endl;

//scrierea cu WHILE 
  x = 1;
  while (x < 8){
    puteriDoi = puteriDoi * 2;
    cout << "2 la " << x << " = " << puteriDoi << endl;
    x++;
  }
  
}