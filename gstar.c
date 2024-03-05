#include <stdio.h>
int main()
{ 
    int i=0,j=0;
    for(int i=1;i<=7;i++) {
        for(int j=1;j<=7;j++) {
            if(i==1||j==1||i==4 && j>=4||j==7 &&  i>=4||i==7) {
                printf("*");
            } else 
                printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}
    