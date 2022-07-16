// https://leetcode.com/problems/all-paths-from-source-to-target

class Solution {
public:
    int target;
    std::vector<std::vector<int>> res;
    std::vector<int> temp;
    
    void dfs(std::vector<std::vector<int>> &graph, int currNode = 0)
    {
        temp.push_back(currNode);
        if(currNode == target) res.push_back(temp);
        else for(int node: graph[currNode]) dfs(graph, node);
        temp.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        target = graph.size()-1;
        dfs(graph);
        return res;
    }
};