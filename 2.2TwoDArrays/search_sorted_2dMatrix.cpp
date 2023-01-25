// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

// You must write a solution in O(log(m * n)) time complexity.

#include<iostream>
using namespace std;

int main(){
    int n,m;
    int arr[n][m];

    for(int i=0 ;i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int key;
    cin>>key;
    
    //accessing the top right element
    int r=0; 
    int c=m-1;
    bool found=false;

    while(r<n && c>=0){
        if(arr[r][c]==key){
            found=true;
            cout<<"Element found at "<<r<<" "<<c;
        }
        else if(arr[r][c]>key){
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"Found!"<<endl;
    }
    else{
        cout<<"Oops! Not found"<<endl;
    }
    return 0;
}

//LEETCODE FUNCTION by using inbuilt functions
// bool searchMatrix(vector<vector<int>>& matrix, int target) {
//       int N=matrix.size();
//       for(int i=0; i<N; i++)
//          if(binary_search(matrix[i].begin(), matrix[i].end(), target)==true)
//                 return 1;
//     return 0;
// };

//LEETCODE SOLUTION Olog(row*column)- Binary Search
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row = matrix.size();
//         int col = matrix[0].size();

//         int start = 0;
//         int end = row*col - 1;

//         int mid = (start+end)/2;

//         while(start<=end){
//             int element = matrix[mid/col][mid%col];

//             if(element==target){
//                 return 1;
//             }

//             if(element<target){
//                 start = mid+1;
//             }
//             else{
//                 end = mid-1;
//             }
//             mid = (start+end)/2;
//         }
//         return 0;
//     }
// };
