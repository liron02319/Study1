 /**
 *Class main
 *
 * @version 15/11/2019
 * @author (Liron Cohen) (Snir Okashi) 
 * 
 */


#include <stdio.h>
#include "myMath.h"

int main()
{

double x;        //deaclaration of variable


printf("\nplease enter a real number\n" );
scanf("%lf",&x);

float oneFunction=       sub( ( add( (float)(Exp((int)x)),(float)(Pow(x,3))) ) ,(float)2) ;      //deaclaration of variable and calculates
float twoFunction=add( (float)(mul(x,3)),(float)(mul(Pow(x,2),2)) );                                        //deaclaration of variable and calculates
float thirdFunction= sub( (float)div((mul(Pow(x,3),4)),5) ,(float)(mul(x,2)));                   //deaclaration of variable and calculates
printf("The value of f(x) = 𝑒^𝑥 + 𝑥^3 −2 at the point %.4lf is : %.4f \n",x, oneFunction);
printf("The value of f(x) = 3x + 2X^2  at the point %.4lf is: %.4f \n",x,twoFunction);
printf("The value of f(x) = (4x^3)/5 -2x  at the point %.4lf is: %.4f \n",x,thirdFunction);

return 0;
   

}
