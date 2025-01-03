class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        double newTime = arrivalTime + delayedTime;
        if(newTime >= 24) {
            newTime -= 24;
        }
        return newTime;
    }
};