/*#include <iostream>


using namespace std;



int main()
{
    int ev, honap, nap;
    cout << "Mikor szulettel?" << endl;
    cin >> ev >> honap >> nap;
    cout << "Melyik év születésnapjára kíváncsi?"
    cin >> ev2;
    return 0;
}

}

*/

#include <iostream>
#include <sstream>
#include <string>
#include <locale>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{

    string szulinap;
	const char* weekday[] = { "Vasarnap", "Hetfo", "Kedd", "Szerda", "Csutortok", "Pentek", "Szombat"};
    cout << "Add meg, hogy mikor szulettel az alabbi formatumban: YYYY-MM-DD" << endl;
	cin >> szulinap;
    tm t = {};
    istringstream ss(szulinap);
    ss >> get_time(&t, "%Y-%m-%d");
    mktime(&t);
    cout << weekday[t->tm_wday];
}

/*#include <stdio.h>
#include <time.h>
#include <iostream>

using namespace std;

int main() {
	time_t rawtime;
	struct tm* timeinfo;
	int year=3000, mounth, day;
	const char* weekday[] = { "Vasarnap", "Hetfo", "Kedd", "Szerda", "Csutortok", "Pentek", "Szombat"};
	cin >> mounth;
	cin >> day;

	timeinfo = localtime(&rawtime);
	timeinfo->tm_year = year -1900;
	timeinfo->tm_mon -1;
	timeinfo->tm_mday = day;
	mktime ( timeinfo);
	cout << weekday[timeinfo->tm_wday];



	return 0;
}
*/
