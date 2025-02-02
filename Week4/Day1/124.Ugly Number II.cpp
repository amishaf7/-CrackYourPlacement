class Solution {
public:
    int nthUglyNumber(int n)
{
    set<long long> pq;
    pq.insert(1);
    int count=0;
    while(pq.size())
    {
      int m=pq.size();
      while(m--)
      {
        long long x=*pq.begin();
        pq.erase(x);
        count++;
        if(count==n)
        {
            return x;
        }
        pq.insert(x*2);
        pq.insert(x*3);
        pq.insert(x*5);
      }
    }
    return -1;

}
};
