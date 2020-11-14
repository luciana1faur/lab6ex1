#include <iostream>
using namespace std;

int main() {
  int puteriDoi, x;
  puteriDoi = 1;

  cout << "2 la 0 = 1" << endl;

  for (x = 1; x < 8; x++){
    
    puteriDoi = puteriDoi * 2;

    cout << "2 la " << x << " = " << puteriDoi << endl;
  }
}