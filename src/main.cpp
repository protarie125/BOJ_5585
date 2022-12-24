#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int x;
	cin >> x;

	auto y = 1000 - x;
	auto coin = vector<int>{ 500,100,50,10,5,1 };
	auto ans = int{ 0 };
	for (const auto& c : coin) {
		while (c <= y) {
			y -= c;
			++ans;
		}
	}

	cout << ans;

	return 0;
}