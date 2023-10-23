#pragma once
#include <ntifs.h>


#define IO_GET_CLIENTADDRESS CTL_CODE(FILE_DEVICE_UNKNOWN, 0x666, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

#define IO_READ_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x667, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

#define IO_WRITE_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x668, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

#define IO_REQUEST_PROCESSID CTL_CODE(FILE_DEVICE_UNKNOWN, 0x669, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

NTSTATUS IoControl(PDEVICE_OBJECT DeviceObject, PIRP Irp);

NTSTATUS CloseCall(PDEVICE_OBJECT DeviceObject, PIRP Irp);

NTSTATUS CreateCall(PDEVICE_OBJECT DeviceObject, PIRP Irp);

typedef struct _KERNAL_READ_REQUEST
{
	int ProcessId;
	uintptr_t Address;
	PVOID pBuff;
	ULONG Size;

} KERNAL_READ_REQUEST, * PKERNAL_READ_REQUEST;

typedef struct _KERNAL_WRITE_REQUEST
{
	int ProcessId;
	uintptr_t Address;
	PVOID pBuff;
	ULONG Size;

} KERNAL_WRITE_REQUEST, * PKERNAL_WRITE_REQUEST;





