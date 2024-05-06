#include <stdio.h>
#include <string.h>
typedef char CHUOI[50];
typedef struct
  {
    CHUOI hovaten;
    float diemvan,diemtoan;
  } HOCSINH;
  //prototype
void NhapHs(HOCSINH &hs);
void XuatHs(HOCSINH hs);//Xuat thong tin va tinh dtb
int main(){
  //Khai bao bien
  HOCSINH hs;
  //Goi ham va kiem tra ket qua
  printf("Hay nhap thong tin cua hoc sinh:\n");
  NhapHs(hs);
  printf("Ket qua:\n");
  XuatHs(hs);
  return 0;
}
void NhapHs(HOCSINH &hs){
  printf("Nhap ho ten cua hoc sinh:");
  gets(hs.hovaten);
  printf("Nhap diem van:");
  scanf("%f",&hs.diemvan);
  printf("Nhap diem toan:");
  scanf("%f",&hs.diemtoan);
}
void XuatHs(HOCSINH hs){
  printf("Ho ten              Diem Van  Diem Toan Diem Trung BInh\n");
  printf("-------------------------------------------------------\n");
  printf("%-20s%-10.1f%-10.1f%-10.1f",hs.hovaten,hs.diemvan,hs.diemtoan,(hs.diemvan+2*hs.diemtoan)/3);//canh le trai:(dung 20 khoang trang bieu dien cho ten:-%20s)(dung 10 khoang trang bddiem van)
}