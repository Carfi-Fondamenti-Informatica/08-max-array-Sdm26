#include "lib.h"
float max(float num[],int d){
    float a = num[0];

    for(int i=1;i<d;i++){
     if(num[i] > a){
         a = mat[i];
        }
    }
    return a;
}
