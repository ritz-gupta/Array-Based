#include<stdio.h>
main()
{
	int row,col;
	printf("Rows in the matrix --> ");
	scanf("%d",&row);
	printf("Columns in the matrix --> ");
	scanf("%d",&col);
	printf("\n");
	float matrix[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("Element at %d %d --> ",i+1,j+1);
			scanf("%f",&matrix[i][j]);
		}
	}
	float transpose_matrix[col][row];
	printf("\nThe transpose of matrix is \n\n");
	int *a=&row;										 
	row=col;
	col=*a;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(matrix[j][i]<10){
			printf(" %0.2f  ",matrix[j][i]);
			}
			else printf("%0.2f  ",matrix[j][i]);
		}
		printf("\n");
	}
	return 0;
}
