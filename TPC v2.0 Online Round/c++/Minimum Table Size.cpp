#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n,p;
	cin >> n>>p;
	long long ans=0;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		double val = ceil(log10(x) / log10(p));
		if(val == 0){
			ans += pow(p, val+1);
		}else{
			ans += pow(p, val);
		}
	}
	cout << ans;	
}

void usingBinarySearch(){
	const long long oo = 1e6;
	set <long long> powers;
	
	int n,p;
	cin >> n >> p;
	for (long long val= p;p<oo;val*=p){
		powers.insert(val);
	}
	long long cost = 0;
	for(int i=1; i<=n;i++){
		int x;
		cin >> x;
		auto it = upper_bound(powers.begin(), powers.end(), x-1);
		
		cost += *it;
	}
	cout << cost ;
}
