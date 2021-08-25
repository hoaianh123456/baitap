/*
viet chuong trinh tinh tong 
s=1.2+2.3+3.4+.....+n(n+1)*/
#include<iostream.h>
#include<math.h>
main()
{

	int n,i=1;
    long s =0;
	cout<<"nhap n: "; cin>>n;
	while (i++<=n)
	{ s =s+i*(1+i);}
	cout<<"s= "<<s<<endl;
}