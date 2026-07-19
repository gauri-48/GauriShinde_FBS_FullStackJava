1.Write a C program to add two integers and display the result -->

void main()
{
	int a, b;
	a = 23;
	b = 17;
	
	int sum = a + b;
	
	printf("Sum = %d ", sum);
}




2.Write a C program to find the area of a circle. -->

void main()
{
	float PI = 3.14;
	int r = 4;
	
	float area = PI * r * r;
	
	printf("Area Of Circle = %lf", area);
}



3.Write a C program to convert temperature from Celsius to Fahrenheit using the formula: F = (C *9/5) + 32 -->

void main()
{
	float C = 23.4;
	
	float F = ( C * 9/5 ) + 32;
	
	
	printf("Temperature %lf from Celsius to fahrenheit is : %lf ", C,F);
}



4.Write a C program to swap two numbers using a temporary third variable. -->

void main()
{
	int a, b, temp;
	a = 40;
	b = 80;
	
	printf("Before Swapping a and b is : %d and %d \n", a,b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("After Swapping a and b is : %d and %d ", a,b);
	
}



5.Write a C program to input five numbers and find their average. -->

void main()
{
	int a, b, c, d, e;
	a = 10;
	b = 40;
	c = 30;
	d = 100;
	e = 80;
	
	int Average = ( a + b + c + d + e)/5;
	
	printf("Average of five numbers ( %d, %d, %d, %d, %d) is : %d ", a, b, c, d, e, Average);
}



6.Write a C to find the square and cube of a given number. -->

void main()
{
	float num, sq, cube;
	num = 4;
	
	sq = num * num;
	printf("Square of %lf is : %lf\n", num, sq);
	
	cube = num * num * num;
	printf("Cube of %lf is : %lf", num, cube);
	
}



7.Write a C program to convert given minutes into hours and remaining minutes. -->

void main()
{
	int min;
	
	min = 156; 
	
	int hr = min/60;
	int rem = min%60;
	
	printf("%d Minutes is %d Hour and %d Minutes", min,hr,rem);
}



8.Write a C program to input the length and width of a rectangle and find its perimeter. -->

void main()
{
	float length, width, peri;
	
	length = 20.9;
	width = 10.3;
	
	peri = 2 * (length + width);
	
	printf("Perimeter Of Rectange is : %lf ", peri);
}



9.Write a C program to input the base and height of a triangle and calculate its area. -->

void main()
{
	float base, height, area;
	base = 6.5;
	height = 8.1;
	
	area = 0.5 * base * height ;
	
	printf(" Area Of Triangle Is : %lf", area);
}



10.Write a C program to input marks of five subjects, find the total marks, and calculate the percentage. -->

void main()
{
	float maths, sci, eng, marathi, san, total;
	maths = 93;
	sci = 83;
	eng = 86;
	marathi = 89;
	san = 91; 
	
	total = maths + sci + eng + marathi + san;
	
	float percentage = ( total / 500 ) * 100 ;
	
	printf("Total Marks : %f\n", total);
	
	printf("Percentage : %f", percentage);
	
}






