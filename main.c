#include<stdio.h>
#include"my_mat.h"

int main(){

    char choice;
    
    while (scanf("%c", &choice)!= EOF){
        if (choice == 'A'){
            createMat();
        } 
        if (choice == 'B') {
            isTherePath();
        }
        if (choice == 'C'){
            shortestPath();
        } 
        if (choice == 'D'){
            return 0;
        }
    }
    return 0;
}