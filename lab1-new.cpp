#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"請輸入一正整數"<<endl;
	cin>>n;
	while(n!=1)
	{
		cout<<n<<endl;
		if (n%2==0)
		  n/=2;
		else n=3*n+1;

	}
	    cout<<n<<endl;
	
	return 0;
}
