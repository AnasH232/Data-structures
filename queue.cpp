// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    
    q.push(50);
    q.push(35);
    q.push(20);
    
    cout << q.front()<<endl;
    
    q.pop();
    cout<<q.front()<<endl;
    
    q.push(100);
    
    cout<<"queue elements: ";
    while (!q.empty()){
        cout << q.front()<<" ";
        q.pop();
    }
    

    return 0;
}
