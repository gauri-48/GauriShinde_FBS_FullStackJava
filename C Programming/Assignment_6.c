1. Convert Ass_1 and ASS_2 program into functions with four types of function.

Assignment 1 with four types of function.  -->

 1.Write a program to check whether a number is even or odd.  -->

//w/o parameter, w/o return type 

void evenodd();
void main()
{
	evenodd();
}
void evenodd()
{
	int num;
	printf("Enter Number Here: ");
	scanf("%d",&num);
	
	if( num % 2 == 0)
	{
		printf("Number Is Even");
	}
	else 
	{
		printf("Number Is Odd");
	}
}

//w/o parameter, with return type 

int evenodd();
void main()
{
	int res = evenodd();
	if ( res == 1 )
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
}
int evenodd()
{
	int num;
	printf("Enter Number Here: ");
	scanf("%d",&num);
	
	if( num % 2 == 0)
	{
		return 1;
	}
	return 0;
}

//with parameter, w/o return type 

void evenodd( int );
void main()
{
	int a = 10;
	evenodd(10);
}
void evenodd(int a)
{
	if( a % 2 == 0)
	{
		printf("Number Is Even");
	}
	else 
	{
		printf("Number Is Odd");
	}
}

//with return type & with parameters 

int evenodd(int);
void main()
{
	int a = 10;
	int res = evenodd(10);
	if ( res == 1 )
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
}
int evenodd( int a)
{
	
	if( a % 2 == 0)
	{
		return 1;
	}
	return 0;
}		



2.Write a program to check given 3 digit number is pallindrome or not. -->

//w/o parameter, w/o return type

void isPalindrome();
void main()
{
	isPalindrome();	
}
void isPalindrome()
{
	int num;
	num = 121;
	
	int last, remen, middle, first;
	
	last = num%10;
	
	remen = num/10;
	
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

//w/o parameter, with return type

int isPalindrome();
void main()
{
	int res = isPalindrome();
	
	if ( res == 1 )
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
		
}
int isPalindrome()
{
	int num;
	num = 121;
	
	int last, remen, middle, first;
	
	last = num%10;
	
	remen = num/10;
	
	middle = remen %10;
	
	first = remen/10;
	
	if( first == last )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//with parameter, w/o return type

void isPalindrome(int);
void main()
{
	int num;
	num = 121;
	isPalindrome(121);	
}
void isPalindrome(int num)
{
	int last, remen, middle, first;
	
	last = num%10;
	
	remen = num/10;
	
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

//with parameter, with return type

int isPalindrome(int);
void main()
{
	int num;
	num = 121;
	
	int res = isPalindrome(121);
	
	if ( res == 1 )
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
		
}
int isPalindrome(int num)
{
	int last, remen, middle, first;
	
	last = num%10;
	
	remen = num/10;
	
	middle = remen %10;
	
	first = remen/10;
	
	if( first == last )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}



3.Write a program to check whether a given year is a leap year.  -->

//w/o parameter, w/o return type 

void checkleap();
void main()
{
	checkleap();		
}
void checkleap()
{
	int year;
	printf("Enter Year Here:");
	scanf("%d", &year);
	
	if ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) )
	{
		printf("Leap Year");
	}
	else
	{
		printf("Not a leap year");
	}
}

//w/o parameter, with return type 

int checkleap();
void main()
{
	int res = checkleap();
	
	if ( res == 1 )
	{
		printf("Leap Year");
	}
	else 
	{
		printf("Not a leap year");
	}		
}
int checkleap()
{
	int year;
	printf("Enter Year Here:");
	scanf("%d", &year);
	
	if ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//with parameter, w/o return type 

void checkleap( int );
void main()
{
	int year;
	printf("Enter Year Here:");
	scanf("%d", &year);
	
	checkleap(year);		
}
void checkleap(int year)
{
	if ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) )
	{
		printf("Leap Year");
	}
	else
	{
		printf("Not a leap year");
	}
}

//with parameter, with return type 

int checkleap(int);
void main()
{
	int year;
	printf("Enter Year Here:");
	scanf("%d", &year);
	
	int res = checkleap(year);
	
	if ( res == 1 )
	{
		printf("Leap Year");
	}
	else 
	{
		printf("Not a leap year");
	}		
}
int checkleap(int year)
{
	if ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}



4.Write a program to check whether a given character is a vowel or consonant.

//w/o parameter, w/o return type 

void checkalpha();
void main()
{
	checkalpha();
}
void checkalpha()
{
	char alpha;
	printf("Enter Alphabet Here:");
	scanf("%c",&alpha);
	
	if ( alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U' || alpha == 'a'|| alpha == 'e'|| alpha == 'i'|| alpha == 'o'|| alpha == 'u')
	{
		printf("Character is Vowel");
	}
	else 
	{
		printf("Character is Consonant");
	}
}

//w/o parameter, with return type 

int checkalpha();
void main()
{
	int res = checkalpha();
	
	if ( res == 1 )
	{
		printf("Character is Vowel");
	}
	else
	{
		printf("Character is Consonant");
	}
}
int checkalpha()
{
	char alpha;
	printf("Enter Alphabet Here:");
	scanf("%c",&alpha);
	
	if ( alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U' || alpha == 'a'|| alpha == 'e'|| alpha == 'i'|| alpha == 'o'|| alpha == 'u')
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

//with parameter, w/o return type

void checkalpha(char);
void main()
{
	char alpha;
	printf("Enter Alphabet Here:");
	scanf("%c",&alpha);
	
	checkalpha(alpha);
}
void checkalpha(char alpha)
{
	
	if ( alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U' || alpha == 'a'|| alpha == 'e'|| alpha == 'i'|| alpha == 'o'|| alpha == 'u')
	{
		printf("Character is Vowel");
	}
	else 
	{
		printf("Character is Consonant");
	}
}

//with parameter, with return type 

int checkalpha(char);
void main()
{
	char alpha;
	printf("Enter Alphabet Here:");
	scanf("%c",&alpha);
	
	int res = checkalpha(alpha);
	
	if ( res == 1 )
	{
		printf("Character is Vowel");
	}
	else
	{
		printf("Character is Consonant");
	}
}
int checkalpha(char alpha)
{
	
	if ( alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U' || alpha == 'a'|| alpha == 'e'|| alpha == 'i'|| alpha == 'o'|| alpha == 'u')
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}



5..Write a program to check whether a person is eligible to vote (age = 18). -->

// w/o parameter, w/o return type 

void isEligible();
void main()
{
	isEligible();
}
void isEligible()
{
	int age;
	printf("Enter Age Here: ");
	scanf("%d",&age);
	
	if ( age >= 18 )
	{
		printf("You can vote");
	}
	else
	{
		printf("You cannot vote");
	}		
}

//w/o parameter, with return type 

int isEligible();
void main()
{
	int res = isEligible();
	
	if ( res == 1 )
	{
		printf("You can vote");
	}
	else
	{
		printf("You cannot vote");
	}
}
int isEligible()
{
	int age;
	printf("Enter Age Here: ");
	scanf("%d",&age);
	
	if ( age >= 18 )
	{
		return 1;
	}
	else
	{
		return 0;
	}		
}

//with parameter, without return type 

void isEligible(int);
void main()
{
	int age;
	printf("Enter Age Here: ");
	scanf("%d",&age);
	
	isEligible(age);
}
void isEligible(int age)
{
	
	if ( age >= 18 )
	{
		printf("You can vote");
	}
	else
	{
		printf("You cannot vote");
	}		
}

//with parameter, w/o return type 

int isEligible(int);
void main()
{
	int age;
	printf("Enter Age Here: ");
	scanf("%d",&age);
	
	int res = isEligible(age);
	
	if ( res == 1 )
	{
		printf("You can vote");
	}
	else
	{
		printf("You cannot vote");
	}
}
int isEligible(int age)
{
	
	if ( age >= 18 )
	{
		return 1;
	}
	else
	{
		return 0;
	}		
}



6.Write a program to check whether a given character is uppercase or lowercase.  -->

// w/o parameter , w/o return type 

void checkCase();
void main ()
{
	checkCase();
}
void checkCase()
{
	char alpha;
	
	printf("Enter character here to check uppercase or lowercase : ");
	scanf("%c", &alpha);
	
	
	if ( alpha == 'A'|| alpha == 'B'|| alpha == 'C'|| alpha == 'D'|| alpha == 'E'|| alpha == 'F'|| alpha == 'G'|| alpha == 'H'|| alpha == 'I'|| alpha == 'J'|| alpha == 'K'|| alpha == 'L'|| alpha == 'M'|| alpha == 'N'|| alpha == 'O'|| alpha == 'P'|| alpha == 'Q'|| alpha == 'R'|| alpha == 'S'|| alpha == 'T'|| alpha == 'U'|| alpha == 'V'|| alpha == 'W'|| alpha == 'X'|| alpha == 'Y'|| alpha == 'Z')
	{
		printf("Character is uppercase.");
	}
	else
	{
		printf("Character is lowercase.");
	}
}

// w/o parameter , with return type 

int checkCase();
void main ()
{
	int res = checkCase();
	
	if ( res == 1 )
	{
		printf("Character is uppercase.");
	}
	else
	{
		printf("Character is lowercase.");
	}
}
int checkCase()
{
	char alpha;
	
	printf("Enter character here to check uppercase or lowercase : ");
	scanf("%c", &alpha);
	
	
	if ( alpha == 'A'|| alpha == 'B'|| alpha == 'C'|| alpha == 'D'|| alpha == 'E'|| alpha == 'F'|| alpha == 'G'|| alpha == 'H'|| alpha == 'I'|| alpha == 'J'|| alpha == 'K'|| alpha == 'L'|| alpha == 'M'|| alpha == 'N'|| alpha == 'O'|| alpha == 'P'|| alpha == 'Q'|| alpha == 'R'|| alpha == 'S'|| alpha == 'T'|| alpha == 'U'|| alpha == 'V'|| alpha == 'W'|| alpha == 'X'|| alpha == 'Y'|| alpha == 'Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//with parameter , w/o return type 

void checkCase(char);
void main ()
{
	char alpha;
	
	printf("Enter character here to check uppercase or lowercase : ");
	scanf("%c", &alpha);
	
	checkCase(alpha);
}
void checkCase(char alpha)
{
	
	if ( alpha == 'A'|| alpha == 'B'|| alpha == 'C'|| alpha == 'D'|| alpha == 'E'|| alpha == 'F'|| alpha == 'G'|| alpha == 'H'|| alpha == 'I'|| alpha == 'J'|| alpha == 'K'|| alpha == 'L'|| alpha == 'M'|| alpha == 'N'|| alpha == 'O'|| alpha == 'P'|| alpha == 'Q'|| alpha == 'R'|| alpha == 'S'|| alpha == 'T'|| alpha == 'U'|| alpha == 'V'|| alpha == 'W'|| alpha == 'X'|| alpha == 'Y'|| alpha == 'Z')
	{
		printf("Character is uppercase.");
	}
	else
	{
		printf("Character is lowercase.");
	}
}

//with parameter , with return type 

int checkCase(char);
void main ()
{
	char alpha;
	
	printf("Enter character here to check uppercase or lowercase : ");
	scanf("%c", &alpha);
	
	int res = checkCase(alpha);
	
	if ( res == 1 )
	{
		printf("Character is uppercase.");
	}
	else
	{
		printf("Character is lowercase.");
	}
}
int checkCase(char alpha)
{
	
	
	if ( alpha == 'A'|| alpha == 'B'|| alpha == 'C'|| alpha == 'D'|| alpha == 'E'|| alpha == 'F'|| alpha == 'G'|| alpha == 'H'|| alpha == 'I'|| alpha == 'J'|| alpha == 'K'|| alpha == 'L'|| alpha == 'M'|| alpha == 'N'|| alpha == 'O'|| alpha == 'P'|| alpha == 'Q'|| alpha == 'R'|| alpha == 'S'|| alpha == 'T'|| alpha == 'U'|| alpha == 'V'|| alpha == 'W'|| alpha == 'X'|| alpha == 'Y'|| alpha == 'Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}



7.Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30% respectively.  -->

//w/o parameter, w/o return type

void salary();
void main()
{
	salary();
}
void salary()
{
	double basic;
	printf("Enter Basic Here : ");
	scanf("%lf", &basic);
	
	if ( basic <= 5000 )
	{
		double DA = (basic * 10) / 100;   
		double TA = (basic * 20) / 100;   
		double HRA = (basic * 25) / 100;  
		
		double total_salary = DA + TA + HRA + basic;
		
		printf(" Total Salary = %.4lf", total_salary);
	}
	else
	{
		double DA = (basic * 15) / 100;   
		double TA = (basic * 25) / 100;   
		double HRA = (basic * 30) / 100;  
		
		double total_salary = DA + TA + HRA + basic;
		
		printf(" Total Salary = %.4lf", total_salary);
	}	
}

//w/o parameter, with return type

double salary();
void main()
{
    double total;

    total = salary();

    printf("Total Salary = %.2lf", total);
}

double salary()
{
    double basic;

    printf("Enter Basic Salary : ");
    scanf("%lf", &basic);

    double DA, TA, HRA, total_salary;

    if(basic <= 5000)
    {
        DA = (basic * 10) / 100;
        TA = (basic * 20) / 100;
        HRA = (basic * 25) / 100;
    }
    else
    {
        DA = (basic * 15) / 100;
        TA = (basic * 25) / 100;
        HRA = (basic * 30) / 100;
    }

    total_salary = basic + DA + TA + HRA;

    return total_salary;
}

//with parameter, with return type

double salary(double basic);
void main()
{
    double basic, total;

    printf("Enter Basic Salary : ");
    scanf("%lf", &basic);

    total = salary(basic);

    printf("Total Salary = %.2lf", total);
}

double salary(double basic)
{
    double DA, TA, HRA, total_salary;

    if(basic <= 5000)
    {
        DA = (basic * 10) / 100;
        TA = (basic * 20) / 100;
        HRA = (basic * 25) / 100;
    }
    else
    {
        DA = (basic * 15) / 100;
        TA = (basic * 25) / 100;
        HRA = (basic * 30) / 100;
    }

    total_salary = basic + DA + TA + HRA;

    return total_salary;
}




Assignment 2 with four types of function.  -->

1.Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations. -->

//w/o parameter , w/o return type 

void operations();
int main()
{
	operations();		
}
void operations()
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

// w/o parameter , w/o return type 

void triangletype();
int main()
{
	triangletype();		
}
void triangletype()
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

//w/o parameter , with return type 

int triangletype();
int main()
{
	int res = triangletype();	
	
	if ( res == 1 )
	{
		printf("Equilateral Triangle");
	}	
	else if ( res == 2 )
	{
		printf("Scalene");
	}
	else if ( res == 3 )
	{
		printf("Isosceles");
	}
}
int triangletype()
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
		return 1;
	}
	else 
	{
		if ( size1 != size2 && size2 != size3)
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
}

//with parameter , without return type 

void triangletype(float,float,float);
int main()
{
	float size1, size2, size3;
	 
	triangletype(size1, size2, size3);		
}
void triangletype(float size1, float size2, float size3)
{
	
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

//with parameter , with return type 

int triangletype(float,float,float);
int main()
{
	float size1, size2, size3;
	
	int res = triangletype(size1, size2, size3);	
	
	if ( res == 1 )
	{
		printf("Equilateral Triangle");
	}	
	else if ( res == 2 )
	{
		printf("Scalene");
	}
	else if ( res == 3 )
	{
		printf("Isosceles");
	}
}
int triangletype(float size1, float size2, float size3)
{	
	printf("Enter First Size Of Triangle = ");
	scanf("%f", &size1);
	
	printf("Enter Second Size Of Triangle = ");
	scanf("%f", &size2);
	
	printf("Enter Third Size Of Triangle = ");
	scanf("%f", &size3);
	
	if ( size1 == size2 && size2 == size3 )
	{
		return 1;
	}
	else 
	{
		if ( size1 != size2 && size2 != size3)
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
}



3. Write a program to find greatest of three numbers using nested if-else.  -->

// w/o parameter, w/o return type 

void findGreater();
void main()
{
	findGreater();
}
void findGreater()
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

// w/o parameter, with return type 

int findGreater();
void main()
{
    int res;

    res = findGreater();

    printf("%d Is Greater", res);
}

int findGreater()
{
    int a, b, c;

    printf("Enter first number : ");
    scanf("%d", &a);

    printf("Enter second number : ");
    scanf("%d", &b);

    printf("Enter third number : ");
    scanf("%d", &c);

    if(a > b)
    {
        if(a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if(b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

//with parameter , w/o return type 

void findGreater(int, int, int);
void main()
{
	int a, b, c;
	
	printf("Enter first number : ");
	scanf("%d", &a);
	
	printf("Enter second number : ");
	scanf("%d", &b);
	
	printf("Enter third number : ");
	scanf("%d", &c);
	
	findGreater(a,b,c);
}
void findGreater(int a, int b, int c)
{
	
	
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

// with parameter, with return type 

int findGreater(int, int, int);
void main()
{
	int a, b, c;

    printf("Enter first number : ");
    scanf("%d", &a);

    printf("Enter second number : ");
    scanf("%d", &b);

    printf("Enter third number : ");
    scanf("%d", &c);
	
    int res;

    res = findGreater(a,b,c);

    printf("%d Is Greater", res);
}

int findGreater(int a, int b, int c)
{
    if(a > b)
    {
        if(a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if(b > c)
        {
            return b;
        }
        else
        {
            return c;
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

//w/o parameter , w/o return type 

void gread();
int main()
{
	gread();
}
void gread()
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

//w/o parameter, with return type 

int gread();
int main()
{
	int res = gread();
	
	if ( res == 1 )
	{
		printf("Distinction");
	}
	else if ( res == 2 )
	{
		printf("First Class");
	}
	else if ( res == 3 )
	{
		printf("Second Class");
	}
	else if ( res == 4 )
	{
		printf("Pass Class");
	}
	else if ( res == 5 ) 
	{
		printf("Fail");
	}
}
int gread()
{
	int marks;
	
	printf("Enter Marks : ");
	scanf("%d",&marks);
	
	if ( marks > 75 )
	{
		return 1;
	}
	else if ( marks > 65)
	{
		return 2;
	}
	else if ( marks > 55)
	{
		return 3;
	}
	else if ( marks >= 40)
	{
		return 4;
	}
	else if ( marks < 40) 
	{
		return 5;
	}
}

//with parameter, w/o return type 

void gread(int);
int main()
{
	int marks;
	
	printf("Enter Marks : ");
	scanf("%d",&marks);
	 
	gread(marks);
}
void gread(int marks)
{
	
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

//with parameter, with return type 

int gread(int);
int main()
{
	int marks;
	
	printf("Enter Marks : ");
	scanf("%d",&marks);
	
	
	int res = gread(marks);
	
	if ( res == 1 )
	{
		printf("Distinction");
	}
	else if ( res == 2 )
	{
		printf("First Class");
	}
	else if ( res == 3 )
	{
		printf("Second Class");
	}
	else if ( res == 4 )
	{
		printf("Pass Class");
	}
	else if ( res == 5 ) 
	{
		printf("Fail");
	}
}
int gread(int marks)
{
	if ( marks > 75 )
	{
		return 1;
	}
	else if ( marks > 65)
	{
		return 2;
	}
	else if ( marks > 55)
	{
		return 3;
	}
	else if ( marks >= 40)
	{
		return 4;
	}
	else if ( marks < 40) 
	{
		return 5;
	}
}



5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he is a student and he has purchased more than 500 than discount is 20% otherwise discount is 10%.But if he is not a student then if he has purchased more than 600 discount is 15% otherwise there is not discount.  -->

//w/o parameter , w/o return type 

void discount();
int main()
{
	discount();
}
void discount()
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

//w/o parameter , with return type 

double discount();
int main()
{
	double a = discount();
	
	printf("\nTotal Price : %lf", a );
}
double discount()
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
		
	return total_price;
}

//with parameter , w/o return type 

void discount(double, char);
int main()
{
    double price;
    char student;

    printf("Enter Price : ");
    scanf("%lf", &price);

    printf("Are You Student Or Not (y/n): ");
    scanf(" %c", &student);

    discount(price, student);
}

void discount(double price, char student)
{
    double discount = 0, total_price;

    if(student == 'y' || student == 'Y')
    {
        if(price > 500)
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
        if(price > 600)
        {
            discount = price * 0.15;
        }
    }

    total_price = price - discount;

    printf("Total Price = %.2lf", total_price);
}

//with parameter , with return type 

double discount(double, char);
int main()
{
    double price;
    char student;

    printf("Enter Price : ");
    scanf("%lf", &price);

    printf("Are You Student Or Not (y/n): ");
    scanf(" %c", &student);

    discount(price, student);
    
    double a = discount(price, student);
    
    printf("Total Price = %.2lf", a);
}

double discount(double price, char student)
{
    double discount = 0, total_price;

    if(student == 'y' || student == 'Y')
    {
        if(price > 500)
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
        if(price > 600)
        {
            discount = price * 0.15;
        }
    }

    total_price = price - discount;

    return total_price;
}



6. Accept a number and check if it is divisible by 3, 5, or both.
(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
both" or” Divisible by None”)  -->

// w/o parameter, w/o return type 

void divisibility();
int main()
{
	divisibility();
}
void divisibility()
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

// w/o parameter, with return type 

int divisibility();
int main()
{
	int a = divisibility();
	
	if( a == 1 )
	{
		printf("Number is divisible by 3 and 5 Both");
	} 
	else if ( a == 2 )
	{
		printf("Number is divisible by 3");
	}
	else if ( a == 3 )
	{
		printf("Number is divisible by 5");
	}
	else 
	{
		printf("Number is not divisible by 3 or 5");
	}
}
int divisibility()
{
	int num;
	
	printf("Enter Number Here : ");
	scanf("%d",&num);
	
	if (num % 3 == 0 && num % 5 == 0)
	{
    	return 1;
	}
	else if (num % 3 == 0)
	{
    	return 2;
	}
	else if (num % 5 == 0)	
	{
    	return 3;
	}
	else 
	{
		return 4;
	}
	
}

// with parameter, w/o return type 

void divisibility(int);
int main()
{
	int num;
	
	printf("Enter Number Here : ");
	scanf("%d",&num);
	
	
	divisibility(num);
}
void divisibility(int num)
{
	
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

//with parameter , with return type 

int divisibility(int);
int main()
{
	int num;
	
	printf("Enter Number Here : ");
	scanf("%d",&num);
	
	int a = divisibility(num);
	
	if( a == 1 )
	{
		printf("Number is divisible by 3 and 5 Both");
	} 
	else if ( a == 2 )
	{
		printf("Number is divisible by 3");
	}
	else if ( a == 3 )
	{
		printf("Number is divisible by 5");
	}
	else 
	{
		printf("Number is not divisible by 3 or 5");
	}
}
int divisibility(int num)
{
	if (num % 3 == 0 && num % 5 == 0)
	{
    	return 1;
	}
	else if (num % 3 == 0)
	{
    	return 2;
	}
	else if (num % 5 == 0)	
	{
    	return 3;
	}
	else 
	{
		return 4;
	}
	
}



7. Accept the age and check if the person is:
Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)  -->

//w/o parameter, w/o return type 

void ageGroup();
int main()
{
	ageGroup();
}
void ageGroup()
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

//w/o parameter, with return types 

int ageGroup();
int main()
{
	int x = ageGroup();
	
	if(x == 1)
	{
		printf("Child");
	}
	else if ( x == 2)
	{
		printf("Teenager");
	}
	else if (x ==3 )
	{
		printf("Adult");
	}
	else
	{
		printf("Senior");
	}
	
}
int ageGroup()
{
	int age;
	printf("Enter Age : ");
	scanf("%d",&age);
	
	if( age < 12 )
	{
		return 1;
	}
	else if ( age > 12 && age <= 19 )
	{
		return 2;
	}
	else if ( age > 20 && age <= 59 )
	{
		return 3;
	}
	else
	{
		return 4;
	}
}

//with parameter , w/o return type 

void ageGroup(int);
int main()
{
	int age;
	printf("Enter Age : ");
	scanf("%d",&age);
	
	ageGroup(age);
}
void ageGroup(int age)
{
	
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

//with parameter , with return type 

int ageGroup(int);
int main()
{
	int age;
	printf("Enter Age : ");
	scanf("%d",&age);
	
	int x = ageGroup(age);
	
	if(x == 1)
	{
		printf("Child");
	}
	else if ( x == 2)
	{
		printf("Teenager");
	}
	else if (x ==3 )
	{
		printf("Adult");
	}
	else
	{
		printf("Senior");
	}
	
}
int ageGroup(int age)
{
	
	if( age < 12 )
	{
		return 1;
	}
	else if ( age > 12 && age <= 19 )
	{
		return 2;
	}
	else if ( age > 20 && age <= 59 )
	{
		return 3;
	}
	else
	{
		return 4;
	}
}









2. Convert Ass_3 program into functions with four types of function.(Excluding range
programs) . convert range programs into two type of function i.e. w/o parameter, w/o
return type and with parameter and w/o return type.

1. Print numbers from 1 to 10
Output: 1 2 3 4 5 6 7 8 9 10  -->

//w/o parameter , w/o return type 

void numbers();
void main()
{
	numbers();
}
void numbers()
{
	int num = 1;
	
	while ( num <= 10 )
	{
		printf("\n%d",num);
		num++;
	}	
}

//with parameter , w/o return type 

void numbers(int);
void main()
{
	int num = 1;
	
	numbers(num);
}
void numbers(int num)
{
	while ( num <= 10 )
	{
		printf("\n%d",num);
		num++;
	}	
}



2. Print table for given number.
Input: n = 5
Output: 5 10 15 20 25 30 35 40 45 50  -->

//w/o parameter , w/o return type 

void table();
void main()
{
	table();
}
void table()
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

//with parameter , w/o return type 

void table(int, int);
void main()
{
	int i = 1;
	int n = 5;
	
	table(i, n);
}
void table(int i, int n)
{
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

//w/o parameter , w/o return type 

void sum();
void main()
{
	sum();
}
void sum()
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

//w/o parameter, with return type 

int sum();
void main()
{
	int a = sum();
	printf("%d",a);
}
int sum()
{
	int i = 1;
	int sum= 0;
	
	while ( i <= 5 )
	{
		sum = sum + i;
		i++;
	}
	return sum;
}

//with parameter , without return type 

void sum(int,int);
void main()
{
	int i = 1;
	int total= 0;
	
	sum(i,total);
}
void sum(int i, int total)
{
	while ( i <= 5 )
	{
		total = total + i;
		i++;
	}
	printf("%d",total);
}

//with parameter , with return type 

int sum(int,int);
void main()
{
	int i = 1;
	int total= 0;
	
	int a = sum(1,0);
	printf("%d",a);
}
int sum(int i, int total)
{
	
	while ( i <= 5 )
	{
		total = total + i;
		i++;
	}
	return total;
}



4.Check the given number is prime or not.
Input: n = 7
Output: Prime  -->

//w/o parameter , w/o return type 

void isPrime();
void main()
{
	isPrime();
}
void isPrime()
{
	int i = 2;
	int n = 7;
	int flag=0;
	
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

//w/o parameter , with return type 

int isPrime();
void main()
{
	int a = isPrime();
	
	if ( a == 1 )
	{
		printf("Not Prime");
	}
	else
	{
		printf("Prime");
	}
}
int isPrime()
{
	int i = 2;
	int n = 7;
	int flag=0;
	
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
		return 1;
	}
	else
	{
		return 0;
	}
}

//with parameter , w/o return type 

void isPrime(int, int, int);
void main()
{
	int i = 2;
	int n = 7;
	int flag=0;
	
	isPrime(i, n, flag);
}
void isPrime(int i, int n, int flag)
{
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

//with parameter , with return type 

int isPrime(int, int, int);
void main()
{
	int i = 2;
	int n = 7;
	int flag=0;
	
	int a = isPrime(i, n, flag);
	
	if ( a == 1 )
	{
		printf("Not Prime");
	}
	else
	{
		printf("Prime");
	}
}
int isPrime(int i, int n, int flag)
{
	
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
		return 1;
	}
	else
	{
		return 0;
	}
}



5.Check the given number is Armstrong number or not..
Input: n = 153
Output: Armstrong  -->

//w/o parameter , w/o return type 

void isArmstrong();
void main()
{
	isArmstrong();
}
void isArmstrong()
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

//w/o parameter , with return type 

int isArmstrong();
void main()
{
	int res = isArmstrong();
	
	if ( res == 1 )
	{
		printf("Armstrong");
	}
	else 
	{
		printf("Not Armstrong");
	}
	
}
int isArmstrong()
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
		return 1;
	}
	else
	{
		return 0;
	}
}

//with parameter , w/o return type 

void isArmstrong(int , int, int);
void main()
{
	int n = 153;
	int temp = n;
	int sum = 0;
	
	isArmstrong(n,temp,sum);
}
void isArmstrong(int n, int temp, int sum)
{
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

//with parameter, with return type 

int isArmstrong(int, int, int);
void main()
{
	int n = 153;
	int temp = n;
	int sum = 0;
	
	
	int res = isArmstrong(n, temp, sum);
	
	if ( res == 1 )
	{
		printf("Armstrong");
	}
	else 
	{
		printf("Not Armstrong");
	}
	
}
int isArmstrong(int n, int temp, int sum)
{
	while ( n > 0 )
	{
		int rem = n % 10;
		sum = sum + rem * rem * rem;
		n = n / 10;
	}
	if ( temp == sum )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}



6.Check the given number is Perfect number or not.
Input: n = 28
Output: Perfect  -->

// w/o parameter , w/o return type 

void IsPerfect();
void main()
{
	IsPerfect();
}
void IsPerfect()
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

// w/o parameter, with return type 

int IsPerfect();
void main()
{
	int res = IsPerfect();
	
	if ( res == 1 )
	{
		printf("Perfect Number");
	}
	else 
	{
		printf("Not A Perfect Number");
	}
}
int IsPerfect()
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
		return 1;
	}
	else
	{
		return 0;
	}		
}

// with parameter, w/o return type 

void IsPerfect(int, int, int);
void main()
{
	int i = 1;
	int n = 28;
	int sum = 0;
	 
	IsPerfect(i, n, sum);
}
void IsPerfect(int i, int n, int sum)
{
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

//with parameter, with return type 

int IsPerfect(int, int, int);
void main()
{
	int i = 1;
	int n = 28;
	int sum = 0;
	
	int res = IsPerfect(i, n, sum);
	
	if ( res == 1 )
	{
		printf("Perfect Number");
	}
	else 
	{
		printf("Not A Perfect Number");
	}
}
int IsPerfect(int i, int n, int sum)
{
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
		return 1;
	}
	else
	{
		return 0;
	}		
}



7. Find factorial of given number.
Input: n = 5
Output: 120  -->

//w/o parameter , w/o return type 

void fact();
int main()
{
	fact();
}
void fact()
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

// w/o parameter , with return type 

int fact();
int main()
{
	int res = fact();
	printf("%d",res);
}
int fact()
{
	
	int i = 1;
	int n = 5;
	int sum = 1;
	
	while ( i <= 5 )
	{
		sum = sum * i;
		i++;
	}
	return sum;
}

//with parameter , w/o return type 

void fact(int, int, int);
int main()
{
	
	int i = 1;
	int n = 5;
	int sum = 1;
	
	fact(i, n, sum);
}
void fact(int i, int n, int sum)
{
	while ( i <= 5 )
	{
		sum = sum * i;
		i++;
	}
	printf("%d",sum);
}

// with parameter , with return type 

int fact(int, int, int);
int main()
{	
	int i = 1;
	int n = 5;
	int sum = 1;
	
	int res = fact(i, n, sum);
	printf("%d",res);
}
int fact(int i, int n, int sum)
{
	while ( i <= 5 )
	{
		sum = sum * i;
		i++;
	}
	return sum;
}



8.Check the given number is Strong number or not.
Input: n = 145
Output: Strong  -->

// w/o paramater , w/o return type 

void isStrong();
void main()
{
	isStrong();
}
void isStrong()
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

//w/o parameter, with return type 

int isStrong();
void main()
{
	int res = isStrong();
	
	if ( res == 1 )
	{
		printf("Strong Number");
	}
	else 
	{
		printf("Not A Strong Number");
	}
}
int isStrong()
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
		return 1;
	}
	else
	{
		return 0;
	}		
	
}

//with parameter , w/o return type 

void isStrong(int, int, int);
void main()
{
	int n = 145;
	int temp = n;
	int sum = 0;
	
	isStrong(n, temp, sum);
}
void isStrong(int n, int temp, int sum)
{
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

// with parameter , with return type 

int isStrong(int, int, int);
void main()
{
	int n = 145;
	int temp = n;
	int sum = 0;
	
	int res = isStrong(n, temp, sum);
	
	if ( res == 1 )
	{
		printf("Strong Number");
	}
	else 
	{
		printf("Not A Strong Number");
	}
}
int isStrong(int n, int temp, int sum)
{
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
		return 1;
	}
	else
	{
		return 0;
	}			
}



9. Check the given number is Palindrome number or not.
Input: n = 121
Output: Palindrome  -->

// w/o parameter , w/o return type 

void IsPalinddrome();
void main()
{
	IsPalinddrome();
}
void IsPalinddrome()
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

// w/o parameter , with return type 

int IsPalinddrome();
void main()
{
	int res = IsPalinddrome();
	
	if ( res == 1)
	{
		printf("Palindrome");
	}
	else 
	{
		printf("Not Palindrome");
	}
}
int IsPalinddrome()
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
        return 1;
    }
    else
    {
        return 0;
    }
}

//with parameters , w/o return type 

void IsPalinddrome(int, int, int);
void main()
{
	int n = 121;
    int temp = n;
    int rev = 0;

	IsPalinddrome(n, temp, rev);
}
void IsPalinddrome(int n, int temp, int rev)
{
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

//with parameter , with return type 

int IsPalinddrome(int, int, int);
void main()
{
	int n = 121;
    int temp = n;
    int rev = 0;
    
	int res = IsPalinddrome(n, temp, rev);
	
	if ( res == 1)
	{
		printf("Palindrome");
	}
	else 
	{
		printf("Not Palindrome");
	}
}
int IsPalinddrome(int n, int temp, int rev)
{
    while (n > 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (temp == rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

10.Find Sum of first and last digit of given number.
Input: n = 12345
Output: 6 (1 + 5)  -->

// w/o parameter, w/o return type 

void add();
void main()
{
	add();
}
void add()
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

// with parameters, w/o return type 

void add(int);
void main()
{
	int n = 12345;
	
	add(n);
}
void add(int n)
{
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









3. Convert Ass_4 into two type of function i.e. w/o parameter, w/o return type and with
parameter and w/o return type.

1. Print armstrong numbers in the given range 1 to n.  -->

//w/o parameter, w/o return type

void isArmstrong();
void main()
{
	isArmstrong();
}
void isArmstrong()
{
	int n, num, temp, rem, sum;

    printf("Enter n : ");
    scanf("%d", &n);

    for(num = 1; num <= n; num++)
    {
        temp = num;
        sum = 0;

        while(temp > 0)
        {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }

        if(sum == num)
        {
            printf("%d\n", num);
        }
    }
}

//with parameter and w/o return type

void isArmstrong(int, int, int, int, int );
void main()
{
	int n, num, temp, rem, sum;

    printf("Enter n : ");
    scanf("%d", &n);

	isArmstrong( n, num, temp, rem, sum);
}
void isArmstrong(int n,int num,int temp,int rem,int sum)
{
	 for(num = 1; num <= n; num++)
    {
        temp = num;
        sum = 0;

        while(temp > 0)
        {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }

        if(sum == num)
        {
            printf("%d\n", num);
        }
    }
}



2.Print prime numbers in the given range 1 to n.  -->

// w/o parameter , w/o return type 

void range();
void main()
{
	range();
}
void range()
{
	int n, num, i, flag;

    printf("Enter n : ");
    scanf("%d", &n);

    for(num = 2; num <= n; num++)
    {
        flag = 0;

        for(i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            printf("%d\n", num);
        }
    }
	
}

//with parameter , w/o return type 

void range(int, int, int, int );
void main()
{
	int n, num, i, flag;

    printf("Enter n : ");
    scanf("%d", &n);

	range(n, num, i, flag);
}
void range(int n,int num, int i, int flag)
{
	for(num = 2; num <= n; num++)
    {
        flag = 0;

        for(i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            printf("%d\n", num);
        }
    }
	
}



3.Print perfect numbers in the given range 1 to n.  -->

//w/o parameter , w/o return type 

void isPerfect();
void main()
{
	isPerfect();
}
void isPerfect()
{
	int n, num, i, sum;

    printf("Enter n : ");
    scanf("%d", &n);

    for(num = 1; num <= n; num++)
    {
        sum = 0;

        for(i = 1; i < num; i++)
        {
            if(num % i == 0)
            {
                sum = sum + i;
            }
        }

        if(sum == num)
        {
            printf("%d\n", num);
        }
    }
}

//with parameter , w/o return type 

void isPerfect(int, int, int, int);
void main()
{
	int n, num, i, sum;

    printf("Enter n : ");
    scanf("%d", &n);

    
	isPerfect(n, num, i, sum);
}
void isPerfect(int n, int num,int i,int sum)
{
	for(num = 1; num <= n; num++)
    {
        sum = 0;

        for(i = 1; i < num; i++)
        {
            if(num % i == 0)
            {
                sum = sum + i;
            }
        }

        if(sum == num)
        {
            printf("%d\n", num);
        }
    }
}



4.Print strong numbers in the given range 1 to n.  -->

//w/o parameter , w/o return type 

void strong();
void main()
{
	strong();
}
void strong()
{
	int n, num, temp, rem;
    int i, fact, sum;

    printf("Enter n : ");
    scanf("%d", &n);

    for(num = 1; num <= n; num++)
    {
        temp = num;
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

        if(sum == num)
        {
            printf("%d\n", num);
        }
    }
}

// with parameter , w/o return type 

void strong(int);
void main()
{
    int num;

    printf("Enter n : ");
    scanf("%d", &num);

    strong(num);
}

void strong(int num)
{
    int n = num;
    int temp, rem;
    int i, fact, sum;

    for(num = 1; num <= n; num++)
    {
        temp = num;
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

        if(sum == num)
        {
            printf("%d\n", num);
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

// w/o parameter , w/o return type 

void choice();
void main()
{
	choice();
}
void choice()
{
	int num, choice;

    printf("Enter Number : ");
    scanf("%d", &num);

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
        if(num % 2 == 0)
            printf("Even Number");
        else
            printf("Odd Number");
    }

    else if(choice == 2)
    {
        int i, flag = 0;

        if(num <= 1)
            printf("Not Prime");
        else
        {
            for(i = 2; i < num; i++)
            {
                if(num % i == 0)
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
        int temp = num, rev = 0, rem;

        while(temp != 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }

        if(rev == num)
            printf("Palindrome Number");
        else
            printf("Not Palindrome");
    }

    else if(choice == 4)
    {
        if(num > 0)
            printf("Positive");
        else if(num < 0)
            printf("Negative");
        else
            printf("Zero");
    }

    else if(choice == 5)
    {
        int temp = num, rev = 0, rem;

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
        int temp = num, rem, sum = 0;

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

//with parameter , w/o return type 

void choice1(int, int);
void main()
{
	int num, choice;

    printf("Enter Number : ");
    scanf("%d", &num);

    
	choice1(num, choice);
}
void choice1(int num,int choice)
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
        if(num % 2 == 0)
            printf("Even Number");
        else
            printf("Odd Number");
    }

    else if(choice == 2)
    {
        int i, flag = 0;

        if(num <= 1)
            printf("Not Prime");
        else
        {
            for(i = 2; i < num; i++)
            {
                if(num % i == 0)
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
        int temp = num, rev = 0, rem;

        while(temp != 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }

        if(rev == num)
            printf("Palindrome Number");
        else
            printf("Not Palindrome");
    }

    else if(choice == 4)
    {
        if(num > 0)
            printf("Positive");
        else if(num < 0)
            printf("Negative");
        else
            printf("Zero");
    }

    else if(choice == 5)
    {
        int temp = num, rev = 0, rem;

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
        int temp = num, rem, sum = 0;

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











