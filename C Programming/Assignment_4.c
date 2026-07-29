1. Print armstrong numbers in the given range 1 to n.  -->

void main()
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



2.Print prime numbers in the given range 1 to n.  -->

void main()
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



3.Print perfect numbers in the given range 1 to n.  -->

void main()
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



4.Print strong numbers in the given range 1 to n.  -->

void main()
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



5.Write a menu driven program to take a number for user and perform operations as follows.
Press 1.To check number is even or odd.
2.To check number is prime or not.
3.To check number is pallindrome or not.
4.To check number is positive, negative or zero.
5.To reverse a number.
6.To find sum of digits.  -->

void main()
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

















