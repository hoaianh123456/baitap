/*
viet chuong trinh nhap vao sai so nguyen duong 
tìm ra ucln và bcnn cua hai so do*/
#include<iostream.h>
main()
{
	int m,n,x,y,ucln;
    cout<<"nhap 2 so nguyen duong m,n :";
	cin>>m>>n;
	x=m; y=n;
	while (x!=y)
	{
		if(x>y) x=x-y;
		else y=y-x;
	}	
	ucln =x;
	cout<<"\n uoc chung lon nhat la "<<ucln<<endl;
	cout<<"\n boi chung nho nhat la "<<(m*n)/ucln<<endl;
	
}