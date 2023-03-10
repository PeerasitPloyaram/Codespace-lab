#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool cul(vector <int> data,int n, int m){
    if (m == 0)
    return 1;
    if (n == 0)
    return 0;

    if (data.at(n - 1) > m){
        return cul(data, n - 1, m);
    }

    return cul(data, n - 1, m) || cul(data, n - 1, m - data.at(n - 1));
    
}

int main(){
    vector <int> data;
    int counter = 0;
    int m;

    for (int i = 0; i  < 10; i++){
        int input;
        cin >> input;
        if (input > 0 && input < 100)
        data.push_back(input);
        else
        break;

        if (cin.get() == '\n'){
            break;
        }
    }

    cin >> m;
    int n = data.size();
    
    if (cul(data, n, m) == 1)
    cout << "Yes";
    else
    cout << "No";

    return 0;
}