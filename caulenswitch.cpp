#include<iostream.h>
#include<math.h>
int main()
{
    float a, b, c,ptbn,ptb2;
    float delta, x1, x2;
	int choice; //bien de lua chon
	cout<<"nhap vao 3 so a, b, c"<<endl;
	cout<<"a=";cin>>a;
	cout<<"\nb=";cin>>b;
	cout<<"\nc=";cin>>c;
	cout<<endl;
	cout<<"*************************************"<<endl;
	cout<<"hay nhap vao mot cong viec: (1/2/3)"<<endl;
	cout<<" 1. Giai bpt ax+b>c                "<<endl;
	cout<<" 2. Giai ptb2 ax^2+bx+c=0          "<<endl;
	cout<<" 3. kiem tra ba canh tam giac      "<<endl;

	cout<<"*************************************"<<endl;
	cout<<"nhap su lua chon cua ban: "<<endl;
	cin>>choice;
	switch (choice)
	{
		case 1:
		{if (a==0)
		    if(b>c)
		    cout<<"bpt vo so nghiem"<<endl;
		     else
		     cout<<"bpt vo nghiem "<<endl;
		 else if(a>0)
		 cout<<"bpt co nghiem x >"<<(float)(c-b)/a<<endl;
		 else 
		 cout<<"bpt co nghiem x <"<<(float)(c-b)/a<<endl;
		}
		break;
		 case 2:
	     if (a == 0)
        {
            if (b == 0 && c == 0)
                cout << "VSN";
            if (b == 0 && c != 0)
                cout << "VN";
            if (b != 0)
                printf("%.4f", -c / b);
        }
        else
        {
            delta = (b * b) - 4 * a * c;
            if (delta < 0)
                cout << "VN";
            if (delta == 0)
                cout << (-b / (2 * a));
            if (delta > 0)
                cout << (((-b) + sqrt(delta)) / 2 * a) << endl
                     << (((-b) - sqrt(delta)) / 2 * a) << endl;
        }
        break;
		case 3:
		{
			  if( a<b+c && b<a+c && c<a+b ){
        if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
            cout<<"Day la tam giac vuong";
        else if(a==b && b==c)
            cout<<"Day la tam giac deu";
        else if(a==b || a==c || b==c)
            cout<<"Day la tam giac can";
        else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b)    
            cout<<"Day la tam giac tu";
        else
            cout<<"Day la tam giac nhon";
    }
    else
        cout<<"Ba canh a, b, c khong phai la ba canh cua mot tam giac";
    return 0;
		}
		break;
	}
  cout<<endl;
}