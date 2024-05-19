//Assignment1
//Question1
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    //n=even
    
    if (n%2==0){
    for (int i = 1; i <= n; i++) {
        for (int k=1; k<=n/2 ; k++){
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        
        int blanks = 2 * (n - i);

        for (int j=1; j<=blanks; j++){
            cout << " ";
        }
        
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        
    }

        cout << endl;
    }
    }
    
    //n=odd
    if (n%2!=0){
    for (int i = 1; i <= n; i++) {
        int blanks = 2 * (n - i);
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int j=1; j<=blanks/2; j++){
            cout << " ";
        }
        for (int k=1; k<=(n-1)/2 ; k++){
        for (int j=1; j<=blanks/2; j++){
            cout << " ";
        }
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int j=1; j<=blanks/2; j++){
            cout << " ";
        }
        
    }

        cout << endl;
    }
    }
    
    

    return 0;
}
