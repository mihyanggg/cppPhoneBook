#pragma once
class DataNode
{
public:
	char* name;
	char* number;
	DataNode* next;

	int getNodeCnt(void);

private:
	int nodeCnt = 0;

};

