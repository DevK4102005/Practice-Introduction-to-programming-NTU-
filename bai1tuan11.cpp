#include <stdio.h>
#define maxd 20
#define maxc 20
typedef int MT[maxd][maxc];
void Nhapmang(MT a,int &n,int &m);
void Xuatmang(MT a,int n,int m);
int main(){
  MT a;
  int n,m;
Nhapmang(a,n,m);
printf("Ma tran vua nhap la:\n");
Xuatmang(a,n,m);
return 0;
}
void Nhapmang(MT a,int &n,int &m){
  do
  {
    printf("Nhap so dong n:");//nhap so dong neu sai bat nhap lai
    scanf("%d",&n);
  } while (!((2<=n)&&(n<=maxd)));
  do
  {
    printf("Nhap so cot m:");//nhap so cot neu sai bat  nhap lai
    scanf("%d",&m);
  } while (!((2<=m)&&(m<=maxc)));
   for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
    {
      printf("Nhap phan tu a[%d][%d]:",i+1,j+1);
      scanf("%d",&a[i][j]);
    }
}
void Xuatmang(MT a,int n,int m){
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
      printf("%d\t",a[i][j]);
      printf("\n");
  }
}

