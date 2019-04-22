// ifelse_2d.cpp
#include <iostream>
#include <cmath>
using namespace std;
#include <stdio.h>

int main()
{
		int r,c;//row and column
		char ac = '*';
		char bc = '#';
		char cc = ' ';
		char thechar = ' ';
    char list =  ('*','<','>');

		int val = 0;
		int m[8][8] = {
			{0,1,2,3,4,5,0,0} ,
			{1,0,0,0,0,0,0,0} ,
			{2,0,0,0,0,0,0,0} ,
			{3,0,0,0,0,0,0,0} ,
			{4,0,0,0,0,0,0,0} ,
			{5,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0}
		};

		  for (r = 0; r < 8; r++){
			for (c = 0; c < 8; c++){
				thechar = bc;
			  val = m[r][c];
			  if (val == 3)thecar = ac;
					cout<< thechar;
				}else{
					thechar = bc;
				}
		}
		cout<<endl;
	}
	return 0;
}
