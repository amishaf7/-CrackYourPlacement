class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqMap;
        for (int num : nums) {
            freqMap[num]++;
        }

        // Max-heap to store frequency and number pairs
        priority_queue<pair<int, int>> pq;
        for (auto& pair : freqMap) {
            pq.push({pair.second, pair.first});
        }

        vector<int> v;
        for (int i = 0; i < k; ++i) {
            v.push_back(pq.top().second);
            pq.pop();
        }

        return v;
    }
};
