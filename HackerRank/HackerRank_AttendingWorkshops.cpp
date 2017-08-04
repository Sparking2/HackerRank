//#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

struct Workshop
{
	int start_time;
	int duration;
	int end_time;
};

struct Available_Workshops
{
	int num_workshop;
	std::vector<Workshop> *data = new std::vector<Workshop>(num_workshop);
};

Available_Workshops* initialize(int start_time[],int duration[],int n) 
{
	Available_Workshops* av_ws = new Available_Workshops();
	av_ws->num_workshop = n;
	for (int i = 0; i < n; i++)
	{
		Workshop work;
		work.start_time = start_time[i];
		work.duration = duration[i];
		work.end_time = start_time[i] + duration[i];
		av_ws->data->push_back(work);
	}
	return av_ws;
}


int CalculateMaxWorkshops(Available_Workshops* ptr) {
	sort(ptr->data->begin(), ptr->data->end(), [](Workshop& ws1, Workshop& ws2) {return ws1.end_time < ws2.end_time; }); // use lambda function here
	std::vector<Workshop> *result = new std::vector<Workshop>();
	int total_end_time = 0;
	for (std::vector<Workshop>::iterator it = ptr->data->begin(); it != ptr->data->end(); ++it) {
		if (it->start_time >= total_end_time) {
			result->push_back(*it);
			total_end_time = it->end_time;
		}
	}
	return result->size();
}

int main(int argc, char *argv[]) {
	int n; // number of workshops
	std::cin >> n;
	// create arrays of unknown size n
	int* start_time = new int[n];
	int* duration = new int[n];

	for (int i = 0; i < n; i++) {
		std::cin >> start_time[i];
	}
	for (int i = 0; i < n; i++) {
		std::cin >> duration[i];
	}

	Available_Workshops * ptr;
	ptr = initialize(start_time, duration, n);
	std::cout << CalculateMaxWorkshops(ptr) << std::endl;
	return 0;
}