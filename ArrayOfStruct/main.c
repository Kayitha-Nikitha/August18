#include<stdio.h>
#include<stdlib.h>

//structure declaration
struct s{
	char name[10];
	float cgpa;
	char branch[10];
};

struct s* count();
void insert(struct s*);
void print(struct s*);
int n;

int main(){
	//DMA struct array
	register int i;
	struct s *str=count(1);
	insert(str);
	print(str);
	return 0;
}

//DMA struct array
struct s* count(){

	printf("Enter the student count\n");
	scanf("%d",&n);
	return (struct s*)malloc(sizeof(struct s)*n);
}

void insert(struct s *p){
	int i,j;
	printf("Enter name: Enter branch: Enter CGPA\n");
	for(i=0;i<n;i++)
		scanf("%s %s %f",(p+i)->name,(p+i)->branch,&(p+i)->cgpa);
	return;
}

void print(struct s *q){
	int i;
	printf("Student details are \n");
	for(i=0;i<n;i++)
		printf("Name: %s\tBranch: %s\tCGPA: %f\n",(q+i)->name,(q+i)->branch,(q+i)->cgpa);
	return;
}
