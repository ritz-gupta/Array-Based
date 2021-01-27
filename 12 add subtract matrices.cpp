#include<stdio.h>

//Program to add or subtract matrices

int main()
{
	int row_1,col_1,row_2,col_2;
	printf("Enter the number of rows in first matrix: ");
	scanf("%d",&row_1);
	printf("Enter the number of columns in first matrix: ");
	scanf("%d",&col_1);
	printf("The order of matrix 1 is %d x %d\n",row_1,col_1);
	float matrix_1[row_1][col_1];
	int i=0,j=0;
	for(i=0;i<row_1;i++){
		for(j=0;j<col_1;j++){
			printf("Enter the element at %d,%d : ",i+1,j+1);
			scanf("%f",&matrix_1[i][j]);
		}
	}
	printf("Enter the number of rows in second matrix: ");
	scanf("%d",&row_2);
	printf("Enter the number of columns in second matrix: ");
	scanf("%d",&col_2);
	float matrix_2[row_2][col_2];
	int x,y;
	for(x=0;x<row_2;x++){
		for(y=0;y<col_2;y++){
			printf("Enter the element at %d,%d : ",x+1,y+1);
			scanf("%f",&matrix_2[x][y]);
		}
	}
	if((row_1==row_2)&&(col_1==col_2)){
		printf("\nThe matrices are compatible for addition and subtraction");
		printf("\nTo add: Press 1\nTo subtract: Press 2\n");
		int a;																			//To know what we want to do with the matrices
		scanf("%d",&a);
		printf("\n");
		if(a==1){
			for(i=0;i<row_1;i++){
				for(j=0;j<col_1;j++){
					printf("%0.2f  ",matrix_1[i][j]+matrix_2[i][j]);
				}
				printf("\n");
			}
		}
		else if(a==2){
			for(i=0;i<row_1;i++){
				for(j=0;j<col_1;j++){
					printf("%0.2f  ",matrix_1[i][j]-matrix_2[i][j]);
				}
				printf("\n");
			}
		}
		else printf("You have not entered any valid input\n");
	}
	else{
		printf("\nThe matrices are not compatible for addition or subtraction");
	}
	return 0;
}
