#include<stdio.h>

//works well for square matrices 
//Not for rectangular matrices

int main()
{
	int row_1,row_2,col_1,col_2;
	printf("The number of rows and columns in the first matrix are\n");
	scanf("%d %d",&row_1,&col_1);
	printf("The order of first matrix is %d x %d\n",row_1,col_1);
	float matrix_1[row_1][col_1];
	int i,j;
	for(i=0;i<row_1;i++){																						//Entering the first matrix
		for(j=0;j<col_1;j++){
			printf("Enter element at %d row  %d column --> ",i+1,j+1);					
			scanf("%f",&matrix_1[i][j]);
		}
	}
	printf("\nFirst matrix\n");																				//Printing the first matrix
	for(i=0;i<row_1;i++){
		for(j=0;j<col_1;j++){
			printf("%0.2f  ",matrix_1[i][j]);
		}
		printf("\n");
	}
	printf("\n\nThe number of rows and columns in the second matrix are\n");
	scanf("%d %d",&row_2,&col_2);
	printf("The order of second matrix is %d x %d\n",row_2,col_2);
	float matrix_2[row_2][col_2];
	int x,y;
	for(x=0;x<row_2;x++){																							//Entering the second matrix
		for(y=0;y<col_2;y++){
			printf("Enter element at %d row %d column --> ",x+1,y+1);
			scanf("%f",&matrix_2[x][y]);
		}
	}
	printf("\nSecond matrix\n");																				//Printing the second matrix
	for(i=0;i<row_2;i++){
		for(j=0;j<col_2;j++){
			printf("%0.2f  ",matrix_1[i][j]);
		}
		printf("\n");
	}
	if(col_1==row_2){
		printf("\nThe matrices are compatible for multiplication\n\nThe resultant matrix is\n\n");
		float sum=0;
		for(i=0;i<row_1;i++){																								//Multiplying the matrices Taking row 1 
			for(j=0;j<col_1;j++){																							//Taking col 1
				for(y=0;y<col_2;y++){																						//Taking col 2
					for(x=0;x<row_2;x++){																					//Taking row 2
						sum+=(matrix_1[i][j]*matrix_2[x][y]);
					}
					break;
				}
				if(sum>10){
					printf("%0.2f  ",sum);
					sum=0;
				}
				else {
					printf(" %0.2f  ",sum);
					sum=0;
				}
			}
			printf("\n");
		}
	}
	else{
		printf("The matrices aren't compatible for multiplication\n");
	}
	return 0;
}
