#include<stdio.h>
void maximum(int number[]){
	int i,j,a,b,min_index;
	for(i=0;i<5;++i){
		min_index = i;
		for(j=i;j<5;++j){
			if(number[j]<number[min_index]){
				min_index=j;
			}
		}
		a=number[i];
		b=number[min_index];
		number[i]=b;
		number[min_index]=a;
	}
	printf("%d",number[4]);
}
int main(){
	void maximum(int number[5]);
	int num[5];
	int i;
	printf("Enter number 5 number : ");
	for(i=0;i<5;i++){
		scanf("%d",&num[i]);
	}
	maximum(num);
}

