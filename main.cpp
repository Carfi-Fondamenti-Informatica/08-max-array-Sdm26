#include <iostream>
#incude "lib.h"
using namespace std;
int main(){
     int d;
    cin>>d;
    float num[d];
for(int i=0;i<d;i++){
    cin>>num[i];
}
float f= max(num,d);
cout<<f;
  return 0;
}
