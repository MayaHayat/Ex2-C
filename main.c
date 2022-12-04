#include<stdio.h>
#include"my_mat.h"

int main(){

    char choice;
    
    while (scanf("%c", &choice)!= EOF){
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
        if (choice == 'D'){
            return 0;
        }
    }
    return 0;
}