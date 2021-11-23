#include<stdio.h>
#include<math.h>
#include <stdbool.h>
#include "my_mat.h"


int mat[10][10];

int min(int a, int b){
    if(a < b){
        return a;
    }
    return b;
}

void A(){
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d" , &mat[i][j]);
        }
        
    }
     
     for (int k = 0; k < 10; k++)
     {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                mat[i][j] = min(mat[i][j] , mat[i][k] + mat[k][j]);
            }
        }
    }

}
bool B(int i, int j){
    if(mat[i][j] == 0){
        return false;
    }
    return true;
}

int C(int i, int j){
    if (!B(i,j))
    {
        return -1;
    }
    
    return mat[i][j]; 
}