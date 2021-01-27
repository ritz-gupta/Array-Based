#include<stdio.h>

// Program for finding the second largest element in an array

int main()
{
	int num,count=1,i=0,j;
	printf("From how many numbers do you wish to get the second largest number?\n");
	scanf("%d",&num);
	int numbers[num];
	for(i=0;i<num;i++){
		printf("Enter the number %d\n",count++);
		scanf("%d",&numbers[i]);
	}
	for(i=0;i<num;i++){
		for(j=i+1;j<num;j++){
			if(numbers[i]>numbers[j]){
				int a=numbers[i];
				numbers[i]=numbers[j];
				numbers[j]=a;
			}
		}
	}
	printf("\nLargest element: %d\n",numbers[num-1]);
	printf("Second largest element: %d",numbers[num-2]);
	return 0;
}
