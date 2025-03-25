addition function
/*
Author:Parsilanke Komoi
Reg no:D33-2454-2023
Date:24/3/2025
*/
#include<stdio.h> //printf(),scanf()

//function definition
int addition(int x, int y, int z){
    int ans;
    ans=x+y+z;
    return ans;
    }
    int main() {
       //variable declaration
       int result,result_1;
       
       //function calling
       result= addition(10,20,30);
       result_1= addition(200,530,698);
       
       printf("The ans is %d\n",result);
       printf("Result 1 is%d\n",result_1);
    
    return 0;
    }
    
