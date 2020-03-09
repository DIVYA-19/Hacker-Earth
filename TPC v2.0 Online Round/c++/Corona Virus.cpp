#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    
    std::vector<int> mem;
    std::vector<int> mem2;
    int check = 0, count = 1;
    for(int i=0;i<n;i++){
		if(s[i]=='1'){
			if(check%2==0){
				mem.push_back(i);
			}else{
				mem2.push_back(i);
			}
			check++;
		}    	
	}
	if(mem.size() == mem2.size()){
		for(int i=0;i<mem.size()-1;i++){
			cout << mem[i+1] << mem2[i] << endl;
			count = count * (mem[i+1] - mem2[i]);
		}
		cout << count;
	}
	else{
		cout << -1;
	}
}
