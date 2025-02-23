#include <iostream>
#include <algorithm>
using namespace std;

struct Point {
    int x, y;
};

bool mycmp(Point p1, Point p2) {
    return (p1.x < p2.x);
}

int main() {
    Point arr[] = {{3, 10}, {2, 4}, {5, 8}};
    sort(arr, arr + 3, mycmp);

    for (auto i : arr)
        cout << i.x << " " << i.y << endl;

    return 0;
}
