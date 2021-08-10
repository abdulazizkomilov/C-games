#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int i = 1, m;
	
	srand(time(0));;
	
	while(i<=6){
		
		m = rand()%37;
		cout << m << endl;
		
		i++;
	}
	return 0;
}
