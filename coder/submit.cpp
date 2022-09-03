#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

map <int,int> mp;
int k;
bool flag =0;
void combinationUtil(int arr[], int data[],
                    int start, int end,
                    int index, int r);
 
void printCombination(int arr[], int n, int r)
{
    
    int data[r];
 
    
    combinationUtil(arr, data, 0, n-1, 0, r);
}
 

void combinationUtil(int arr[], int data[],
                    int start, int end,
                    int index, int r)
{
    
    if (index == r)
    {

        int sum = 0;
        for (int j = 0; j < r; j++){
            sum += data[j];

        }
        if (sum == k) flag = 1;
        return;
    }
 
    
    for (int i = start; i <= end &&
        end - i + 1 >= r - index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1,
                        end, index+1, r);
    }
}

int main()
{
	int n;
    cin >> n;
    
    cin >> k;
    int arr[n];

    for (int i =0; i<n;i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }

	printCombination(arr, n, 4);

    if (!flag){
        cout << "No labeo sorry :(\n";
    }else{
        cout << "Labeo bross, labeo !!\n";
    }

	return 0;
}
