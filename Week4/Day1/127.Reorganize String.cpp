class Solution {
public:
    static bool cmp(pair<char, int>& a, pair<char, int>& b) { 
        return a.second > b.second; 
    } 

    string sor(unordered_map<char, int>& um) {
        vector<pair<char, int>> A;

        // Copy key-value pair from Map to vector of pairs 
        for (auto& it : um) { 
            A.push_back(it); 
        } 

        // Sort using comparator function 
        sort(A.begin(), A.end(), cmp);

        // Initialize the result string
        string hh = "";
        
        // Create a max-heap to store characters by their frequencies
        priority_queue<pair<int, char>> pq;
        for (auto& p : A) {
            pq.push({p.second, p.first});
        }

        // Initialize the previous character and its frequency
        pair<int, char> prev = {-1, '#'};

        // Build the result string
        while (!pq.empty()) {
            auto [freq, ch] = pq.top();
            pq.pop();

            hh += ch;

            if (prev.first > 0) {
                pq.push(prev);
            }

            prev = {freq - 1, ch};
        }

        return hh;
    }

    string reorganizeString(string s) {
        unordered_map<char, int> um;
        for (auto it : s) {
            um[it]++;
        }

        int maxFreq = 0;
        for (auto& i : um) {
            maxFreq = max(maxFreq, i.second);
        }

        int n = s.length();
       
        if (n - maxFreq <maxFreq - 1) {
           
            return "";
        }
        
       

        string fin = sor(um);

        return fin;
    }
};
