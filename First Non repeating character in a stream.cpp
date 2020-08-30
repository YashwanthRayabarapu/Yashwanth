#include <bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;

void repeat(char str[])
{
	queue<char> q;
	int counts[MAX_CHAR] = { 0 };
	for (int i = 0; str[i]; i++) {
		q.push(str[i]);

		// increment the frequency count
		counts[str[i] - 'a']++;

		// check for the non pepeating character
		while (!q.empty()) {
			if (counts[q.front() - 'a'] > 1)
				q.pop();
			else {
				cout << q.front() << " ";
				break;
			}
		}

		if (q.empty())
			cout << -1 << " ";
	}
	cout << endl;
}

int main()
{
	char str[] = "aaabbcd";
	repeat(str);
	return 0;
}
