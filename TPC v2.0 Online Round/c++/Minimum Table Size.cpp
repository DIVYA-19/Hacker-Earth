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
