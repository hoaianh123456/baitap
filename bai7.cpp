/*
viet chuong trinh tinh tong 
s=1+(1/2^3)+(1/3^3)+...+(1/n^3)*/
#include<iostream.h>
#include<math.h>
main()
{
	int n,i=1;
    float sum =0;
	cout<<"nhap n(1<n): "; cin>>n;
	while (i<=0)
	{
		sum += (float)1/pow(i,3);
		i++
	}	
	cout<<"s= "<<sum<<endl;
}