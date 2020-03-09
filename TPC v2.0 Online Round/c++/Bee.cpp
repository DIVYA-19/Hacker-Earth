#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n,k;
	cin >>n>>k;
	int value;
	long long sum = 0;
	for(int i=0;i<k;i++){
		cin >> value;
		sum += value;
	}
	long long ans = n/sum;
	if(n%sum == 0){
		cout << ans;
	}
	else{
		cout << ans + 1;
	}
}
