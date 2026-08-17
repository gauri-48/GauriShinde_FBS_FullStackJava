1. Do all type 3 (with parameter, w/o return type) function programs using pointer.  -->

Assignment 1 using pointer -->

1.Write a program to check whether a number is even or odd.  -->

void evenodd( int* );
void main()
{
	int a = 10;
	evenodd(&a);
}
void evenodd(int* p)
{
	if( *p % 2 == 0)
	{
		printf("Number Is Even");
	}
	else 
	{
		printf("Number Is Odd");
	}
}



2.Write a program to check given 3 digit number is pallindrome or not. -->

void isPalindrome(int*);
void main()
{
	int num;
	num = 121;
	isPalindrome(&num);	
}
void isPalindrome(int* n)
{
	int last, remen, middle, first;
	
	last = *n%10;
	
	remen = *n/10;
	
	middle = remen %10;
	
	first = remen/10;
	
	if( first == last )
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
}



3.Write a program to check whether a given year is a leap year.  -->

void checkleap( int* );
void main()
{
	int year;
	printf("Enter Year Here:");
	scanf("%d", &year);
	
	checkleap(&year);		
}
void checkleap(int* year)
{
	if ( (*year % 4 == 0 && *year % 100 != 0) || (*year % 400 == 0) )
	{
		printf("Leap Year");
	}
	else
	{
		printf("Not a leap year");
	}
}



4.Write a program to check whether a given character is a vowel or consonant.

int checkalpha(char*);
void main()
{
	char alpha;
	printf("Enter Alphabet Here:");
	scanf("%c",&alpha);
	
	int res = checkalpha(&alpha);
	
	if ( res == 1 )
	{
		printf("Character is Vowel");
	}
	else
	{
		printf("Character is Consonant");
	}
}
int checkalpha(char* alpha)
{
	
	if ( *alpha == 'A' || *alpha == 'E' || *alpha == 'I' || *alpha == 'O' || *alpha == 'U' || *alpha == 'a'|| *alpha == 'e'|| *alpha == 'i'|| *alpha == 'o'|| *alpha == 'u')
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}



5.Write a program to check whether a person is eligible to vote (age = 18). -->

void isEligible(int*);
void main()
{
	int age;
	printf("Enter Age Here: ");
	scanf("%d",&age);
	
	isEligible(&age);
}
void isEligible(int* age)
{
	
	if ( *age >= 18 )
	{
		printf("You can vote");
	}
	else
	{
		printf("You cannot vote");
	}		
}



6.Write a program to check whether a given character is uppercase or lowercase.  -->

void checkCase(char*);
void main ()
{
	char alpha;
	
	printf("Enter character here to check uppercase or lowercase : ");
	scanf("%c", &alpha);
	
	checkCase(&alpha);
}
void checkCase(char* alpha)
{
	if(*alpha >= 'A' && *alpha <= 'Z')
	{
		printf("Character is uppercase.");
	}
	else		
	{
   		printf("Character is lowercase.");
	}
	
}



Assignment 2 with using pointers  -->

2.Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene.  -->

void triangletype(float*, float*, float*);

int main()
{
    float size1, size2, size3;

    triangletype(&size1, &size2, &size3);
}

void triangletype(float* size1, float* size2, float* size3)
{
    printf("Enter First Size Of Triangle = ");
    scanf("%f", size1);

    printf("Enter Second Size Of Triangle = ");
    scanf("%f", size2);

    printf("Enter Third Size Of Triangle = ");
    scanf("%f", size3);

    if(*size1 == *size2 && *size2 == *size3)
    {
        printf("Equilateral Triangle");
    }
    else
    {
        if(*size1 != *size2 && *size2 != *size3 && *size1 != *size3)
        {
            printf("Scalene Triangle");
        }
        else
        {
            printf("Isosceles Triangle");
        }
    }
}



3. Write a program to find greatest of three numbers using nested if-else.  -->

void findGreater(int*, int*, int*);
void main()
{
	int a, b, c;
	
	printf("Enter first number : ");
	scanf("%d", &a);
	
	printf("Enter second number : ");
	scanf("%d", &b);
	
	printf("Enter third number : ");
	scanf("%d", &c);
	
	findGreater(&a,&b,&c);
}
void findGreater(int* a, int* b, int* c)
{
	
	
	if( *a > *b)
	{
		if ( *a > *c);
		{
			printf("%d Is Greater",*a);
		}
	}
	else
	{
		if ( *b > *c)
		{
			printf("%d Is Greater", *b);
		}
		else
		{
			printf("%d Is Greater", *c);
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

void gread(int*);
int main()
{
	int marks;
	
	printf("Enter Marks : ");
	scanf("%d",&marks);
	 
	gread(&marks);
}
void gread(int* marks)
{
	
	if ( *marks > 75 )
	{
		printf("Distinction");
	}
	else if ( *marks > 65)
	{
		printf("First Class");
	}
	else if ( *marks > 55)
	{
		printf("Second Class");
	}
	else if ( *marks >= 40)
	{
		printf("Pass Class");
	}
	else if ( *marks < 40) 
	{
		printf("Fail");
	}
}



5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he is a student and he has purchased more than 500 than discount is 20% otherwise discount is 10%.But if he is not a student then if he has purchased more than 600 discount is 15% otherwise there is not discount.  -->

void discount(double*, char*);
int main()
{
    double price;
    char student;

    printf("Enter Price : ");
    scanf("%lf", &price);

    printf("Are You Student Or Not (y/n): ");
    scanf(" %c", &student);

    discount(&price, &student);
}

void discount(double* price, char* student)
{
    double discount = 0, total_price;

    if(*student == 'y' || *student == 'Y')
    {
        if(*price > 500)
        {
            discount = *price * 0.20;
        }
        else
        {
            discount = *price * 0.10;
        }
    }
    else
    {
        if(*price > 600)
        {
            discount = *price * 0.15;
        }
    }

    total_price = *price - discount;

    printf("Total Price = %.2lf", total_price);
}



6. Accept a number and check if it is divisible by 3, 5, or both.
(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
both" or” Divisible by None”)  -->

void divisibility(int*);
int main()
{
	int num;
	
	printf("Enter Number Here : ");
	scanf("%d",&num);
	
	
	divisibility(&num);
}
void divisibility(int* num)
{
	
	if (*num % 3 == 0 && *num % 5 == 0)
	{
    	printf("Number is divisible by 3 and 5 Both");
	}
	else if (*num % 3 == 0)
	{
    	printf("Number is divisible by 3");
	}
	else if (*num % 5 == 0)	
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

void ageGroup(int*);
int main()
{
	int age;
	printf("Enter Age : ");
	scanf("%d",&age);
	
	ageGroup(&age);
}
void ageGroup(int* age)
{
	
	if( *age < 12 )
	{
		printf("Child");
	}
	else if ( *age > 12 && *age <= 19 )
	{
		printf("Teenager");
	}
	else if ( *age > 20 && *age <= 59 )
	{
		printf("Adult");
	}
	else
	{
		printf("Senior");
	}
}





Assignment 3 with using pointers -->

1. Print numbers from 1 to 10
Output: 1 2 3 4 5 6 7 8 9 10  -->

void numbers(int*);
void main()
{
	int num = 1;
	
	numbers(&num);
}
void numbers(int* num)
{
	while ( *num <= 10 )
	{
		printf("\n%d",*num);
		(*num)++;
	}	
}

2. Print table for given number.
Input: n = 5
Output: 5 10 15 20 25 30 35 40 45 50  -->

void table(int*, int*);
void main()
{
	int i = 1;
	int n = 5;
	
	table(&i, &n);
}
void table(int* i, int* n)
{
	int mult;
	
	while ( *i <= 10 )
	{
		mult = *n * *i;
		printf("\n%d",mult);
		(*i)++;
	}
}



3.Sum of numbers in given range.
Find sum of numbers from start to end.
Input: start = 1, end = 5
Output: 15  -->

void sum(int*,int*);
void main()
{
	int i = 1;
	int total= 0;
	
	sum(&i,&total);
}
void sum(int* i, int* total)
{
	while ( *i <= 5 )
	{
		*total = *total + *i;
		(*i)++;
	}
	printf("%d",*total);
}



4.Check the given number is prime or not.
Input: n = 7
Output: Prime  -->

void isPrime(int*, int*, int*);
void main()
{
	int i = 2;
	int n = 7;
	int flag=0;
	
	isPrime(&i, &n, &flag);
}
void isPrime(int* i, int* n, int* flag)
{
	while ( *i < *n)
	{
		if ( *n % *i == 0)
		{
			*flag = 1;
		}
		(*i)++;
	}
	
	if ( *flag == 1 )
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

void isArmstrong(int* , int*, int*);
void main()
{
	int n = 153;
	int temp = n;
	int sum = 0;
	
	isArmstrong(&n,&temp,&sum);
}
void isArmstrong(int* n, int* temp, int* sum)
{
	while ( *n > 0 )
	{
		int rem = *n % 10;
		*sum = *sum + rem * rem * rem;
		*n = *n / 10;
	}
	if ( *temp == *sum )
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

void IsPerfect(int*, int*, int*);
void main()
{
	int i = 1;
	int n = 28;
	int sum = 0;
	 
	IsPerfect(&i, &n, &sum);
}
void IsPerfect(int* i, int* n, int* sum)
{
	while ( *i < *n )
	{
		if ( *n % *i == 0 )
		{
			*sum = *sum + *i;
		}
	(*i)++;
	}

	if ( *n == *sum )
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

void fact(int*, int*, int*);
int main()
{
	
	int i = 1;
	int n = 5;
	int sum = 1;
	
	fact(&i, &n, &sum);
}
void fact(int* i, int* n, int* sum)
{
	while ( *i <= *n)
	{
		*sum = *sum * *i;
		(*i)++;
	}
	printf("%d",*sum);
}



8.Check the given number is Strong number or not.
Input: n = 145
Output: Strong  -->

void isStrong(int*, int*, int*);
void main()
{
	int n = 145;
	int temp = n;
	int sum = 0;
	
	isStrong(&n, &temp, &sum);
}
void isStrong(int* n, int* temp, int* sum)
{
	while ( *n > 0 )
	{
		int rem = *n % 10;
		int i = 1;
		int fact = 1;
		
		while ( i <= rem )
		{
			fact = fact * i;
			i++;	
		}
		
		*sum = *sum + fact;
		*n = *n / 10;
		
	}
	
	if ( *temp == *sum )
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

void IsPalinddrome(int*, int*, int*);
void main()
{
	int n = 121;
    int temp = n;
    int rev = 0;

	IsPalinddrome(&n, &temp, &rev);
}
void IsPalinddrome(int* n, int* temp, int* rev)
{
    while (*n > 0)
    {
        int rem = *n % 10;
        *rev = *rev * 10 + rem;
        *n = *n / 10;
    }

    if (*temp == *rev)
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

void add(int*);
void main()
{
	int n = 12345;
	
	add(&n);
}
void add(int* n)
{
    int last, first, sum;

    last = *n % 10;

    while (*n >= 10)
    {
        *n = *n / 10;
    }

    first = *n;

    sum = first + last;

    printf("%d ( %d + %d )", sum,first,last);
}





Assignment 4 with using pointers --> 

1. Print armstrong numbers in the given range 1 to n.  -->

void isArmstrong(int*, int*, int*, int*, int* );
void main()
{
	int n, num, temp, rem, sum;

    printf("Enter n : ");
    scanf("%d", &n);

	isArmstrong( &n, &num, &temp, &rem, &sum);
}
void isArmstrong(int* n,int* num,int* temp,int* rem,int* sum)
{
	 for(*num = 1; *num <= *n; (*num)++)
    {
        *temp = *num;
        *sum = 0;

        while(*temp > 0)
        {
            *rem = *temp % 10;
            *sum = *sum + (*rem * *rem * *rem);
            *temp = *temp / 10;
        }

        if(*sum == *num)
        {
            printf("%d\n", *num);
        }
    }
}



2.Print prime numbers in the given range 1 to n.  -->

void range(int*, int*, int*, int* );
void main()
{
	int n, num, i, flag;

    printf("Enter n : ");
    scanf("%d", &n);

	range(&n, &num, &i, &flag);
}
void range(int* n,int* num, int* i, int* flag)
{
	for(*num = 2; *num <= *n; (*num)++)
    {
        *flag = 0;

        for(*i = 2; *i < *num; (*i)++)
        {
            if(*num % *i == 0)
            {
                *flag = 1;
                break;
            }
        }

        if(*flag == 0)
        {
            printf("%d\n", *num);
        }
    }
	
}



3.Print perfect numbers in the given range 1 to n.  -->

void isPerfect(int*, int*, int*, int*);
void main()
{
	int n, num, i, sum;

    printf("Enter n : ");
    scanf("%d", &n);

    
	isPerfect(&n, &num, &i, &sum);
}
void isPerfect(int* n, int* num,int* i,int* sum)
{
	for(*num = 1; *num <= *n; (*num)++)
    {
        *sum = 0;

        for(*i = 1; *i < *num; (*i)++)
        {
            if(*num % *i == 0)
            {
                *sum = *sum + *i;
            }
        }

        if(*sum == *num)
        {
            printf("%d\n", *num);
        }
    }
}



4.Print strong numbers in the given range 1 to n.  -->

void strong(int*);
void main()
{
    int num;

    printf("Enter n : ");
    scanf("%d", &num);

    strong(&num);
}

void strong(int* num)
{
    int n = *num;
    int temp, rem;
    int i, fact, sum;

    for(*num = 1; *num <= n; (*num)++)
    {
        temp = *num;
        sum = 0;

        while(temp != 0)
        {
            rem = temp % 10;

            fact = 1;
            for(i = 1; i <= rem; i++)
            {
                fact = fact * i;
            }

            sum = sum + fact;
            temp = temp / 10;
        }

        if(sum == *num)
        {
            printf("%d\n", *num);
        }
    }
}



5.Write a menu driven program to take a number for user and perform operations as follows.
Press 1.To check number is even or odd.
2.To check number is prime or not.
3.To check number is pallindrome or not.
4.To check number is positive, negative or zero.
5.To reverse a number.
6.To find sum of digits.  -->

void choice1(int*, int*);
void main()
{
	int num, choice;

    printf("Enter Number : ");
    scanf("%d", &num);

    
	choice1(&num, &choice);
}
void choice1(int* num,int* choice)
{
	printf("\n1. Even or Odd");
    printf("\n2. Prime or Not");
    printf("\n3. Palindrome or Not");
    printf("\n4. Positive, Negative or Zero");
    printf("\n5. Reverse Number");
    printf("\n6. Sum of Digits");

    printf("\nEnter Your Choice : ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        if(*num % 2 == 0)
            printf("Even Number");
        else
            printf("Odd Number");
    }

    else if(choice == 2)
    {
        int i, flag = 0;

        if(*num <= 1)
            printf("Not Prime");
        else
        {
            for(i = 2; i < *num; i++)
            {
                if(*num % i == 0)
                {
                    flag = 1;
                    break;
                }
            }

            if(flag == 0)
                printf("Prime Number");
            else
                printf("Not Prime");
        }
    }

    else if(choice == 3)
    {
        int temp = *num, rev = 0, rem;

        while(temp != 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }

        if(rev == *num)
            printf("Palindrome Number");
        else
            printf("Not Palindrome");
    }

    else if(choice == 4)
    {
        if(*num > 0)
            printf("Positive");
        else if(*num < 0)
            printf("Negative");
        else
            printf("Zero");
    }

    else if(choice == 5)
    {
        int temp = *num, rev = 0, rem;

        while(temp != 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }

        printf("Reverse = %d", rev);
    }

    else if(choice == 6)
    {
        int temp = *num, rem, sum = 0;

        while(temp != 0)
        {
            rem = temp % 10;
            sum = sum + rem;
            temp = temp / 10;
        }

        printf("Sum of Digits = %d", sum);
    }

    else
    {
        printf("Invalid Choice");
    }
}























