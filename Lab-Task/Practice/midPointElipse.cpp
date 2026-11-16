#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define      HeHe     return 0
#define      YES      cout << "YES\n"
#define      NO       cout << "NO\n"
#define      nl         '\n'

int a, b , x , y;
int a_square, b_square, two_a_square, two_b_square;

int p1_update(int p , int c){
    if(c == -1){
        return p + (two_b_square * x) + b_square;
    } else {
        return p + ((two_b_square * x) - (two_a_square * y)) + b_square;
    }
}

int p2_update(int p , int c){
    if(c == -1){
        return p - (two_a_square * y) + a_square;
    } else {
        return p + ((two_b_square * x) - (two_a_square * y)) + a_square;
    }
}

void region1(int p){
    cout << "The coordinates are : ";
    while((two_b_square * x) <= (two_a_square * y)){
        cout << "(" << x << "," << y << ")" << " ";
        x++;
        if(p < 0){
            p = p1_update(p , -1);
        } else{
            y--;
            p = p1_update(p , 1);
        }
    }
}

void region2(int p){
    while(y != 0){
        cout << "(" << x << "," << y << ")" << " ";
        y--;
        if (p <= 0) {
        x++;
        p = p2_update(p, 1);
    }
    else {
    p = p2_update(p, -1);
        }
    }
    cout << "(" << x << "," << y << ")" << " ";
}

int main() {
    cout << "Enter the value for a , b : ";
    cin >> a >> b;

    a_square     = a * a;
    b_square     = b * b;
    two_a_square = 2 * a_square;
    two_b_square = 2 * b_square;
    x = 0;
    y = b;

    int p1 = b_square - a_square * b + ((1/4.0) * a_square);

    region1(p1);

    int p2 = b_square * pow((0.5 + x) , 2) + a_square * pow((y - 1) , 2) - (a_square * b_square);
    region2(p2);

    return 0;
}