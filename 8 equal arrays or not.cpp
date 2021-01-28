#include<stdio.h>

//To check whether arrays are equal or not

int main()
{
	int n,num,i=0,count=0;
	printf("How many numbers do you wish to enter in first array?\n");
	scanf("%d",&n);
	int array_1[n];
	for(i=0;i<n;i++){
		printf("Enter number %d : ",i+1);
		scanf("%d",&array_1[i]);
	}
	printf("\nHow many numbers do you wish to enter in second array?\n");
	scanf("%d",&num);
	int array_2[num];
	for(i=0;i<num;i++){
		printf("Enter number %d : ",i+1);
		scanf("%d",&array_2[i]);
	}
	if(n==num){
		for(i=0;i<n;i++){
			if(array_1[i]=array_2[i]){
				count++;
			}
		}
		if(count==n){
			printf("The arrays are equal\n");
		}
	}
	else printf("\nThe number of enteries in both arrays aren't equal\nHence the arrays aren't equal\n");
	return 0;
}
