#include "lib.h"
float max( const float  num[], int d){
    float c = num[0];
    for (int i=1; i<d-1;i++){
        float s=num[i];
        float b=num[i+1];
        if(s>b){
            if(c<s){
                c=s;
            }
        }
    }
    return c;
}
