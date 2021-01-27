#include<stdio.h>
//getting a sorted array in ascending or descending order
main()
{
	int num,i,j;
	printf("Enter the number of elements in array: ");
	scanf("%d",&num);
	int numbers[num];
	for(i=0;i<num;i++){
		printf("Enter element %d: ",i+1);
		scanf("%d",&numbers[i]);
	}
	int choice;
	printf("\nDo you want to see the sorted array in ascending order or descending order\n\nFor Ascending order: Press 1\nFor Descending order: Press 2\nFor both: Press 3\n\n");
	scanf("%d",&choice);
	if(choice==1){									//ascending order
		for(i=0;i<num;i++){
			for(j=i+1;j<num;j++){					//second loop is used to make sure that I check every number after i
				if(numbers[i]>numbers[j]){
					int a=numbers[i];				//used a new variable to store the value of greater number
					numbers[i]=numbers[j];			//assigned the smaller number to smaller place
					numbers[j]=a;					//assigned the bigger number to bigger place
				}
			}
		}
		printf("\nSorted Array in Ascending order\n\n");
		for(i=0;i<num;i++){
			printf("Element %d is: %d\n",i+1,numbers[i]);
		}
	}
	else if(choice==2){								//descending order 
		for(i=0;i<num;i++){
			for(j=i+1;j<num;j++){					//second loop is used to make sure that u check every number after i
				if(numbers[i]<numbers[j]){
					int a=numbers[i];				//used a new variable to store the value of greater number
					numbers[i]=numbers[j];			//assigned the bigger number to smaller place
					numbers[j]=a;					//assigned the smaller number to bigger place
				}
			}
		}
		printf("\nSorted Array in Descending order\n\n");
		for(i=0;i<num;i++){
			printf("Element %d is: %d\n",i+1,numbers[i]);
		}
	}
	else if(choice==3){								//printing both
		for(i=0;i<num;i++){
			for(j=i+1;j<num;j++){					//second loop is used to make sure that u check every number after i
				if(numbers[i]>numbers[j]){
					int a=numbers[i];				//used a new variable to store the value of greater number
					numbers[i]=numbers[j];			//assigned the smaller number to smaller place
					numbers[j]=a;					//assigned the bigger number to bigger place
				}
			}
		}
		printf("\nSorted Array in Ascending order\n\n");
		for(i=0;i<num;i++){
			printf("Element %d is: %d\n",i+1,numbers[i]);
		}
		
		for(i=0;i<num;i++){
			for(j=i+1;j<num;j++){					//second loop is used to make sure that u check every number after i
				if(numbers[i]<numbers[j]){
					int a=numbers[i];				//used a new variable to store the value of greater number
					numbers[i]=numbers[j];			//assigned the bigger number to smaller place
					numbers[j]=a;					//assigned the smaller number to bigger place
				}
			}
		}
		printf("\nSorted Array in Descending order\n\n");
		for(i=0;i<num;i++){
			printf("Element %d is: %d\n",i+1,numbers[i]);
		}
	}
	else{
		printf("Oops!\nYou haven't enetered any valid input\nThe program has been exited\n");
	}
	return 0;
}
