#include <stdio.h>
int fib(int);
int num_calls=0; 
int main() {
    int N,X,result;
	scanf("%i",&N);
	while(N--){
	    scanf("%i",&X);
	    result=fib(X);
	    printf("fib(%i) = %i calls = %i\n",X,num_calls-1,result);
	    num_calls=0;
	}
    return 0;
}
int fib(int p){
    if(p<=1){
        num_calls++;
        return p;
    }
    else{
        num_calls++;
        return fib(p-1)+fib(p-2);
    }
}
