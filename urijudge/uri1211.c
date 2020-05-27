#include <stdio.h>
#include <string.h>
int main() {
    int N,i;
    char x[201];
    char x2[201];
    while((scanf("%d",&N))!='\0'){
        int maior=0;
        scanf("%s,&x);
        for(i=1;i<=N;i++){
        char *p=x;
           int sub=0;
           scanf("%s",&x2);
           char *p2=x2;
           while(*p!='\0'){
            
            p++;
            p2++;
            if(*p!=*p2)
                sub++;
           }
            if(sub>maior)
                maior=sub;
            }
        printf("%i\n",maior);    
           
        }
       
     
	return 0;
}
