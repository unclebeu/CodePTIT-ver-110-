#include <string>
#include <iostream>

using namespace std;

void d( string& str, string& deletee ) {
    size_t pos;
    size_t len = deletee.length();
    do {
        pos = str.find( deletee );
        if( pos == string::npos )
            break;
        str.erase( pos, len );
    }
    while( true );
}


int main() {
	int t;cin >>t;while (t--){
		string s ;
   		 cin >>s;
    	string p = "084";
   		d(s, p);
		cout << s << '\n';
	}
}
