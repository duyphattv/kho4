#include <stdio.h>
#include <conio.h>
#include <string.h>
#include<stdlib.h>
struct SinhVien
{
	char Masv[10];
	char Hotensv[30];
	char Phai[10];
	int Namsinh;
	char Nganhhoc[30];
	float Kqcuoikhoa;
	char Xeploai[20];
	char Quequan[30];
	
};
typedef struct SinhVien SINHVIEN;
void TIMSV(SINHVIEN a[], int n);
void INGX(SINHVIEN a[], int n);
void Sapxep(SINHVIEN a[], int n);
void Nhapsv(SINHVIEN &x);
void NhapsvN(SINHVIEN a[], int n);
void Xuatsv(SINHVIEN);
void XuatsvN(SINHVIEN a[], int n);

int main()
{ int n, key;
SINHVIEN x, a[10];
while(true)
{
system("cls");
printf("********************************************************\n");
printf("**         CHUONG TRINH QUAN LY SINH VIEN             **\n");
printf("**            1. Nhap DS sinh vien                    **\n");  
printf("**            2. In danh sach sinh vien               **\n");
printf("**            3. Sap xep theo Kq cuoikhoa             **\n");
printf("**            4. In sinh vien Gioi, Xuat sac          **\n");
printf("**            5. Tim kiem sinh vien theo MASV         **\n");
printf("**            0. Thoat                                **\n");
printf("********************************************************\n");

     

printf("\n \t\t AN PHIM CHON: ");
scanf("%d",&key);

 

switch(key)
{
case 1:
do{
printf("\nNHAP SO LUONG SINH VIEN: "); scanf("%d", &n);
}while(n <= 0);
NhapsvN(a,n);

 

printf("\nBam phim bat ky de tiep tuc!");
getch();
break;

case 2:
//go%i hom thuc de hien cong viec
XuatsvN(a,n);
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;

case 3:
printf("\nBam phim bat ky de tiep tuc!");
//goi ham thuc de hien cong viec
getch();
break;

case 4:
printf("\nBam phim bat ky de tiep tuc");
//goi ham thuc de hien cong viec
break;

case 5:
printf("\nBam phim bat ky de tiep tuc");
//goi ham thuc de hien cong viec
getch();
break;

case 0:
exit(1);

default:
printf("\nkhong co chuc nang nay!");
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;
}
}
}
void Nhapsv(SINHVIEN &x)
{
	fflush(stdin);
	printf("\nNhap ma sv: ");
	gets(x.Masv);
	
	//scanf("%d",&x.Masv);
	fflush(stdin);
  printf("\nNhap ho ten: ");
  gets(x.Hotensv);
    fflush(stdin);
  printf("\nNhap phai: ");
  gets(x.Phai);
  fflush(stdin);
  printf("\nNhap nganh hoc: ");
  gets(x.Nganhhoc);
  fflush(stdin);
  printf("\nNhap que quan: ");
  gets(x.Quequan);
  
  
  do
  {
  	printf("\nNhap nam sinh: ");
  	scanf("%d",&x.Namsinh);
  	
  }while(x.Namsinh<1980 || x.Namsinh>2010);
  
  do
  {
  	printf("\nNhap KQ cuoi khoa: ");
  	scanf("%f",&x.Kqcuoikhoa);

  }while(x.Kqcuoikhoa<0||x.Kqcuoikhoa>4);
  
  
  fflush(stdin);
  if(x.Kqcuoikhoa<=1.5)
  {strcpy(x.Xeploai,"Yeu");}
  else
    if(x.Kqcuoikhoa<=2.5)
  {strcpy(x.Xeploai,"Trung binh");}
  else
  if(x.Kqcuoikhoa<=3.0)
  {strcpy(x.Xeploai,"Kha");}
  else
    if(x.Kqcuoikhoa<=3.8)
    {strcpy(x.Xeploai,"Gioi");}
  else
      {strcpy(x.Xeploai,"Xuat sac");}

  
}
void NhapsvN(SINHVIEN a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n Nhap sinh vien thu %d",i+1);
		Nhapsv(a[i]);
	}
}

void Xuatsv(SINHVIEN x)
{
	printf("|%5s|%-18s|%-6s|%10d|%-11s|%12.1f|%-10s|%-10s|",x. Masv,x.Hotensv,x.Phai, x.Namsinh,x.Nganhhoc,x.Kqcuoikhoa,x.Xeploai,x.Quequan);
	
}

void XuatsvN(SINHVIEN a[],int n)
{system("cls");
printf("\n\n|-------------------------------------------------------------------------------------------\n");
     printf("|Ma SV| Ho ten sinh vien | Phai | Nam sinh | Nganh hoc |KQ cuoi khoa| Xep loai | Que quan |");

for(int i=0;i<n;i++)
{
   printf("\n|-----|------------------|------|----------|-----------|------------|----------|----------|\n");
Xuatsv(a[i]);
}
}
void Sapxep(SINHVIEN a[], int n)
{ SINHVIEN tmp;
for(int i = 0;i<n;++i){
	for(int j= i+1; j < n;++j){
		if(a[i].Kqcuoikhoa> a[j].Kqcuoikhoa){
			tmp = a[i];
			a[i]=a[j];
			a[j] = tmp;
		}
	}
}
}
void INGX(SINHVIEN a[], int n)
{system("cls");
printf("\n\n|-------------------------------------------------------------------------------------------\n");
     printf("|Ma SV| Ho ten sinh vien | Phai | Nam sinh | Nganh hoc |KQ cuoi khoa| Xep loai | Que quan |");

for(int i=0;i<n;i++)
{ if(a[i].Kqcuoikhoa>=3.0)
    {
   printf("\n|-----|------------------|------|----------|-----------|------------|----------|----------|\n");
    Xuatsv(a[i]);
    }
}


}
void TIMSV(SINHVIEN a[], int n)
{system("cls");
fflush(stdin);
char Matim[10];
printf("\n Nhap ma sinh vien can tim: ");
gets(Matim);

printf("\n\n|-------------------------------------------------------------------------------------------\n");
     printf("|Ma SV| Ho ten sinh vien | Phai | Nam sinh | Nganh hoc |KQ cuoi khoa| Xep loai | Que quan |");
     
     for(int i=0;i<n;i++)
     { if(strcmp(a[i].Masv,Matim)==0)
        {
   printf("\n|-----|------------------|------|----------|-----------|------------|----------|----------|\n");  
   Xuatsv(a[i]);      	
        }
     }
}
