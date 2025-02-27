#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rotate90(vector<vector<char>>& mat) {
    int n = mat.size();
    vector<vector<char>> temp(n, vector<char>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            temp[j][n - 1 - i] = mat[i][j];
        }
    }
    mat = temp;
}

void reflect(vector<vector<char>>& mat) {
    int n = mat.size();
    for (int i = 0; i < n; ++i) {
        reverse(mat[i].begin(), mat[i].end());
    }
}

bool isEqual(const vector<vector<char>>& mat1, const vector<vector<char>>& mat2) {
    int n = mat1.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (mat1[i][j] != mat2[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<vector<char>> original(n, vector<char>(n));
    vector<vector<char>> target(n, vector<char>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> original[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> target[i][j];
        }
    }

    if (isEqual(original, target)) {
        cout << 1 << endl;
        return 0;
    }

    vector<vector<char>> temp = original;
    rotate90(temp);
    if (isEqual(temp, target)) {
        cout << 2 << endl;
        return 0;
    }

    rotate90(temp);
    if (isEqual(temp, target)) {
        cout << 3 << endl;
        return 0;
    }

    rotate90(temp);
    if (isEqual(temp, target)) {
        cout << 4 << endl;
        return 0;
    }

    temp = original;
    reflect(temp);
    if (isEqual(temp, target)) {
        cout << 5 << endl;
        return 0;
    }

    rotate90(temp);
    if (isEqual(temp, target)) {
        cout << 6 << endl;
        return 0;
    }

    rotate90(temp);
    rotate90(temp);
    if (isEqual(temp, target)) {
        cout << 7 << endl;
        return 0;
    }

    cout << 7 << endl;

    return 0;
}