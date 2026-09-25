#include <stdio.h>

int main()
{
	int m1,m2,m3,total,choice;
	char grade;
	float average;
	printf("=== STUDENT MARK CALCULATOR ===");
	printf("Enter First Mark:");
	scanf("%d",&m1);
	printf("Enter Second Mark:");
	scanf("%d",&m2);
	printf("Enter Third Mark:");
	scanf("%d",&m3);
	total=m1+m2+m3;
	average=total/3;
	if (40>=m1 && 40>=m2 && 40>=m3)
	{
		if (average >= 90)
		{
			choice = 1;
		}
		else if (average >= 80)
		{
			choice = 2;
		}
		else if (average >= 70)
		{
			choice = 3;
		}
		else if (average >= 60)
		{
			choice = 4;
		}
		else
		{
			choice = 5;
		}
		switch(choice)
		{
			case 1:
				printf(" Grade = A+");
			case 2:
				printf( "Grade = A ");
			case 3:
				printf( "Grade = B ");
			case 4:
				printf(" Grade = C");
			case 5:
				printf(" Grade = D");
		}
		printf("total = %d",total);
		printf("average = %.2f\n",average);
		printf("Exam = pass\n");
 		return 0;
    }

}





