1. Print numbers from 1 to 10
Output: 1 2 3 4 5 6 7 8 9 10  -->

void main()
{
	int num = 1;
	
	while ( num <= 10 )
	{
		printf("\n%d",num);
		num++;
	}
}



2. Print table for given number.
Input: n = 5
Output: 5 10 15 20 25 30 35 40 45 50  -->

void main()
{
	int i = 1;
	int n = 5;
	int mult;
	
	while ( i <= 10 )
	{
		mult = n * i;
		printf("\n%d",mult);
		i++;
	}
}



3.Sum of numbers in given range.
Find sum of numbers from start to end.
Input: start = 1, end = 5
Output: 15  -->

void main()
{
	int i = 1;
	int sum= 0;
	
	while ( i <= 5 )
	{
		sum = sum + i;
		i++;
	}
	printf("%d",sum);
}



4.Check the given number is prime or not.
Input: n = 7
Output: Prime  -->

void main()
{
	int i = 2;
	int n = 7;
	int flag;
	
	while ( i < n)
	{
		if ( n % i == 0)
		{
			flag = 1;
		}
		i++;
	}
	
	if ( flag == 1 )
	{
		printf("Not Prime");
	}
	else
	{
		printf("Prime");
	}
}



5.Check the given number is Armstrong number or not..
Input: n = 153
Output: Armstrong  -->

void main()
{
	int n = 153;
	int temp = n;
	int sum = 0;
	
	while ( n > 0 )
	{
		int rem = n % 10;
		sum = sum + rem * rem * rem;
		n = n / 10;
	}
	if ( temp == sum )
	{
		printf("Armstrong");
	}
	else
	{
		printf("Not Armstrong");
	}
}



6.Check the given number is Perfect number or not.
Input: n = 28
Output: Perfect  -->

void main()
{
	int i = 1;
	int n = 28;
	int sum = 0;
	
	while ( i < n )
	{
		if ( n % i == 0 )
		{
			sum = sum + i;
		}
	i++;
	}

	if ( n == sum )
	{
		printf("Perfect Number");
	}
	else
	{
		printf("Not A Perfect Number");
	}		
}



7. Find factorial of given number.
Input: n = 5
Output: 120  -->

#include<stdio.h>
int main()
{
	int i = 1;
	int n = 5;
	int sum = 1;
	
	while ( i <= 5 )
	{
		sum = sum * i;
		i++;
	}
	printf("%d",sum);
}



8.Check the given number is Strong number or not.
Input: n = 145
Output: Strong  -->

void main()
{
	int n = 145;
	int temp = n;
	int sum = 0;
	
	while ( n > 0 )
	{
		int rem = n % 10;
		int i = 1;
		int fact = 1;
		
		while ( i <= rem )
		{
			fact = fact * i;
			i++;	
		}
		
		sum = sum + fact;
		n = n / 10;
		
	}
	
	if ( temp == sum )
	{
		printf("Strong Number");
	}
	else
	{
		printf("Not A Strong Number");
	}		
	
}



9. Check the given number is Palindrome number or not.
Input: n = 121
Output: Palindrome  -->

void main()
{
    int n = 121;
    int temp = n;
    int rev = 0;

    while (n > 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (temp == rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

}



10.Find Sum of first and last digit of given number.
Input: n = 12345
Output: 6 (1 + 5)  -->

void main()
{
	int n = 12345;
    int last, first, sum;

    last = n % 10;

    while (n >= 10)
    {
        n = n / 10;
    }

    first = n;

    sum = first + last;

    printf("%d ( %d + %d )", sum,first,last);
}





