#include <stdio.h>
#include "myFunction.h"


int EndTextFlag;

// return how much character on line , else returns -1 if text finished(EOF)
int getLine(char s[])        
{
	if(!EndTextFlag)         
	{
                char *pointer=s;               //declaration of variables
                int count = 0;
		char character;
                  character= getchar();
		

		while(character!='\n' && character != EOF)
		{
			*(pointer) = character;
                        pointer++;
                            count++;
			character = getchar();
			
		}

		*(pointer) ='\0';

              if(character == EOF)
               {
                 EndTextFlag=1;
               }
               else{EndTextFlag=0;}


		return count;
	}
	else
	{
		return -1;	
	}
}




// return how much word on text , else returns -1 if text finished(EOF)

int getword(char w[])             
{
	if(!EndTextFlag)
	{

             char *pointer=w;                   //declaration of variables
                int count=0;
		char character;
                  character= getchar();


		while(character!='\n' && character!=' ' && character!='\t' && character!=EOF)
		{
			*(pointer) = character;
                        pointer++;
                         count++;
			character = getchar();
			
		}

		*(pointer)='\0';

		 if(character==EOF)
               {
                 EndTextFlag=1;
               }
               else{EndTextFlag=0;}
          return count;

	}

	else
	{
		return -1;
	}
}





int subt( char * str1, char * str2)          //check if string str2 contains on string str1
{
int lengthStr1=strlength(str1);
int lengthStr2=strlength(str2);                   //declaration of variables
if(lengthStr2>lengthStr1){
return 0;
}
int i,j;
int counter=0;
for(i=0; str1[i]!='\0' ; i++)
    {
      for(j=0;str2[j]!='\0'; j++)
        {
             if( str1[i]== str2[j] ){
                      counter=0;
                       int k,p;                     //declaration of variables
                     for(k=i,p=j; str1[k]!='\0' && str2[p]!='\0'  ; k++,p++)
                     {        
                              if( str1[k]== str2[p] ){
                                  counter++;}
                                 if(counter==lengthStr2){
                                     return 1;}

                     }         
                                    }      
        }
 
     }

return 0;
}





int strlength(char *s) {
int i=0;
while (s[i]) {
i++;
}
return i;
}







int similar (char *s, char *t, int n)               //The function will check if it is possible to get from string S to string t by omitting n characters. 
{
     //declaration of variables
int len1=strlength(s);
int len2=strlength(t);
if(len2>len1){return 0;}
int counter=0;
int i=0;
int j=0;
  while(s[i]!='\0' && t[j]!='\0' )
     {
             if( s[i]== t[j] ){                     
                   
                        i++; 
                        j++;
                     
                   }  
              else{i++;
                      counter++;}
      
        }

if(t[j]=='\0' && s[i]!='\0'){
 while(s[i]!='\0'){
counter++;
i++;}
}
         
 if(counter==n){
    return 1;}

return 0;
}

 /*
void printArray2(char *arr, int n) 
{ 

    int i; 
    for (i = 0; i < n-1; i++) {
        printf("%c,", arr[i]);}
       if(i<n){ printf("%c", arr[i]);}
    printf("\n");  
} 
*/

/*
int containOnString(char arr[],char str[]){
char *p=arr;
char *p2=str;
int answer=subt(p,p2);
if(answer==1)
{return 1;}
else{return 0;}

}*/






//Prints all lines in the text containing the string.
void print_lines(char *str){

int countOfCharacter;                  //declaration of variables
char textLine[LINE];

	countOfCharacter = getLine(textLine);

	while(countOfCharacter!=-1)
	{

		if(subt(textLine,str)==1)
		{
                   
			printf("%s\n",textLine);
                            
		}

		countOfCharacter = getLine(textLine);
	}

/*
int len=strlength(pointer);
char newArr[len+1];
int i;
for(i=0; (*pointer)!='\n' && (*pointer)!='\0';i++,pointer++){
newArr[i]=*pointer;}
newArr[i]='\0';
if(*pointer!='\0'){pointer=pointer+1;}
if(containOnString(newArr,str)){
printArray2(newArr,strlength(newArr));}

return pointer;
*/
}








//Prints all words in text similar to strings until you omit one letter of the word.

void print_similar_words(char* str){

int countOfCharacter;                //declaration of variables
char TextWord[WORD];
	
	countOfCharacter = getword(TextWord);
		
	while(countOfCharacter!=-1)
	{
		if(similar(TextWord,str,1)==1) {
printf("%s\n",TextWord);}

		if(similar(TextWord,str,0)==1) {
printf("%s\n",TextWord);}

		countOfCharacter = getword(TextWord);

	}






/*
int len=strlength(pointer);
char newArr[len+1];
int i;
for(i=0; (*pointer)!='\n' && (*pointer)!='\t' && (*pointer)!=' ' &&(*pointer)!='\0';i++,pointer++){
newArr[i]=*pointer;}
newArr[i]='\0';
if(*pointer!='\0'){pointer=pointer+1;}

if(similar(newArr,str,0)){
printArray2(newArr,strlength(newArr));}

else if(similar(newArr,str,1)){
printArray2(newArr,strlength(newArr));}

emptyArray(newArr);

return pointer;

*/
}










