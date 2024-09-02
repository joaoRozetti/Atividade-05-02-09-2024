#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

string toUpperCase(const string& input) {
    string result = input; 
    transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}

int main() {
    string x;
    
    cout << "Digite uma string: ";
    cin >> x;

    string retorno = toUpperCase(x);

    cout << "A string em maiusculas eh: " << retorno << endl;

    return 0;
}
