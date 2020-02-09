#pragma once

#ifndef _CSVREADER_H_
#define _CSVREADER_H_

#include <string>
#include <vector>
#include <fstream>

using namespace std;

#define DEFAULT_SEPARATOR  ','
#define DEFAULT_QUOTE_CHARACTER   '"'


class CSVReader
{
private:
	int GetNextLine(string& line);

	int Parse(string& nextLine,vector<string>& tokens);

	std::fstream* pstream;
	char SEPARATOR;
	char QUOTE;

public:
	CSVReader(fstream& stream);

	CSVReader(fstream& stream, const char sep);

	CSVReader(fstream& stream,const char sep,const char quo);

	virtual 	~CSVReader(void);

	int Read(vector<string>& tokens);

	int Close(void);

};


#endif // !_CSVREADER_H_


