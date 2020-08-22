/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include<stdio.h>
int main()
{
	int i, num;
	char s[15];
	scanf("%d",&i);
	if((i>=0) && (i<=10))
	{
		num = i;
	}
	scanf("\n");
	scanf("%[^\n]%*c", s);

	printf("%d\n%s",num*2,s);

	return 0;
}