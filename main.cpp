#include <iostream>
#include <cstring>
#include <cmath>
using namespace std ;

int f (int w) {
            if (w == 2) {
                        cout << "No" << "\n" ;
            } else if (w % 2 != 0) {
                        cout << "No" << "\n" ;
            } else {
                        cout << "Yes" << "\n" ;
            }
            return 1 ;
}

int main () {
            int w ;
            cin >> w ;
            f (w) ;
            return 0 ;
}