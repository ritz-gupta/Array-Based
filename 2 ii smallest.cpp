#include<stdio.h>
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
	int num,count=1,i=0,temp,small=32767;	//given the highest possible value for int in this case
	printf("From how many numbers do you wish to get the smallest number?\n");
	scanf("%d",&num);
	int numbers[num];
	printf("The program only works for numbers less than 32768\n");
	for(i=0;i<num;i++){
		printf("Enter the %d number\n",count++);
		scanf("%d",&numbers[i]);
	}
	for(i=1;i<num;i++){
		temp=minfn(numbers[i-1],numbers[i]);
		if(temp<small){
			small=temp;
		}
	}
	printf("The smallest number among the entered %d numbers is %d",num,small);
	return 0;
}
