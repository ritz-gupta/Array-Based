// The marks of students are entered in Physics, Chemistry, Maths.
// We need to find the sum total of marks of the student who scored maximum marks in any of the subjects.
// Also, report if the same student has maximum marks in two or more subjects

#include<stdio.h>

int maxfn(int x,int y)
{
	int max;
	if(x>y){
		max=x;
	}
	else {
		max=y;
	}
	return max;
}
int main()
{
	int n,i;
	int temp_phy,temp_chem,temp_math;				//These are for temoprarily storing the maximas 
	int max_phy=0,max_chem=0,max_math=0;			//These are the actual maximum marks 
	printf("How many students are there?\n");
	scanf("%d",&n);
	int phy[n],chem[n],math[n];
	int a,b,c;										//Used them to check if same student has max marks in any subject
	for(i=0;i<n;i++){								//Entering the marks of stidents
		int j=i+1;
		printf("Enter the marks of student %d in Physics\n",j);
		scanf("%d",&phy[i]);
		printf("Enter the marks of student %d in Chemistry\n",j);
		scanf("%d",&chem[i]);
		printf("Enter the marks of student %d in Maths\n",j);
		scanf("%d",&math[i]);
	}
	for(i=1;i<n;i++){
		temp_phy=maxfn(phy[i-1],phy[i]);
		if(temp_phy>max_phy){
			max_phy=temp_phy;
		}
		temp_chem=maxfn(chem[i-1],chem[i]);
		if(temp_chem>max_chem){
			max_chem=temp_chem;
		}
		temp_math=maxfn(math[i-1],math[i]);
		if(temp_math>max_math){
			max_math=temp_math;
		}
	}
	printf("\n");
	for(i=0;i<n;i++){								//Finding who scored the maximum marks
		if(max_phy==phy[i]){
			a=i+1;
			printf("The maximum marks in Physics is %d scored by student %d\n",max_phy,a);
			printf("The total marks scored by student %d is %d\n\n",a,(phy[i])+chem[i]+math[i]);
		}
		if(max_chem==chem[i]){
			b=i+1;
			printf("The maximum marks in Chemistry is %d scored by student %d\n",max_chem,b);
			printf("The total marks scored by student %d is %d\n\n",b,(phy[i])+chem[i]+math[i]);
		}
		if(max_math==math[i]){
			c=i+1;
			printf("The maximum marks in Maths is %d scored by student %d\n",max_math,c);
			printf("The total marks scored by student %d is %d\n\n",c,(phy[i])+chem[i]+math[i]);
		}
	}
	printf("\n");

	//Checking if the same student scored highest marks in two or more subject
	
	if((a==b)&&(a!=c)){
		printf("The maximum marks in Physics and Chemistry is scored by the same student who is student %d\n",a);
	}
	if((a==c)&&(a!=b)){
		printf("The maximum marks in Physics and Maths is scored by the same student who is student %d\n",a);
	}
	if((b==c)&&(a!=c)){
		printf("The maximum scored in Chemistry and Maths is scored by the same student who is student %d\n",b);
	}
	if((a==b)&&(b==c)){
		printf("The maximum marks in all three subjects in scored by the same student who is student %d\n",a);
	}
	else{
		printf("The maximum marks in all subjects is scored by different students\n");
	}
	return 0;
}
