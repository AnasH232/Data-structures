// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> languages;
    
    languages.push("C++");
    languages.push("Java");
    languages.push("Python");
    
    cout << languages.top()<<endl;
    
    languages.pop();
    cout<<languages.top()<<endl;
    

    return 0;
}
