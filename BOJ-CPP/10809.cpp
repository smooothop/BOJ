#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101];  // 단어 S를 저장할 배열
    int alpha_count[26]; // 각 알파벳의 첫 등장 위치를 저장할 배열

    // 초기화: 모든 알파벳의 첫 등장 위치를 -1로 설정
    for(int i = 0; i < 26; i++) {
        alpha_count[i] = -1;
    }

    // 단어 S를 입력받음
    cin >> s;

    int len = strlen(s);

    // 각 문자의 첫 등장 위치를 찾음
    for(int i = 0; i < len; i++) {
        int index = s[i] - 'a'; // 'a'를 0으로 맞추기 위한 인덱스 계산
        if(alpha_count[index] == -1) { // 처음 등장하는 경우에만 기록
            alpha_count[index] = i;
        }
    }

    // 결과 출력
    for(int i = 0; i < 26; i++) {
        cout << alpha_count[i] << " ";
    }

    return 0;
}
