#include<iostream>
using namespace std;
// Half Pyramid Using Number 
int main(){
    int n;
    cout << "Enter the Value N: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}