#include<bits/stdc++.h>
using namespace std;
struct laptop
{
	string ma,ten;
	int soluong,chatluong;
	float dongia,thanhtien,thue,tongtien;
};
laptop lt[100];
void nhap(laptop lt[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"NHAP THONG TIN LAPTOP THU:"<<i+1;
		cout<<"\nma:";cin>>lt[i].ma;
		cout<<"ten laptop:";cin.ignore();getline(cin,lt[i].ten);
		cout<<"so luong:";cin>>lt[i].soluong;
		cout<<"don gia:";cin>>lt[i].dongia;
		cout<<"chat luong:";cin>>lt[i].chatluong;
	}
}
void in(laptop lt[],int n)
{
	cout<<"|"<<setw(10)<<"Ma";
	cout<<"|"<<setw(15)<<"Ten";
	cout<<"|"<<setw(15)<<"So luong";
	cout<<"|"<<setw(10)<<"Don gia";
	cout<<"|"<<setw(15)<<"Chat luong"<<"|"<<setw(5)<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<"|"<<setw(10)<<lt[i].ma;
		cout<<"|"<<setw(15)<<lt[i].ten;
		cout<<"|"<<setw(15)<<lt[i].soluong;
		cout<<"|"<<setw(10)<<lt[i].dongia;
		cout<<"|"<<setw(15)<<lt[i].chatluong<<"|"<<setw(5)<<"\n";
	}
}
void tinhthanhtien(laptop lt[],int n)
{
	for(int i=0;i<n;i++)
	{
		lt[i].thanhtien=lt[i].dongia*lt[i].soluong;
	}
}
void thue_vat(laptop lt[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(lt[i].chatluong==1)
		{
			lt[i].thue=30/100*lt[i].thanhtien;
		}
		if(lt[i].chatluong==2)
		{
			lt[i].thanhtien=10/100*lt[i].thanhtien;
		}
	}
}
void tinhtong(laptop lt[],int n)
{
	tinhthanhtien(lt,n);
	thue_vat(lt,n);
	for(int i=0;i<n;i++)
	{
		lt[i].tongtien=lt[i].thanhtien+lt[i].thue;
	}
}
void gan(float &x,float &y)
{
	float td;
	td=x,x=y,y=td;
}
void sx_tangdan(laptop lt[],int n)
{
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	{
		if(lt[i].thue>lt[j].thue)
		{
			gan(lt[i].thue,lt[j].thue);
		}
	}
}
void sau_sx(laptop lt[],int n)
{
	tinhthanhtien(lt,n);
	thue_vat(lt,n);
	tinhtong(lt,n);
	sx_tangdan(lt,n);
	for(int i=0;i<n;i++)
	{
		cout<<"\nMa:"<<lt[i].ma;
		cout<<"\nTen:"<<lt[i].ten;
		cout<<"\nSo luong:"<<lt[i].soluong;
		cout<<"\nChat luong:"<<lt[i].chatluong;
		cout<<"\nThanh tien:"<<lt[i].thanhtien;
		cout<<"\nThue VAT:"<<lt[i].thue;
		cout<<"\nTong tien:"<<lt[i].tongtien;
	}
}
void cl_min(laptop lt[],int  n)
{
	tinhthanhtien(lt,n);
	thue_vat(lt,n);
	tinhtong(lt,n);
	cout<<"|"<<setw(10)<<"Ma";
	cout<<"|"<<setw(15)<<"Ten";
	cout<<"|"<<setw(15)<<"So luong";
	cout<<"|"<<setw(10)<<"Chat luong";
	cout<<"|"<<setw(15)<<"Thanh tien";
	cout<<"|"<<setw(15)<<"Thue VAT";
	cout<<"|"<<setw(15)<<"Tong tien"<<"|"<<setw(5)<<"\n";
	int min=lt[0].chatluong;
	for(int i=0;i<n;i++)
	{
		if(lt[i].chatluong<min)
		{
			min=lt[i].chatluong;
		}
		cout<<"|"<<setw(10)<<lt[i].ma;
		cout<<"|"<<setw(15)<<lt[i].ten;
		cout<<"|"<<setw(15)<<lt[i].soluong;
		cout<<"|"<<setw(10)<<lt[i].chatluong;
		cout<<"|"<<setw(15)<<lt[i].thanhtien;
		cout<<"|"<<setw(15)<<lt[i].thue;
		cout<<"|"<<setw(15)<<lt[i].tongtien<<"|"<<setw(5)<<"\n";
	}
}
void nhapso(laptop lt[],int n)
{
	float vat;
	tinhthanhtien(lt,n);
	thue_vat(lt,n);
	tinhtong(lt,n);
	cout<<"nhap so vat:";cin>>vat;
	cout<<"|"<<setw(10)<<"Ma";
	cout<<"|"<<setw(15)<<"Ten";
	cout<<"|"<<setw(15)<<"So luong";
	cout<<"|"<<setw(10)<<"Chat luong";
	cout<<"|"<<setw(15)<<"Thanh tien";
	cout<<"|"<<setw(15)<<"Thue VAT";
	cout<<"|"<<setw(15)<<"Tong tien"<<"|"<<setw(5)<<"\n";
	for(int i=0;i<n;i++)
	{
		if(lt[i].thue>vat)
		{
			cout<<"|"<<setw(10)<<lt[i].ma;
		    cout<<"|"<<setw(15)<<lt[i].ten;
		    cout<<"|"<<setw(15)<<lt[i].soluong;
		    cout<<"|"<<setw(10)<<lt[i].chatluong;
		    cout<<"|"<<setw(15)<<lt[i].thanhtien;
		    cout<<"|"<<setw(15)<<lt[i].thue;
		    cout<<"|"<<setw(15)<<lt[i].tongtien<<"|"<<setw(5)<<"\n";
		}
	}
}
void menu()
{
	cout<<"------------------------MENU----------------------------";
	cout<<"\n1.Nhap thong tin laptop";
	cout<<"\n2.In thong tin laptop";
	cout<<"\n3.Danh sach laptop theo thu tu tang dan ve thue VAT";
	cout<<"\n4.Thong tin thiet bi co chat luong thap nhat";
	cout<<"\n5.Danh sach cac thiet bi co thue VAT>vat";
	cout<<"\n0.Thoat!";
}
int main()
{
	menu();
	int chon;
	do{
	cout<<"\nChon Menu:";cin>>chon;
	switch(chon){
		case 1:
			int n;
	        cout<<"Nhap so luong laptop:";cin>>n;
			nhap(lt,n);break;
		case 2:
			in(lt,n);break;
		case 3:
			sau_sx(lt,n);break;
		case 4:
			cl_min(lt,n);break;
		case 5:
			nhapso(lt,n);break;
		case 0:
			break;
	}
    }
	while(chon);
}
