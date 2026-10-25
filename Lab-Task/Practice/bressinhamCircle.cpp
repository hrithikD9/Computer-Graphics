#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define HeHe return 0
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl '\n'

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

    cout << "The Coordinates are : ";
    while(initial_Y >= initial_X){
        cout << "(" << initial_X << " , " << initial_Y << ") " << "  ";

        initial_X++;
        if(decision < 0){
            decision += (4 * initial_X) + 6;
        } else {
            initial_Y--;
            decision += (4 * (initial_X - initial_Y)) + 6;
        }
    }

    HeHe;
}