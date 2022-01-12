// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    void path(vector<vector<int>> &m, int i, int j, string r, int n, vector<string> &res)
    {
        if (i == n - 1 and j == n - 1)
        {
            res.push_back(r);
            return;
        }
        if (m[i][j] == 0)
            return;

        // choose
        m[i][j] = 0;

        // exploring
        if (i > 0)
            path(m, i - 1, j, r + 'U', n, res);
        if (i < n - 1)
            path(m, i + 1, j, r + 'D', n, res);
        if (j > 0)
            path(m, i, j - 1, r + 'L', n, res);
        if (j < n - 1)
            path(m, i, j + 1, r + 'R', n, res);

        // backtrack or unchoose
        m[i][j] = 1;
    }
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        // Your code goes here
        vector<string> res;
        // if source or dest cell is not visitable then just return
        if (m[0][0] == 0 or m[n - 1][n - 1] == 0)
            return res;

        path(m, 0, 0, "", n, res);
        sort(res.begin(), res.end());
        return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
} // } Driver Code Ends