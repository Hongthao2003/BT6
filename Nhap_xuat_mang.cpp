#include<iostream>
#include<math.h>
using namespace std;

#define MAX 100
 
void nhap (int a[], int &n){
    do{
        cout<<"Nhap so phan tu: ";
        cin>>n;
        if(n <= 0 || n > MAX)
        {
            cout<<"Phan tu khong hop le :";
        }
    }while(n <= 0 || n > MAX);
    for(int i = 0; i < n; i++)
    {
        cout<<"Nhap a["<<i<<"]: ";
        cin>>a[i];
    }
}
void xuat(int a[], int n)
{
  cout<<"Cac phan tu trong mang la : ";
    for(int i = 0; i < n; i++)
    {
        cout<<a[i] << "\t";
    }
}
 
int main()
{
    int n;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);
}
