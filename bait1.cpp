/*
viet chuong trinh nhap vao mot ki tu cho den khi
dau * duoc nhap vao va thuc hien:
+ dem so ki tu da nhap khong ke dau *
+ trong do co bao nhieu ki tu 'k'*/
#include<iostream.h>
#include<math.h>
main()
{
	char ch;
	int d=0, dk=0;
	do {
		cout<<"nhap vao mot ki tu: ";
		cin>>ch;
		if(ch!='*')  d++;
		if(ch=='k')  dk++;
		
	}while(ch!='*');
	cout<<"so ky tu da nhap la: "<<d<<endl;
	cout<<"so ky tu k la: "<<dk<<endl;
	}