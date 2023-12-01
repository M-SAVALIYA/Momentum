#include<stdio.h>

main()
{
	char choise;
	printf("Enter the day : ");
	scanf("%c",&choise);
	
	switch(choise)
	{
		case 'S':printf("Day is : Sunday");
		break;
		case 'M':printf("Day is : Monday");
		break;
		case 'T':printf("Day is : Tuesday");
		break;
		case 'W':printf("Day is : Wednesday");
		break;
		case 't':printf("Day is : Thursday");
		break;
		case 'F':printf("Day is : Friday");
		break;
		case 's':printf("Day is : Saturday");
		break;
		default:printf("invalid character");
	}
}