#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    //creration of map
    //unordered_map< string, int> m;
    map< string, int> m;

    //insertion

    //1
    pair<string, int> p = make_pair("pavan", 1);
    m.insert(p);

    //2
    pair<string, int> p2("solunke", 2);
    m.insert(p2);

    //3
    m["is"] = 3;

    m["student"] = 4;
    m["student"] = 5; // this time only update the value of this key 

    //searching
    cout << m["pavan"] << endl;
    cout << m.at("solunke") << endl;


    //cout << m.at("unknownkey") << endl;// it give me error

    //but i use this as.. then it make key with 0 value
    cout << m["unknownkey"] << endl;

    cout << m.at("unknownkey") << endl;

    //check size of map
    cout << m.size() << endl;;

    //to check presence....0 or 1 disply output
    cout << m.count("bro") << endl;

    //erase function 
    m.erase("student");
    cout << m.size() << endl;

    //simple method to fetch all mapping
    for(auto i: m){
        cout << i.first << " " << i.second << endl;
    }cout << endl;

    //iterator ....used to fetch mapping
    //unordered_map<string, int> :: iterator it = m.begin();
    map<string, int> :: iterator it = m.begin();

    while(it != m.end()){
        cout << it -> first << " " << it -> second << endl;
        it++;
    }

    // note :  if we use unordered_map then it print/ access values randomly ..
    //          but if we use map<> then it gives values preserved order
    return 0;
}
