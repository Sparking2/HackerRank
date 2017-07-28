#define toStr(text) #text
#define foreach(v,i) for(int i = 0; i < v.size();i++) 
#define io(v) std::cin >> v
#define INF UINT32_MAX
#define FUNCTION(name,operator) inline void name(int &current, int candidate) {!(current operator candidate) ? current = candidate : false;}



#include <iostream>
#include <vector>

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

int main(){
	FUNCTION(minimum, <)
		FUNCTION(maximum, >)

	int n;
	std::cin >> n;
	std::vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;

	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	std::cout << toStr(Result = ) << ' ' << ans;
	
	return 0;
}