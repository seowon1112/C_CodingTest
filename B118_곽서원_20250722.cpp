#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
#define endl '\n'
using namespace std;

//백준 5063번 코드
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);   cout.tie(NULL);
    
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == b - c) {
            cout << "does not matter" << endl;
        }
        else if (a < b - c) {
            cout << "advertise" << endl;
        }
        else {
            cout << "do not advertise" << endl;
        }
    }
}