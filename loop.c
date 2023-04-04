#include <stdio.h>

int main(){
    
    // For Loop
    printf("For loop\n");
    int i;
    for(i=0;i<10;i++){
        printf("%d\n",i);
    }
    
    // while loop
    printf("While loop\n");
    i=0;
    while (i<10)
    {
        printf("%d\n",i);
        i++;
    }

    // do while loop
    printf("Do while loop\n");
    i=10;
    do{
        printf("%d\n",i);
        i--;
    }while(i>=0);
    
}