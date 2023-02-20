#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

bool Isnotuse(char data_use[], int size, char find){
    for (int i = 0; i < size; i++){
        if (data_use[i] == find)
        return 0;
    }
    return 1;
}
void swap(int *xp, int *yp) //swap int
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void swap_char(char *xp, char *yp) //swap char
{
    char temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void superSelectionSort(int feq[],char word[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++){
        min_idx = i;
        for (j = i+1; j < n; j++){
          if (feq[j] < feq[min_idx])
              min_idx = j;
        }
        if (min_idx!=i){
            swap(&feq[min_idx], &feq[i]);
            swap_char(&word[min_idx], &word[i]);
        }
    }
}

struct Node{
    char data;
    int freq;
    struct Node *left;
    struct Node *right;
};
struct minheep{
    unsigned size;
    unsigned capcity;

    struct minheep** array;
};
struct Node* newNode(char data, unsigned freq)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->left = temp->right = NULL;
    temp->data = data;
    temp->freq = freq;
 
    return temp;
}


int main(){
    char word[50];

    cin.get(word, 50);
    int count_char = 0;
    int word_size = strlen(word);

    for (int i = 0; i < word_size; i++){ //change to upper case
        word[i] = toupper(word[i]);
    }

    char word_repeate[word_size];
    int word_count[word_size];
    fill_n(word_count,word_size,0);
    fill_n(word_repeate,word_size,0);

    int index_count = 0;
    for (int i = 0; i < word_size; i++){
        int count = 0;
        for (int j = 0; j < word_size; j++){
            if (word[i] == word[j]){
                count++;
            }
        }
        
        if(Isnotuse(word_repeate,i,word[i])){
            word_repeate[index_count] = word[i];
            word_count[index_count++] = count;
            count_char++;
        }
    }
    superSelectionSort(word_count,word_repeate,count_char); //sort word_count


    for (int i = 0; i < count_char; i++){
        cout << word_repeate[i] << ": "<< word_count[i] << '\n';
    }

    // struct node *root = createNode(1,'a');
    // root->left = createNode(2,'b');
    // root->right =createNode(3,'c');
    // traversePostOrder(root);




    return 0;
}