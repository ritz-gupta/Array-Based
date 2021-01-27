#include<stdio.h>
main()
{
	int n,i=0,sum;
	printf("How many numbers do you wish to enter?\n");
	scanf("%d",&n);
	int rem=n%2;
	int numbers[n];
	for(i=0;i<n;i++){
		int j=i+1;							//using j to show which number is being entered
		printf("Enter the number %d\n",j);
		scanf("%d",&numbers[i]);
	}
	if(rem==0){
		for(i=0;i<(n/2);i++){
			int j=i+1,x=n-1-i;
			sum=numbers[i]+numbers[x];
			printf("The sum of element %d from start and end is %d\n",j,sum);
		}
	}
	else{
		for(i=0;i<(n-1)/2;i++){
			int j=i+1,x=n-1-i;
			sum=numbers[i]+numbers[x];
			printf("The sum of element %d from start and end is %d\n",j,sum);
		}
		printf("As n was odd\n");
		printf("The middle term is %d\n",numbers[(n-1)/2]);
	}
	return 0;
}
