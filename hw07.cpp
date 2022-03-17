#include <iostream>
using namespace std;

class fraction{
	private:
		int num;
		int denom;
	public:
		fraction(int, int);		
		fraction() { num = denom = 0;}

		int getnum() {return num;}
		int getdenom() {return denom;}

		void print_improper();
		void print_mixed_number();
		void print_decimal();
		void add_fractions(int, int, int, int);
		void sub_fractions(int, int, int, int);
		void mult_fractions(int, int, int, int);
		void div_fractions(int, int, int, int);
};

int main() {
	fraction f1(0, 0);
	fraction f2(3, 4);
	fraction f3(6, 4);
	fraction f4(100, 10);
	fraction fadd, fsub, fmult, fdiv;	

	cout << "First fraction: " << endl;
	f1.print_improper();
	f1.print_mixed_number();
	f1.print_decimal();

	cout << "Second fraction: " << endl;
	f2.print_improper();
	f2.print_mixed_number();
	f2.print_decimal();

	cout << "Third fraction: " << endl;
	f3.print_improper();
	f3.print_mixed_number();
	f3.print_decimal();

	cout << "Fourth Fraction: " << endl;
	f4.print_improper();
	f4.print_mixed_number();
	f4.print_decimal();

	cout << "Add Function: " << endl;
	fadd.add_fractions(f3.getnum(), f3.getdenom(), f2.getnum(), f2.getdenom()); 	
	fadd.print_improper();
	fadd.print_mixed_number();
	fadd.print_decimal();

	cout << "Subtract Function: " << endl;
	fsub.sub_fractions(f3.getnum(), f3.getdenom(), f4.getnum(), f4.getdenom());
	fsub.print_improper();
	fsub.print_mixed_number();
	fsub.print_decimal();

	cout << "Multiplication Function: " << endl;
	fmult.mult_fractions(f3.getnum(), f3.getdenom(), f4.getnum(), f4.getdenom());
	fmult.print_improper();
	fmult.print_mixed_number();
	fmult.print_decimal();

	cout << "Division Function: " << endl;
	fdiv.div_fractions(f4.getnum(), f4.getdenom(), f3.getnum(), f3.getdenom());
	fdiv.print_improper();
	fdiv.print_mixed_number();
	fdiv.print_decimal();
	
}
fraction::fraction(int n, int d) {
	if (d == 0){
		num = 0;
		denom = 1;
	}
	if (d != 0){
		num = n;
		denom = d;
}
}

void fraction::print_improper() {
	cout << "Improper Fraction: " << num << " / " << denom << endl;

}

void fraction::print_mixed_number() {
	int whole;
	double remainder;
	whole = num / denom;
	remainder = (num % denom);
	cout << "Mixed Number Fraction: " << whole << " & " << remainder << "/" << denom << endl;
}
void fraction::print_decimal() {
	double temp, n1, d1;
	n1 = num;
	d1 = denom;
	temp = n1 / d1;
	cout << "Decimal Form: " << temp << endl;
}
void fraction::add_fractions(int num1, int denom1, int num2, int denom2) {
	denom = denom1 * denom2;
	num = (denom2 * num1) + (denom1 * num2);	
}
void fraction::sub_fractions(int num1, int denom1, int num2, int denom2) {
	denom = denom1 * denom2;
	num = (denom2 * num1) - (denom1 * num2);	
}

void fraction::mult_fractions(int num1, int denom1, int num2, int denom2) {
	denom = denom1 * denom2;
	num = num1 * num2;
}

void fraction::div_fractions(int num1, int denom1, int num2, int denom2) {
	denom = denom1 * num2;
	num = num1 * denom2;
}
