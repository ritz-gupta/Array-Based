#include<stdio.h>
//To find the largest and the smallest number
int main()
{
	int num,count=1,i=0,j,x;
	printf("From how many numbers do you wish to get the largest number?\n");
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
	printf("Largest number: %d\n",numbers[num-1]);
	printf("\nDo you wish to see the smallest number also?\nIf yes,then press 1\nElse press 2 to exit the program\n");
	scanf("%d",&x);
	if(x==1){
		printf("Smallest number: %d",numbers[0]);
	}
	else if(j==2){
		printf("You are trying to exit the program");
	}
	else printf("You didn't enter any acceptable value.\n");
	return 0;
}
