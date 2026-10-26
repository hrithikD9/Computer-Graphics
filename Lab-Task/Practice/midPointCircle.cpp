#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define HeHe return 0
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl '\n'

void circleDrawing(int x , int y , int decision){
    cout << "The Coordinates are : ";
    while(y >= x){
        cout << "(" << x << " , " << y << ") " << " ";

        x++;
        if(decision < 0){
            decision += (2 * x) + 1;
        } else {
            y--;
            decision += (2 * (x - y)) + 1;
        }
    }
}

int main()
{
    int initial_X , initial_Y , rad , decision;

    cout << "Give your preferred radius (r/rad) : ";
    cin >> rad;

    initial_X = 0;
    initial_Y = rad;

    cout << nl << "Here is your inital value of (X , Y) : " << "(" << initial_X << " , " << initial_Y << ") " << nl;

    cout << nl;
    cout << "AND  , This is your radius (r) : " << rad << nl;

    decision = 1 - rad;
    cout << nl;

    circleDrawing(initial_X , initial_Y , decision);

    HeHe;
}