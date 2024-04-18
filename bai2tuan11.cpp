#include <stdio.h>
#define KTMax 10
typedef int MTV[KTMax][KTMax];
//prototype
void NhapMTV(MTV A,int &n);
void XuatMTV(MTV A,int n);
int TimMaxCC(MTV A, int n);//tim max duong cheo chinh
void XuatTGT(MTV A,int n);//xuat tam gia tren
void XoaCotMTV(MTV A,int n,int c);//xoa cot c bat ki trong MTV
void XuatMaTran(MTV A,int n,int m);//ma tran sau khi xoa cot
//Main
int main(){
  MTV A;
  int n;
  //Goi ham va kiem tra kq
  printf("Nhap thong tin MTV\n");
  NhapMTV(A,n);
  printf("Ma tran vuong vua nhap:\n");
  XuatMTV(A,n);
  printf("Gia tri lon nhat tren duong cheo chinh:%d",TimMaxCC(A,n));
  printf("Tam giac nua tren duong cheo chinh\n");
  XuatTGT(A,n);
  int c;
  do
  {
    printf("\nHay nhap cot can xoa:");
    scanf("%d",&c);
  } while (!((1<=c)&&(c<=n)));
  XoaCotMTV(A,n,c);
  printf("Ket qua ma tran sau khi xoa cot:%d\n",c);
  XuatMaTran(A,n,n-1);
  return 0;
}
void NhapMTV(MTV A,int &n){
  do
  {
    printf("\nHay nhap kich thuoc cua ma tran vuong");
    scanf("%d",&n);
  } while (!(2<=n&&n<=KTMax));
for (int i = 0; i < n; i++)
  for (int j = 0; j < n; j++)
  {
    printf("A[%d][%d]",i+1,j+1);
    scanf("%d",&A[i][j]);
  }
}
void XuatMTV(MTV A,int n){
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      printf("%d\t",A[i][j]);
      printf("\n");
  }
}
int TimMaxCC(MTV A,int n){
  int max=A[0][0];
  for (int i = 1; i < n; i++)
    if (A[i][i]>max)
      max=A[i][i];
  return max;
}
void XuatTGT(MTV A,int n){
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    if (j>i)
      printf("%3d",A[i][j]);
      else printf("   ");
      printf("\n");
  }
}
void XoaCotMTV(MTV A,int n,int c){
  for (int i = 0; i < n; i++)//Xoa phan tu A[i][c-1] trong mang A[i]
    for (int j=c-1; j < n; j++)
      A[i][j] =A[i][j+1];
}
void XuatMaTran(MTV A,int n,int m){
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++)
      printf("%d\t",A[i][j]);
      printf("\n");
  }
}