/* viet chuong trinh nhap vao mot so nguyen n(0<n<50)
neu nhap sai yeu cau nhap lai*/
#include<iostream.h>
main()
{
	int n;
    cout<<"nhap so nguyen duong n: ";cin>>n;
    int i=1; //chi so hang
    while(i<=n)
    {
    	int j=1; //chi so cot
    	while(j<=i)
    	{
	    	cout<<j<<"  "<<endl;
	    	j++;
	    	cout<<"\n"<<endl;
	    	i++;
	    }
    }
	
}