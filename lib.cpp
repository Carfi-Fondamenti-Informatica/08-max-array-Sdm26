#include "lib.h"
float max(float num[],int n){
    float a = num[0];

    for(int i=1;i<n;i++){
     if(num[i] > a){
         a = mat[i];
        }
    }
    return a;
}
