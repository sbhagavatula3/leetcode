class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc] == color) {
            return image;
        }
        int old = image[sr][sc];
        dfs(image, sr, sc, old, color);
        return image;
    }

    void dfs(vector<vector<int>>& image, int sr, int sc, int old_, int new_) {
        if (sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size() || image[sr][sc] != old_) return;
        image[sr][sc] = new_;
        dfs(image, sr + 1, sc, old_, new_);
        dfs(image, sr - 1, sc, old_, new_);
        dfs(image, sr, sc + 1, old_, new_);
        dfs(image, sr, sc - 1, old_, new_);
    }

};
