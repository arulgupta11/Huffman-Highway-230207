
#include <iostream>
using namespace std;
int main() {
    
    class Loan {
    public:
        double amount;
        string status;
        Loan* next;
};
    
    
    class account{
    private:
        int account_no;
        string account_holder;
        string address;
        string account_type;
        double funds;
        transactions* transactionhistory;
        loans* loanhistory;


     public:
        void deposit(double amount) {
        funds += amount;
        cout << "Deposited: " << amount << endl << ". New balance: " << funds << endl;
        }
        
        void withdraw(double amount) {
        if (amount>funds){
            cout << "Account balance less than withdrawal request";
        }
        else {
            funds -= amount;
            cout << "Withdrawan: " << amount << endl << ". New balance: " << funds << endl;
        }
        
        void update_account_info(string name, string addr) {
        account_holder = name;
        address = addr;
        cout << "Account info is updated." << endl;
        }
        
        void transferFunds(Account const &toAccount, double amount) {
        if (funds >= amount) {
            funds -= amount;
            toAccount.deposit(amount);
            cout << amount << " is transferred from the account."<< endl;
        } 
        else {
            cout << "Insufficient funds for transfer." << endl;
        }
        }
    };

    return 0;
}
