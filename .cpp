using namespace std;
https://codeforces.com/problemset/problem/1/A
// A. Theatre Square
int main(){
    unsigned long long n, m, a; cin >> n >> m >> a;
    cout << ceil((double)m / a) * ceil((double)n / a);
}
using namespace std;
// contest/4/problem/C
// C. Registration system
int main(){
    int t; cin >> t;
    map <string, int> mp;
    while(t--){
        string str; cin >> str;
        if(mp[str] >= 1)
            cout << str << mp[str];
        else
            cout << "OK";
        mp[str]++;
    }
}#include <iostream>
#include <string>
using namespace std;
http://codeforces.com/contest/16/problem/A
// A. Flag
int main() {
    int n, m; cin >> n >> m;
    string flag[n];
    for(int i = 0; i < n; ++i)
        cin >> flag[i];
    bool isValid = true;
    for(int i = 0; i < n; ++i){
        for(int j = 1; j < m; ++j){
            if(flag[i][j] != flag[i][0]){
                isValid = false;
                break;
            }
        }
        if(i > 0 && flag[i][0] == flag[i - 1][0]){
            isValid = false;
            break;
        }
    }
    cout << (isValid ? "YES" : "NO") << endl;
    return 0;
}
using namespace std;
// A. IQ test
// problemset/problem/25/A
int main(){
    int n; cin >> n;
    int arr[n], even = 0, odd = 0;
    int evenIdx = -1, oddIdx = -1;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            even++;
            evenIdx = i + 1;
        }
        else{
            odd++;
            oddIdx = i + 1;
        }
    }
    (even == 1) ? cout << evenIdx : cout << oddIdx;
}
using namespace std;
http://codeforces.com/problemset/problem/25/A
// A. IQ test
int main() {
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		arr[i] = arr[i] % 2;
	}
	int one = count(arr, arr + n, 1);
	if (one > n - one) {
		for (int i = 0; i < n; i++) {
			if (!arr[i]) {
				cout << i + 1;
				break;
			}
		}
	} else{
		for (int i = 0; i < n; i++) {
			if (arr[i]) {
				cout << i + 1;
				break;
			}
		}
	}
	return 0;
}
using namespace std;
// problemset/problem/26/B
// B. Regular Bracket Sequence
int main(){
    string str; cin >> str;
    stack <char> st;
    int cnt = 0;
    for(int i = 0; i < str.size(); i++){
        char ch = str[i];
        if(ch == '(') st.push(ch);
        else if(ch == ')' && !st.empty() && st.top() == '('){
            st.pop();
            cnt++;
        }
        else
            st.push(ch);
    }
    cout << cnt * 2;
}
using namespace std;
http://codeforces.com/problemset/problem/32/B
// B. Borze
int main() {
    string s, result; cin >> s;
    int len = s.length();
    for (int i = 0; i < len; ++i) {
        if (s[i] == '.')
            result += '0';
        else if (i + 1 < len && s[i] == '-' && s[i + 1] == '.') {
            result += '1';
            ++i;
        } 
        else if (i + 1 < len && s[i] == '-' && s[i + 1] == '-'){
            result += '2';
            ++i;
        }
    }
    cout << result;
}
using namespace std;
http://codeforces.com/contest/41/problem/A
// A. Translation
int main(){
    string str, ing; cin >> str >> ing;
    reverse(str.begin(), str.end());
    (str == ing) ? cout << "Yes" : cout << "No";
}
using namespace std;
https://codeforces.com/contest/43/problem/B
// 43B. Letter
int main(){
	string str, ing;
	getline(cin, str);
	getline(cin, ing);
	map <char, int> mp;
	int len = str.length();
	int len2 = ing.length();
	for(int i = 0; i < len; i++)
	    ++mp[str[i]];
	 int cnt = 0, res = 0;
	 for(int i = 0; i < len2; i++){
	     if(ing[i] != ' '){
	         ++res;
	         if(mp[ing[i]] > 0){
	             ++cnt;
	             --mp[ing[i]];
	         }
	     }
	 }
	 if(res == cnt) cout << "YES";
	 else cout << "NO";
}
using namespace std;
int main() {
    string magazine, letter;
    getline(cin, magazine);
    getline(cin, letter);

    map<char, int> charCount;

    // Count characters in the magazine string
    for (char c : magazine) {
        ++charCount[c];
    }

    // Check if we can form the letter
    for (char c : letter) {
        if (c == ' ') continue;

        if (charCount[c] > 0) {
            --charCount[c];
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}

using namespace std;
// A. Domino piling
// problemset/problem/50/A
int main(){
    int m, n; cin >> m >> n;
    cout << (m * n) / 2;
}
using namespace std;
// A. Way Too Long Words
// problemset/problem/71/A
int main() {
    int n; cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string ch; getline(cin, ch);
        int l = ch.length();
        if (l > 10)
            cout << ch[0] << l - 2 << ch[l - 1] << endl;
        else
            cout << ch << endl;
    }
}
using namespace std;
// contest/102/problem/B
// B. Sum of Digits
int main(){
    string str; cin >> str;
    int step = 0;
    while(str.length() > 1){
        int sum = 0;
        for(int i = 0; i < str.size(); i++)
            sum += str[i] - '0';
        str = to_string(sum);
        ++step;
    }
    cout << step;
}
using namespace std;
// A. Nearly Lucky Number
// problemset/problem/110/A
int main(){
    string str; cin >> str;
    int x = count(str.begin(), str.end(), '4');
    int y = count(str.begin(), str.end(), '7')
    ((x + y) == 4) ? cout << "YES" : cout << "NO";
}
using namespace std;
// A. Petya and Strings
// problemset/problem/112/A
int main(){
    string str, ing;
    getline(cin, str);
    getline(cin, ing);/*
    transform(str.begin(), str.end(), str.begin(), ::tolower)
    transform(ing.begin(), ing.end(), ing.begin(), ::tolower)
    if(str < ing) cout << -1;
    else if(str > ing) cout << 1;
    else cout << 0; */
    int len = strlen(str) - 1;
    for(int i = 0; i < len; i++){
        if(str[i] >= 'A' && str[i] <= 'Z') 
            str[i] += 32;
        if(ing[i] >= 'A' && ing[i] <= 'Z')
            ing[i] += 32;
    }
    for(int i = 0; i < len; i++){
        if(str[i] < ing[i]){
            cout << -1; return 0;
        }
        if(str[i] > ing[i]){
            cout << 1; return 0;
        }
    }
    cout << 0;
}
using namespace std;
// problemset/problem/116/A
// A. Tram
int main(){
    int n; cin >> n;
    int cap = 0, remain = 0;
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        remain -= a;
        remain += b;
        cap = max(cap, remain);
    }
    cout << cap;
}
using namespace std;
// A. String Task
// problemset/problem/118/A
int main(){
    string str; cin >> str;
    for(int i = 0; i < str.size(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'y') {
            cout << '.' << str[i]; 
        }
    }
    /**/
    string res;
    string vowel = "aeiouyAEIOUY";
    for(int i = 0; i < str.size(); i++){
        if (vowel.find(str[i]) == string::npos){ 
            res.append(".").append(1, tolower(str[i]));  
        }
    }
    cout << res;
}
using namespace std;
// problemset/problem/122/A
// A. Lucky Division
int main(){
    int n; cin >> n;
    bool flag = 0;
    int arr[12] = {4, 7, 47, 74, 44, 444, 447, 474, 477, 777, 774, 744};
    for(int i = 0; i < 12; i++){
        if(n % arr[i] == 0)
            flag = 1;
    }
    (flag) ? cout << "YES" : cout << "NO";
}
using namespace std;
// http://codeforces.com/problemset/problem/141/A
// A. Amusing Joke
int main(){
    string st, ri, ng, res; cin >> st >> ri >> ng;
    string res += st + ri;
    sort(res.begin(), res.end());
    sort(ng.begin(), ng.end());
    if(res == ng) cout << "Yes";
    else cout << "No";
}
using namespace std;
// http://codeforces.com/problemset/problem/144/A
// A. Arrival of the General
int main(){
    int n; cin >> n;
    int maxval = 0, maxIdx = 0;
    int minval = 0, minIdx = 1000;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x > maxval){
            maxIdx = i;
            maxval = x;
        }
        if(x <= minval){
            minIdx = i;
            minval = x;
        }
    }
    if(maxIdx > minIdx)
        cout << (maxIdx - 1) + (n - minIdx) - 1;
    else
        cout << (maxIdx - 1) + (n - minIdx);
}
using namespace std
http://codeforces.com/problemset/problem/148/A
// A. Insomnia cure
int main(){
    int k, l, m, n, d; cin >> k >> l >> m >> n >> d;
    vector <bool> damaged(d, false);
    for(int i = 1; i <= d; i++){
        if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            damaged[i - 1] = true;
    }
    cout << count(damaged.begin(), damaged.end(), true);
}
using namespace std;
http://codeforces.com/problemset/problem/151/A
// A. Soft Drinking
int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total_drink = (k * l) / nl; 
    int total_slices = c * d;      
    int total_salt = p / np;        
    int toasts = min({total_drink, total_slices, total_salt});
    cout << toasts / n << endl;
}
using namespace std;
http://codeforces.com/contest/155/problem/A
// A. I_love_%username%
int main(){
    int n; cin >> n;
    int cnt = 0;
    int mini; cin >> mini;
    int maxi = mini;
    for(int i = 1; i < n; i++){
        int x; cin >> x;
        if(x > maxi){
            maxi = x; ++cnt;
        }
        else if(x < mini){
            mini = x; ++cnt;
        }
    }
    cout << cnt;
}
using namespace std;
// A. Next Round
// problemset/problem/158/A
int main(){
    int n, k; cin >> n >> k;
    int arr[n], res = 0;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++){
        if(arr[i] >= arr[k] && arr[i] > 0)
            res++;
    }
    cout << res;
}
using namespace std;
http://codeforces.com/contest/158/problem/A
// 158 A. Next Round
int main(){
    int n, k; cin >> n >> k;
    int arr[n], cnt = 0;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int ref = arr[k - 1];
    for(int i = 0; i < n; i++){
        if(arr[i] >= ref && arr[i])
            ++cnt;
    }
    cout << cnt;
}
using namespace std;
http://codeforces.com/contest/160/problem/A
// A.Twins
int arr[105], ray[105];
int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    ray[0] = arr[0];
    for(int i = 1; i < n; i++)
        ray[i] = ray[i - 1] + arr[i];
    int res = 0;
    for(int i = n - 1; i >= 0; i--){
        int left = ray[i - 1];
		int right = ray[n - 1] - ray[i - 1];
 		if(right > left){
			cout << n - i;
			break;
 		}
    }
}
using namespace std;
// A. Mountain Scenery
https://codeforces.com/contest/218/problem/A
const int MAX = 105;
int height[MAX];
int main(){
    int n, k; cin >> n >> k;
    int total = 2 * n + 1;
    for(int i = 0; i < total; ++i)
        cin >> height[i];
    for(int i = 1; i < total - 1 && k > 0; i += 2){
        if(height[i] > height[i - 1] + 1 && height[i] > height[i + 1] + 1) {
            --height[i];
            --k;
        }
    }
    for (int i = 0; i < total; ++i)
        cout << height[i] << " ";
    cout << "\n";
}
using namespace std;
//B.Effective Approach
http://codeforces.com/problemset/problem/227/B
int main(){
    map <int, int> position;
    long long frontSteps = 0, backSteps = 0;
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        int val; cin >> val;
        position[val] = i;
    }
    int q; cin >> q;
    for (int i = 0; i < q; ++i) {
        int query; cin >> query;
        frontSteps += position[query] + 1;
        backSteps += n - position[query];
    }
    cout << frontSteps << " " << backSteps << "\n";
}
using namespace std;
http://codeforces.com/contest/230/problem/A
// A. Dragons
int main() {
    int s, n;
    cin >> s >> n; // s = initial strength, n = number of dragons
    vector<pair<int, int>> dragons(n);
    // Read each dragon's strength and bonus
    for (int i = 0; i < n; ++i)
        cin >> dragons[i].first >> dragons[i].second;
    // Sort dragons by their strength (ascending order)
    sort(dragons.begin(), dragons.end());
    // Try to fight each dragon in order
    for (int i = 0; i < n; ++i) {
        int dragon_strength = dragons[i].first;
        int bonus = dragons[i].second;
        if (s > dragon_strength)
            s += bonus; // Kirito defeats the dragon and gains bonus
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
using namespace std;
// problemset/problem/231/A
// A. Team
int main(){
    int n; cin >> n;
    int solved = 0, cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            int x; cin >> x;
            cnt += x;
        }
        if(cnt >= 2) solved++;
    }
    cout << solved;
}
using namespace std;
http://codeforces.com/contest/233/problem/A
// A - Perfect Permutation
int main() {
    int n;
    cin >> n;

    // If n is odd, no perfect permutation exists
    if (n % 2 == 1) {
        cout << -1 << endl;
    } else {
        // Generate a perfect permutation by swapping adjacent elements
        for (int i = 1; i <= n; i += 2) {
            cout << i + 1 << " " << i << " ";
        }
        cout << endl;
    }
    return 0;
}
using namespace std;
// A. Cupboards
// http://codeforces.com/contest/248/problem/A
int main() {
    int n;
    cin >> n;
    int leftOpen = 0, rightOpen = 0;
    for (int i = 0; i < n; ++i) {
        int left, right;
        cin >> left >> right;
        if (left) ++leftOpen;
        if (right) ++rightOpen;
    }
    int leftClosed = n - leftOpen;
    int rightClosed = n - rightOpen;

    // For each side, choose the minimal number of switches (either open or close)
    int minLeftOperations = min(leftOpen, leftClosed);
    int minRightOperations = min(rightOpen, rightClosed);
    cout << (minLeftOperations + minRightOperations) << endl;
}

using namespace std;
// A. Beautiful Matrix
// problemset/problem/263/A
int main() {
    int x, y, ans;
    int arr[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }
    cout << abs(x - 2) + abs(y - 2);
}
using namespace std;
http://codeforces.com/contest/266/problem/A
// A. Stones on the Table
int main(){
    int n; cin >> n;
    string str; cin >> str;
    int cnt = 0;
    for(int i = 1; i < n; i++){
        if(str[i - 1] == str[i])
            cnt++;
    }
    cout << cnt;
  	return 0;
}
using namespace std;
http://codeforces.com/problemset/problem/266/B
// Queue at the School
int main() {
    int n, t; cin >> n >> t;
    string s; cin >> s;
    for (int i = 0; i < t; ++i) {
        for (int j = 1; j < n; ++j) {
            if (s[j - 1] == 'B' && s[j] == 'G') {
                swap(s[j - 1], s[j]);
                ++j; // Skip the next index to avoid double swap
            }
        }
    }
    cout << s;
}
using namespace std;
// A. Fancy Fence
// contest/270/problem/A
int main(){
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        (360 % (180 - x)) ? cout << "No\n" : cout << "Yes\n";
    }
}
using namespace std;
http://codeforces.com/problemset/problem/271/A
// Beautiful Year
bool isBeautiful(int n) {
    string s = to_string(n);
    set<char> digits(s.begin(), s.end());
    return digits.size() == 4;
}
bool isBeautiful(int n){
	string str = to_string(n);
	int dig1 = count(str.begin(), str.end(),str[0]);
	int dig2 = count(str.begin(), str.end(), str[1]);
	int dig3 = count(str.begin(), str.end(), str[2]);
	int dig4 = count(str.begin(), str.end(), str[3]);
	if((dig1 == 1)&&(digt2=1)&&(digt3==1)&&(digt4==1))
		return 1;
    if((dig1 == 1) && (dig2 == 1) && (dig3 == 1) && (dig4 == 1)) return 1;
	else return 0;
}
int main() {
    int n; cin >> n;
    ++n;
    while(!isBeautiful(n))
        ++n;
    cout << n;
    return 0;
}
using namespace std;
// A. Word Capitalization
// problemset/problem/281/A
int main() {
    string ch; getline(cin, ch); 
    if (!ch.empty() && ch[0] >= 'a' && ch[0] <= 'z')
        ch[0] = ch[0] - 32; 
    cout << ch << endl;
}

using namespace std;
// A. Bit++
// contest/282/problem/A _have a programming language called Bit++ with one variable x, which starts at 0. consists of statements that either:
//Increase x by 1: "++X" or "X++".Decrease x by 1: "--X" or "X--".Execute all statements and print the final value of x.
int main(){
    int t, cnt = 0; cin >> t;
    while(t--){
        string str; cin >> str;
        if(str == "++X" || str == "X++")
            cnt++;
        else if(str == "--X" || str == "X--")
            cnt--;
    }
    cout << cnt;
}
using namespace std;
// http://codeforces.com/contest/289/problem/A
// A - Polo the Penguin and Segments
int main() {
    int n, k; cin >> n >> k;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        int l, r; cin >> l >> r;
        sum += (r - l + 1);
    }
    cout << (k - (sum % k)) % k << endl;
    return 0;
}
using namespace std;
http://codeforces.com/contest/294/problem/A
// A. Shaass and Oskols
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int m; cin >> m;
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        int r = arr[x - 1] - y;
        int l = y - 1;
	if(x - 1 >= 1) arr[x - 2] += l;
	if(x + 1 <= n) arr[x] += r;
	arr[x - 1] = 0;
    }
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
using namespace std;
http://codeforces.com/problemset/problem/318/A
// A. Even Odds
int main() {
    long long n, k; cin >> n >> k;
    long long mid = (n + 1) / 2;
    if (k <= mid)
        cout << 2 * k - 1;
    else
        cout << 2 * (k - mid);
}
using namespace std;
http://codeforces.com/problemset/problem/337/A
// 337A - Puzzles
int main() {
    int n, m; cin >> n >> m;
    int puzzles[m];
    for (int i = 0; i < m; ++i)
        cin >> puzzles[i];
    sort(puzzles, puzzles + m);
    int min_diff = puzzles[n - 1] - puzzles[0];
    for (int i = n; i < m; ++i)
        min_diff = min(min_diff, puzzles[i] - puzzles[i - n + 1]);
    cout << min_diff << endl;
    return 0;
}
using namespace std;
http://codeforces.com/problemset/problem/337/A
// 337A - Puzzles
int main() {
    int n, m; cin >> n >> m;
    vector<int> puzzles(m);
    for (int i = 0; i < m; ++i)
        cin >> puzzles[i];
    sort(puzzles.begin(), puzzles.end());
    int min_diff = puzzles[n - 1] - puzzles[0];
    for (int i = 0; i <= m - n; ++i) {
        int current_diff = puzzles[i + n - 1] - puzzles[i];
        min_diff = min(min_diff, current_diff);
    }
    cout << min_diff << endl;
    return 0;
}
using namespace std;
http://codeforces.com/problemset/problem/339/B
// 339B - Xenia and Ringroad
int main() {
    int n, m; cin >> n >> m;
    int current = 1;
    unsigned long long moves = 0;
    for (int i = 0; i < m; ++i) {
        int target; cin >> target;
        if (target >= current)
            moves += target - current;
        else
            moves += n - (current - target);
        current = target;
    }
    cout << moves << endl;
    return 0;
}
http://codeforces.com/contest/363/problem/B
// B. Fence
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<long long> prefix(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        int height; cin >> height;
        prefix[i] = prefix[i - 1] + height;
    }
    int min_index = 0;
    long long min_sum = LLONG_MAX;
    for (int i = 0; i <= n - k; ++i) {
        long long sum = prefix[i + k] - prefix[i];
        if (sum < min_sum) {
            min_sum = sum;
            min_index = i;
        }
    }
    cout << (min_index + 1) << endl;
}
http://codeforces.com/contest/365/problem/A
// 365A. Good Number
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    int good_count = 0;
    for (int i = 0; i < n; ++i) {
        string number;
        cin >> number;
        vector <bool> digit_present(10, false);
        for (char ch : number)
            digit_present[ch - '0'] = true;
        bool is_good = true;
        for (int d = 0; d <= k; ++d) {
            if (!digit_present[d]) {
                is_good = false;
                break;
            }
        }
        if (is_good)
            ++good_count;
    }
    cout << good_count << endl;
    return 0;
}
using namespace std;
int arr[10];
int main() {
	int n, k; cin >> n >> k;
	vector <string> vect;
	for(int i = 0; i < n; i++){
		string str; cin >> str;
		vect.push_back(str);
	}
	int res = 0;
	for(int i = 0; i < n; i++){
		int val = 0;
		for(int j = 0; j <= k; j++){
		    if(vec[i].find(to_string(j)) != -1) ++val;
		}
 		if(val == k + 1) ++res;
	}
	cout << res;
}
using namespace std;
// 365A. Good Number 
http://codeforces.com/contest/365/problem/A
int main(){
    int n, k; cin >> n >> k;
    int res = 0;
    for(int i = 0; i < n; i++){
        string str; cin >> str;
        int len = str.length();
        int cnt = 0;
        for(int j = 0; j <= k; j++){
            if(str.find('0' + j) != -1)
                ++cnt;
        }
        if(cnt == k + 1) res++;
    }
    cout << res;
}
using namespace std;
// Valera and Plates
// problemset/problem/369/A _given n dishes, where each dish requires either a bowl or a plate 
// have a limited number of bowls and plates.determine how many dishes cannot be served due to a lack of resources.
int main(){
    int n, bowl, plate; cin >> n >> bowl >> plate;
    int arr[n + 5], b = 0, p = 0;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++){
        if(arr[i] == 1)
            b++;
        else if(arr[i] == 2)
            p++;
    }
    int res = 0, ans = 0;
    if(bowl >= b) bowl -= b;
    else{
        ans = b - bowl;
        bowl = 0;
    }
    if(plate >= p) res = 0;
    else{
        p -= plate;
        if(bowl > 0){
            if(bowl >= p){
                bowl -= p; res = 0;
            }
            else res = p - bowl;
        }
        else res = p
    }
    cout << ans + res;
}
using namespace std;
http://codeforces.com/contest/381/problem/A
// A. Sereja and Dima
int main() {
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int l = 0, r = n - 1;
    int sscore = 0, dscore = 0;
    for (int turn = 0; turn < n; ++turn) {
        int chosen;
        if (arr[l] >= arr[r])
            chosen = arr[l++];
        else
            chosen = arr[r--];
        if (turn % 2 == 0)
            sscore += chosen; 
        else
            dscore += chosen;
    }
    cout << sscore << " " << dscore << endl;
}
using namespace std;
http://codeforces.com/contest/382/problem/A
// A. Ksenia and Pan Scales
int main() {
    string s, extra;
    cin >> s >> extra;
    size_t pipe_pos = s.find('|');
    string left = s.substr(0, pipe_pos);
    string right = s.substr(pipe_pos + 1);

    int left_len = left.length();
    int right_len = right.length();
    int extra_len = extra.length();

    int total_len = left_len + right_len + extra_len;
    if (total_len % 2 == 0 && abs(left_len - right_len) <= extra_len) {
        int target_len = total_len / 2;
        // Add characters from `extra` to the shorter side
        int to_add_left = target_len - left_len;
        left += extra.substr(0, to_add_left);
        right += extra.substr(to_add_left);

        cout << left << '|' << right << endl;
    } else
        cout << "Impossible" << endl;
    return 0;
}
using namespace std;
http://codeforces.com/contest/404/problem/A
A. Valera and X
char arr[305][305];
int main(){
    int n, cnt = 0; cin >> n;
    set <char> se, se2;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j || j == n - 1 - i){
                ++cnt;
                se2.insert(arr[i][j]);
            }
            else
                se.insert(arr[i][j]);
        }
    }
    char x = *se.begin();
    char y = *se2.begin();
    if(se.size() == se2.size() && se.size() == 1 && count == (2*n) - 1 && x != y)
        cout<<"YES";
    else cout << "NO";
}
using namespace std;
int main() {
    int n;
    cin >> n;
    char matrix[305][305];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matrix[i][j];
    char diag_char = matrix[0][0];      
    char non_diag_char = matrix[0][1];
    if (diag_char == non_diag_char) {
        cout << "NO\n";
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j || j == n - 1 - i) {
                if (matrix[i][j] != diag_char) {
                    cout << "NO\n";
                    return 0;
                }
            } else {
                if (matrix[i][j] != non_diag_char) {
                    cout << "NO\n";
                    return 0;
                }
            }
        }
    }
    cout << "YES\n";
    return 0;
}
using namespace std;
http://codeforces.com/contest/408/problem/A
// A. Line to Cashier
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < arr[i]; j++){
            int x; cin >> x;
            sum += 15 + x * 15;
        }
        arr[i] = sum;
    }
    sort(arr, arr + n);
    cout << arr[0];
}
using namespace std;
http://codeforces.com/contest/408/problem/B
// B. Garland
int arr[26], arr2[26];
int main(){
    string s, s2; cin >> s >> s2;
    int sum = 0;
    int len1 = s.length();
    int len2 = s2.length();
    for(int i = 0; i < len1; i++)
        ++arr[s[i] - 'a'];
    for(int i = 0; i < len2; i++)
        ++arr2[s2[i] - 'a'];
    for(int i = 0; i < 26; i++){
        if(arr2[i]){
            if(arr[i])
                sum += min(arr[i], arr2[i]);
            else{
                sum = 0; break;
            }
        }
    }
    if(sum) cout << sum;
    else cout << -1;
}
using namespace std;
int main() {
    string s, s2; cin >> s >> s2;
    int freq_s[26] = {0};
    int freq_s2[26] = {0};
    for (char ch : s)
        ++freq_s[ch - 'a'];
    for (char ch : s2)
        ++freq_s2[ch - 'a'];
    int total = 0;
    for (int i = 0; i < 26; ++i) {
        if (freq_s2[i] > 0) {
            if (freq_s[i] == 0) {
                cout << -1 << endl;
                return 0;
            }
            total += min(freq_s[i], freq_s2[i]);
        }
    }
    cout << total << endl;
    return 0;
}
using namespace std;
http://codeforces.com/contest/427/problem/A
//427 A. Police Recruits.cpp
int main() {
    int n; cin >> n;
    int availableOfficers = 0;
    int untreatedCrimes = 0;
    for (int i = 0; i < n; ++i) {
        int event; cin >> event;

        if (event > 0)
            availableOfficers += event;
        else{
            if (availableOfficers > 0)
                --availableOfficers; 
            else
                ++untreatedCrimes;
        }
    }
    cout << untreatedCrimes << endl;
}
using namespace std;
http://codeforces.com/contest/431/problem/A
// A. Black Square
int main(){
    int arr[4], res = 0;
    for(int i = 0; i < 4; i++)
        cin >> arr[i];
    string str; cin >> str;
    int len = str.length();
	for(int i = 0; i < len; i++){
	    int z = str[i] - '0';
	    res += arr[z - 1];
	}
    cout << res;
}
using namespace std;
http://codeforces.com/contest/433/problem/B
// 433B. Kuriyama Mirai's Stones
int main() {
    int n; cin >> n;
    vector<long long> original(n), sorted(n);
    for (int i = 0; i < n; ++i) {
        cin >> original[i];
        sorted[i] = original[i];
    }
    sort(sorted.begin(), sorted.end());
    for (int i = 1; i < n; ++i) {
        original[i] += original[i - 1];
        sorted[i] += sorted[i - 1];
    }
    int q; cin >> q;
    while (q--) {
        int type, l, r; cin >> type >> l >> r;
        l--, r--;
        if (type == 1){
            if (l == 0) cout << original[r] << endl;
            else cout << original[r] - original[l - 1] << endl;
        }else{
            if (l == 0) cout << sorted[r] << endl;
            else cout << sorted[r] - sorted[l - 1] << endl;
        }
    }
}
using namespace std;
http://codeforces.com/problemset/problem/439/A
// A. Devu, the Singer and Churu, the Joker
int main() {
    int n, k; cin >> n >> k;
    int totalSongDuration = 0;
    for (int i = 0; i < n; ++i) {
        int song; cin >> song;
        totalSongDuration += song;
    }
    int totalBreakTime = (n - 1) * 10; // 10 minutes break between songs
    if (totalSongDuration + totalBreakTime > k)
        cout << -1 << endl;
    else {
        int remainingTime = k - totalSongDuration;
        int maxJokes = remainingTime / 5;
        cout << maxJokes << endl;
    }
}
using namespace std;
codeforces.com/contest/439/problem/B
// 439B. Devu, the Dumb Guy
int main() {
	int n, x; cin >> n >> x;
	int arr[n];
	for(int i = 0; i < n; i++)
	    cin >> arr[i];
	sort(arr, arr + n);
	int sum = 0;
	for(int i = 0; i < n; i++){
	    sum += arr[i] * x;
	    if(x > 1) --x;
	}
	cout << sum;
}
using namespace std;
http://codeforces.com/problemset/problem/451/A
// 451A - Game With Sticks
int main() {
    int n, m;
    cin >> n >> m;
    if (min(n, m) % 2 == 1)
        cout << "Akshat" << endl;
    else
        cout << "Malvika" << endl;
}
using namespace std;
http://codeforces.com/contest/451/problem/B
// 451B - Sort the Array
int main() {
    int n; cin >> n;
    vector<int> arr(n);
    //for (int& x : arr)
        //cin >> x;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        arr.push_back(x);
    }
    vector<int> sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end());

    // Find the first and last position where arr and sorted_arr differ
    int l = 0, r = n - 1;

    while (l < n && arr[l] == sorted_arr[l]) ++l;
    while (r >= 0 && arr[r] == sorted_arr[r]) --r;

    if (l >= r) {
        // Already sorted or only one element needs to be reversed (no-op)
        cout << "yes\n1 1\n";
        return 0;
    }

    // Reverse the subarray and check if it matches the sorted version
    reverse(arr.begin() + l, arr.begin() + r + 1);

    if (arr == sorted_arr) {
        cout << "yes\n" << (l + 1) << " " << (r + 1) << "\n";
    } else {
        cout << "no\n";
    }

    return 0;
}
using namespace std;
https://codeforces.com/contest/456/problem/A
// 456A.Laptops
int main(){
    int n; cin >> n;
    map <int, int> mp;
    vector <int> vec;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        mp[x] = y;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());
    bool check = 0;
    for(int i = 0; i < n - 1; i++){
        if(mp[vec[i]] > mp[vec[i + 1]])
            check = 1;
    }
    if(check) cout << "Happy Alex";
    else cout << "Poor Alex";
}
using namespace std;
int main() {
    int n; cin >> n;
    vector<pair<int, int>> laptops(n);
    for (int i = 0; i < n; ++i) {
        cin >> laptops[i].first >> laptops[i].second; 
    }
    sort(laptops.begin(), laptops.end());
    for (int i = 0; i < n - 1; ++i) {
        if (laptops[i].second > laptops[i + 1].second) {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    cout << "Poor Alex" << endl;
    return 0;
}
using namespace std;
// A. Keyboard
// contest/474/problem/A
int main(){
    char shift;
    string str, res; 
    cin >> shift >> str;
    const string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    res.resize(str.size());
    for(int i = 0; i < str.size(); i++){
        int idx = keyboard.find(str[i]);
        res[i] = (shift == 'R') ? keyboard.at(idx - 1) : keyboard.at(idx + 1);
    }
    cout << res;
}
using namespace std;
// problemset/problem/617/A
// A. Elephant
int main(){
    int n; cin >> n;
    int res = (n % 5 == 0) ? n / 5 : (n / 5) + 1;
    cout << res;
}
using namespace std;
// A. Vanya and Fence
// problemset/problem/677/A
int main(){
    int n, h; cin >> n >> h;
    int w = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x > h) w += 2;
        else w += 1;
    }
    cout << w;
}
using namespace std;
// A. Brain's Photos
// problemset/problem/707/A _ Brain has a photo represented as an n × m matrix, where each cell contains a letter representing a pixel's color.
// Colors in the photo: Black-and-white colors: 'W' (white), 'G' (grey), 'B' (black)
//Colored colors: 'C' (cyan), 'M' (magenta), 'Y' (yellow) Check if the photo is black-and-white or colored
int main(){
    int n, m; cin >> n >> m;
    char arr[n][m];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 2 * m; j++)
            cin >> arr[i][j];
    }
    int flag = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 2 * m; j++){
            if(arr[i][j] == 'C' || arr[i][j] == 'Y' || arr[i][j] == 'M')
                flag = 1;
        }
    }
    (flag == 0) ? printf("#Black&White\n") : printf("#Color\n");
}
using namespace std;
// A. Wrong Subtraction
// problemset/problem/977/A?mobile=false
int main() {
    int n, k; cin >> n >> k;
    for (int i = 0; i < k; i++) {
        if (n % 10 == 0) n /= 10;
        else n--;
    }
    cout << n << endl;
}
using namespace std;
// C. Alphabetic Removals
// contest/999/problem/C _From a string remove k characters.try to remove the leftmost 'a' first.
// if 'a' is not left, remove the leftmost 'b'.Continue in alphabetical order ('c', 'd', ..., 'z'),
//Repeat this process exactly k times.After removing k characters, print the remaining string.
int main(){
    int n, k; cin >> n >> k;
    string str; cin >> str;
    vector <int> freq(26, 0);
    for(int i = 0; i < str.size(); i++)
        freq[str[i] - 'a']++;
    char eliminate = 'a';
    while(k > 0 && eliminate <= 'z'){
        int cnt = min(k, freq[eliminate - 'a']);
        k -= cnt;
        freq[eliminate - 'a'] -= cnt;
        eliminate++;
    }
    int remain[26] = {0};
    for(char ch = 'a'; ch <= 'z'; ch++)
        remain[ch - 'a'] = freq[ch - 'a'];
    for(int i = 0; i < str.size(); i++){
        if(remain[str[i] - 'a'] > 0){
            cout << str[i];
            remain[str[i] - 'a']--;
        }
    }
    //-----//
    int n, k; cin >> n >> k;
    string str; cin >> str;
    map <char, vector <int> > idx;
    for(int i = 0; i < n; i++)
        idx[str[i]].push_back(i);
    map <int, bool> visited;
    for(char ch = 'a'; ch <= 'z'; ch++){
        for(int i = 0; i < idx[ch].size() && k >= 1; i++){
            int ix = idx[ch][i];
            visited[ix] = true; k--;
        }
    }
    for(int i = 0; i < n; i++){
        if(!visited[i])
            cout << str[i];
    }
}
using namespace std;
// A. In Search of an Easy Problem
// contest/1030/problem/A
int main(){
    int n; cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        sum += x;
    }
    (sum) ? cout << "HARD" : cout << "EASY";
}
using namespace std;
// problemset/problem/1204/B
// B. Mislove Has Lost an Array
int main(){
    int n, l, r; cin >> n >> l >> r;
    int minsum = 0, maxsum = 0;
    int power = 1;
    for(int i = 1; i <= l; i++){
        minsum += power;
        power *= 2;
    }
    minsum += (n - l) * 1;
    power = 1;
    for(int i = 1; i <= r; i++){
        maxsum += power;
        power *= 2;
    }
    maxsum += (n - r) * (power / 2);
    cout << maxsum << " " << minsum;
}
using namespace std;
// C. Bad Sequence
// contest/1214/problem/C _check if can make a bracket sequence  correct by moving at most 
//one bracket to a different position (without flipping it).correct bracket sequence must:Have equal numbers of ( and ),
//Be balanced.Determine if moving one bracket to a different position can fix the sequence
int main(){
    int n; cin >> n;
    string str; cin >> str;
    stack <char> st;
    for(int i = 0; i < n; i++){
        if(i == 0) st.push(str[i]);
        else{
            if(st.size() >= 1 && st.top() == '(' && str[i] == ')')
                st.pop();
            else st.push(str[i]);
        }
    }
    int open = 0, close = 0;
    while(!st.empty()){
        if(st.top() == '(') open++;
        else close++;
        st.pop();
    }
    ((open == 0 && close == 0) || (open == 1 && close == 1)) ? cout << "Yes" : cout << "No";
}
using namespace std;
// contest/1257/problem/A
// A. Two Rival Students
int main(){
    int t; cin >> t; 
    while(t--){
        int n, x, a, b; cin >> n >> x >> a >> b;
        int curDist = abs(a - b);
        int maxDist = min(n - 1, curDist + x);
    }
    cout << maxDist;
}
using namespace std;
// B. Magic Stick
// contest/1257/problem/B
int main(){
    int t; cin >> t;
    while(t--){
        int x, y; cin >> x >> y;
        if(x == 1 && y == 1) cout << "YES\n";
        else if((x == 2 || x == 3) && y < 4) cout << "YES\n";
        else if(x > 3) cout << "YES\n";
        else cout << "No\n";
    }
}
using namespace std;
// problemset/problem/1328/A
// A. Divisibility Problem
int main(){
    int t; cin >> t;
    while(t--){
        int x, y; cin >> x >> y;
        if(x % y == 0)
            cout << 0;
        else
            cout << y - (x % y);
    }
}
using namespace std;
// A. Candies and Two Sisters
// problemset/problem/1335/A
int main(){
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        if(x > 2){
            if(x & 1) cout << (x >> 1) << "\n";
            else cout << (x >> 1) - 1 << "\n";
        }
        else cout << 0;
    }
}
//https://codeforces.com/problemset/problem/1352/A
// Sum of Round Numbers
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> vec;
        int j = 0;
        while(n > 0){
            if(n % 10){
                int res = pow(10, j);
                res *= n % 10;
                vec.push_back(res);
            }
            n /= 10; j++;
        }
        int len = vec.size();
        cout << len << "\n";
        for(int i = 0; i < len; i++)
            cout << vec[i] << " ";
        cout << "\n";
    }
}
using namespace std;
// https://codeforces.com/problemset/problem/1367/A
// Short Substrings
int main(){
    int t; cin >> t;
    while(t--){
        string str; cin >> str;
        int len = str.length();
        string res = "";
        for(int i = 0; i < len; i++){
            if(i % 2 == 0)
                res += str[i];
        }
        res += str[len - 1];
        cout << res << "\n";
    }
}
using namespace std;
// https://codeforces.com/problemset/problem/1409/A
// A. Yet Another Two Integers Problem
int main(){
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        if(a == b) cout << "0";
        else{
            int diff = abs(a - b);
            int arr[11] = {};
            int res = 0;
            for(int i = 10; i > 0; i--){
                arr[i] = diff / i;
                diff -= arr[i] * i;
                res += arr[i];
            }
            cout << res;
        }
    }
}
using namespace std;
// C. Dominant Piranha
// problemset/problem/1433/C
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n], res = -1, mx = 0;
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int dup = 1;
        for(int i = 1; i < n; i++){
            if(arr[i] != arr[0]){
                dup = 0;
                break;
                
            }
        }
        if(dup){
            cout << -1;
            continue;
        }
        for(int i = 0; i < n; i++){
            if(arr[i] > mx) mx = arr[i];
        }
        for(int i = 0; i < n; i++){
            if(arr[i] == mx){
                if ((i > 0 && arr[i] > arr[i - 1]) || (i < n - 1 && arr[i] > arr[i + 1])) {
                    res = i + 1;
                    break;
                }
            }
        }
        cout << res << "\n";
    }
}
using namespace std;
// problemset/problem/1454/A
// A. Special Permutation
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << n << " ";
        for(int i = 1; i < n; i++)
            cout << i << " ";
        cout << "\n";
    }
}
using namespace std;
// A. Cards for Friends
// contest/1472/problem/A
int main(){
    int t; cin >> t;
    while(t--){
        int w, h, n; cin >> w >> h >> n;
        int cnt = 1;
        while(w % 2 == 0){
            w /= 2; cnt *= 2;
        }
        while(h % 2 == 0){
            h /= 2; cnt *= 2;
        }
        (cnt >= n) ? cout << "Yes\n" : cout << "No\n";
    }
}
using namespace std;
// contest/1475/problem/A 
// A. Odd Divisor
int powerOfTwo(int n){
    return (n & (n - 1)) == 0;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        (powerOfTwo(n)) ? cout << "No\n" : cout << "Yes\n";
    }
    while(t--){
        int i = 2, flag = 0;
        int n; scanf("%d", &n);
        while(i <= n){
            if(n % i == 0 && i % 2 != 0)
                flag = 1;
            i++;
        }
    }
}
using namespace std;
// D. Epic Transformation
// problemset/problem/1506/D
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map <int, int> freq;
        int maxfreq = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            freq[x]++;
            maxfreq = max(maxfreq, freq[x]);
        }
        int rem = n - maxfreq;
        cout << (maxfreq > rem) ? (maxfreq - rem) : n % 2 << "\n";
    }
}
using namespace std;
// A. Review Site
// problemset/problem/1511/A
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int up = 0, down = 0;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        for(int i = 0; i < n; i++){
            if(arr[i] != 2) up++;
        }
        cout << up << "\n";
    }
}
using namespace std;
// contest/1512/problem/A
// A. Spy Detected
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int maxi = 101, arr[n + 1];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int freq[maxi];
        for(int i = 0; i < maxi; i++)
            freq[i] = 0;
        for(int i = 0; i < n; i++)
            freq[arr[i]]++;
        int idx;
        for(int i = 0; i < n; i++){
            if(freq[arr[i]] == 1){
                idx = i; 
                break;
            }
        }
        cout << idx + 1 << "\n";
    }
}
using namespace std;
// problemset/problem/1553/A
// A. Digits Sum
int main(){
    int t; cin >> t;
    while(t--){
        int n, res; cin >> n;
        if(n % 10 < 9)
            res = n / 10;
        else
            res = (n / 10) + 1;
        cout << res;
    }
}
using namespace std;
// A. Dislike of Threes
// contest/1560/problem/A
int main(){
    int t; cin >> t;
    int res[2001], tmp = 1;
    for(int i = 1; tmp <= 2000; i++){
        if((i % 3 != 0) && (i % 10 != 3))
            res[tmp++] = i;
    }
    while(t--){
        int n; cin >> n;
        cout << res[n];
    }
    /*
    int n, k; cin >> n;
    for(int i = 1; i <= n; i++){
        while(i % 3 == 0 || i % 10 == 3){
            i++; n++;
        }
        k = i;
    }
    cout << k; */
}
using namespace std;
// Permutation Minimization by Deque
// contest/1579/problem/E1 _Given a permutation of size n,need to construct a deque by sequentially adding elements. starting smallest value.
// Before adding each value choose whether to add it to the front or the back of the deque.determine the final order of elements in the deque
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        list <int> lst;
        vector <int> vec(n);
        int i = 0;
        for(int i = 0; i < n; i++)
            cin >> vec[i];
        while(i < n){
            if(i == 0){
                lst.push_back(vec[i]);
                i++;
            }
            else{
                if (vec[i] < lst.front())
                    lst.push_front(vec[i]);
                else
                    lst.push_back(vec[i]);
                i++;
            }
        }
        while (!lst.empty()){
            cout << lst.front() << " ";
            lst.pop_front();
        }
        cout << "\n";
    }
}
using namespace std;
// A. Find Array
// contest/1608/problem/A
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n == 1){
            cout << 1 << " ";
            continue;
        }
        else{
            for(int i = 2; i <= n + 1; i++)
                cout << i << " ";
        }
        cout << "\n";
    }
}
using namespace std;
//A. Vasya and Coins
// problemset/problem/1660/A
int main(){
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        if(a == 0) cout << 1;
        else cout << a + (b * 2) + 1;
    }
}
using namespace std;
// B. Equal Candies
// problemset/problem/1676/B
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n], sum = 0, mini = INT_MAX;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] < mini)
                mini = arr[i];
        }
        for(int i = 0; i < n; i++)
            sum += arr[i] - mini;
        cout << sum << "\n";
    }
}
using namespace std;
// Eating Queries
//contest/1676/problem/E _Timur has n candies, each with a sugar content a[i]. He will ask q queries, where for each query x[j], 
//determine the minimum number of candies he needs to eat to consume at least x[j] sugar. If it's not possible, return -1
int main(){
    int t; cin >> t;
    while(t--){
        int n, q; cin >> n >> q;
        vector <int> vec(n);
        for(int i = 0; i < n; i++)
            cin >> vec[i];
        sort(vec.begin(), vec.end(), greater <int> ());
        vector <int> pref(n + 1, 0);
        for(int i = 1; i <= n; i++)
            pref[i] = pref[i - 1] + vec[i - 1];
        while(q--){
            int val; cin >> val;
            auto it = lower_bound(pref.begin(), pref.end(), val);
            if(it != pref.end())
                cout << it - pref.begin() << "\n";
            else
                cout << -1 << "\n";
        }
    }
}
using namespace std;
// Minimums and Maximums
//contest/1680/problem/A _calculate the minimum possible number of elements in a array by which range [l1, r1] elements 
// equal to its minimum and [l2, r2] elements in the array equal to its maximum.
int main(){
    int l1, l2, r1, r2, res;
    cin >> l1 >> r1 >> l2 >> r2;
    if(l2 >= l1 && l2 <= r1) res = l2;
    else if(l1 >= l2 && l1 <= r2) res = l1;
    else res = l1 + l2;
    cout << res;
}
using namespace std;
// B. Card Trick
// problemset/problem/1681/B
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int m, sum = 0; cin >> m;
        for(int i = 0; i < m; i++){
            int suf; cin >> suf;
            sum += suf;
        }
        res = sum % n;
        cout << arr[res];
    }
}
using namespace std;
// A. Beat The Odds
// contest/1691/problem/A
int main() {
    int t; cin >> t;
    while (t--) {
        int n, even = 0, odd = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int num; cin >> num;
            if (num % 2 == 0) even++;
            else odd++;
        }
        cout << min(even, odd) << endl;
    }
}

using namespace std;
// C. Cypher
// problemset/problem/1703/C
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        for(int i = 0; i < n; i++){
            int moves; cin >> moves;
            string str; cin >> str;
            for(int j = 0; j < str.size(); j++){
                if(str[j] == 'U')
                    arr[i] = (arr[i] + 9) % 10;
                else if(str[i] == 'D')
                    arr[i] = (arr[i] + 1) % 10;
            }
        }
        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
}
using namespace std;
// A. Difference Operations
// problemset/problem/1708/A
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int IsDiv = 1;
        for(int i = 1; i < n; i++){
            if(arr[i] % arr[0] != 0){
                IsDiv = 0;
                break;
            }
        }
        printf(IsDiv ? "Yes" : "No");
    }
}
using namespace std;
// A. Three Doors
// problemset/problem/1709/A
int main(){
    int t; cin >> t;
    while(t--){
        int start; cin >> start;
        int keys[4];
        for(int i = 1; i <= 3; i++)
            cin >> keys[i];
        int first = keys[start];
        int second = (first != 0) ? keys[first] : 0;
        if(first != 0 && second != 0)
            cout << "Yes";
        else
            cout << "No";
    }
}
using namespace std;
// A. Planets
// problemset/problem/1730/A
int main(){
    int t; cin >> t;
    while(t--){
        int num, cost; cin >> num >> cost;
        unordered_map <int, int> freq;
        for(int i = 0; i < num; i++){
            int x; cin >> x;
            freq[x]++;
        }
        int res = 0;
        for(const auto &it : freq)
            res += min(it.second, cost);
        cout << res << "\n";
    }
}
using namespace std;
// problemset/problem/1734/A
// A. Select Three Sticks
void sorti(int *arr, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        sorti(arr, n);
        int res = INT_MAX;
        for (int i = 1; i < n - 1; i++) {
            int diff = (arr[i] - arr[i - 1]) + (arr[i + 1] - arr[i]);
            if (diff < res) res = diff;
        }
        cout << res << "\n";
    }
}
using namespace std;
// B. Bright, Nice, Brilliant
// problemset/problem/1734/B  _There has a pyramid with n floors, numbered(1 to n).i-th floor has exactly i rooms.Each room (i, j) has two staircases leading to the two rooms directly below: (i+1, j) and (i+1, j+1).Each room can either have a torch or be empty.
//brightness of a room is the number of torches from which you can reach it using staircases. nice pyramid is one where all rooms in each floor have the same brightness.
//brilliance of a pyramid is the sum of brightness values of the leftmost rooms (1,1), (2,1), ..., (n,1).Fine  a torch arrangement that makes the pyramid nice and maximizes its brilliance.
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                (j > 1 && j < i) ? printf("0") : printf("1");
            }
            printf("\n");
        }
    }
}
// contest/1736/problem/A
// A. Make A Equal to B
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n], ray[n];
        int z1 = 0, z2 = 0, o1 = 0, o2 = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] == 0) z1++;
            else o1++;
        }
        for(int i = 0; i < n; i++){
            cin >> ray[i];
            if(ray[i] == 0) z2++;
            else o2++;
        }
        int res = (z1 - z2 > o1 - o2) ? z1 - z2 : o1 - o2;
        int mismatch = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] != ray[i])
                mismatch++;
        }
        (mismatch < res) ? cout << res : cout << res + 1;
    }
}
using namespace std;
// A. Factorise N+M
// problemset/problem/1740/A?mobile=false
bool is_prime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int m = 2;
        while (is_prime(n + m)) {  
            m++;  
            while (!is_prime(m)) 
                m++;
        }
        cout << m << "\n";
    }/*
    while(t--){
        int n; cin >> n;
        if(n == 1 || n == 2)
            cout << "7\n";
        else if(is_prime(n))
            cout << n + 1 << "\n";
    } */
}
// contest/1741/problem/A
// A. Compare T-Shirt Sizes
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string str, ing; cin >> str >> ing;
        int len = str.length(), gth = ing.length();
        char ch = str[len - 1], ar = ing[gth - 1];
        if (ch == ar) {
            if (ch == 'S') {
                cout << (len > gth ? "<\n" : (len < gth ? ">\n" : "=\n"));
            }else {
                cout << (len > gth ? ">\n" : (len < gth ? "<\n" : "=\n"));
            }
        } else {
            if ((ch == 'L' && (ar == 'M' || ar == 'S')) || (ch == 'M' && ar == 'S'))
                cout << ">\n";
            else cout << "<\n";
        }
    }
}
using namespace std;
// Sum
//problemset/problem/1742/A _given three integers a Determine if one of them is the sum of the other two.
int main(){
    int t; cin >> t;
    while(t--){
        (a + b == c || b + c == a || a + c == b) ? cout << "Yes" : cout << "No";
    }
}
using namespace std;
// problemset/problem/1754/A
// A. Technical Support
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string str; cin >> str;
        stack <char> st;
        for(int i = 0; i < n; i++){
            char ch = str[i];
            if(ch == 'Q') st.push(ch);
            else{
                if(!st.empty())
                    st.pop();
            }
        }
        (st.empty()) ? cout << "Yes" : cout << "No";
    }
}
using namespace std;
// B. Kevin and Permutation
// contest/1754/problem/B
int main(){
    int n; cin >> n;
    int x = (n + 1) / 2;
    int y = n;
    for(int i = 1; i <= n / 2; i++){
        cout << x << " " << y << " ";
        x--; y--;
    }
    if(n % 2!= 0) cout << 1 << "\n";
}
using namespace std;
// A. SSeeeeiinngg DDoouubbllee
// contest/1758/problem/A
int main(){
    int t; cin >> t;
    while(t--){
        string str; cin >> str;
        cout >> str;
        reverse(str.begin(), str.end());
        cout << str;
    }
}
using namespace std;
// Medium Number
//problemset/problem/1760/A _find the medium number among three integers
int medium(int a, int b, int c){
    int maxi = a, mini = a;
    if(b > maxi) maxi = b;
    if(c > maxi) maxi = c;
    if(b < mini) mini = b;
    if(c < mini) mini = c;
    return a + b + c - maxi - mini;
}
int main(){
    int t; cin >> t;
    while(t--){
        int a, b, c; cin >> a >> b >> c;
        cout << medium(a, b, c));
    }
}
using namespace std;
// Koxia and Whiteboards
//contest/1770/problem/A _Kiyora has n whiteboards, each containban integer a[i]. she performs m operations, where each
// they choose any whiteboard and replace its number with b[j] from a given list. determine the maximum possible sum of the numbers 
int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        long long sum = 0;
        list <int> lst;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            lst.push_back(x);
            sum += x;
        }
        lst.sort();
        for(int i = 0; i < m; i++){
            int x; cin >> x;
            sum -= lst.front();
            sum += x;
            lst.pop_front();
            lst.push_front(x);
            lst.sort();
        }
        cout << sum << "\n";
    }
}
using namespace std;
// Hayato and School
//contest/1780/problem/A _find three indices in an array such that the sum of the elements at these indices is odd
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> odd, even;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            if(x % 2 == 0)
                even.push_back(i);
            else
                odd.push_back(i);
        }
        if(odd.size() >= 3){
            cout << "YES\n" << odd[0] << " " << odd[1] << " " << odd[2];
        }
        else if(odd.size() >= 1 && even.size() >= 2)
            cout << "Yes\n" << odd[0] << " " << even[0] << " " << even[1];
        else
            cout << "No";
    }
}
using namespace std;
// Matrix of Differences
// contest/1783/problem/B _Given an n × n matrix filled with integers from 1 to n*n.define its "beauty"
// as the number of unique absolute differences between adjacent elements (horizontally or vertically).
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        list <int> lst;
        for(int i = 1; i <= n * n; i++)
            lst.push_back(i);
        int grid[n][n];
        for(int i = 0; i < n; i++){
            if((i + 1) % 2 != 0){
                for(int j = 0; j < n; j++){
                    if((j + 1) % 2 != 0){
                        grid[i][j] = lst.back();
                        lst.pop_back();
                    }
                    else{
                        grid[i][j] = lst.front();
                        lst.pop_front();
                    }
                }
            }
            else{
                for(int j = n - 1; j >= 0; j--){
                    if((j + 1) % 2 != 0){
                        grid[i][j] = lst.front();
                        lst.pop_front();
                    }
                    else{
                        grid[i][j] = lst.back();
                        lst.pop_back();
                    }
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++)
                cout << grid[i][j] << " ";
            cout << "\n";
        }
    }
}
using namespace std;
// problemset/problem/1787/A
// A. Exponential Equation
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n % 2 == 0)
            cout << n / 2 << " " << 1 << "\n";
        else
            cout << -1 << "\n";
    }
}
using namespace std;
// Polycarp and the Day of Pi
//contest/1790/problem/A _print how many digits of PI will be matched
int main(){
    int t; cin >> t;
    while(t--){
        string PI = "314159265358979323846264338327";
        string str; cin >> str;
        int res = 0;
        for(int i = 0; i < str.size(); i++){
            if(PI[i] == str[i]) res++;
            else break;
        }
        cout << res;
    }
}
using namespace std;
// Teleporters (Easy Version)
// contest/1791/problem/G1 _Given (0 to n) points on a number line ,) each point i teleporter that costs a[i] coins to use. 
//Using a teleporter sends you back to point 0, but each teleporter can be used only once.move left or right on the number line at a cost of 1 coin per unit. 
//Starting at 0 with c coins, determine the maximum number of teleporters you can use.
int main(){
    int t; cin >> t;
    while(t--){
        int n, cost; cin >> n >> cost;
        vector <int> vec(n);
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            vec[i] = i + 1 + x;
        }
        sort(vec.begin(), vec.end());
        int res = 0;
        for(int i = 0; i < vec.size(); i++){
            if(cost < vec[i])
                break;
            cost -= vec[i];
            res++;
        }
        cout << res << "\n";
    }
}
using namespace std;
// A. Two Towers
// problemset/problem/1795/A
int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int dup1 = 0, dup2 = 0;
        string str, ing; cin >> str >> ing;
        for(int i = 0; i < m - 1; i++){
            if(str[i] == str[i + 1])
                dup1++;
        }
        for(int i = 0; i < n - 1; i++){
            if(ing[i] == ing[i + 1])
                dup2++;
        }
        if(dup1 == 0 && dup2 == 0) cout << "Yes\n";
        else if(dup1 >= 1 && dup2 >= 1) cout << "No\n";
        else if(dup1 >= 2 || dup2 >= 2) cout << "No\n";
        else{
            if(str[m - 1] == ing[n - 1]) cout << "No\n";
            else cout << "Yes\n";
        }
    }
}
using namespace std;
// Array Coloring
//problemset/problem/1857/A _determine whether it is possible to color all its elements in two colors in such a way that the sums 
//of the elements of both colors have the same parity and each color has at least one element colored.
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n], sum = 0;
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        for(int i = 0; i < n; i++)
            sum += arr[i];
        (sum % 2 == 0) ? cout << "Yes\n" : cout << "No\n"
    }
}
