#include <stdio.h>

int main () {
 float c
 float f
 char res;
 float rc = (5/9*(f-32));
 float rf = c*1,8+32;
 printf("Which thermometric scale will be the temperature inserted?\n");
 scanf(%c",res);
 
 switch (res) {
	case "c" :
	printf("Insert the temperature in Celsius:\n");
	scanf("%f",c);
	printf("Corresponding temperature in Fahrenheit:%f\n", rf);
	break;
	case "f" :
	printf("Insert the temperature in Fahrenheit:\n");
	scanf("%f",f);
	printf("Corresponding temperature in Celsius:%f\n", rc);
	break;
	default
	printf("Error: Invalid thermometric scale.");
}
	return 0;
	}
