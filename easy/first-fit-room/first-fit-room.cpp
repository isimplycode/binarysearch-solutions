int solve(vector<int>& rooms, int target) {
    for (int i=0; i<size(rooms); ++i) {
        if (rooms[i]>=target) {
            return rooms[i];
        }
    }
    return -1;
}
