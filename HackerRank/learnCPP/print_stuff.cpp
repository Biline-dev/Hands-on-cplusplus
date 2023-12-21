#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;

    /*
        * setiosflags: A function to set various format flags for the input/output stream.
        * setw: Sets the field width for the next input/output operation.
        * internal: Adjusts the field to be filled with padding characters on the internal (right) side.
    */


	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

        /*
        * left: Sets the output alignment to the left.
        * right: Sets the output alignment to the right.
        * hex: Sets the basefield flag to hexadecimal for subsequent insertions.
        * showbase: Causes the base (0x or 0) to be shown for integer outputs in certain formats.
        * nouppercase: Prevents uppercase letters in hexadecimal floating-point exponent.
        * setprecision: Sets the decimal precision for the next input/output operation.
        * noshowpos: Ensures that the positive sign (+) is not displayed.
        * scientific: Sets the output format to scientific notation.
        * showpos: Causes the positive sign (+) to be shown for positive values.
        * setfill: Sets the fill character used to pad the output.
        * fixed: Sets the output format to fixed-point notation.
        * uppercase: Forces uppercase letters in floating-point exponent (scientific notation).
    */

   
		cout << left << hex << showbase << nouppercase << long(A) << endl;
        cout << setw(0xf) << right << fixed << setprecision(2) << showpos << std::setfill('_') << B << endl;
        cout << setprecision(9) << uppercase << noshowpos << scientific << C << endl;
	}
	return 0;
}
