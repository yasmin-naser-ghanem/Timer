#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int main() {
    int s , m , h ;
    bool flag1 = true, flag2 = true, flag3 = true;

    while (flag1) {
        cout << "Enter the number of seconds (0-59): ";
        cin >> s;
        if ( s < 0 || s >= 60)
            cout << "Invalid seconds! Try again.\n";
        else
            flag1=false;  
    }

    while (flag2) {
        cout << "Enter the number of minutes (0-59): ";
        cin >> m;
        if ( m < 0 || m >= 60)
            cout << "Invalid minutes! Try again.\n";
        else
            flag2=false;    
    }

    while (flag3) {
        cout << "Enter the number of hours (0-23): ";
        cin >> h;
        if ( h < 0 || h >= 24)
            cout << "Invalid hours! Try again.\n";
        else
            flag3 = false;
    }

    if (h == 0 && m == 0 && s == 0) {
        cout << "Time Over" << endl;
        return 0;
    }

    while (!(h == 0 && m == 0 && s == 0)) {
        system("cls");
        cout << h << ":"<<  m << ":" << s << endl;

        Sleep(1000);

        if (s > 0) {
            s--;
        } else {
            if (m > 0) {
                m--;
                s = 59;
            } else {
                if (h > 0) {
                    h--;
                    m = 59;
                    s = 59;
                }
            }
        }
    }

    system("cls");
    cout << "Time Over" << endl;
    return 0;
}
