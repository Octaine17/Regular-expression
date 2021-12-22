#include <iostream>
#include <regex>
#include <cassert>
#include <clocale>

using namespace std;


bool is_valid_date(string str) {
    static const auto r = std::regex("(0?[1-9]|[12][0-9]|3[01]).(Янв|Фев|Мар|Апр|Май|Июн|Июл|Авг|Сен|Окт|Ноя|Дек), ((19|20)\d\d)");
    return regex_match(str.data(), r);
}

int main() {
    cout << "Введите дату" << endl;
    string str;
    cin >> str;
    smatch m;
    assert(is_valid_date(str) == false);
    cout << "succ";
    return 0;
}