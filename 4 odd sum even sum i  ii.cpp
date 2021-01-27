#include<stdio.h>

//Finding sum of enteries at odd places
//Finding sum of enteries at even places

int main()
{
	int num,i=0;								// i takes the element number
	int odd_sum=0,even_sum=0;
	printf("How many numbers do you wish to type?\n");
	scanf("%d",&num);
	int numbers[num];							//array is defined
	for(i=0;i<num;i++){
		int j=i+1;
		printf("Enter the number %d\n",j);
		scanf("%d",&numbers[i]);
		int rem=j%2;
		if(rem==0){
			even_sum+=numbers[i];
		}
		else{
			odd_sum+=numbers[i];
		}
	}
/*
	IF ASKED TO DO IT IN DIFFERENT LOOPS
	UN-COMMENT THIS WHOLE SET UP
	
	for(i=0;i<num;i=i+2){
		odd_sum+=numbers[i];
	}
	for(i=1;i<num;i=i+2){
		even_sum+=numbers[i];
	}
*/
	
	printf("The sum of terms at odd places is %d\n",odd_sum);
	printf("The sum of terms at even places is %d\n",even_sum);
	return 0;
}
