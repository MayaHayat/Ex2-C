#include<stdio.h>
#include"my_mat.h"

int main(){

    char choice;
    
    while (scanf("%c", &choice)!= 'D'){
        if (choice == 'A'){
            createMat();
            break;
        } 
        if (choice == 'B') {
            isTherePath();
            break;
        }
        if (choice == 'C'){
            shortestPath();
            break;
        } 
    }
    return 0;
}