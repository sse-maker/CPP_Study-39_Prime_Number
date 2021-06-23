//
//  main.cpp
//  39_Prime_Number
//
//  Created by 세광 on 2021/06/23.
//

#include <iostream>

using namespace std;

int main() {
    int m, n, count;
    int sum = 0;
    int min = 10000;
    cin >> m >> n;
    
    for(int i = m; i <= n; i++) {
        count = 0;
        for(int j = 1; j <= i; j++) {
            if(i % j == 0) count++;
        }
        if(count == 2) sum += i;
        if(count == 2 && i < min) min = i;
    }
    if(sum == 0) { cout << "-1" << endl; }
    else cout << sum << '\n' << min << endl;
}
