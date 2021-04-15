#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
    srand(time(0));

    string noun[5] = {"bird", "clock", "boy", "plastic", "duck"};
    string verb[5] = {"kicked", "ran", "flew", "dodged", "sliced"};
    string adjective[5] = {"beautiful", "lazy", "professional", "lovely", "dumb"};
    string adverbs[5] = {"slowly", "elegantly", "precisely", "quickly", "sadly"};
    string preposition[5] = {"down", "into", "up", "on", "upon"};

    cout << "The " << adjective [rand() % 5] << " " << noun[rand() % 5] << " " << adverbs[rand() % 5] << " " << verb[rand() % 5] << " because some " << noun[rand() % 5] << " " << adverbs[rand() % 5] << " " << verb[rand() % 5] << " " << preposition[rand() % 5] << " a " << adjective[rand() % 5] << " " << noun[rand() % 5];

    return 0;
}
