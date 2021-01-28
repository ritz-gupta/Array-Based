#include<stdio.h>

//Finding number of positive,negative,even and odd integers
//Skip to line 41 for main

/*
positive_no(int a)			//function for finding positive number
{
	int count=0;
	if(a>0){
		count++;
	}
	return count;
}
even_no(int b)
{
	int even_count=0;
	int rem=b%2;
	if((b>0)&&(rem==0)){
		even_count++;
	}
}
odd_no(int c)
{
	int odd_count=0;
	int rem=c%2;
	if((c>0)&&(rem==1)){
		odd_count++;
	}	
}
negative_no(int d)			//function for finding negative number
{
	int neg_count=0;
	if(d<0){
		neg_count++;
	}
	return neg_count;
}
*/

main()
{
	int num,i=0;								// i takes the element number
	int POS=0,NEG=0,EVEN=0,ODD=0;
	printf("How many numbers do you wish to type?\n");
	scanf("%d",&num);
	int numbers[num];
	for(i=0;i<num;i++){
		int j=i+1;
		printf("Enter the number %d\n",j);
		scanf("%d",&numbers[i]);
		if(numbers[i]<0){						//condition for being -ve
			NEG++;
		}
		int rem=numbers[i]%2;
		if((numbers[i]>0)&&(rem==0)){			//condition for being +ve and even
			POS++;
			EVEN++;
		}
		if((numbers[i]>0)&&(rem==1)){			//condition for being +ve and odd
			POS++;
			ODD++;
		}
	}
	printf("\nThe number of negative numbers in the numbers typed are %d\n",NEG);
	printf("The number of positive numbers in the numbers typed are %d\n",POS);
	printf("The number of odd numbers in the numbers typed are %d\n",ODD);
	printf("The number of even numbers in the numbers typed are %d\n",EVEN);
	return 0;
}
