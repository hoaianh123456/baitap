/*
viet chuong trinh nhap 1 so cho den khi so
"0" dc nhap vao 
+ dem so phan tu da nhap khong ke so khong
+ tbc cac phan tu da nhap
+ co bao nhieu phan tu am*/
#include<iostream.h>
main()
{
	float a, s=0;
	int d=0, da =0;
	do{
		cout<<"nhap vao mot so thuc: "; cin>>a;
		if(a!=0)
		{
			s+=a;
			d++;
		}
		if(a<0)
		da++;
	}while (a!=0);
	cout<<"\n tbc ca phan tu da nhap :"<<(s/d)<<endl;
	cout<<" so ptu am la: "<<da<<endl;
}