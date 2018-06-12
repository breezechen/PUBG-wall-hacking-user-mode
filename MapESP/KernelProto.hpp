#pragma once

#include <Windows.h>

//���ں�һ�¶�������
using byte = BYTE;
using uint64_t = ULONGLONG;
using int64_t = LONGLONG;
using uint32_t = UINT32;
using int32_t = INT32;
using uint16_t = USHORT;
using int16_t = SHORT;


//������ں˹�ͨ����Ϊ
enum KERNEL_MSG {
	READ = 0,
	BASEADD = 1
};

//����������ݰ�
typedef struct dataPack
{
	ULONGLONG UserBufferAdress;
	ULONGLONG GameAddressOffset;
	ULONGLONG ReadSize;
	ULONG     User_PID;
	ULONG     Game_PID;
	BOOLEAN   IsWrite;
	UINT32	  KernelMsg;
} DataPack, *pDataPack;