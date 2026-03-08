class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0, tank = 0, start = 0;
        int n = gas.size();
        
        for (int i = 0; i < n; ++i) {
            int diff = gas[i] - cost[i];
            totalGas += diff;
            tank += diff;
            
            // If tank goes negative, cannot start from previous start
            if (tank < 0) {
                start = i + 1;
                tank = 0;
            }
        }
        
        return (totalGas >= 0) ? start : -1;
    }
};