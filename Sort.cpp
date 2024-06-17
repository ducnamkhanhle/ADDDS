#include "DocumentManager.h"
#define ll long long    
#include<iostream>
#include<string>
using namespace std;

void SelectionSort(vector<int>& arr){
    for (ll i = 0; i < arr.size(); i++){
        int Min = arr[i], pos = i;
        for (ll j = i + 1; j < arr.size(); j++){
            if (Min > arr[j]){
                Min = arr[j];
                pos = j;
            }
        }   
        int tmp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = tmp;
    }
}

void My_InsertionSort(vector<int>& arr){
    for (ll i = 0; i <= arr.size(); i++){
        for (ll j = i + 1; j >= 1; j--){
            if (arr[j] < arr[j - 1]){
                int tmp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
            }
            else break;
        }
    }
}

void My_BubbleSort(vector<int>& arr){
    for (ll i = arr.size() - 1; i >= 0; i--){
        for (ll j = 0; j < i; j++){
            if(arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

vector<int> TheMergeSort(vector<int>& arr){
    if (arr.size() == 1) return arr;

    int mid = arr.size()/2;

    vector<int> leftArr = {};
    vector<int> rightArr = {};

    for (ll i = 0; i < mid; i++){
        leftArr.push_back(arr[i]);
    }

    for (ll i = mid; i < arr.size(); i++){
        rightArr.push_back(arr[i]);
    }

    vector<int> sortLeftArr = TheMergeSort(leftArr);
    vector<int> sortRightArr = TheMergeSort(rightArr);

    int l = 0, r = 0;
    vector<int> res;
    while(l < sortLeftArr.size() && r < sortRightArr.size()){
        if (sortLeftArr[l] < sortRightArr[r]){
            res.push_back(sortLeftArr[l]);
            l++;
        }
        else {
            res.push_back(sortRightArr[r]);
            r++; 
        }
    }
    if (l != sortLeftArr.size()){
        for (ll i = l; i <= sortLeftArr.size() - 1; i++){
            res.push_back(sortLeftArr[i]);
        }
    }
    if (r != sortRightArr.size()){
        for (ll i = r; i <= sortRightArr.size() - 1; i++){
            res.push_back(sortRightArr[i]);
        }
    }

    return res;
}

void TheQuickSort(vector<int>& arr, int l, int r){
    if (l >= r) return;

    int pivot = r;
    int pivot_index = l;
    for (ll i = l; i <= r; i++){
        if (arr[i] < arr[pivot]){
            int tmp = arr[i];
            arr[i] = arr[pivot_index];
            arr[pivot_index] = tmp;
            pivot_index++;
        }
    }

    int tmp = arr[pivot_index];
    arr[pivot_index] = arr[pivot];
    arr[pivot] = tmp;

    TheQuickSort(arr, l, pivot_index - 1);
    TheQuickSort(arr, pivot_index + 1, r);
}



int main(){
    vector<int> arr = {3, 4, 1, 5, 1, 0};

    TheQuickSort(arr, 0, arr.size() - 1);

    for (auto i : arr){
        cout << i << " ";
    }
}