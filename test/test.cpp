#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

vector <int> cul(int pos, int temp){
    vector <int> data;
    for (int i = 0; i < pos; i++){
       temp += i; 
       data.push_back(temp);
    }
    return data;
}

int main() {
    vector <int> data = cul(10,3);
    for (int i = data.size() ;i > 0; i--){
        cout << i;
        cout << '\n';
    }
    cout << '\n';
    return 0;
}