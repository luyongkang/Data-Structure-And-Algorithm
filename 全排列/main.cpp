#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

vector<string> Permutation(string str);
void PermutationRe(string str, string result);
void swap(char&, char&);

vector<string> resultRe;

int main() {
    string str("cadb");
    vector<string> result;
    result = Permutation(str);
    for (auto i : result) {
        cout << i << "  ";
    }
    cout << endl << "----------------------------" << endl;
    PermutationRe(str, "");
    sort(resultRe.begin(), resultRe.end());
    for (auto i : resultRe) {
        cout << i << "  ";
    }
    return 0;
}


//全排列非递归思路是根据字典序找到下一个比目前排序大的排序
/*
step1.先按照升序排列，并且加入结果集中
step2.从后向前找到第一个i，使得str.at(i)<str.at(i+1),再从后向前找到第一个j使得 str.at(j)>str.at(i),然后交换i,j位上元素，
      最后将从i+1位到结尾按照升序排列
step3.重复step2直到找不到i
*/
vector<string> Permutation(string str) {
    vector<string> result;
    if (str.size() == 0)
        return result;
    sort(str.begin(), str.end());
    result.push_back(str);
    while (true) {
        int i = str.size() - 2;
        int find = false;
        for (i = str.size() - 2; i >= 0; i--) {
            if (str.at(i) < str.at(i + 1)) {
                find = true;
                for (int j = str.size() - 1; j > i; j--) {
                    if (str.at(j) > str.at(i)) {
                        swap(str.at(j), str.at(i));
                        sort(str.begin() + i + 1, str.end());
                        result.push_back(str);
                        break;
                    }
                }
                break;
            }
        }
        if (!find) {
            break;
        }
    }

    return result;
}



//全排列递归思路是在递归的每一层确定一个值
void PermutationRe(string str, string result) {
    if (str.empty())
        return;
    if (str.size() == 1) {
        resultRe.push_back(result + str);
    }
     
    for (int i = 0; i < str.size(); i++) {
        string temp = str;
        string result_temp = result;
        swap(temp.at(i), temp.at(0));
        result_temp.push_back(temp.at(0));
        PermutationRe(temp.substr(1,temp.size()-1), result_temp);
    }
}


//辅助函数swap
inline void swap(char& fir, char& sec) {
    int temp = sec;
    sec = fir;
    fir = temp;
}