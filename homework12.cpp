#include<stdio.h>
#include<stdlib.h>

int main() {
    
 int f,u,c;
    int k=5;

    for(f=k;f>=1;f--){
        for(u=k;u>f;u--){
            printf(" ");
        }
        for(c=1;c<=f;c++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
 system("PAUSE");
    return 0;
}
