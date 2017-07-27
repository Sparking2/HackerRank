#define toStr 
#define io(v) std::cin >> v
#define FUNCTION(name,operator) inline void minimum(int &current, int candidate) {!(current < candidate) ? current = candidate : false;}
#define FUNCTION(name,operator) inline void maximum(int &current, int candidate) {!(current > candidate) ? current = candidate : false;}
#define INF std::intmax_t
#define foreach(v,i) for(int i = 0; i < v.size();i++)


#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

/*FUNCTION(minimum, < )
	FUNCTION(maximum, > )

	int main() {
	int n; 
	cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;*/
int main(){

	cout << toStr(Result = ) << ' ' << ans;
	return 0;
}