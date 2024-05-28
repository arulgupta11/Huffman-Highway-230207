#include <iostream>
using namespace std;
int main() {
    
    
    class Matrix{
        public:
        int rows,columns;
        Matrix(int r, int c) : rows(r), columns(c){}
        float data[rows][columns];
        
        void input(){
            
            cout <<endl<< "Enter "<<rows*columns<< " values to be stored in MatA"<<endl;
            for (int i=0; i<rows; i++){
                for (int j=0; j<columns; j++){
                    float val;
                    cin>>val;
                    data[i][j]=val;
                }
            }
        }
        
        void print(){
            for (int i=0; i<rows; i++){
                for (int j=0; j<columns; j++){
                    cout<<data[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        
        
    };
    
    void operator *(Matrix const &matA, Matrix const &matB){
            for (int i=0; i<matA.rows; i++){
                for (int j=0; j<matB.columns;j++){
                    for (int k=0; k<matA.columns;k++){
                        matC.data[i][j]+=matA.data[i][k] * matB.data[k][k];
                    }
                }
            }
        
    }
    
    int m,n;
    cout<<"Enter the value of m for MatA(m x n)"<<endl;
    cin >> m;
    cout<<endl<<"Enter the value of n for MatA(m x n)"<<endl;
    cin >> n;
    rows=m;
    columns=n;
    Matrix matA(m,n);
    Matrix matB(n,m);
    Matrix matC(m,m);
    matA.input();
    matB.input();
    matC=matA*matB;
    matA.print();
    matB.print();
    matC.print();
    

    return 0;
}
