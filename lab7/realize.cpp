#include <iostream>
#include <vector>

using namespace std;

int main(){
    int const max_node = 5;
    int data;
    char name_node;
    int graph[max_node][max_node];

    cin >> data,name_node;
    
    for (int i = 0; i < data; i++){
        cout << i << '\n';
    }
    
    return 0;
}