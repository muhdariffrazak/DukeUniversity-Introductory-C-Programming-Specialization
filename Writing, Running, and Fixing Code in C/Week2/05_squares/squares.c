#include <stdio.h>
#include <stdlib.h>


/* 
 * Determines if coord is in range between
 * offset (INCLUSIVE) and offset + size (EXCLUSIVE)
 */
int IsInRange(int coord, int offset, int size){ //Declares the function IsInRange and its parameters
    if((coord>=offset)&&(coord<(offset+size))){// if coord is in range, return 1
      return 1;
    }
    else{ // else, return 0
      return 0;
    }
  }
  
 
/*
 * Determines if coord is at border of offset or
 * offset + size
 */
int IsAtBorder(int coord, int offset, int size) { //Declares the function IsAtBorder and its parameters
  if((coord==offset)||(coord==offset+size-1)){ // if coord is equal to offset or offset + size
    return 1;
  }
  else{ // return 1, else return 
    return 0;
  }
}



 int WhichBigger(int x,int y){ //comparison function WhichIsBigger
    if(x>y){
     return x;
   }
   else{
     return y;
   }
 }

  
void squares(int size1, int x_offset, int y_offset, int size2) { //Main squares function  
  int w,h,y,x;
  int cont1,cont2,cont3,cont4;
  y=x=0; //intialise x & y to 0
  w=WhichBigger(size1,(x_offset+size2)); //compute the max of size1 and (x_offset + size2).  Call this w
  h=WhichBigger(size1,(y_offset+size2)); //compute the max of size1 and (y_offset + size2).  Call this h
  cont1=((IsInRange(x,x_offset,size2))&&(IsAtBorder(y,y_offset,size2))); 
      cont2=((IsInRange(y,y_offset,size2))&&(IsAtBorder(x,x_offset,size2)));
      cont3=((x<size1)&&((y==0)||(y==(size1-1))));
      cont4=((y<size1)&&((x==0)||(x==(size1-1))));


  for(y=0;y<h;y++){ //count from 0 to h. Call the number you count with y
    for(x=0;x<w;x++){ //count from 0 to w. Call the number you count with x

      cont1=((IsInRange(x,x_offset,size2))&&(IsAtBorder(y,y_offset,size2)));//((x is between x_offset  and x_offset +size2) AND 
                                                                            //y is equal to either y_offset OR y_offset + size2 - 1 )

      cont2=((IsInRange(y,y_offset,size2))&&(IsAtBorder(x,x_offset,size2)));((//y is between y_offset and y_offset + size2) AND
                                                                              //x is equal to either x_offset OR x_offset + size2 -1)

      cont3=((x<size1)&&((y==0)||(y==(size1-1))));//x is less than size1 AND (y is either 0 or size1-1)

      cont4=((y<size1)&&((x==0)||(x==(size1-1))));//y is less than size1 AND (x is either 0 or size1-1)


      if(cont1||cont2){
        printf("*");// if so, print a *
      }
      else if(cont3||cont4){
        printf("#");}//if so, print a #
      else{
        printf(" ");//else print a space
      }
    }
    printf("\n");//print a newline
   }
}


      //check if  EITHER
      //    ((x is between x_offset  and x_offset +size2) AND 
      //     y is equal to either y_offset OR y_offset + size2 - 1 )
      //  OR
      //    ((y is between y_offset and y_offset + size2) AND
      //     x is equal to either x_offset OR x_offset + size2 -1)
      // if so, print a *

      //if not,
      // check if EITHER
      //    x is less than size1 AND (y is either 0 or size1-1)
      // OR
      //    y is less than size1 AND (x is either 0 or size1-1)
      //if so, print a #

      //else print a space
    //when you finish counting x from 0 to w, 
    //print a newline


