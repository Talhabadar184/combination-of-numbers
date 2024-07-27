TASK 10
#include <iostream>
using namespace std;
int factorial(int num) {
    int result=1 ;
    for (int a = 1; a <= num; a++) {
        result *= a;
    }
    return result;
}
double combination(int num, int res) {
    double numfactorial = factorial(num);
    double resfactorial = factorial(res);
    double num_resfactorial = factorial(num - res);

    double result = numfactorial / (resfactorial * num_resfactorial);

    return result;
}

int main() {
    int num ;
    int res ;
    cout << "Enter n:" << endl; 
        cin >> num;
    cout << "Enter r:" << endl;
    cin >> res;
    double d = combination(num, res);

    cout << "Combinatiion of "<<num<<", "<<res<<" is  " << d << endl;

    return 0;
}