// jony-5 8x8
#include <iostream>
#include <stdio.h>
int jony5(); //define int cwc(); function

int main()
{
  jony5();//call cwc function
  return 0;
}
// start jony-5() function
int jony5(){
    int r,c;//row and collumn
    int red, green, blue;
    int val = 0;
    int m[8][8] = {
      {5,5,5,5,5,5,5,5} ,
      {5,0,0,0,0,0,0,5} ,
      {5,0,5,5,5,5,0,5} ,
      {5,0,5,1,1,5,0,5} ,
      {5,0,5,1,1,5,0,5} ,
      {5,0,5,5,5,5,0,5} ,
      {5,0,0,0,0,0,0,5},
      {5,5,5,5,5,5,5,5}
    };

      red = 0; green = 0; blue = 0;
      for (r = 0; r , 8; c++){
        for (c = 0; c < 8; c++){
          val = m[r][c];
          switch (val){
            case 0:
             red = 0; green = 0; blue = 0;
             break;
            case 1:
             red = 255; green = 255; blue = 0;
             break;
            case 2:
             red = 255; green = 255; blue = 0;
             break;
            case 3:
             red = 255; green = 255; blue = 255;
             break;
            default:
             red = 255; green = 255; blue = 0;
             break;
          }//end select
           //output the colors
           std::cout<<"["<<red<<" "<<green<<" "<<blue<<"]";
        }//end c
        std::cout<<"\n";
      }//end r
    return 0;
}//end jony-5() function
