1.Write a program to check whether a number is even or odd.  -->

void main()
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



2.Write a program to check given 3 digit number is pallindrome or not. -->

void main()
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



3.Write a program to check whether a given year is a leap year.  -->

void main()
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



4.Write a program to check whether a given character is a vowel or consonant.

void main()
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



5.Write a program to check whether a person is eligible to vote (age ≥ 18). -->

void main()
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



6.Write a program to check whether a given character is uppercase or lowercase.  -->

void main ()
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



7.Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30% respectively.  -->

void main()
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



















 