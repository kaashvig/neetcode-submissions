class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        vector<pair<int, int>> cars;

        // Store (position, speed)
        for(int i = 0; i < position.size(); i++) {
            cars.push_back({position[i], speed[i]});
        }

        // Sort by position (nearest to target will be at the end)
        sort(cars.begin(), cars.end());

        stack<double> st;

        // Traverse from nearest car to farthest
        for(int i = cars.size() - 1; i >= 0; i--) {

            double time = (double)(target - cars[i].first) / cars[i].second;

            // New fleet
            if(st.empty() || time > st.top()) {
                st.push(time);
            }
            // Else:
            // Current car catches the fleet ahead,
            // so do nothing.
        }

        return st.size();
    }
};