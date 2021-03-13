#include <bits/stdc++.h>
using namespace std;
template<class T> bool umin(T& a, const T& b) {return b<a?a=b, 1:0;}
template<class T> bool umax(T& a, const T& b) {return a<b?a=b, 1:0;}
string to_string(char c) {return string(1, c);}
string to_string(bool b) {return b?"true":"false";}
string to_string(const char* s) {return string(s);}
string to_string(string s) {return s;}
string to_string(vector<bool> v) {
	string res;
	for (int i = 0; i < (int) v.size(); ++i)
		res+=char('0'+v[i]);
	return res;
}
template<size_t S> string to_string(bitset<S> b) {
	string res;
	for (int i = 0; i < S; ++i)
		res+=char('0'+b[i]);
	return res;
}
template<class T> string to_string(T v) {
    bool f=1;
    string res;
    for (auto x : v) {
		if(!f)
			res+=", ";
		f=0;
		res+=to_string(x);
	}
    return "{" + to_string(res) + "}";
}
void DBG() {cerr << "]" << endl;}
template<class H, class... T> void DBG(H h, T... t) {
	cerr << to_string(h);
	if(sizeof...(t))
		cerr << ", ";
	DBG(t...);
}
#ifdef _DEBUG
#define debug(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define debug(...) 0
#endif

int main() {
	
}
