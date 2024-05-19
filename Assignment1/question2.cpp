//Assignment1
//Question2
#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

double add(double a, double b) {
    return a+b;
}
double subtract(double a, double b) {
    return a-b;
}
double multiply(double a, double b) {
    return a*b;
}
double divide(double a, double b) {
    if (b==0) {
        cout << "Division by 0 not possible!!!" << endl;
        exit(1);
    }
    return a/b;
}
int mod(int a, int b) {
    if (b==0) {
        cout << "Modulus by 0 not possible!!!" << endl;
        exit(1);
    }
    return a%b;
}
double ln(double x) {
    if (x<=0) {
        cout << "Log of non +ve number not possible!!!" << endl;
        exit(1);
    }
    return log(x);
}
double exponent(double x) {
    return exp(x);
}
double sine(double x) {
    return sin(x);
}
double cosine(double x) {
    return cos(x);
}
double tangent(double x) {
    return tan(x);
}
double eval(const vector<string>& operators, const vector<double>& values) {
    double result = values[0];
    size_t valIndex = 1;

    for (const auto& op : operators) {
        if (op=="+") {
            result = add(result, values[valIndex++]);
        } else if (op=="-") {
            result = subtract(result, values[valIndex++]);
        } else if (op=="*") {
            result = multiply(result, values[valIndex++]);
        } else if (op=="/") {
            result = divide(result, values[valIndex++]);
        } else if (op=="mod") {
            result = mod(static_cast<int>(result), static_cast<int>(values[valIndex++]));
        } else if (op=="ln") {
            result = ln(result);
        } else if (op=="sin") {
            result = sine(result);
        } else if (op=="cos") {
            result = cosine(result);
        } else if (op=="tan") {
            result = tangent(result);
        } else if (op=="exp") {
            result = exponent(result);
        } else {
            cout << "Enter valid operator!!!" << endl;
            exit(1);
        }
    }

    return result;
}

int main() {
    int numop;
    cout << "Enter the number of operators: ";
    cin >> numop;
    vector<string> operators(numop);
    cout << "Enter the operators (+, -, *, /, mod, ln, exp, sin, cos, tan):";
    int c=0;
    for (int i = 0; i < numop; ++i) {
        cin >> operators[i];
        // if (operators[i]=="ln"||"sin"||"cos"||"tan"){
        //     c+=1;
        // }
    }

    //int numval = numop+1-c;
    int numval = numop+1;
    vector<double> values(numval);
    cout << "Enter the values: ";
    for (int i = 0; i < numval; ++i) {
        cin >> values[i];
    }

    double result = eval(operators, values);

    cout << "Final output is: " << result << endl;

    return 0;
}
