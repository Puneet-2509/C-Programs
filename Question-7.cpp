#include <iostream>
using namespace std;
int gcd(int n1, int n2)
{
    if (n2 != 0)
       return gcd(n2, n1 % n2);
    else 
       return n1;
}
int main(){
	int n, m, hcf;
	cout<<"enter two no. to know their GCD (n>m): ";
	cin>>n>>m;
	
	cout<<"greatest common factor for "<<n<<" and "<<m<<" by iteration is: ";
	for(int i=1;i<=m;++i){
		if(m%i==0 && n%i==0){
	         hcf=i;
		}
	}
	cout<<hcf<<endl;
    int ans=gcd(n ,m);
    cout<<"the gcd is: "<<ans<<endl;
    cout<<"(if the answer is 0 the one of the term is 0)"<<endl;
	return 0;
}
