#include<bits/stdc++.h>
using namespace std;
int chph(long long n) 
{
	int chph=0;
	if (sqrt(n)==ceil(sqrt(n))) 
	{
		chph=1;
	}
	return chph;
}
int sochan(long long n)
{
	int sochan=0; long long i,dem=0;
	for (i=1;i<=n;i++)
	{
		if (n%i==0 && i%2==0)
		{
			dem++;
		}
	}
	if (dem>5)
	{
		sochan=1;
	}
	return sochan;
}
long long uoc(long long n)
{
	long long uoc=0,i;
	for (i=1;i<=n;i++)
	{
		if (n%i==0)
		{
			uoc++; 
		}
	} 
	return uoc;
}
int doixung(long long n)
{
	long long doixung=0,i,n2=0,n3;
	n3=n;
	while (n3>0)
	{
		n2=n2*10+(n%10);
		n3=n3/10;
	}
	if (n==n2)
	{
		doixung=1;
	}
	return doixung;
}
int main()
{
long long n,i,tg;
long long a[1000], b[1000];
string reply;
do
{
cout<<"Nhap vao so phan tu cua mang(n): "; cin>>n;
} while (n<=0);
cout<<"Hay nhap vao cac phan tu cua mang: ";
for (i=0;i<n;i++) 
{
	cin>>a[i];
}
do 
{

	int yc;
	cout<<"Chao ban den voi chuong trinh thuc hien cac thao tac voi mang 1 chieu "<<endl;
	cout<<"1. Chen mot so vao mang "<<endl;
	cout<<"2. Sap xep mang "<<endl;
	cout<<"3. Xoa mot phan tu khoi mang "<<endl;
	cout<<"4. Liet ke cac so chinh Phuong chia het cho 5 "<<endl;
	cout<<"5. Liet ke cac so co nhieu hon 5 uoc so chan "<<endl;
	cout<<"6. Liet ke cac so doi xung co nhieu uoc so nhat "<<endl;
	cin>>yc;
	switch (yc)
	{
		case 1:
		{ 
			reply="";
			long long x,k;
			cout<<"Nhap vao x(so can chen) va k(vi tri chen): ";
			cin>>x>>k;
			for (i=0;i<n;i++)
			{
				b[i]=a[i];
			}
			for (i=0;i<=n;i++)
			{
				if (i<k)
				{
					cout<<b[i]<<" ";
				}
				else
				{
					tg=b[i]; b[i]=x; x=tg; 
					cout<<b[i]<<" ";
				}
			}
		cout<<endl;
		cout<<"Ban co muon lam tiep yeu cau khong(neu co hay nhap 'yes')?"<<endl;
		cin>>reply;
		break;
		}
		case 2:
		{
			reply="";
			sort(a,a+n);
			for (i=0;i<n;i++)
			{
				cout<<a[i]<<" ";	
			}
		cout<<endl;
		cout<<"Ban co muon lam tiep yeu cau khong(neu co hay nhap 'yes')?"<<endl;
		cin>>reply;
		break;
		}
		case 3:
		{
			reply="";
			long long y,j=0,dem=0, check=0;
			cout<<"Nhap vao 1 so de kiem tra va xoa: "; cin>>y;
			for (i=0;i<n;i++)
			{
				if (y!=a[i]) 
				{
					 
					 b[j]=a[i]; dem++; j++;
				}
				else
				{
					check=1;
					continue;
				}
				
			}
			if (check==0)
				{
					cout<<"So da nhap khong co trong mang.";
				}
			else
			{
				for (i=0;i<dem;i++) 
				{
					cout<<b[i]<<" ";
				}
			}
			cout<<endl;
			cout<<"Ban co muon lam tiep yeu cau khong(neu co hay nhap 'yes')?"<<endl;
			cin>>reply;
			break;
		}
		case 4:
		{
			reply="";
			int check2=0;
			for (i=0;i<n;i++)
			{
				if (chph(a[i])==1 && a[i]%5==0)
				{
					cout<<a[i]<<" "; check2=1;
				}
			}
			if (check2==0)
			{
				cout<<"Mang khong co so chinh phuong chia het cho 5!";
			}
			cout<<endl;
			cout<<"Ban co muon lam tiep yeu cau khong(neu co hay nhap 'yes')?"<<endl;
			cin>>reply;
			break;
		}
		case 5:
		{
			reply="";
			int check3=0;
			for (i=0;i<n;i++)
			{
				if (sochan(a[i])==1)
				{
					cout<<a[i]<<" "; check3=1;
				}
			}
			if (check3==0)
			{
				cout<<"Mang khong co so can tim!";
			}
			cout<<endl;
			cout<<"Ban co muon lam tiep yeu cau khong(neu co hay nhap 'yes')?"<<endl;
			cin>>reply;
			break;
		}
		case 6:
		{
			reply="";
			long long j=1,max=0,dem;
			int check4=0;
			for (i=0;i<n;i++)
			{
				if (doixung(a[i])==1)
				{
					check4=1;
					if (uoc(a[i])>max)
					{
						max=uoc(a[i]);
					}
				}
			}
			for (i=0;i<n;i++)
			{
				if (uoc(a[i])==max && doixung(a[i]==1) && check4==1)
				{
					cout<<a[i]<<" ";
				}
			}
			if (check4==0)
			
			{
				cout<<"Mang khong co so can tim!"<<endl;
			}
			cout<<endl;
			cout<<"Ban co muon lam tiep yeu cau khong(neu co hay nhap 'yes')?"<<endl;
			cin>>reply;
			break;
		}
	}
} while (reply == "yes");
cout<<"Ban da hoan thanh chuong trinh"<<endl;
	return 0;
}
