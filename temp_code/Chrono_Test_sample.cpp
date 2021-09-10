#include <iostream>
#include <chrono>

using namespace std;

int main() {
	
	cout << "start..." << endl;
	auto start = chrono::high_resolution_clock::now();

	int i = 1;
	double mult = 1;
	while (i < 100) {

		mult = mult * i;
		cout << mult << endl;
		i++;
	}
	auto finish = chrono::high_resolution_clock::now();
	cout << "...end" << endl;
	
	chrono::duration<double> elapsed = finish - start;
	cout << "Elapsed Time: " << elapsed.count() << " s\n";

	/*
		#include "Stopwatch.h"
		Stopwatch sw;
		// Record start time
		sw.Start();
		// Portion of code to be timed
		// Record end time
		sw.Stop();
		std::cout << "Elapsed time: " << sw.ElapsedMilliseconds() << " ms\n";

		*/
	return 0;
}