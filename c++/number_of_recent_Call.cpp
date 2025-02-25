class RecentCounter {
    public:
        queue<int>Q;
        RecentCounter() {
            
        }
        
        int ping(int t) {
            Q.push(t);
            int temp= t-3000;
            while(Q.front()<temp)
            Q.pop();
            return Q.size();
        }
    };
    
    /**
     * Your RecentCounter object will be instantiated and called as such:
     * RecentCounter* obj = new RecentCounter();
     * int param_1 = obj->ping(t);
     */