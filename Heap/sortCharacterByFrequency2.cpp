#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

template <class T>
class MaxPQ
{
    vector<T> maxpq;

public:
    void heapify(int i)
    {
        int largest = i;           // Initialize largest as root
        int l = 2 * i + 1;         // Left child index
        int r = 2 * i + 2;         // Right child index

        if (l < maxpq.size() && maxpq[l] > maxpq[largest])
            largest = l;

        if (r < maxpq.size() && maxpq[r] > maxpq[largest])
            largest = r;

        if (largest != i)
        {
            swap(maxpq[i], maxpq[largest]);
            heapify(largest);
        }
    }

    bool empty()
    {
        return maxpq.empty();
    }

    T top()
    {
        if (!maxpq.empty())
            return maxpq[0];
        throw runtime_error("Priority queue is empty.");
    }

    void pop()
    {
        if (maxpq.empty())
            return;
        if (maxpq.size() == 1)
        {
            maxpq.pop_back();
            return;
        }
        maxpq[0] = maxpq.back();
        maxpq.pop_back();
        heapify(0);
    }

    void push(T x)
    {
        maxpq.push_back(x);
        int i = maxpq.size() - 1;
        while (i != 0)
        {
            int parent = (i - 1) / 2;
            if (maxpq[i] > maxpq[parent])
            {
                swap(maxpq[i], maxpq[parent]);
                i = parent;
            }
            else
                break;
        }
    }
};

string frequencySort(string s)
{
    unordered_map<char, int> f;
    for (char i : s)
    {
        f[i]++;
    }

    MaxPQ<pair<int, char>> pq;
    for (auto i : f)
    {
        pq.push({i.second, i.first});
    }

    string ans = "";
    while (!pq.empty())
    {
        ans += string(pq.top().first, pq.top().second);
        pq.pop();
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;

    cout << frequencySort(s) << endl;
    return 0;
}
