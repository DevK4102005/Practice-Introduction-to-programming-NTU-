#include <stdio.h>
#define SPT 20
typedef int mang[SPT];
void Nhapso(mang a,int &n);
void Inso(mang a,int n);
int Ktdandau(mang a,int n);
void Sapxepam(mang a,int n);
void Xoaptam(mang a,int &n);
int main(){
  mang a;
  int n;
  Nhapso(a,n);
  printf("Cac phan tu vua nhap la: ");
  Inso(a,n);
  int kt=Ktdandau(a,n);
  printf("\n");
  printf("Day sap xep 1 la dan dau va 0 la nguoc lai:%d\n",kt);
  Sapxepam(a,n);
  printf("Day sau khi sap sep am tang dan la:");
  Inso(a,n);
  Xoaptam(a,n);
  printf("Day sau khi xoa:\n");
  Inso(a,n);
return 0;
}
void Nhapso(mang a,int &n){
  do
  {
    printf("Nhap so phan tu cua mang:");
    scanf("%d",&n);
  } while ((!(3<=n&&n<=SPT))||(n==0));
  for(int i=0;i<n;i++)
    {
      printf("Nhap a[%d]",i+1);
      scanf("%d",&a[i]);
    }
}
void Inso(mang a,int n){
  for (int i = 0; i < n; i++)
  {
    printf("%d\t",a[i]);
  }
}
int Ktdandau(mang a,int n){
  for (int i = 0; i < n; i++){
    if ((a[i]>0)&&(a[i+1]<0))
      return 1;
    if((a[i]<0)&&(a[i+1]>0))
      return 1;
    return 0;
  }
}
void Sapxepam(mang a,int n){
  int tmp;
  for (int i = 0; i < n-1; i++)
    for (int j = i+1; j <n; j++)
    if(a[i]>a[j]&&a[i]<0&&a[j]<0)
    {
      tmp=a[i];
      a[i]=a[j];
      a[j]=tmp;
    }
}
void Xoaptam(mang a,int &n){
  for (int i = 0; i < n; i++)
    if(a[i]<0){
      for (int j= i; j < n-1; j++)
      a[j]=a[j+1];
      n--;//cap nhat lai so phan tu cua mang
      i--;//xoa 2 so lien ke
    }
  
}