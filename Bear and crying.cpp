#include<bits/stdc++.h>
using namespace std;
const int nax = 1e5 + 5;
const int mod = 1e9 + 7;
char sl[nax];
int result, r, o;
void add(int & a, int b) { a = (a + b) % mod; }
int main() {
	scanf("%s", sl);
	int n = strlen(sl);
	for(int i = 0; i < n; ++i) {
		if(sl[i] == '_')
			add(r, (r + o) % mod);
		else {
			add(result, r);
			add(o, 1);
		}
	}
	printf("%d\n", result);
	return 0;
}
