#include <iostream>
#include <vector>

using namespace std;

vector<int> insertionSort(vector<int> vec);
void display(vector<int> vec);

vector<int> insertionSort(vector<int> vec) {
    const int length = vec.size();
    
    int current, j;
    
    for (int i = 1; i < length; i++) {
        current = vec[i];
        j = i - 1;
        
        while (j >= 0 && vec[j] > current) {
            vec[j + 1] = vec[j];
            j -= 1;
        }
        vec[j + 1] = current;
    }
    
    return vec;
}

void display(vector<int> vec) {
    for (int item: vec)
        cout << item << " ";
}

int main(){
    const vector<int> numbers = {99, 44, 6, 2, 1, 5, 63, 87, 283, 4, 0};
    display(insertionSort(numbers));
    cout << endl;
    return 0;
}