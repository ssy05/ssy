#include <iostream>
#include <string>
#define MAX_STRING 10
using namespace std;

class Board {
    static string s[MAX_STRING];
    static int index;
public:
    static void add(const char* s);
    static void print();
};
string Board::s[] = { "", };
int Board::index = 0;
void Board::add(const char* ca) {
    string ss(ca);
    s[index++] = ss;
}
void Board::print() {
    cout << "----------�Խ����Դϴ�----------" << endl;
    for (int i = 0; i < index; i++) {
        cout << i << ": " << s[i] << endl;
    }
}
int main() {
    Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
    Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
    Board::print();
    Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
    Board::print();
}