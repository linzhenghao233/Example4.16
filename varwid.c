/* varwid.c -- 使用变宽输出字段 */
#include <stdio.h>
int main(void) {
	unsigned width, precision;
	int number = 256;
	double weight = 242.5;

	printf("Enter a field width:\n");
	scanf_s("%d", &width);
	printf("The number is :%*d:\n", width, number);
	printf("Now enter a width and a precision:\n");
	scanf_s("%d %d", &width, &precision);
	printf("Weight = %*.*f\n", width, precision, weight);
	printf("Done!\n");

	return 0;
}

//输出结果：
//Enter a field width:
//6
//The number is :   256:
//Now enter a width and a precision:
//8 3
//Weight =  242.500
//Done!