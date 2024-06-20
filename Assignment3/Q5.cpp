string smallestRot(string s) {
    string minRot = s;
    string curRot = s;
    for (size_t i = 1; i < s.size(); ++i) {
        curRot = curRot.substr(1) + curRot[0];
        if (curRot < minRot) {
            minRot = curRot;
        }
    }
    return minRot;
}
