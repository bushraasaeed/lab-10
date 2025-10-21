#include<stdio.h>
int main(){
	int std,sub;
	printf("enter number of students: ");
	scanf("%d",&std);
	printf("enter number of subjects: ");
	scanf("%d",&sub);
	int data[std][sub];
	for(int i=0;i<std;i++){
		for(int j=0;j<sub;j++){
				printf("enter marks of student %d subject %d: ",i+1,j+1);
				scanf("%d",&data[i][j]);
		}
	}
	printf(" ORIGNAL MATRIX \n");
		for(int i=0;i<std;i++){
		for(int j=0;j<sub;j++){
		printf("%d\t",data[i][j]);	
		}
			printf("\n");
	}

	printf("TRANSPOSED MATRIX \n");
	for(int i=0;i<sub;i++){
			for(int j=0;j<std;j++){
				printf("%d\t",data[j][i]);	
			}
			printf("\n");
		}
		
	return 0;
}