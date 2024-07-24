

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& words) {
        
        unordered_map<string, vector<string>> anagramGroups;
        
        
        for (const string& word : words) {
            
            string key = word;
            sort(key.begin(), key.end());
            
            // If key is not in the map, add a new entry with the word as a vector
            if (anagramGroups.find(key) == anagramGroups.end()) {
                anagramGroups[key] = {word};
            }
            // If key is already present, append the word to the existing vector
            else {
                anagramGroups[key].push_back(word);
            }
        }
        
        // Convert map values to a vector and return
        vector<vector<string>> result;
        for (const auto& group : anagramGroups) {
            result.push_back(group.second);
        }
        
        return result;
    }
};
