#include <bits/stdc++.h> 
#include <utility>

pair<char, int> averageMarks(char firstLetterOfName, int m1, int m2, int m3) {
    pair<char,int> details;

    details.first=firstLetterOfName;
    details.second=(m1+m2+m3)/3;

    return details;
}
