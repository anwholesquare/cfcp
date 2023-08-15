#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100000;
vector<int> smallestPrime(MAXN + 1); // smallest prime factor for each number

void sieve() {
    smallestPrime[1] = 1;
    for (int i = 2; i <= MAXN; i++) {
        if (smallestPrime[i] == 0) {
            smallestPrime[i] = i;
            for (int j = i*i; j <= MAXN; j += i) {
                if (smallestPrime[j] == 0) {
                    smallestPrime[j] = i;
                }
            }
        }
    }
}

bool hasFactor(int n, int p) {
    while (n > 1) {
        if (smallestPrime[n] <= p) return true;
        n /= smallestPrime[n];
    }
    return false;
}

string whoWins(vector<int> A, vector<int> B) {
    sieve();
    vector<double> prefix(A.size());
    prefix[0] = log(A[0]);
    for(int i = 1; i < A.size(); i++)
        prefix[i] = prefix[i-1] + log(A[i]);

    int scoreMonir = 0, scoreAmir = 0;
    for(int i = 0; i < B.size(); i++) {
        if(B[i] % 2 == 0) { // Monir's turn
            for(int j = 0; j < A.size(); j++) {
                for(int k = j; k < A.size(); k++) {
                    double product_log = prefix[k] - ((j == 0) ? 0 : prefix[j-1]);
                    if (product_log > log(B[i]) || !hasFactor(exp(product_log), B[i]))
                        scoreMonir++;
                }
            }
        } else { // Amir's turn
            for(auto a : A) {
                if(smallestPrime[a] > B[i])
                    scoreAmir++;
            }
        }
    }

    return (scoreMonir > scoreAmir) ? "Monir" : "Amir";
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(M);
    for(int i = 0; i < N; i++)
        cin >> A[i];
    for(int i = 0; i < M; i++)
        cin >> B[i];
    cout << whoWins(A, B) << "\n";
    return 0;
}
