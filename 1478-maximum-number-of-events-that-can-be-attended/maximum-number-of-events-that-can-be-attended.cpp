class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        // Step 1: Sort events by start day
        sort(events.begin(), events.end());
        
        // Min-heap to store the end days of events
        priority_queue<int, vector<int>, greater<int>> minHeap;
        
        int day = 1, i = 0, res = 0;
        int n = events.size();
        
        // Step 2: Find the last day any event ends
        int maxDay = 0;
        for (const auto& e : events) {
            maxDay = max(maxDay, e[1]);
        }
        
        // Step 3: Loop through each day
        for (day = 1; day <= maxDay; ++day) {
            // Add all events starting today to heap
            while (i < n && events[i][0] == day) {
                minHeap.push(events[i][1]);  // Push the end day
                ++i;
            }
            
            // Remove all events that ended before today
            while (!minHeap.empty() && minHeap.top() < day) {
                minHeap.pop();
            }
            
            // Attend one event with the earliest end day
            if (!minHeap.empty()) {
                minHeap.pop();
                ++res;
            }
        }
        
        return res;
    }
};
