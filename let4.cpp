#include <iostream>

struct mobilephone {
    double weight;
    bool is_broken;
    double price;
};

int main() {
    int a;
    std::cin >> a;
    mobilephone MP[a];
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
    return 0;
}
