#ifndef _MYFUNCTION_H_
#define _MYFUNCTION_H_


// a constant definition 
#define N 50
#define LINE 256
#define WORD 30

// a function prototype 
void shift_element(int* arr, int i);
void swap(int *pa, int *pb);
void printArray(int *arr, int n);
void insertion_sort(int* arr , int len);


int getLine(char s[]);
int getword(char w[]);
int subt(char* str1,char* str2);
int strlength(char *s);
int similar (char *s, char *t, int n);
void print_lines(char* str);
void print_similar_words(char* str);


#endif
