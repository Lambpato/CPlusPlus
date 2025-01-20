class Solution {
public:
int lastStoneWeight(std::vector<int>& stones) {
std::sort(stones.begin(), stones.end(), std::greater<int>());
    while (stones.size() > 1) {
        if (stones[0] == stones[1]) {
            stones.erase(stones.begin(), stones.begin() + 2);
        } else {
            stones[0] -= stones[1];
            stones.erase(stones.begin() + 1);
            std::sort(stones.begin(), stones.end(), std::greater<int>());
        }
    }
    return stones.empty() ? 0 : stones[0];
}
};
