    /// FIRST FIT DECREASING
    /// FIRST FIT O SAME HOBE..JUST DON'T SORT

#include<bits/stdc++.h>
using namespace std;
void binPacking(int a[], int size, int n)       //6 5 4 3 2 1       7       6
{
    int binCount = 0;
    int FreeSpaces[n];       // bus shongkha max 0 0 0 0 0 0

    for (int i = 0; i < n; i++)
        FreeSpaces[i] = size;                    //0 0 0 7 7 7

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (FreeSpaces[j] >= a[i])
            {
                FreeSpaces[j] -= a[i];

                            /// TO SEE EACH STEP (IGNORE)
                            cout << "TESTING PURPOSE : ";
                            for(int i=0 ; i<n ; i++)
                            {
                                cout << FreeSpaces[i] << " ";
                            }
                            cout << endl;

                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
        if (FreeSpaces[i] != size)
            binCount++;

    cout << "Number of bins required using first fit decreasing algorithm is:" << binCount << endl;

}



int main()
{
    cout << "BIN - PACKING Algorithm 1D Objects(First Fit Decreasing)";
    cout << "Enter the number of items in Set: ";

    int n;
    cin >> n;
    cout << "Enter " << n << " items:";
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the bin size: ";
    int size;
    cin >> size;
    sort(a,a+n,greater<int>());

    binPacking(a, size, n);

    return 0;
}
