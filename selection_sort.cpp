#include <iostream>
#include <fstream>

using namespace std;

void print(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void selection_sort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        for (int j = i+1; j < n; j++){
            if (a[i] > a[j]) swap(a[i], a[j]);
        }
    }
}

int main(){
    ifstream infile("input.txt");
    int n;
    int a[1000];
    infile >> n;
    for(int i = 0; i < n; i++){
        infile >> a[i];
    }
    print(a, n);
    // Selection sort
    selection_sort(a, n);
    print(a, n);
    infile.close();
    return 0;
}