//Bài 1: 041_Dãy nón
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long i,n,max,vt,checktr=1,checks=1;
	long long a[11000];
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	max=a[1]; a[0]=a[1]-1; a[n+1]=a[n]-1;
	for (i=2;i<=n;i++)
	{
		if (max<=a[i])
		{
			max=a[i]; vt=i;
		}
	} 
	for (i=1;i<n;i++)
	{
		if (a[i]>a[i+1])
		checktr=0;
	}
	for (i=vt;i<n;i++)
	{
		if (a[i]<a[i+1])
		checks=0;
	}
	if (vt==1 || vt==n)
	checktr=0;
	if (checktr==1 && checks==1)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
//Bài 2: 047_Ma tran xoan oc
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n,tren=1,duoi,trai=1,phai;
	int i,j,so;
	int a[110][110];
	cin>>m>>n; duoi=m; phai=n;
	while (so<n*m)
	{
		for (i=trai;i<=phai;i++)
			a[tren][i]=so++;
		tren++;
		for (i=tren;i<=duoi;i++)
			a[i][phai]=so++;
		phai--;
		for (i=phai;i>=trai;i--)
			a[duoi][i]=so++;
		duoi--;
		for (i=duoi;i>=tren;i--)
			a[trai][i]=so++;
		trai++;
	}
	for (i=1;i<=m;i++)
	{
		for (j=1;j<=n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<a[3][3];
	return 0;
}

//Bài 3: 026_Chenh lech lien tiep
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,chenh;
	int a[1100];
	cin>>n;
	for (i=1;i<=n;i++)
		cin>>a[i];
	int max=abs(a[1]-a[2]);
	for (i=2;i<n;i++)
	{
		chenh=abs(a[i]-a[i+1]); 
		if (chenh>max)
			max=chenh; 
	}
	cout<<max;
	return 0;
}
//Bài 4: 035_Mang con duong
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,dem=0;
	int a[1100];
	cin>>n;
	for (i=1;i<=n;i++)
		cin>>a[i];
	int max=0;
	for (i=1;i<=n;i++)
	{
		if (a[i]>0)
		{
			for (j=i;j<=n;j++)
			{
				if (a[j]>0)
				{	
				dem++;
				}
				else break;
			}
			if (max<dem)
			{
			max=dem;
			}
			dem=0;
		}
	}
	cout<<max;
	return 0;
}
//Bài 5: 030_Lon thu hai
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,loai;
	long long a[1100];
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cin>>a[i];
		if (i==1)
			loai=a[1];
		else if (loai<a[i])
			loai=a[i];	
	}
	long long max=LONG_MIN;
	for (i=1;i<=n;i++)
	{
		if (a[i]!=loai)
		{
			if 	(max<a[i])
			max=a[i];
		}
		else continue;
	}
	cout<<max;
	return 0;
}
//Bài 6: 033_Mang Palindrome
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,dem=0;
	int b[1100],a[1100];
	cin>>n;
	for (i=1;i<=n;i++)
		cin>>a[i];	
	int j=1;
	for (i=n;i>=1;i--)
	{
		b[j]=a[i]; j++;
	}
	for (i=1;i<=n;i++)
	{
		if (a[i]==b[i])
		dem++;
	}
	if(dem==n)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
//Bài 7: MT1-Array1D-2022-11-21-Bai5
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,j,tong=0;
	long long a[1100];
	cin>>n;
	for (i=1;i<=n;i++)
		cin>>a[i];	
	long long max=a[1];
	for (i=1;i<=n;i++)
	{
		tong=0;
		for (j=i;j<=n;j++)
		{
			tong=tong+a[j];	
			if (max<tong)
			max=tong;
		}
	}
	cout<<max;
	return 0;
}
//Bài 8: 6_M1C_DemKoSNTLonX_GK2_09_10_3
#include<bits/stdc++.h>
using namespace std;
bool nt(int n)
{
	bool nt=true;
	for (int i=2;i<=sqrt(n);i++)
	{
		if (n%i==0)
		return false;
	}
	return nt;
}
int main()
{
	int n,x,i,j,dem=0;
	int a[1100];
	cin>>n>>x;
	for (i=1;i<=n;i++)
		cin>>a[i];	
	for (i=1;i<=n;i++)
	{
		if ((a[i]>x) && (nt(a[i])==0))
		dem++;
	}
	cout<<dem;
	return 0;
}
//Bài 9: 7_MT_MaxDongGiua_CK1_13_14

//Bài 10: 8_M1C_ChuTrinh_CK1_14_15
