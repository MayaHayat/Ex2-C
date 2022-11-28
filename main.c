#include<stdio.h>
#include"my_mat.h"

int main(){

    char choice;
    
    while (scanf("%c" , &choice)!= 'D'){
        if (choice == 'A') createMat();
        if (choice == 'B') isTherePath();
        if (choice == 'C') shortestPath();
    }



    return 0;
}