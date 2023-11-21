#include<stdio.h>
int main()
{
	int age,birthyear;
	printf("Enter your birthyear :");
	scanf("%d",&birthyear);
	
	age=2023-birthyear;
	printf("your age is: %d\n",age);

	if(age < 18) 
	{
		printf("not available for driving license");
	}
	else if(age > 18)
	{
		printf("available for driving license");
	}
	else if(age==18)
	{
		printf("go to driving course");
	}
	return(0);
	
	
	
}
