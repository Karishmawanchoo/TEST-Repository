/*Given an n x n binary matrix image, flip the image horizontally, then invert it, 
and return the resulting image. To flip an image horizontally means that each row of 
the image is reversed.
For example, flipping [1,1,0] horizontally results in [0,1,1].
To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0.
For example, inverting [0,1,1] results in [1,0,0].*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        for(int i = 0; i < n; i++) {
            reverse(image[i].begin(), image[i].end());
            for(int j = 0; j < image[i].size(); j++) {
                image[i][j] = image[i][j] ^ 1;
            }
        }
        return image;
    }
};

int main(){
    Solution s;
    vector<vector<int>> image = {{1,1,0}, {1,0,1}, {0,0,1}};
    vector<vector<int>> result = s.flipAndInvertImage(image);
    for(const auto& row : result) {
        for(const auto& val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
