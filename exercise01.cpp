#include <iostream>
using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 cout << setw(5)<<"No" << setw(15)<< "Name" << setw(10) << "Marks" << endl;
 cout << "No" << "Name" << "Marks" << endl;
 for (int r = 0; r < 5; r++) {
     cout <<setw(5 )<< r+1
          << setw(15) <<  names[r]
          << setw(10) <<setprecision(2) << marks[r] << endl;
 }
}
