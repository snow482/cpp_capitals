#include <iostream>
#include <string>
#include <map>
#include <vector>

using std::map;
using std::string;
using std::cin;
using std::cout;
using std::endl;

void CHANGE_CAPITAL (map<string, string>& country_capitals_value, const string& country, const string& capital){

    auto it = country_capitals_value.find(country);

    if (it != country_capitals_value.end()){
        country_capitals_value.insert(std::make_pair(country, capital));
        return;
    }
    /*auto it = country_capitals_value.find(country);
    if (it != country_capitals_value.end()){*/
/*auto it = country_capitals_value.find(country);
    if (it != country_capitals_value.end()){

        //1
        //std::pair<string,string> p;
        //p.first = country;
        //p.second = capital;
        //country_capitals_value.insert(p);

        //2
        //country_capitals_value.insert(std::make_pair(country, capital));

        //3
        country_capitals_value[country] = capital;
        return;
    }*/
    //const auto& key = it->first;
    //auto& value = it->second;
    /*for (const auto& countryName : country) {
        for (const auto& capitalName: capital){
            ++country_capitals[capitalName];
        }
        ++country_capitals[countryName];
    }*/

}

void RENAME (){

}

/*void ABOUT (std::map<std::string, std::string>& about_all){
    for (const auto& item : about_all ){
        if(!about_all.empty()){
            std::cout << item.first << item.second << std::endl;
        }else{
            std::cout << "There are no countries in the world" << std::endl;
        }
}*/
/*
void DUMP (const map<string, string>& about_all){
    if(about_all.empty()){
        cout << "There are no countries in the world" << endl;
        return;
    }
    for (const auto& [key,value] : about_all ){
        cout << key << " " << value << endl;
    }
}
*/

int main() {
/*
 * int Q;
    std::cin >> Q;
    std::string command;
    string country, capital;
    cin >> country >> capital;
    map<string, string> caps;
 *
 */
    int Q;
    std::cin >> Q;
    std::string command;
    for (int i = 0; i < Q; ++i) {

        string country, capital;
        cin >> country >> capital;
        map<string, string> caps;
        if(command == "ABOUT"){
            // ABOUT country - вывод столицы country

            }
        if(command == "DUMP"){
            // DUMP country - вывод столиц всех стран
            DUMP(caps);

        }
        if(command == "CHANGE_CAPITAL") {

            /*caps = CHANGE_CAPITAL(country, capital);*/
            /*for (auto& n : caps){
                if(CHANGE_CAPITAL(country, capital) == 0){

                }

            }*/

//        }if(command == "RENAME"){
            // RENAME old_country_name new_country_name — переименование
            // страны из old_country_name в new_country_name.

  //      }
 //   }

    return 0;
}
