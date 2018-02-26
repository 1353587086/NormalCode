#define test_func	func_1

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/*
 =======================================================================================================================
 =======================================================================================================================
 */
 char func_0(unsigned char a){
	return '~';
 }
 unsigned char func_0(unsigned char a,...){
		unsigned char res;
		va_list ap;
		va_start (ap,a);
		res=~a;
		va_end;
		return res;
}

unsigned char func_1(char *op, ...)
{
	/*~~~~~~~~~~~~~~~~*/
	unsigned char	res;
	va_list			ap;
	/*~~~~~~~~~~~~~~~~*/

	/* this is a demo callback function that implement '~' operation */
	if(op == NULL) return 1;	/* indicate that '~' need 1 operand */
	strcpy(op, "~");			/* to output the name of operator */

	va_start(ap, op);
	res = (~(va_arg(ap, unsigned int)));
	va_end(ap);
	return res;
}

/*
 =======================================================================================================================
 =======================================================================================================================
 */
int func_2(char *op, ...)
{
	/*~~~~~~~~~~~~~~~~*/
	unsigned char	res;
	va_list			ap;
	/*~~~~~~~~~~~~~~~~*/

	/* this is a demo callback function that implement '*' operation */
	if(op == NULL) return 2;	/* indicate that '*' need 2 operand */
	strcpy(op, "*");			/* to output the name of operator */

	va_start(ap, op);
	res = (va_arg(ap, unsigned int)) * (va_arg(ap, unsigned int));
	va_end(ap);
	return res;
}

/*
 =======================================================================================================================
 =======================================================================================================================
 */
unsigned int func_3(char *op, ...)
{
	/*~~~~~~~~~~~~~~~~~~~~~~~*/
	unsigned char	n1, n2, n3;
	unsigned char	res;
	va_list			ap;
	/*~~~~~~~~~~~~~~~~~~~~~~~*/

	/* this is a demo callback function that implement '?:' operation */
	if(op == NULL) return 3;	/* indicate that '?:' need 3 operand */
	strcpy(op, "?:");			/* to output the name of operator */

	va_start(ap, op);
	n1 = va_arg(ap, unsigned int);
	n2 = va_arg(ap, unsigned int);
	n3 = va_arg(ap, unsigned int);
	res = (n1) ? (n2) : (n3);
	va_end(ap);
	return res;
}

/*
 =======================================================================================================================
 =======================================================================================================================
 */
int main(void)
{
	/*~~~~~~~~~~~~~~~~~~~~~*/
	char	op_name[8];
	int		num1, num2, num3;
	int		result;
	/*~~~~~~~~~~~~~~~~~~~~~*/

	num1 = 3;
	num2 = 4;
	num3 = 5;
	switch(test_func(0))
	{
	case 1:
		result = test_func(op_name, num1);
		printf("%s %d --> %d", op_name, num1, result);
		break;
	case 2:
		result = test_func(op_name, num1, num2);
		printf("%s %d %d --> %d", op_name, num1, num2, result);
		break;
	case 3:
		result = test_func(op_name, num1, num2, num3);
		printf("%s %d %d %d --> %d", op_name, num1, num2, num3, result);
		break;
	}

	return 0;
}
