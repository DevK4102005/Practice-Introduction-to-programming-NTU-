#include <string.h>
#include <stdio.h>
typedef char CHUOI[50];
#define SONV 20
typedef struct
{
  CHUOI holot,ten,ngaysinh;
  int luong;
}NHANSU;
//prototype
void NhapNV(NHANSU nhanvien[],int &sonv);
void XuatNV(NHANSU nhanvien[],int sonv);
void SapXepDSNV(NHANSU nhanvien[],int sonv);
void Luong(NHANSU nhanvien[],int sonv,NHANSU &nvmax,NHANSU &nvmin);
int main(){
//khai bao bien
NHANSU nhanvien[SONV];
int sonv;
printf("Nhap vao thong tin nhan vien\n");
NhapNV(nhanvien,sonv);
printf("Danh sach ten nhan vien:\n ");
XuatNV(nhanvien,sonv);
printf("Danh sach ten nhan vien theo TEN:\n ");
SapXepDSNV(nhanvien,sonv);
XuatNV(nhanvien,sonv);
NHANSU nvmax,nvmin;
Luong(nhanvien,sonv,nvmax,nvmin);
printf("\nNhan vien %s co muc luong cao nhat la %d",strcat(strcat(nvmax.holot," "),nvmax.ten),nvmax.luong);
printf("\nNhan vien %s co muc luong thap nhat la %d",strcat(strcat(nvmin.holot," "),nvmin.ten),nvmin.luong);
// printf("Nguoi co luong cao nhat la:");
// int luongmax,luongmin;//khai bao bien
// Luong(nhanvien,luongmax,luongmin);
return 0;
}
void NhapNV(NHANSU nhanvien[],int &sonv){
  do
  {
    printf("Hay nhap so luong nhan vien trong danh sach:");
    scanf("%d",&sonv);
  } while (!(1<=sonv&&sonv<=SONV));
  for (int i = 0; i <sonv; i++)
  {
    printf("Ho lot nhan vien thu %d:",i+1);
    fflush(stdin);
    gets(nhanvien[i].holot);
    printf("Ten nhan vien thu %d:",i+1);
    fflush(stdin);//co the nhap tiep tuc khong bi enter bo qua
    gets(nhanvien[i].ten);
    printf("Nam sinh nhan vien thu %d:",i+1);
    fflush(stdin);
    gets(nhanvien[i].ngaysinh);
    printf("Muc luong nhan vien thu %d:",i+1);
    scanf("%d",&nhanvien[i].luong);
  }
}
void XuatNV(NHANSU nhanvien[],int sonv){
  printf("\nHo lot              Ten       Ngay sinh   Luong  \n");//holot:10,ten:10,nam sinh:10 space
  printf("------------------------------------------------\n");
  for (int i = 0; i <sonv; i++)
   printf("%-20s%-10s%-12s%-10d\n",nhanvien[i].holot,nhanvien[i].ten,nhanvien[i].ngaysinh,nhanvien[i].luong);
}
void SapXepDSNV(NHANSU nhanvien[],int sonv){
  NHANSU tam;
  for (int i = 0; i < sonv-1; i++)
      for(int j=i+1;j<sonv;j++)
        if(strcmp(nhanvien[i].ten,nhanvien[j].ten)>0){
          tam=nhanvien[i];
          nhanvien[i]=nhanvien[j];
          nhanvien[j]=tam;
        }
}
void Luong(NHANSU nhanvien[],int sonv,NHANSU &nvmax,NHANSU &nvmin){
  int luongmax,luongmin;
  luongmax=nhanvien[0].luong;
  nvmax=nhanvien[0];
  luongmin=nhanvien[0].luong;
  nvmin=nhanvien[0];
  for(int i=1;i<sonv;i++){
  if(luongmax<nhanvien[i].luong){
    luongmax=nhanvien[i].luong;
    nvmax=nhanvien[i];
  }
  if(luongmin>nhanvien[i].luong){
    luongmin=nhanvien[i].luong;
    nvmin=nhanvien[i];
  }
  }
}