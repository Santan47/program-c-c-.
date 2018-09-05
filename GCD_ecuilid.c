#include<stdio.h>
#include<stdlib.h>
int GCD(int a,int b);
int main(){
	int a,b;
	printf("Enter the number for which you want to find GCD: ");
	scanf("%d%d",&a,&b);
	printf("%d",GCD(a,b));
	return 0;
}
int GCD(int a , int b){
	if(a==b){
		return a;
	}
	if(a%b==0)
		return b;
	if(b%a==0)
		return a;
	if(a>b)
		return(GCD(a%b,b));
	else
		return(GCD(a,b%a));
}
