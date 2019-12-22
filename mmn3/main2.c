
#include <stdio.h>
#include "myFunction.h"

int EndTextFlag;


int main()
{


/*
char tap1[]={'c','a','t','\n','a','\n','h','d','o','g','f','y','\0'};
printf("%d\t", getLine(tap1) );
printf("%d",getword(tap1) );


char tap2[]={'\n','\0'};
printf("\n%d\t", getLine(tap2) );
printf("%d",getword(tap2) );

char tap3[]={'\n','r','\0'};
printf("\n%d\t", getLine(tap3) );
printf("%d",getword(tap3) );

char tap4[]={'\t','\t','\0'};
printf("\n%d\t", getLine(tap4) );
printf("%d\n",getword(tap4) );




char a1[]="loveme";
char a2[]="vem";
char *p1,*p2;
p1=a1;
p2=a2;
int d=subt(p1,p2);
printf("\n%d\n",d);
*/


/*
char a3[]="cat";
char a4[]="cat";
char *pp1,*pp2;
pp1=a3;
pp2=a4;
int y=similar(pp1,pp2,0);
printf("\n%d\n",y);


char *popo;
int r;
char dog[]={'d','o','g','\0'};
char tarry[]={'d','o','g','\n','d','t','o','g','\t','g','\t','n','d','\0'};
popo=tarry;
for(r=0;r<256 && *popo!='\0';r++){
popo=print_lines(dog,popo);
printf("\n");
print_similar_words(dog,popo);
}


*/



int i=0;
EndTextFlag = 0;
char wordOfUser[WORD];
char Str=getchar();

while(Str!=' ')
{
        wordOfUser[i]=Str;
         i++;
          Str=getchar();
}

 wordOfUser[i]='\0';


char option=getchar();

switch(option)
{
        case 'a':
              
             print_lines(wordOfUser);
                
               break;
       
        case 'b':
                print_similar_words(wordOfUser);
               break;
                  
        default: 

          printf("error character");
              break;


}





return 0;




}
