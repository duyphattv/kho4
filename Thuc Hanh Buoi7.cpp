#include <stdio.h>
#include <stdlib.h>
void NhapMang(int *a,int n);
void XuatMang(int *a,int n);
void GiaTriln(int *a,int n);
void TinhTich(int *a,int n);
void ktsnt(int *a, int n);
void insonguyento(int *a, int n);
void tinhtong(int *a, int n);
void nhapx(int *a,int n);
void sapxep(int *a,int n);
int main()
{
    int n;
    do {
        printf( "\nNhap so luong phan tu cua mang: " );
        scanf( "%d", &n );
 
        if (n <= 0) {
            printf( "So luong phan tu cua mang khong hop le." );
        }
    } while ( n <= 0 );
    int *a = (int *)malloc(n * sizeof(int *));
    NhapMang( a, n );
    printf( "\nMang vua nhap la: " );  
    XuatMang( a, n );
    GiaTriln( a, n);
    TinhTich( a, n);
    ktsnt(a,n);
    insonguyento(a,n);
    tinhtong(a,n);
    nhapx(a,n);
    sapxep(a,n);
}
    void NhapMang(int *a, int n)
{
    for (int ii = 0; ii < n; ii++)
    {
        printf("\nNhap vao a[%d] = ", ii);
        scanf("%d", &a[ii]);
    }

}
void XuatMang(int *a, int n)
{
    for (int ii = 0; ii < n; ii++)
    {
        printf("%4d", a[ii]);
    }

 }   
 void GiaTriln(int *a,int n)
 {
    int *max=a;
   
    for(int i=1;i<n;i++)
        if(max[i] > *max)
            *max=max[i];
    printf("\n Gia tri lon nhat cua mang: %d");
}
void TinhTich(int *a,int n)
{ int tich=1;
   for (int i=0;i<n;i++)
   tich = tich*a[i];
   printf("\n Tich cac phan tu la %d", tich);

}
void ktsnt(int *a, int n)
{
  int dem=0;
  printf("\n Cac phan tu trong mang: %d2 ");
  for(int i = 2; i <= n; i++)
  {
  	if (n%i==0)
  	dem++;	
  }
   if(dem==1)
   printf("\n,So %d la so nguyen to");
   else
   printf("\n,So %d khong phai la so nguyen to");     
    }
 int kiemtra_NT(int n) {
  if(n<2)
   return 0; 
  else{
  	 for(int i=2;i<=n/2;i++)
  	   if(n%i==0)
  	    return 1;
   } 
  
 }  
   void insonguyento(int *a,int n){
   	printf("\n,cac nguyen to co trong mang la:");
   	for(int i=0;i<n;i++)
   	 if(kiemtra_NT(a[i]))
   	  printf("%5d",a[i]);
    	
   }	
  void tinhtong(int *a,int n)
  {
  	int i;
  	int snt=0;
  	for(i=0;i<n;i++){
  	
  	if(kiemtra_NT(a[i]))
  	{
  		snt+=a[i];
  	}

}
}
void nhapx(int *a,int n)
{
	printf("\n Nhap gia tri x ");
	 scanf("%d", &n);
	 printf("\n Vi tri cua x trong mang la: %d ");
	for(int i = 0; i<n; i++)
    {
        if(a[i]==n)
        {
            printf("%d ",i);
        }
    }
	
}
void sapxep(int *a,int n)
{
	int tg;
	for(int ii=0; ii < n - 1; ii++){
		for(int j = ii + 1;j<n;j++){
			if(a[ii]>a[j]){
				tg=a[ii];
				a[ii]=a[j];
				a[j]=tg;
			}
		}
	}
	printf("\n Mang da sap xep la: %d ");
	for(int ii=0; ii<n;ii++){
		printf("%5d",a[ii]);
	}
}

   
    
