#include <string>
#include <algorithm>

std::string key = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz().?:,\"+-*/\\";

std::string shifr(char x) {
    int keyx = find(key.begin(), key.end(), x) - key.begin(), f = 32;
    std::string ans = "";

    while (f >= 1) {
        if (keyx / f > 0) {
            ans += '1';
            keyx /= f;
        }
        else {
            ans += '0';
        }
        f /= 2;
    }

    return ans;

}