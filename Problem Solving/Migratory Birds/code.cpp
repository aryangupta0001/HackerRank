#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int migratoryBirds(vector<int> arr) {
	int len = arr.size(), count[5] = {0, 0, 0, 0, 0}, arr_max = 0, max_count = 0;
	
	for(int i = 1; i<=5; i++){
		for(int j = 0; j<len; j++){
			if(arr[j] == i){
				count[i-1]++;
			}
		}
	}
	
	for(int i = 0; i<5; i++){
		if(count[i] > arr_max){
			arr_max = count[i];
		}
	}
	
	for(int i = 0; i<5; i++){
		if(count[i] == arr_max){
			return i+1;
		}
	}
	
	return 0;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	string arr_count_temp;
	getline(cin, arr_count_temp);

	int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

	string arr_temp_temp;
	getline(cin, arr_temp_temp);

	vector<string> arr_temp = split(rtrim(arr_temp_temp));

	vector<int> arr(arr_count);

	for (int i = 0; i < arr_count; i++) {
		int arr_item = stoi(arr_temp[i]);

		arr[i] = arr_item;
	}

	int result = migratoryBirds(arr);

	fout << result << "\n";

	fout.close();

	return 0;
}

string ltrim(const string &str) {
	string s(str);

	s.erase(
		s.begin(),
		find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
	);

	return s;
}

string rtrim(const string &str) {
	string s(str);

	s.erase(
		find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
		s.end()
	);

	return s;
}

vector<string> split(const string &str) {
	vector<string> tokens;

	string::size_type start = 0;
	string::size_type end = 0;

	while ((end = str.find(" ", start)) != string::npos) {
		tokens.push_back(str.substr(start, end - start));

		start = end + 1;
	}

	tokens.push_back(str.substr(start));

	return tokens;
}
