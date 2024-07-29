static bool comp(long long int a, long long int b) {
    return a > b; // Sort in descending order
}

bool isPossible(long long a[], long long b[], int n, long long k) {
    // Sort array 'a' in ascending order
    std::sort(a, a + n);
    // Sort array 'b' in descending order using the comp function
    std::sort(b, b + n, comp);
    
    // Check the condition for each pair
    for (int i = 0; i < n; i++) {
        if (a[i] + b[i] < k) {
            return false;
        }
    }
    return true;
}
