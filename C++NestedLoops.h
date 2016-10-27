#include <iostream>
using namespace std;
int main() {
// Part A: converts miles to kilometers 
        int num;
        double km;
        cout << "Enter an integer that is greater than 0 and less than 20: ";
        cin >> num;
        while ((num <= 0) || ( num >= 20)) {
                cout << "Wrong! Try again please: ";
                cin >> num;
        }
                cout << "Miles\tKilometers\n";
                for( int c = 1; c <= num; c++) {
                        km = c * 1.609;
                        cout << c << "\t" << km << endl;
                }


// Part B: finds the absolute difference between 2 positive numbers
        int a, b, value;
        cout << "Enter 2 positive two-digit integers: ";
        cin >> a >> b;
        while (( a > 100 ||  a < 10) || (b > 100 || b < 10)) { 
                cout << "Input is illegal. Try again or press 0 to exit: ";
                cin >> a >> b;
                if ( a == 0 || b == 0) return 0;
        }
                value = a - b;
                if ( value < 0 ) {
                        value = -value;
                }
                cout << "The absolute value of the difference of the numbers entered is: " << value << endl;


// Part C: outputs an image based on specified input
        // I. Input #
        int odd, r, c;
        cout << "Enter an odd integer that is greater than 8 and less than 20: ";
        cin >> odd;
        while ((( odd % 2 ) == 0) || ( odd < 8 ) || ( odd > 20 )) {
                cout << "Wrong! Try again: ";
                cin >> odd;
        }

        // II. Diagram
                for ( r = 1; r <= odd; r++){
                        for ( c = 1; c <= odd; c++) {
                                if ( c == r || c == (odd + 1 - r)) {
                                        cout << "*";
                                }
                                else if ( c == (( odd / 2 ) + 1 )) {
                                        cout << "&";
                                }
                                else if ( r == (( odd / 2 ) + 1 ) && c <= ( odd / 2 )) {
                                        cout << "x";
                                }
                                else if ( r == (( odd / 2 ) + 1 ) && c >= ( odd / 2 )) {
                                        cout << "+";
                                }
                                else {
                                        cout << " ";
                                }
                        }
                        cout << endl;
                }
        return 0;
}
