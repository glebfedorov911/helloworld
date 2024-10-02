#include <iostream>

using std::cout;
using std::endl;
using std::string;

int count_of_finding_word(string& str, int len);
int count_delimiter(string& str, char delimiter);
string* sub_words(string& str, int cnt);
int smallest_word_length(string* subStr, int length);
bool check_word(string* s1, string* s2, int sizeS1, int sizeS2, int smallest_len);

int main()
{
	string s1{ " adsdsaads asdasdasd asdasddas adb   a  " };
	string s2{ "dasdsa adsasddsaasddas adb     " };
	int length1 = s1.size();
	int length2 = s2.size();
	int cnt1 = count_of_finding_word(s1, length1);
	int cnt2 = count_of_finding_word(s2, length2);

	string* stringArray1 = sub_words(s1, cnt1);
	int smallestWordS1 = smallest_word_length(stringArray1, cnt1);

	string* stringArray2 = sub_words(s2, cnt2);

	bool f = check_word(stringArray1, stringArray2, cnt1, cnt2, smallestWordS1);

	cout << "F: " << f;

	return 0;
}

int count_delimiter(string& str, char delimiter)
{
	int cnt = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == delimiter) cnt++;
	}
	return cnt;
}

int count_of_finding_word(string& str, int len)
{
	if (len == 0) return 0;

	int cnt = (str[0] == ' ' || str[len - 1] == ' ') ? count_delimiter(str, ' ') : count_delimiter(str, ' ') + 1;

	int doubleSpace = 0;
	int pos = 0;

	while ((pos = str.find("  ", pos)) != string::npos)
	{
		doubleSpace++;
		pos += 2;
	}

	cnt -= doubleSpace;
	return cnt;
}

string* sub_words(string& str, int cnt)
{
	string* stringArray = new string[cnt];
	string tempStr;
	char delimiter = ' ';

	for (int i = 0; i < cnt; i++)
	{
		int start = str[0] == ' ' ? 1 : 0;
		if (start == 1) str = str.substr(start);

		tempStr = str.substr(0, str.find(delimiter));
		if (!tempStr.empty()) stringArray[i] = tempStr;
		else stringArray[i] = str;
		str = str.substr(str.find(delimiter) + 1);
	}

	return stringArray;
}

int smallest_word_length(string* subStr, int len)
{
	int k = subStr[0].size();
	for (int i = 1; i < len; i++)
	{						
		if (!subStr[i].empty() && subStr[i] != " ") {
			k = subStr[i].size() < k ? subStr[i].size() : k;
			bool ddasd = subStr[i] == " ";
		}
	}
	return k;
}

bool check_word(string* s1, string* s2, int sizeS1, int sizeS2, int smallest_len)
{
	for (int i = 0; i < sizeS1; i++)
	{
		for (int j = 0; j < sizeS2; j++)
		{
			if (s1[i] == s2[j] && s2[j].size() > smallest_len)
			{
				return true;
			}
		}

	}
	return false;
}
