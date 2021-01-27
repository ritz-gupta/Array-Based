#include<stdio.h>
main()
//program for finding mean of 10 numbers
{
	int i,num,sum=0,count=1;
	float mean;
	printf("How many numbers do you wish to enter?\n");
	scanf("%d",&num);
	int average[num];
	for(i=0;i<=(num-1);i++){
		printf("Enter the %d number\n",count++);
		scanf("%d",&average[i]);
		sum+=average[i];
	}
	mean=(float)sum/num;
	printf("The average of the %d numbers you entered is %f",num,mean);
	return 0;	
}
