/* C++ program to demonstrate the basic operations of map like
	1)insert
	2)find
	3)begin
	4)end
	5)rbegin
	6)rend
	7)erase
	8)size
	9)find

@Author Vishwanath Gulabal
*/

#include<iostream>
#include<algorithm>
#include<string>
#include<map>
using namespace std;

int main(void) {

    map<string,int>  Mymap;

    /*Insert the elements into map */
    Mymap["Zero"] = 0;
    Mymap["one"] = 1;
    Mymap["Two"] = 2;
    Mymap["Three"] = 3;
    Mymap["Four"] = 4;
    Mymap["Five"] = 5;
    Mymap["Six"] = 6;


    /* Display the elements of map */
    cout << "The elements are " <<endl;
    map<string,int>::iterator itr;

    for(itr = Mymap.begin(); itr != Mymap.end(); itr++) {
        cout << itr->first << ":" << itr->second <<endl;
    }

    /*Display in reverse order */
    cout << "The reversed elements are " << endl;
    map<string,int>::reverse_iterator r_itr;

    for(r_itr = Mymap.rbegin(); r_itr!=Mymap.rend(); r_itr++) {
        cout << r_itr->first << ":" << r_itr->second << endl;
    }

    /* check if the map is empty or not */
    cout << Mymap.empty() << endl;

    /*Display the size of the map */
    cout << Mymap.size() << endl;

    /*Find the element correspnding to the key in the map */
    cout << Mymap.find("one")->second << endl;

    /* Erase the elements in the map */
    itr = Mymap.find("one");
    Mymap.erase(itr);   /*erase through iterator */

    Mymap.erase("Zero"); /*erase through key */

    itr = Mymap.find("Five");
    Mymap.erase(itr,Mymap.end()); /*erase through range */

    /*Display the elements of map */
    cout << "Elements are "<<endl;
    for(itr=Mymap.begin(); itr!= Mymap.end(); itr++) {
        cout << itr->first << ":" << itr->second <<endl;
    }
    return 0;

}
