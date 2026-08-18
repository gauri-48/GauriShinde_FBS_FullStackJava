1. Find minimum and maximum number in array.  -->

void main()
{
	int i;
	
	int arr[10] = {10, 5, 9, 17, 23, 38, 101, 8, 99, 19};
	
	int min = arr[0];
	int max = arr[0];
	
	for (int i = 1; i <= 10; i++)
	{
	    if(arr[i] > max)
    	{
        	max = arr[i];
    	}
    	
    	if(arr[i] < min)
    	{
    	    min = arr[i];
    	}
	}
	printf("Maximum Number is : %d ", max);

	printf("\nMaximum Number is : %d ", min);   	
}



2. Search the given number in array.  -->

void main()
{
    int no;
    int i;
    int flag = 0;

    printf("Enter Number You Want To Search: ");
    scanf("%d", &no);

    int arr[15] = {12, 5, 87, 999, 82, 90, 12, 657, 28, 36, 1, 1000, 256, 87, 90};

    for(i = 0; i < 15; i++)
    {
        if(arr[i] == no)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
    {
        printf("Number Found At %dth Index.", i);
    }
    else
    {
        printf("Number Not Found.");
    }
}



3. Find sum of all numbers.  -->

void main()
{
	int arr[5] = {1 , 2 , 3, 4, 5};
	
	int i, sum = 0;
	
	for ( i =1; i<=5 ; i++)
	{
		sum = sum + i;
	}
	
	printf("Sum Of All Numbers : %d", sum);
}



Find odd and even among the numbers.  -->

void main()
{
    int arr[8] = {4, 1, 8, 3, 6, 8, 7, 9};

    printf("Even numbers are: ");

    for(int i = 0; i < 8; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\nOdd numbers are: ");

    for(int i = 0; i < 8; i++)
    {
        if(arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
}



5.Print alternate elements in array.  -->

void main()
{
	int arr[8]={1,2,3,4,5,6,7,8};
	
	printf("Alternate Numbers Are: ");
	
	for (int i =0; i<8; i=i+2)
	{
		printf("%d ",arr[i]);
	}		
}



6.Accept array and print only prime numbers of array.  -->

void main()
{
    int arr[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Enter Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Prime Numbers are: ");

    for(int i = 0; i < 5; i++)
    {
        int flag = 0;

        if(arr[i] >= 2)
        {
            for(int j = 2; j < arr[i]; j++)
            {
                if(arr[i] % j == 0)
                {
                    flag = 1;
                    break;
                }
            }

            if(flag == 0)
            {
                printf("%d ", arr[i]);
            }
        }
    }
}



7.Take two array and add sum in third array
Example-
arr[5]= {1,2, 3, 4,5}
brr[5]={10,20,30, 40, 50}
crr[5]={11,22,33,44,55}

void main()
{
	int arr[5]= {1,2, 3, 4,5};
	
	int brr[5]={10,20,30, 40, 50};
	
	int crr[5];
	
	for ( int i =0; i<5;i++)
	{
		crr[i]=arr[i]+brr[i];
		printf("%d ", crr[i]);
	}
	
}



8. Merge two arrays  -->

void main()
{
	int arr[5]= {1,2, 3, 4,5};
	
	int brr[5]={10,20,30, 40, 50};
	
	int crr[10];
	
	for(int i = 0; i < 5; i++)
    {
        crr[i] = arr[i];
    }
    
    for(int i = 0; i < 5; i++)
    {
        crr[i+5] = brr[i];
    }
    
    for (int i = 0; i<10; i++)
    {
    	printf("%d ",crr[i]);
	}
}



9. Reverse the given array.  

#include <stdio.h>
void main()
{
    int arr[5] = {1,2,3,4,5};
    
    printf("Actual Array: ");
    
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    int brr[5];

    for(int i = 0; i < 5; i++)
    {
        brr[4-i] = arr[i];
    }

    printf("\nReverse Array: ");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", brr[i]);
    }
}



10. Sort the array.  -->

void main()
{
    int arr[5] = {10, 8, 90, 4, 2};
    int temp;

    printf("Unsorted Array : ");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSorted Array : ");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}
























