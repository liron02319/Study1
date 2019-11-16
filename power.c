#include "myMath.h"

double Exp(int x){
double z;
z=Pow(EXPONANT,x);
  return z;


}

double Pow(double x , int y){

   double i, p;
if(y>=0){
   p = 1;
   for( i = 0; i < y; i++ )
   {
      p = p * x;
   }
   return p;
}

else{
 double s;
s=  1.0 / ( Pow(EXPONANT,-y) );
return s;
    

}



}
