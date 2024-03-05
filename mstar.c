#include <stdio.h>
int main()
{ 
    int i=0,j=0;
    for(int i=1;i<=7;i++) {
        for(int j=1;j<=7;j++) {
            if(j==1||j==7||i==1 && j==2 || i==2 && j==3|| i==3 && j==4||i==2 && j==5||i==1 && j==6) {
                printf("*");
            } else 
                printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}