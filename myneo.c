int nameoffunction(){
int r,c;//row and column
int red = 0, green = 0, blue = 0;
// add your array
int m[8][8] = {
      {0,1,2,3,4,5,0,1} ,
      {2,3,4,5,0,1,2,3} ,
      {4,5,0,1,2,3,4,5} ,
      {0,1,2,3,4,5,0,1} ,
      {2,3,4,5,0,1,2,3} ,
      {4,5,0,1,2,3,4,5} ,
      {0,1,2,3,4,5,0,1},
      {2,3,4,5,0,1,2,3}
    };
  i = 0;// set neo-pixel number to zero
  int val;
//  loop that increments x,y and i
  for (r = 0; r < 8; r++){
    for (c = 0; c < 8; c++){
      // set the color for red green and blue
      val = m[r][c];
      // add your switch statement
      switch ( val ) {
          case 0:
                red = 100; green = 0; blue =0;//red
          break;
          case 1:
                red = 0; green = 100; blue =0; //green
          break;
           case 2:
              red = 0; green = 0; blue =100; //blue
          break;
            case 3:
              red = 100; green = 100; blue =0; //yellow
          break;
            case 4:
              red = 0; green = 50; blue = 50; //cyan
          break;
          default:
              red = 100; green = 00; blue = 100; //magenta
          break;
}


      // end of set the color
      pixels.setPixelColor(i, pixels.Color(red,green,blue));

      pixels.show();
      i++;
      delay(50);
     //Serial.print(c[x][y]);
    }//end y
}//end y and end of loop that increments x,y and i
}
