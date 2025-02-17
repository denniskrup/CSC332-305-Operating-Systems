#include "process.h"

//defualt constructor
Process::Process():name(" "), status(false), partition(-1), jobSize(0) {}
//constructor with 3 parameters
Process::Process(string name, bool status, int partition, int jobSize): name(name), status(status), partition(partition), jobSize(jobSize){}
//operator overload
ostream& operator<<(ostream& os, const Process& job)
{
	os << job.name << endl;
	os << "Status is: " << job.status << endl;
	os << "Job is in memory partition: " << job.partition << endl;
	os << "Job Size is: " << job.jobSize << endl;
	return os;
}

//operator overload
bool operator==(const Process& jobOne, const Process& jobTwo)
{
	return (jobOne.name == jobTwo.name && jobOne.status == jobTwo.status && jobOne.partition == jobTwo.partition);
}