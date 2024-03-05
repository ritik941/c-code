#include <stdio.h>
int main()
{ 
    int i=0,j=0;
    for(int i=1;i<=7;i++) {
        for(int j=1;j<=7;j++) {
            if(i==1||j==7||i==7||j==1) {
                printf("*");
            } else 
                printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}