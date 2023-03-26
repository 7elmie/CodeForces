#include <iostream>
#include<cmath>
using namespace std;

int main() {
	 long long  k,n,w;
	 long long cost=0,needed=0;
	 cin>>k>>n>>w;
	 for(int i=1;i<=w;i++){
		 	 cost+=(k*i);
	 }
	 if(cost<=n){
		 cout<<"0";
	 }
	 else{
		 needed=cost-n;
		 cout<<needed;
	 }


	return 0;
}
