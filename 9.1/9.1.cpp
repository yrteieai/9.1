// Lab_9_1.cpp
#include <iostream>
#include <cmath>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
#include "dod.cpp"
#include "sum.cpp"
#include "var.cpp"

using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main() {
    cout << "x_p = "; cin >> x_p;
    cout << "x_k = "; cin >> x_k;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> e;
    cout << endl;
    
    x = x_p;
    cout << "----------------------------------------" << endl;
    cout << "|     x     |      S      |  cos(x) |  n  |" << endl;
    cout << "----------------------------------------" << endl;
    
    while (x <= x_k) {
        sum(); 
        cout << "| " << setw(8) << setprecision(5) << x << " | "
             << setw(10) << setprecision(5) << s << " | "
             << setw(8) << setprecision(5) << cos(x) << " | "
             << setw(3) << n << " |" << endl;
        x += dx;
    }
    
    cout << "----------------------------------------" << endl;
    return 0;
}
