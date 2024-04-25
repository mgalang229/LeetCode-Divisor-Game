/*

9 - 1 = 8 A
8 - 1 = 7 B
7 - 1 = 6 A
6 - 1 = 5 B
5 - 1 = 4 A
4 - 1 = 3 B
3 - 1 = 2 A
2 - 1 = 1 B

9 - 3 = 6 A
6 - 1 = 5 B
5 - 1 = 4 A
4 - 1 = 3 B
3 - 1 = 2 A
2 - 1 = 1 B


*/

class Solution {
public:
    bool divisorGame(int n) {
        return n % 2 == 0;
    }
};
