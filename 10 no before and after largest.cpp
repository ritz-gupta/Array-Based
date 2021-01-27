#include<stdio.h>

// This program is to find the number of elements entered before & after the largest element

maxfn(int x,int y)
{
	int max;
	if(x>y){
		max=x;
	}
	else {
		max=y;
	}
	return max;
}
minfn(int x,int y)
{
	int min;
	if(x<y){
		min=x;
	}
	else {
		min=y;
	}
	return min;
}
main()
{
	int num,large=0,count=1,i=0,j;				//we can't find the largest if all numbers are less than 0 by using this 
	int temp_large; 							//These are for temporarily storing the largest number
	printf("This program calculates largest number only for positive integers.\n");
	printf("From how many numbers do you wish to get the largest number?\n");
	scanf("%d",&num);
	printf("\n");
	int numbers[num];
	for(i=0;i<num;i++){
		printf("Enter the number %d\n",count++);
		scanf("%d",&numbers[i]);
	}
	for(i=1;i<num;i++){
		temp_large=maxfn(numbers[i-1],numbers[i]);	
		if(temp_large>large){
			large=temp_large;
		}
	}
	printf("\nLargest number: %d\n\n",large);
	for(i=0;i<num;i++){
		if(large==numbers[i]){
			printf("Largest number was entered at position: %d\n",i+1);
			printf("Numbers entered before the largest number: %d\n",i);
			printf("Numbers entered after the largest number: %d\n",num-i-1);
		}
	}
	int small=32000,temp_small;
	printf("\nDo you wish to repeat this for smallest number also?\n(Works for numbers less than 32000)\n\nIf yes,then press 1\nElse press 2 to exit the program\n");
	scanf("%d",&j);
	if(j==1){
		for(i=1;i<num;i++){
			temp_small=minfn(numbers[i-1],numbers[i]);
			if(temp_small<small){
				small=temp_small;
			}
		}
	printf("\nSmallest number: %d\n\n",small);
		for(i=0;i<num;i++){
			if(small==numbers[i]){
				printf("Smallest number was entered at position: %d\n",i+1);
				printf("Numbers entered before the smallest number: %d\n",i);
				printf("Numbers entered after the smallest number: %d\n",num-i-1);
			}
		}
	}
	else if(j==2){
		printf("You are trying to exit the program\nPress any key to exit the program");
	}
	else printf("You didn't enter any acceptable value.\nThe program had ended.");
	return 0;
}
