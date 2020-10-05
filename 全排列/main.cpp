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


//ȫ���зǵݹ�˼·�Ǹ����ֵ����ҵ���һ����Ŀǰ����������
/*
step1.�Ȱ����������У����Ҽ���������
step2.�Ӻ���ǰ�ҵ���һ��i��ʹ��str.at(i)<str.at(i+1),�ٴӺ���ǰ�ҵ���һ��jʹ�� str.at(j)>str.at(i),Ȼ�󽻻�i,jλ��Ԫ�أ�
      ��󽫴�i+1λ����β������������
step3.�ظ�step2ֱ���Ҳ���i
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



//ȫ���еݹ�˼·���ڵݹ��ÿһ��ȷ��һ��ֵ
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


//��������swap
inline void swap(char& fir, char& sec) {
    int temp = sec;
    sec = fir;
    fir = temp;
}