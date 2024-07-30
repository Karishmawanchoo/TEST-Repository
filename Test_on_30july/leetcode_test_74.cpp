/*You are given an m x n integer matrix matrix with the following two properties:
1.Each row is sorted in non-decreasing order.
2.The first integer of each row is greater than the last integer of the previous row.
3.Given an integer target, return true if target is in matrix or false otherwise.
You must write a solution in O(log(m * n)) time complexity.*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size() ;
        int col = matrix[0].size() ;
        int s = 0 ;
        int e = row*col - 1 ;
        int m = s+(e-s)/2;
        while(s<=e){
            int element = matrix[m/col][m%col];
            if(target == element){
                return 1;
            }
            else if(target <= element){
                e=m-1;
            }
            else {
                s=m+1;
            }
            m = s+(e-s)/2;
        }
        return 0;
        
    }
};
int main(){
    Solution s;
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,
    12,13},{14,15,16,17}};
    int target = 3;
    cout<<"Is the target in the matrix? True or False?"<<boolalpha<<s.searchMatrix(matrix,target)<<endl;
    return 0;
}