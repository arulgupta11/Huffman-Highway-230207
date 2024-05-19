//Assignment1
//Question3
#include <iostream>
using namespace std;
float avg (int arr[10]){
        float a=0.0;
        for (int i=0; i<10; i++){
            a+=arr[i];
        }
        a=a/10;
        return a;
    }
    
int high (int arr[10]){
        int a=0;
        for (int i=0; i<10; i++){
            if (arr[i]>a){
                a=arr[i];
            }
        }
        return a;
    }
    
int low (int arr[10] , float highest){
        int a=highest;
        for (int i=0; i<10; i++){
            if (arr[i]<a){
                a=arr[i];
            }
        }
        return a;
    }
    
int abvavg (int arr[10], float avg){
        int a=0;
        for (int i=0; i<10; i++){
            if (arr[i]>avg){
                a++;
            }
        }
        return a;
    }
    
int belavg (int arr[10], float avg){
        int a=0;
        for (int i=0; i<10; i++){
            if (arr[i]<avg){
                a++;
            }
        }
        return a;
    }
int main() {
    int arr[10];
    for (int i=0; i<10; i++){
        cout << "Enter score ";
        cout << i+1;
        cout << " : ";
        cin >> arr[i];
    }
    
    float average = avg(arr);
    int highest = high(arr);
    int lowest = low(arr, highest);
    int aboveavg = abvavg(arr, average);
    int belowavg = belavg(arr, average);
    
    cout << "The average is : ";
    cout << average;
    cout << endl;
    
    cout << "The highest score is : ";
    cout << highest;
    cout << endl;
    
    cout << "The lowest is : ";
    cout << lowest;
    cout << endl;
    
    cout << "The number of scores above average is : ";
    cout << aboveavg;
    cout << endl;
    
    cout << "The number of scores below average is : ";
    cout << belowavg;
    cout << endl;
    

    return 0;
}
