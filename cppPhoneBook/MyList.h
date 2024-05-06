#pragma once

class DataNode;

class MyList
{
public:
	void allGet(void);
	void nodeGet(char* name);
	void nodeSet(char* name, char* number);
	void nodeDel(char* name);

private:
	DataNode& node;
};
