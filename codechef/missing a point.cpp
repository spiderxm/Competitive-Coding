#include<iostream>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define w() ll t; cin >> t; while(t--)
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        long n;
        cin >> n;
        n = 4 * n;
        n--;
        long long arr[n], drr[n];
        for (long i = 0; i < n; i++) {
            cin >> arr[i] >> drr[i];
        }
        for (long gap = n / 2; gap > 0; gap /= 2)
            for (long i = gap; i < n; i++)
                for (long j = i - gap; j >= 0 && arr[j] > arr[j + gap]; j -= gap) {
                    long long low = arr[j];
                    arr[j] = arr[j + gap];
                    arr[j + gap] = low;
                }
        for (long gap = n / 2; gap > 0; gap /= 2)
            for (long i = gap; i < n; i++)
                for (long j = i - gap; j >= 0 && drr[j] > drr[j + gap]; j -= gap) {
                    long long low = drr[j];
                    drr[j] = drr[j + gap];
                    drr[j + gap] = low;
                }
        long long missx, missy;
        for (long i = 0; i < n; i += 2) {
            if (arr[i] != arr[i + 1]) {
                missx = arr[i];
                break;
            }
            if (i == n - 1)
                missx = arr[i];
        }
        for (long i = 0; i < n; i += 2) {
            if (drr[i] != drr[i + 1]) {
                missy = drr[i];
                break;
            }
            if (i == n - 1)
                missy = drr[i];
        }
        cout << missx << " " << missy << "\n";
    }
}