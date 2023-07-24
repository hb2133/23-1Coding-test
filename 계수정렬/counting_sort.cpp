#include <iostream>
using namespace std;

const int SIZE = 9;

int n = 15;
int arr[15] = { 7, 5, 9, 0, 3, 1, 6, 2, 9, 1, 4, 8, 0, 5, 2 };
int cnt[SIZE + 1];

int main(void) {
    for (int i = 0; i < n; i++) {
        cnt[arr[i]] += 1;
    }
    for (int i = 0; i <= SIZE; i++) {
        for (int j = 0; j < cnt[i]; j++) {
            cout << i << ' ';
        }
    }
}