#include<iostream.h>
main()
{
	float a;
	do
	{
		cout<<"nhap so thuc a: "; cin>>a;
		if(a<=0 || a>=2)
		cout<<"\n nhap lai so a!"<<endl;
		}
		while(a<=0 || a>=2);
	int i=1;
	float s=0;
	do 
	{
		s=s+(float)1/i;
		i++;
	}while (s<=a);
	cout<<"\n so n nho nhat la: "<<i-1<<endl;
	cout<<"tong la: "<<s<<endl;
	return 0;
}