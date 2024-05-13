#include <stdio.h>
#define SPT 10
typedef int MT[SPT][SPT];
void NhapMT(MT a,int &n);
void XuatMT(MT a,int n);
void TimMaxMT(MT a,int n,int &vtd,int &vtc);
int TongDongdau(MT a,int n);
void SXcheochinh(MT a,int n);
int main(){
  MT a;
  int n;
  NhapMT(a,n);
  printf("MT vua nhap la\n");
  XuatMT(a,n);
  int vtd,vtc;
  TimMaxMT(a,n,vtd,vtc);
  printf("vtd =%d, vtc =%d",vtd,vtc);
  printf("\n");
  printf("Tong dong dau: %d\n",TongDongdau(a,n));
  SXcheochinh(a,n);
  printf("MT sau khi sx la:\n");
  XuatMT(a,n);
}
void NhapMT(MT a,int &n){
  do{
  printf("Nhap kich thuoc n:");
  scanf("%d",&n);
  }while(!(3<=n&&n<=SPT));
  for (int i = 0; i < n; i++)
    for(int j=0;j<n; j++)
    {
      printf("Nhap a[%d][%d]:",i,j);
      scanf("%d",&a[i][j]);
    }
}
void XuatMT(MT a,int n){
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++)
  printf("%d\t",a[i][j]);
  printf("\n");
}
}
void TimMaxMT(MT a,int n,int &vtd,int &vtc){
  int max=a[0][0];
  for (int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      if(max<a[i][j]){
      max=a[i][j];
      vtd=i;
      vtc=j;
      }
}
int TongDongdau(MT a,int n){
  int s=0;
  for (int i=0;i<1;i++)
    for(int j=0;j<n;j++){
      s+=a[0][j];
}
    return s;
}
void SXcheochinh(MT a,int n){
  int tmp;
  for (int i=0;i<n;i++)
    for(int j=i+1 ;j<n;j++)
    if(a[i][i]>a[j][j]&&a[i][i]>0&&a[j][j]>0){
      tmp=a[i][i];
      a[i][i]=a[j][j];
      a[j][j]=tmp;
    }
}
