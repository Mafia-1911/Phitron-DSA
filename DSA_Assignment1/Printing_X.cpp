#include <bits/stdc++.h>
using namespace std;

int main(){
    //back slash at i,i
    //Forward slash at secondary diagonal , i ,n-i-1
    int N;
    cin >> N;

    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            if (row == col && row + col == N - 1) {
                cout << "x";
            } else if (row == col) {
                cout << "\\";
            } else if (row + col == N - 1) {
                cout << "/";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}