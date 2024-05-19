/*Bài 1: Viết các hàm thực hiện các công việc sau:
1.    Nhập ma trận A kích thước nxm, với 2<=n,m<=20.
2.    Xuất ma trận.
3.    Tìm phần tử lớn nhất trên biên ngoài của ma trận.
4.    Tính tổng các phần tử trên cột c của ma trận, với c là tham số của hàm.
5.    Tìm và trả về vị trí của phần tử là số chính phương lớn nhất trong ma trận. Biết rằng số chính phương là một số tự nhiên có căn bậc hai cũng là một số tự nhiên.
VD: 1, 4, 9, 16, 25, … là số chính phương.
6.    main gọi các hàm để kiểm tra kết quả thực hiện.
*/
#include <stdio.h>
#include <math.h>
#define SPT 20
typedef int MT[SPT][SPT];
void NhapMT(MT a, int &n,int &m);
void XuatMT(MT a, int n,int m);
int TimMax(MT a, int n,int m);
int TongC(MT a, int n,int m);
int check(int checknum);
void VTCPMax(MT a, int n,int m,int &vtd,int &vtc);
int main(){
MT a;
int n,m;
NhapMT(a,n,m);
printf("Mang vua nhap la\n");
XuatMT(a,n,m);
int max;
max=TimMax(a,n,m);
printf("Max bien ngoai MT: %d\n",max);
int tong=TongC(a,n,m);
printf("Tong : %d\n",tong);
int vtd,vtc;
VTCPMax(a,n,m,vtd,vtc);
printf("Vi tri chinh phuong max:dong=%d, cot=%d",vtd,vtc);
return 0;
}
void NhapMT(MT a, int &n,int &m){
  do
  {
    printf("Nhap so dong:");
    scanf("%d",&n);
  } while (!(2<=n));
   do
  {
    printf("Nhap so cot:");
    scanf("%d",&m);
  } while (!(m<=SPT));
 for (int i=0;i<n;i++)
  for(int j=0;j<m;j++){
    printf("Nhap pt a[%d][%d]:",i,j);
    scanf("%d",&a[i][j]);
  }
}
void XuatMT(MT a, int n,int m){
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
      printf("%d\t",a[i][j]);
      printf("\n");
}
}
int TimMax(MT a, int n,int m){
  int max;
  max=a[0][0];
  //Duyet hang tren cung
    for(int j=0;j<m;j++)
    if(a[0][j]>max) max=a[0][j];
  //Duyet hang cuoi cung
  for(int j=0;j<m;j++)
    if(a[n-1][j]>max) max=a[n-1][j];
  //Duyet cot ben trai
  for(int i=0;i<n;i++)
    if(a[i][0]>max) max=a[i][0];
  //Duyet cot ben phai
  for(int i=0;i<n;i++)
    if(a[i][m-1]>max) max=a[i][m-1];
    return max;
}
int TongC(MT a, int n,int m){
  int c;
  int s=0;
  do{
  printf("Nhap cot c:");
  scanf("%d",&c);
  }while(!(c<=m));
  for(int i=0;i<n;i++)
  {
    s+=a[i][c-1];
  }
  return s;
}
int check(int checknum){
  int sqrtnum=(int)sqrt(checknum);
  return (sqrtnum*sqrtnum==checknum);
}
void VTCPMax(MT a, int n,int m,int &vtd,int &vtc){
  int max=a[0][0];
  for(int i=0;i<n;i++)
    for (int j=0;j<m;j++)
      if((check(a[i][j]))&&(a[i][j]>max)){
        max=a[i][j];
        vtd=i;
        vtc=j;
      }
}