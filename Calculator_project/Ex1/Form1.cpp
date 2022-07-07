#include "stdafx.h"
#include "Form1.h"

int Ex1::Form1::or (int a, int b) {
	return (a | b);
}

int Ex1::Form1::xor(int a, int b){
	return (a + b) % 2;
}

System::Double Ex1::Form1::summ(double a, double b)
{
	return System::Double(a+b);
}

System::Double Ex1::Form1::difference(double a, double b)
{
	return System::Double(a-b);
}

System::Double Ex1::Form1::product(double a, double b)
{
	return System::Double(a*b);
}

System::Double Ex1::Form1::expon(double a, double b)
{
	return System::Double(Math::Pow(a,b));
}

System::Double Ex1::Form1::quotient(double a, double b)
{
	return System::Double(a/b);
}

System::Double Ex1::Form1::root(double a, double b)
{
	return System::Double(Math::Pow(a, 1/b));
}

System::Double Ex1::Form1::root(double a)
{
	return System::Double(Math::Sqrt(a));
}

System::Double Ex1::Form1::remain(double a, double b)
{
	if (a == 0) return 0;
	if (b == 0) return a;
	if (a < 0 && b < 0) a = -a; b = -b;
	if (a < 0) a = -a;
	if (b < 0||a<0) {
		int te = a / b;
		return (a - (b*te)) / b;
	}
	if (b > 0 && b < 1) {
		int te = a / b;
		return a - (te*b);
	}
	else {
		int te = a / b;
		return a - (te*b);
	}	
}

System::Double Ex1::Form1::signchange(double a)
{
	return System::Double(-a);
}

System::Void Ex1::Form1::showresult(double ans)
{
	textBox1->Text = Convert::ToString(ans);
	return System::Void();
}

System::Void Ex1::Form1::clearpanel()
{
	textBox1->Text = "";
	return System::Void();
}

System::Double Ex1::Form1::isdigit()
{
	if (textBox1->Text =="" || textBox1->Text == "0,") {
		return 1;
	}
	else return 0;
}

