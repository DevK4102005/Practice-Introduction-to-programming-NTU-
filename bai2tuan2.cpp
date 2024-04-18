/*Write the KiemTraNT function to check whether an integer is prime or not
no, if yes return 1, otherwise return 0
▪ Write the function TinhTongNT to calculate the sum of prime numbers <=n where n is an integer
and is the function argument
▪ The main function does:
o Enter a positive integer with value 5<=n<=30
o Print to the screen prime numbers with values ​​<=n.
o Print to the screen the sum of prime numbers with value <=n*/
#include <stdio.h>
int CheckPrime(int check);
int SumPrime(int n);
int main(){
  int n;
  do{
  printf("n:");
  scanf("%d",&n);
  }while(5>n||n>30);
  int s=SumPrime(n);
  printf(" Sum of prime numbers: %d",s);
  return 0;

}
int CheckPrime(int check){
  if (check<=1) return 0;
  for (int  i = 2; i<check; i++){
    if (check%i==0) return 0;
  }
  return 1;
}
int SumPrime(int n){
int sum=0;
for (int i = 2; i <= n; i++)
{
  if (CheckPrime(i))
  {
    printf("so nguyen to la:%d\n",i);
    sum+=i;
  }
}
return sum;
}