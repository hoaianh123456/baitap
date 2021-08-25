/*nhap so nguyen n, in ra man hinh tat ca cac uoc */
#include<iostream.h>
void nhap(int a[], int n)
{ 
    for(int i=0;i<n;i++)
	{cout<<"nhap a["<<i<<"]= ";
    cin>>a[i];}
}
void xuat(int a[], int n)
{
	for(int i=0; i<n; i++)
	cout<<"      "<<a[i];
	
}
main()
{
	int a[100],n;
	cout<<"so ptu cua mang la: ";cin>>n;
	nhap(a,n);
	xuat(a,n);
	cout<<endl;
	
}
