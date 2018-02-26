#include <stdarg.h>
#include<iostream>
using namespace std;
string func_0(void) { return""; }
string func_1(void) { return "~"; }
string func_2(void) { return "+"; }
string func_3(void) { return "-"; }
string func_4(void) { return "*"; }
string func_5(void) { return "/"; }
string func_6(void) { return "%"; }
string func_7(void) { return "&"; }
string func_8(void) { return "|"; }
string func_9(void) { return "^"; }
string func_10(void) { return "<<"; }
string func_11(void) { return ">>"; }
string func_12(void) { return "<<<"; }
string func_13(void) { return ">>>"; }
unsigned char func_0(unsigned char op) {

	unsigned char res;
	va_list ag;
	va_start(ag, op);
	res = op;
	va_end(ag);
	return res;
}
unsigned char func_1(unsigned char op, ...) {
	unsigned char res;
	va_list ag;
	va_start(ag, op);
	res = ~op;
	va_end(ag);
	return res;
}
unsigned char func_2(unsigned char op, ...) {
	unsigned char res;
	
		va_list ag;
		va_start(ag, op);
		res = op + va_arg(ag, unsigned char);
		va_end(ag);
		return res;
	
}
unsigned char func_3(unsigned char op, ...) {
	unsigned char res;
		va_list ag;
		va_start(ag, op);
		res = op - va_arg(ag, unsigned char);
		va_end(ag);
		return res;
	
}
unsigned char func_4(unsigned char op, ...) {
	 unsigned char res;
		va_list ag;
		va_start(ag, op);
		res = op * va_arg(ag, unsigned char);
		va_end(ag);
		return res;
	
}
unsigned char func_5(unsigned char op, ...) {
	 unsigned char res;
		va_list ag;
		va_start(ag, op);
		unsigned char a = va_arg(ag, unsigned char);
		res = op / a;
		va_end(ag);
		return res;
	
}
unsigned char func_6(unsigned char op, ...) {
	 unsigned char res;
		va_list ag;
		va_start(ag, op);
		unsigned char a=va_arg(ag, unsigned char);
		res = op % a;
		va_end(ag);
		return res;
	
}
unsigned char func_7(unsigned char op, ...) {
	 unsigned char res;
	
		va_list ag;
		va_start(ag, op);
		res = op & va_arg(ag, unsigned char);
		va_end(ag);
		return res;
	
}
unsigned char func_8(unsigned char op, ...) {
	 unsigned char res;
	
		va_list ag;
		va_start(ag, op);
		res = op | va_arg(ag, unsigned char);
		va_end(ag);
		return res;
	
}
unsigned char func_9(unsigned char op, ...) {
	 unsigned char res;
		va_list ag;
		va_start(ag, op);
		res = op ^ va_arg(ag, unsigned char);
		va_end(ag);
		return res;
	
}
unsigned char func_10(unsigned char op, ...) {
	 unsigned char res;
	
		va_list ag;
		va_start(ag, op);
		res = (va_arg(ag, unsigned char) << va_arg(ag, unsigned char));
		va_end(ag);
		return res;

}
unsigned char func_11(unsigned char op, ...) {
	 unsigned char res;
		va_list ag;
		va_start(ag, op);
		res = (op >> va_arg(ag, unsigned char));
		va_end(ag);
		return res;
	
}
unsigned char func_12(unsigned char op, ...) {
	 unsigned char res;
	
		va_list ag;
		va_start(ag, op);
		unsigned char a = op;
		unsigned char b = va_arg(ag, unsigned char)%8;
		va_end(ag);
		res = ((a << b)|(a >> (8 - b)));
		return res;
	
}
unsigned char func_13(unsigned char op, ...) {
	 unsigned char res;
	
		va_list ag;
		va_start(ag, op);
		unsigned char a = op;
		unsigned char b = va_arg(ag, unsigned char)%8;
		va_end(ag);
		res =( (a >> b)|(a << (8 - b)));
		return res;
	
}
unsigned char funct(int num, ...) {
	va_list ag;
	va_start(ag, num);
	unsigned char a = va_arg(ag, unsigned char);
	unsigned char b = va_arg(ag, unsigned char);
	va_end(ag);
	switch (num) {
	case 0:return func_0(a);
	case 1: return func_1(a);
	case 2:	return func_2(a, b);
	case 3:	return func_3(a, b);
	case 4:	return func_4(a, b);
	case 5:	return func_5(a, b);
	case 6:	return func_6(a, b);
	case 7:	return func_7(a, b);
	case 8:	return func_8(a, b);
	case 9:	return func_9(a, b);
	case 10:	return func_10(a, b);
	case 11:	return func_11(a, b);
	case 12:	return func_12(a, b);
	case 13:	return func_13(a, b);
	}
}
string funct_s(int num) {
	switch (num) {
	case 0:return func_0();
	case 1: return func_1();
	case 2:	return func_2();
	case 3:	return func_3();
	case 4:	return func_4();
	case 5:	return func_5();
	case 6:	return func_6();
	case 7:	return func_7();
	case 8:	return func_8();
	case 9:	return func_9();
	case 10:	return func_10();
	case 11:	return func_11();
	case 12:	return func_12();
	case 13:	return func_13();
	}
}