#include<stdio.h>
int main()
{
	printf("pick an item : \n1. pizza, rs 239\n2. burger, rs 129\n3. pasta, rs 179\n4. french frice, rs 99\n5. sandwich, rs 149");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("you picked pizza, and price is 239.");
			break;
		case 2:
			printf("you picked burger, and price is 129.");
			break;
		case 3:
		    printf("you picked pasta, and price is 179.");
		    break;
		case 4:
		    printf("you picked french frice, and price is 99.");
		    break;
		case 5:
			printf("you pcked sandwich, and price is 149.");
		    break;
		default : printf("invalid choice");
	}
}
