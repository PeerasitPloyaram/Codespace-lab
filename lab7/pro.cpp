#include <iostream>
#include <vector>
#include <string>

using namespace std;

void cul(vector <int> data){

}

int main(){
    vector <int> data;
    int counter = 0;

    for (int i = 0; i  < 10; i++){
        int input;
        cin >> input;
        if (input > 0 && input < 100)
        data.push_back(input);
        else
        break;

        if (cin.get() == '\n'){
            cul(data);
            break;
        }
    }
    
    return 0;
}