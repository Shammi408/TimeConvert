#include <bits/stdc++.h>
#include <string>

using namespace std;


string timeConversion(string s) {

  int n = s.size();
  string p = s.substr(8, 1);

  int hour = stoi(s.substr(0, 2));
  int a = 0;
  if (p == "P") {
    if (hour == 12) {
      a = 12;
    } else {
      a = 12 + hour;
    }
    s.replace(0, 2, to_string(a));
  } else {
    if (hour == 12) {
      s[0] = '0';
      s[1] = '0';
    }
  }

  s.resize(n - 2);
  return s;
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
