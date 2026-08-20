Malloc


Que : Create array using malloc in Assignment 8





1. Find minimum and maximum number in array.  -->

#include<stdio.h>
#include <stdlib.h>
int* array();
void main()
{
	int i;
	
	int* res = array();
		
	int min = res[0];
	int max = res[0];
	
	for (int i = 1; i < 10; i++)
	{
	    if(res[i] > max)
    	{
        	max = res[i];
    	}
    	
    	if(res[i] < min)
    	{
    	    min = res[i];
    	}
	}
	printf("Maximum Number is : %d ", max);

	printf("\nManimum Number is : %d ", min);   	
}
int* array()
{
	int* a = (int*)malloc(10*sizeof(int));
	
	for(int i = 0; i < 10; i++)
    {
        printf("Enter Element %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    
    return a;
//}



2. Search the given number in array.  -->

#include <stdio.h>
#include <stdlib.h>
int* find();
void main()
{
    int* res = find();

    int no;
    int i;
    int flag = 0;

    printf("Enter Number You Want To Search: ");
    scanf("%d", &no);

    for(i = 0; i < 10; i++)
    {
        if(res[i] == no)
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

    free(res);
}

int* find()
{
    int* arr = (int*)malloc(10 * sizeof(int));

    for(int i = 0; i < 10; i++)
    {
        printf("Enter Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    return arr;
}



3. Find sum of all numbers.  -->

#include<stdio.h>
#include<stdlib.h>
int* sum();
void main()
{
	int* res = sum();
	
	int i, total = 0;
	
	for ( i =0; i<5 ; i++)
	{
		total = total + res[i];
	}
	printf("Sum Of All Elements Is : %d",total);
}
int* sum()
{
	int* arr = (int*)malloc(5*sizeof(int));
	
	for(int i=0; i<5; i++)
	{
		printf("Enter Element %d :",i);
		scanf("%d",&arr[i]);
	}
	return arr;
}



4.Find odd and even among the numbers.  -->

#include<stdio.h>
#include<stdlib.h>
int* evenodd();
void main()
{
	int* res = evenodd();
	
    printf("Even numbers are: ");

    for(int i = 0; i < 8; i++)
    {
        if(res[i] % 2 == 0)
        {
            printf("%d ", res[i]);
        }
    }

    printf("\nOdd numbers are: ");

    for(int i = 0; i < 8; i++)
    {
        if(res[i] % 2 != 0)
        {
            printf("%d ", res[i]);
        }
    }
}
int* evenodd()
{
	int* arr = (int*)malloc(8*sizeof(int));
	
	for(int i=0; i<8; i++)
	{
		printf("Enter Element %d : ",i);
		scanf("%d",&arr[i]);
	}
	return arr;
//}



5.Print alternate elements in array.  -->

#include<stdio.h>
#include<stdlib.h>
int* alter();
void main()
{
	int* res = alter();
	
	printf("Alternate Numbers Are: ");
	
	for (int i =0; i<8; i=i+2)
	{
		printf("%d ",res[i]);
	}		
}
int* alter()
{
	int* arr = (int*)malloc(8*sizeof(int));
	
	for (int i=0; i<8; i++)
	{
		printf("Enter Element %d : ", i);
		scanf("%d",&arr[i]);
	}
	return arr;
}



6.Accept array and print only prime numbers of array.  -->

#include<stdio.h>
#include<stdlib.h>
int* prime();
void main()
{
	int* res = prime();
    printf("Prime Numbers are: ");

    for(int i = 0; i < 5; i++)
    {
        int flag = 0;

        if(res[i] >= 2)
        {
            for(int j = 2; j < res[i]; j++)
            {
                if(res[i] % j == 0)
                {
                    flag = 1;
                    break;
                }
            }

            if(flag == 0)
            {
                printf("%d ", res[i]);
            }
        }
    }
}
int* prime()
{
	int* arr = (int*)malloc(5*sizeof(int));

    for(int i = 0; i < 5; i++)
    {
        printf("Enter Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    return arr;
}



7.Take two array and add sum in third array
Example-
arr[5]= {1,2, 3, 4,5}
brr[5]={10,20,30, 40, 50}
crr[5]={11,22,33,44,55}  -->

#include<stdio.h>
#include<stdlib.h>
int* sum();
void main()
{
	int arr[5]= {1,2, 3, 4,5};
	
	int brr[5]={10,20,30, 40, 50};
	
	int* crr = sum();

	for ( int i =0; i<5;i++)
	{
		crr[i]=arr[i]+brr[i];
		printf("%d ", crr[i]);
	}
	
}
int* sum()
{
	int* crr = (int*)malloc(5*sizeof(int));
	
	return crr;
}



8. Merge two arrays  -->

#include<stdio.h>
#include<stdlib.h>
int* merge();
void main()
{
	int arr[5]= {1,2, 3, 4,5};
	
	int brr[5]={10,20,30, 40, 50};
	
	int* crr = merge();
	
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
int* merge()
{
	int* crr = (int*)malloc(10*sizeof(int));
	
	return crr;
}



9. Reverse the given array.  

#include <stdio.h>
#include <stdlib.h>
int* rev();
void main()
{
    int* arr = rev();

    printf("Actual Array: ");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    int temp;

    for(int i = 0; i < 5 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }

    printf("\nReverse Array: ");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
}

int* rev()
{
    int* arr = (int*)malloc(5 * sizeof(int));

    for(int i = 0; i < 5; i++)
    {
        printf("Enter Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    return arr;
}



10. Sort the array.  -->

#include<stdio.h>
#include<stdlib.h>
int* sort();
void main()
{
	int* arr = sort();
	
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
int* sort()
{
	int* res = (int*)malloc(5*sizeof(int));
	
	for(int i=0; i<5; i++)
	{
		printf("Enter Element %d : ", i);
		scanf("%d",&res[i]);
	}
	return res;
}














