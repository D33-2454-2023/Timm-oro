/*
Do-while loop
Author :Parsilanke Komoi
Reg : D33-2454-2023
Date :31/03/2025
*/
#include <stdio.h>

int main(){
 int i=1; //start
 
 do{
    printf("Number is: %d and cube of %d is: %d\n", i, i, i * i * i);
        i++; //step
    
    
    
    }while(i<=100); //stop
    return 0;
}