1.Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations. -->

#include <stdio.h>
int main()
{
	int num1;
	int num2;
	
	printf("Enter First Number : ");
	scanf("%d",&num1);
	
	printf("Enter Second Number : ");
	scanf("%d",&num2);
	
	int sum, sub, divide, mult,mod;
	
	sum = num1 + num2;
	printf("Addition = %d", sum);
	
	sub = num1 - num2;
	printf("\nSubstraction = %d", sub);
	
	divide = num1 / num2;
	printf("\nDivision = %d", divide);
	
	mult = num1 * num2;
	printf("\nMultiplication = %d", mult);
	
	mod = num1 % num2;
	printf("\nReminder = %d", mod); 
		
}



2.Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene.  -->

#include <stdio.h>
int main()
{
	float size1, size2, size3;
	
	printf("Enter First Size Of Triangle = ");
	scanf("%f", &size1);
	
	printf("Enter Second Size Of Triangle = ");
	scanf("%f", &size2);
	
	printf("Enter Third Size Of Triangle = ");
	scanf("%f", &size3);
	
	if ( size1 == size2 && size2 == size3 )
	{
		printf("Equilateral Triangle");
	}
	else 
	{
		if ( size1 != size2 && size2 != size3)
		{
			printf("Scalene");
		}
		else
		{
			printf("Isosceles");
		}
	}
		
}



3. Write a program to find greatest of three numbers using nested if-else.  -->

#include <stdio.h>
int main()
{
	int a, b, c;
	
	printf("Enter first number : ");
	scanf("%d", &a);
	
	printf("Enter second number : ");
	scanf("%d", &b);
	
	printf("Enter third number : ");
	scanf("%d", &c);
	
	if( a > b)
	{
		if ( a > c);
		{
			printf("%d Is Greater",a);
		}
	}
	else
	{
		if ( b > c)
		{
			printf("%d Is Greater", b);
		}
		else
		{
			printf("%d Is Greater", c);
		}
	}
}



4. Ask the user to enter marks.
Then show the result based on these rules:
If marks are more than 75 ? show "Distinction"
If marks are more than 65 ? show "First Class"
If marks are more than 55 ? show "Second Class"
If marks are 40 or more ? show "Pass Class"
If marks are less than 40 ? show "Fail"  --> 

#include <stdio.h>
int main()
{
	int marks;
	
	printf("Enter Marks : ");
	scanf("%d",&marks);
	
	if ( marks > 75 )
	{
		printf("Distinction");
	}
	else if ( marks > 65)
	{
		printf("First Class");
	}
	else if ( marks > 55)
	{
		printf("Second Class");
	}
	else if ( marks >= 40)
	{
		printf("Pass Class");
	}
	else if ( marks < 40) 
	{
		printf("Fail");
	}
}



5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he is a student and he has purchased more than 500 than discount is 20% otherwise discount is 10%.But if he is not a student then if he has purchased more than 600 discount is 15% otherwise there is not discount.  -->

#include <stdio.h>
int main()
{
	double price, discount,total_price;
	
	printf("Enter Price : ");
	scanf("%lf",&price);
	
	char student;
	
	printf("Are You Student Or Not (y/n):");
	scanf(" %c",&student);
	
	if ( student == 'y' || student == 'Y')
	{
		if ( price > 500 )
		{
			discount = price * 0.20;
		}
		else 
		{
			discount = price * 0.10;
		}
	}
	else 
	{
		if ( student == 'n' || student == 'N')
		{
			if ( price > 600 )
			{
				discount = price * 0.15;
			}
		}
		
	}
	
	
	total_price = price - discount;
	printf("\nTotal Price : %lf", total_price );	
	
}



6. Accept a number and check if it is divisible by 3, 5, or both.
(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
both" or” Divisible by None”)  -->

#include <stdio.h>
int main()
{
	int num;
	
	printf("Enter Number Here : ");
	scanf("%d",&num);
	
	if (num % 3 == 0 && num % 5 == 0)
	{
    	printf("Number is divisible by 3 and 5 Both");
	}
	else if (num % 3 == 0)
	{
    	printf("Number is divisible by 3");
	}
	else if (num % 5 == 0)	
	{
    	printf("Number is divisible by 5");
	}
	else 
	{
		printf("Number is not divisible by 3 or 5");
	}
}




7. Accept the age and check if the person is:
Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)  -->

#include<stdio.h>
int main()
{
	int age;
	printf("Enter Age : ");
	scanf("%d",&age);
	
	if( age < 12 )
	{
		printf("Child");
	}
	else if ( age > 12 && age <= 19 )
	{
		printf("Teenager");
	}
	else if ( age > 20 && age <= 59 )
	{
		printf("Adult");
	}
	else
	{
		printf("Senior");
	}
	
}




















