#include<stdio.h>

//We need the sum of terms at position 1,2  and 3,4 and so on
//If the number 0f entries is odd, double the last term

int main()
{
	int n,i=0,sum=0;
	printf("How many numbers do you wish to enter?\n");
	scanf("%d",&n);
	int rem=n%2;
	int numbers[n];
	for(i=0;i<n;i++){
		int j=i+1;
		printf("Enter the number %d\n",j);
		scanf("%d",&numbers[i]);
	}
	if(n%2==0){											//for n being even
		for(i=0;i<n;i=i+2){
		int j=i+1;
		sum=numbers[i]+numbers[i+1];
		printf("The sum of element %d and element %d is %d\n",j,j+1,sum);
	}
	}
	else {
		for(i=0;i<n-1;i=i+2){							//n being odd
		int j=i+1;
		sum=numbers[i]+numbers[i+1];
		printf("The sum of element %d and element %d is %d\n",j,j+1,sum);
	}
		int n_2x=n*2;									//double of last element
		printf("The double of last element is %d",n_2x);
	}
	return 0;
}
