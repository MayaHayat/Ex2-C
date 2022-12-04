#include<stdio.h>
#include"my_mat.h"

int main(){

    char choice;
    
    while (scanf("%c", &choice)!= 'D'){
        if (choice == 'A'){
            createMat();
            continue;
        } 
        if (choice == 'B') {
            isTherePath();
            continue;;
        }
        if (choice == 'C'){
            shortestPath();
            continue;
        } 
    }
    return 0;
}