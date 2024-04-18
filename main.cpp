#include <iostream>
#include "include/webui.hpp"

webui::window mainWindow;

void search(webui::window::event* e) {
    std::cout << "Search button pressed\n";
    std::string search = e->get_string();
    std::cout << "Search text: " << search << std::endl;
    std::string url = "undefinied";
    url = "https://www.google.com/search?q=" + search;
    mainWindow.show(url);
}

int main() {
    std::cout << "Program started\n";
    mainWindow.bind("searchButton", search);
    mainWindow.show("web/index.html");
    webui::wait();
    return 0;
}