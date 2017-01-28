#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int num; 
    scanf("%d",&num);
    int matrix[num][num];
    
    int left_diag = 0;
    int right_diag = 0;

    for(int i = 0; i < num; i++){
       for(int j = 0; j < num; j++){
          scanf("%d",&matrix[i][j]);
          if(i == j){
              left_diag += matrix[i][j];
          }
          if(i+j == num-1){
              right_diag += matrix[i][j];
          }
       }
    }
    printf("%d", abs(left_diag - right_diag));
    return 0;
}
