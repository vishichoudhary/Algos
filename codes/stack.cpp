#include<bits/stdc++.h>
int main(){
 
	 int stack[100], dim=0, top;
	while(1){
		printf("Press 1 to add a number in stack\n");
		printf("Press 2 to add a remove in stack\n");
		printf("Press 3 to consult the top in stack\n");
		printf("Press 4 to exit\n");
		scanf("%d", &top);
		if(top==1){
			scanf("%d", &top);
			if(dim==100) {
				printf("The stack is full!\n"); continue;		
			}
			stack[dim]=top;
			dim++;
			printf("%d is added in stack!\n", top);
		}
		if(top==2){
			if(dim==0) {printf("The stack is empty\n"); continue;}
			scanf("%d", &top);
			stack[dim]=top;
			dim--;
			printf("%d is removed in stack!\n", stack[dim]);
		}
		if(top==3){
			if(dim==0) {printf("The stack is empty\n"); continue;}
			printf("%d is the top in stack!\n", stack[dim-1]);
		}
		if(top==4) return 0;
	}
}
