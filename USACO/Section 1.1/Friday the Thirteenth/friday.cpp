#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <cstdio>
using namespace std;
int main() {
//	freopen("friday.in","r",stdin);
//	freopen("friday.out","w",stdout);
    int N;
    cin >> N;
    vector<int> count(7, 0);
    int months1[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int months2[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day = 1;
    for (int i = 0; i < N; i++) {
        bool isLeap = false;
        if ((1900 + i) % 100 == 0) {
            if ((1900 + i) % 400 == 0) isLeap = true;
        } else if ((1900 + i) % 4 == 0) {
            isLeap = true;
        }
        for (int j = 0; j < 12; j++) {
            count[(day + 13) % 7]++;
            if (isLeap) day += months2[j];
            else day += months1[j];
        }
    }
    for (int i = 0; i < 7; i++) {
        if (i != 0) cout << " ";
        cout << count[i];
    }
    cout << endl;
    return 0;
}
