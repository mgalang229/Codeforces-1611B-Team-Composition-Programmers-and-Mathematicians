#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long a, b;
		cin >> a >> b;
		// first, find the total number of people
		// then, divide them by 4 to get the no. of teams that can be made
		// lastly, compare the minimum value between the maximum teams can
		// be formed, the no. of programmers, and the no. of mathematicians
		long long total = a + b;
		total /= 4;
		cout << min({total, a, b}) << '\n';
	}
	return 0;
}
