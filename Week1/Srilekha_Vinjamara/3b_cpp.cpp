/* 
c++ program to print traingle pattern
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int num;

	// num is the input taken from user
	cin >> num;
	for(int i = 1; i <= num; i++){
		for(int k = num-1; k >= i; k--)
			cout << " ";
		for(int j = 1; j <= i; j++)
			cout << "* ";
		cout << "\n";
	}
	return 0;
}