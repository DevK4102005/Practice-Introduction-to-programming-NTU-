/*Write a function to find the max and min of any 4 integers, using the pointer storage argument
max and min values.
▪ Main implementation function:
o Enter any 4 integers.
o Print to the screen the smallest and largest integer of the 4 numbers.*/
#include <stdio.h>
void MaxMin(int a,int b,int c,int d);
int main(){
int a,b,c,d;
printf("Enter a,b,c,d:");
scanf("%d%d%d%d",&a,&b,&c,&d);
MaxMin(a,b,c,d);
return 0;
}
void MaxMin(int a,int b,int c,int d){
  int *max, *min;
  //max
  *max=a;
  if (*max<b)
  {
    *max=b;
  }
  if (*max<c)
  {
    *max=c;
  }
   if (*max<d)
  {
    *max=d;
  }
  //min
  *min=a;
  if (*min>b)
  {
    *min=b;
  }
  if (*min>c)
  {
    *min=c;
  }
   if (*min>d)
  {
    *min=d;
  }
  printf("Maximum=%d\n",*max);
  printf("Minimum=%d\n",*min);
}