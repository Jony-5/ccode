//g++ sin0.cpp -o sin0.#ifndef

#include <iostream>
#include <cmath>
using namespace std;

int main(){
  double PI=3.14159265;
  double rad = 0;
  double t, result=0; //theta in terms of degrees
    for ( t=0; t<=360; t = t+15) {
      rad = t*(PI/180);
      result = sin(rad);
        cout <<t<<"\t"<<result<<endl;
    }
    return 0;
}
