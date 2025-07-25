#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


void hit(vector<int> &cache, int value, int pos){
    for(int i = pos ; i > 0 ; i--){
        cache[i] = cache[i-1];
    }
    cache[0]= value;
    cout << value << " - hit  : ";
    for(int x : cache)  cout << x << " " ;
    cout << endl;

}


void miss(vector<int> &cache, int value){
    cache.insert(cache.begin(), value);
    cache.pop_back();
    cout << value << " - miss : ";
    for(int x : cache)  cout << x << " " ;
    cout << endl;
    
}


void lruCache(int arr[], int n){
    vector<int> cache(4,0);

    for(int i = 0; i < n ; i++){
        int index = -1;
        for(int j = 0 ; j < cache.size() ; j++)    if(arr[i] == cache[j])    index = j;
        if(index == -1)    miss(cache, arr[i]);
        else    hit(cache, arr[i], index);
    }
}


int main() {
    int sequence[10] = {10, 20, 10, 30, 40, 50, 30 , 40, 60, 30};
    lruCache(sequence, sizeof(sequence)/sizeof(sequence[0]));
}

//TIME COMPLEXITY :
// OVERALL CODE   :  O(k * n)
// LRUCACHE()     :  O(k * n)
// MISS()         :  O(n)   
// HIT()          :  O(n)
// where, n is the size of the LRU cache and k is the size of the input sequence