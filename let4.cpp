 #include <iostream>

/// проекта нет
/// не компилируется
/// не корректное название типа
struct mobilephone {
    double weight;
    bool is_broken;
    double price;
};

/// программа не отвечает требованиям задания
int main() {
    int a;
    std::cin >> a;
    /// не корректное название переменной
    mobilephone* MP;
    MP = new mobilephone[a];
    for (int i = 0; i < a; i++) {
        std::cin >> MP[i].weight >> MP[i].is_broken >> MP[i].price ;
    }
    std::cout << "<MobilePHones>" << '\n';
    for (int i = 0; i < a; i++) {
        std::cout << '\t' << "<MobilePhone " << "id=\"" << i << "\" " << "weight=" << "\"";
        printf("%.2f", MP[i].weight);
        std::cout << "\"" << "is_broken=" << "\"";
        if (MP[i].is_broken == 1) {
            printf("true");
        }else printf("false");
        std::cout << "\" " << "price=" << "\"";
        printf("%.2f", MP[i].price);
        std::cout << "\"/>" << '\n';
    }
    std::cout << "</MobilePHones>" << '\n';
 /// оформление кода
    delete [] MP; MP=nullptr;
    return 0;
}
