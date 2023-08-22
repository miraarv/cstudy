#include <stdio.h>

int main () 
{
 float tc;
 float tf;
 char res[1];
//float rf = (tc*1,8+32);
//float rc = (5/9*(tf-32));

printf("Which thermometric scale will be the temperature inserted?\n");
 scanf("%s", res);
if (*res == 'c'){
	printf("Insert the temperature in Celsius:\n");
	scanf("%f",&tc);
	printf("Corresponding temperature in Fahrenheit:%f\n", tc*1.8f+32);
	return 0;
}
	if (*res == 'f'){
	printf("Insert the temperature in Fahrenheit:\n");
	scanf("%f",&tf);
	printf("Corresponding temperature in Celsius:%f\n", (tf-32)/1.8f);
	return 0;
}  

	printf("Unknown response %s", res);
	return 1;
}