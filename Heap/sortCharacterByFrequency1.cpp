#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<char, int> f;
        for (char i : s)
        {
            f[i]++;
        }

        priority_queue<pair<int, char>> pq;
        for (auto i : f)
        {
            pq.push({i.second, i.first});
        }
        string ans = "";
        while (!pq.empty())
        {
            ans += string((pq.top()).first, (pq.top()).second);
            pq.pop();
        }
        return ans;
    }
};



int main() {
    string s;
    cin >> s;

    Solution a;
    cout << a.frequencySort(s) << endl;
    return 0;
}
