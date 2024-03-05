#include <stdio.h>
int main()
{ 
    int i=0,j=0;
    for(int i=1;i<=7;i++) {
        for(int j=1;j<=7;j++) {
            if(j==1||j==7||i==6 && j==2||i==5 && j==3||i==4 && j==4||i==5 && j==5||i==6 && j==6||i==7 && j==2||i==7 && j==6) {
                printf("*");
            } else 
                printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}