#include <iostream>
#include <string>
#include <map>

#define sil "\e[1;1H\e[2J"

void yaz(auto s1,auto s2="")
{
    std::cout << s2;
    std::cout << s1 << "\n";
}

using string = std::string;

int main(int argc, char const *argv[])
{   
    int k;

    std::map<string,int> list;
    list["Elma"]  = 314785;
    list["Armut"] = 359415;
    list["Pecete"]= 142154;
    list["Sampuan"] = 342751;
    list["Tac"] = 481975;
    list["Boru"] = 147247;
    list["Manga"] = 945742;
    list["Pastane"] = 714276;
    list["armut"] = 601756;
    list["armut"] = 241573;

    yaz("Market: 0","");
    yaz("Avm: 1","");
    std::cout << ": ";
    std::cin >> k;

    int a = 1;

    if(k == 0)
    {
        while(a != 0)
        {
            std::cout << "Markete hos geldiniz" << "\n";
            std::cout << "\n";
            std::cout << "Marketten Cikmak icin: 1" << "\n";
            std::cout << "Ürünleri incelemek icin: 2" << "\n";
            std::cout << ":";std::cin >> a;
            std::cout << "a: " <<a << '\n' ;
            std::cout << a << "\n";
            if(a == 1)
            {
                yaz("marketten cikiliyor...",sil);
            }
            else if(a == 2)
            {   
                std::cout << sil"Ürün listesi geliyor" << "\n";
                break;
            }
            else
            {
                std::cout << sil"Anlasilamadi tekrar deneyin" << "\n";

            }
        }
    }


    else if(k == 1)
    {
        while(a != 0)
        {
            std::cout << "Avm'ye hos geldiniz" << "\n";
            std::cout << "\n";
            std::cout << "Avm den Cikmak icin: 0" << "\n";
            std::cout << "Ürünleri incelemek icin: 1" << "\n";
            std::cout << ":";std::cin >> a;
            std::cout << a << "\n";
            if(a == 0)
            {
                yaz("Avm den cikiliyor...",sil);
            }
            else if(a == 1)
            {   
                std::cout << sil"Ürün listesi geliyor" << "\n";
                break;    



            }

            else
            {
                std::cout << sil"Anlasilamadi tekrar deneyin" << "\n";

            }
        }

    }

    return 0;
}
