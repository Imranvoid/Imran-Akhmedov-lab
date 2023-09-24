#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUSSIAN"); 
    int M, N;

    cout << " размер массива A: ";
    cin >> M;
    cout << " размер массива B: ";
    cin >> N;

    vector<int> A(M);
    vector<int> B(N);

    cout << " элементы массива A: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    cout << " элементы массива B: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    unordered_set<int> setB(B.begin(), B.end());

    vector<int> result;

    for (int i = 0; i < M; i++) {
        if (setB.find(A[i]) == setB.end()) {
            result.push_back(A[i]);
        }
    }

    cout << "Результат:" << endl;
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
