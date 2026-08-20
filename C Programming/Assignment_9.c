Passing array to function


1. Do all the questions of ASS_7 using function.  -->






1. Find minimum and maximum number in array.  -->

void minmax(int[]);
void main()
{
	int i;
	
	int arr[10] = {10, 5, 9, 17, 23, 38, 101, 8, 99, 19};
	
    minmax(arr);
}
void minmax(int arr[])
{
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

int search(int[], int);
void main()
{
    int no;
    
    int arr[15] = {12, 5, 87, 999, 82, 90, 12, 657, 28, 36, 1, 1000, 256, 87, 90};

	
    printf("Enter Number You Want To Search: ");
    scanf("%d", &no);
    
    int res=search(arr,no);
	
	if ( res == 1)
	{
		printf("Number Found.");
	} 
	else 
	{
		printf("Number Not Found.");
	}
}
int search(int arr[], int no)
{
	int i;
    int flag = 0;
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
        return 1;
    }
    else
    {
        return 2;
    }
}



3. Find sum of all numbers.  -->

int add(int[]);
void main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int res = add(arr);

    printf("Sum Of All Numbers : %d", res);
}

int add(int arr[])
{
    int i, sum = 0;

    for(i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}



4.Find odd and even among the numbers.  -->

int evenodd(int[]);
void main()
{
    int arr[8] = {4, 1, 8, 3, 6, 8, 7, 9};
    
    evenodd(arr);

}
int evenodd(int arr[])
{
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

int alter(int[]);
void main()
{
	int arr[8]={1,2,3,4,5,6,7,8};
	
	alter(arr);		
}
int alter(int arr[])
{
	printf("Alternate Numbers Are: ");
	
	for (int i =0; i<8; i=i+2)
	{
		printf("%d ",arr[i]);
	}
}



6.Accept and print only prime numbers of array.  -->

int prime(int[]);
void main()
{
    int arr[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Enter Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    prime(arr);
}
int prime(int arr[])
{
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
crr[5]={11,22,33,44,55}  --> 

int sum(int[],int[]);
void main()
{
	int arr[5]= {1,2, 3, 4,5};
	
	int brr[5]={10,20,30, 40, 50};
	
	sum(arr,brr);
}
int sum(int arr[],int brr[])
{
	
	int crr[5];
	
	for ( int i =0; i<5;i++)
	{
		crr[i]=arr[i]+brr[i];
		printf("%d ", crr[i]);
	}
	
}



8. Merge two arrays  -->

int merge(int[],int[]);
void main()
{
	int arr[5]= {1,2, 3, 4,5};
	
	int brr[5]={10,20,30, 40, 50};
	
	merge(arr,brr);
}
int merge(int arr[],int brr[])
{
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
int rev(int[]);
void main()
{
    int arr[5] = {1,2,3,4,5};
    
    rev(arr);
}
int rev(int arr[])
{
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

int sort(int[]);
void main()
{
    int arr[5] = {10, 8, 90, 4, 2};
    
    sort(arr);
    
}
int sort(int arr[])
{
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













