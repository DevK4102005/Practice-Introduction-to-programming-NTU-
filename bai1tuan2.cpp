/*Write the function HoanVi to change the value of 2 integers together using arguments
is the pointer.
▪ Write a SapXepGiam function that uses the HoanVi function to rearrange values ​​for 5 numbers
any integer in descending order, using pointer arguments.
▪ The main function does:
o Enter 5 integers.
o Print to the screen 5 integers in descending order*/
#include <stdio.h>
//prototype
void HoanVi(int *a,int *b);//Swap
void Sapxepgiam(int *a,int *b,int *c,int *d,int *e);//Sort descending
int main(){
int a,b,c,d,e;
printf("Nhap a,b,c,d,e:");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
printf("Truoc khi sap xep:%d  %d  %d  %d  %d\n",a,b,c,d,e);
printf("Sau khi sap xep la:");
Sapxepgiam(&a,&b,&c,&d,&e);
return 0;
}
void HoanVi(int *a,int *b){
  int tam;
  tam=*a;
  *a=*b;
  *b=tam;
}
void Sapxepgiam(int *a,int *b,int *c,int *d,int *e){
  if (*a<*b)// Lan 1
  {
    HoanVi(a,b);
  }
   if (*a<*c)// Lan 2
  {
     HoanVi(a,c);
  }
   if (*a<*d)//Lan 3
  {
    HoanVi(a,d);
  }
   if (*a<*e)// Lan 4
  {
     HoanVi(a,e);
  }
   if (*b<*c)//Lan 5
  {
    HoanVi(b,c);
  }
   if (*b<*d)// Lan 6
  {
     HoanVi(b,d);
  }
   if (*b<*e)//Lan 7
  {
    HoanVi(b,e);
  }
   if (*c<*d)// Lan 8
  {
     HoanVi(c,d);
  }
    if (*c<*e)// Lan 9
  {
     HoanVi(c,e);
  }
    if (*d<*e)// Lan 10
  {
     HoanVi(d,e);
  }
  printf("%d  %d  %d  %d  %d",*a,*b,*c,*d,*e);
}