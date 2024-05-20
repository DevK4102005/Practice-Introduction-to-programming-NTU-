#include <stdio.h>
#include <string.h>
//fix func revert by using these code
char *strrev(char *str)
{
      char *p1, *p2;
      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}
#define Maxlen 100
typedef char chuoi[Maxlen];
void Nhapchuoi(chuoi s);
char KTchuoidx(chuoi s);
void Xoatudautien(chuoi s);
void Xoatucuoicung(chuoi s);
int main(){
  chuoi s;
  Nhapchuoi(s);
  printf("Chuoi vua nhap thoa dieu kien la:\n");
  puts(s);
  int kqkt=KTchuoidx(s);
  if (kqkt)
    printf("chuoi %s la chuoi doi xung\n",s);
  else printf("chuoi %s khong phai la chuoi doi xung\n",s);
  printf("xoa tu dau tien trong chuoi:\n");
  Xoatudautien(s);
  puts(s);
  printf("Xoa ki tu cuoi cung:\n");
  Xoatucuoicung(s);
  puts(s);
  return 1;
}
void Nhapchuoi(chuoi s){
 do
  {
    printf("hay nhap chuoi can xu li:");
    gets(s);
  } while( !((strlen(s)<=Maxlen)
            &&((s[0]!=' ')
            &&(s[strlen(s)-1]!=' ')
            &&(strstr(s,"  ")==NULL))
            &&(strstr(s," ")!=NULL)));
}
char KTchuoidx(chuoi s){
  chuoi stam;
  strcpy(stam,s);// sao chep noi dung cua s vao stam
  strrev(stam);//Dao nguoc thu tu cac phan tu trong chuoi stam
  int kqss=strcmp(s,stam);//so sanh 2 chuoi s(doc xuoi) va stam(doc nguoc)
  if (kqss==0)
    return 1;
  return 0;
}
void Xoatudautien(chuoi s){
  //b1 xac dinh vi tri khoang trang dau tien
  int vtktdt;
  for (int i = 0; i < strlen(s); i++)
  {
    if(s[i]==' '){
      vtktdt=i+1;
      break;
    }
  }
  //b2 : Sao chep phan chuoi tu vi tri khoang trang dau tien cua chuoi s de len chuoi s ban dau
  strcpy(s,&s[vtktdt]);//con tro &s de len chuoi s cux
  
}
void Xoatucuoicung(chuoi s){
  int vtktcc;
  //b1 tim vi tri khoang trang cuoi cung
  for (int i = strlen(s)-1; i >= 0; i--)
  if (s[i]==' ')
  {
    vtktcc=i;
    break;
  }
  //b2 doi ki tu ket thuc cuoi cung ve ngay vi tri khoang trang cuoi cung
  s[vtktcc]=NULL;
}
