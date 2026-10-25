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
            decision += (4 * x) + 6;
        } else {
            y--;
            decision += (4 * (x - y)) + 6;
        }
    }
}

int main()
{
    int initial_X , initial_Y , rad , decision;

    cout << "Give your preferred radius (r/rad) : " << nl;
    cin >> rad;

    initial_X = 0;
    initial_Y = rad;

    cout << "Here is your inital value of (X , Y) : " << "(" << initial_X << " , " << initial_Y << ") " << nl;

    cout << nl;
    cout << "AND  , This is your radius (r) : " << rad << nl;

    decision = 3 - (2 * rad);
    cout << nl;

    circleDrawing(initial_X , initial_Y , decision);

    HeHe;
}