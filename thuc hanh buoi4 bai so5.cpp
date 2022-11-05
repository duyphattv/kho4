#include <stdio.h>
#include <conio.h>
#include <math.h>
int a[100][100];
int m, n;
//Nhap mang
void nhapMaTran(int x[100][100], int &m, int &n){
	do{
		printf("Nhap vao m va n: ");
		scanf("%d%d", &m, &n);
	}while(m<=0 || n<=0);
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("x[%d][%d]=", i, j);
			scanf("%d", &x[i][j]);
		}
	}
}
//Hien thi mang
void xuatMaTran(int x[100][100], int m, int n){
	printf("\nMang: \n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
//Tim phan tu lon nhat
int timMax(int x[100][100], int m, int n){
	int max = x[0][0];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(max<x[i][j]){
				max = x[i][j];
			}
		}
	}
	return max;
}
//Tim phan tu nho nhat
int timMin(int x[100][100], int m, int n){
	int min = x[0][0];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(min>x[i][j]){
				min = x[i][j];
			}
		}
	}
	return min;
}

//Kiem tra so nguyen to
int kiemtraNguyenTo(int n)
{
	if (n<2)
	{
		return 0;
	}
	else if (n>2)
	{
		if(n%2==0)
		{
			return 0;
		}
		for(int i=3;i<=sqrt((float)n);i +=2)
		{
			if (n%i==0)
			{
				return 0;
			}
		}
	}
return 1;
}




//Dem so luong so nguyen to
int demNguyenTo(int x[100][100],int m, int n)
{
	int dem=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(kiemtraNguyenTo(a[i][j])==1)
			{
				dem++;
			}
		}
	}
	return dem;
}

void Sum(int a[100][100], int m, int n){
    int tong=0;
    //duyet hang cua ma tran
    for(int i =0; i< m; i++){
        //duyet cot cua ma tran
        for(int j =0 ; j<n; j++){
            tong += a[i][j];
        }
    }
    printf("\nTong cac phan tu trong ma tran la: %d", tong);
}
//Ham main
int main(){
	nhapMaTran(a, m, n);
	xuatMaTran(a, m, n);
	printf("Min = %d", timMin(a, m, n));
	printf("\nMax = %d", timMax(a, m, n));
int dem = demNguyenTo(a, m, n); 
    printf("\nSo luong so nguyen to trong ma tran = %d", dem);
    Sum(a,m,n);
}
