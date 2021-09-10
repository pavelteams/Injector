


#include <iostream>
#include <Windows.h>
#include <TlHelp32.h>
#include <string>
#include <chrono>
#include <signal.h>
#include <thread>


using namespace std;




DWORD GetPid(char* ProcessName)
{
	HANDLE hPID = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);

	PROCESSENTRY32 ProcEntry;

	ProcEntry.dwSize = sizeof(ProcEntry);

	do
	{
		if (!strcmp(ProcEntry.szExeFile, ProcessName))
		{
			DWORD dwPID = ProcEntry.th32ProcessID;

			CloseHandle(hPID);

			return dwPID;
		}
	} while (Process32Next(hPID, &ProcEntry));
}

int main()
{


	SetConsoleTitle("%random%");

	HWND hwnd = GetConsoleWindow();
	MoveWindow(hwnd, 440, 440, 400, 200, TRUE);

	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO info;
	GetConsoleScreenBufferInfo(handle, &info);
	COORD new_size =
	{
		info.srWindow.Right - info.srWindow.Left + 1,
		info.srWindow.Bottom - info.srWindow.Top + 1
	};
	SetConsoleScreenBufferSize(handle, new_size);

	string dllname;
	SetConsoleTitle("STARTING INJECTOR[0%]");
	Sleep(256);
	SetConsoleTitle("STARTING INJECTOR[7%]");
	Sleep(256);
	SetConsoleTitle("STARTING INJECTOR[19%]");
	Sleep(256);
	SetConsoleTitle("STARTING INJECTOR[28%]");
	Sleep(256);
	SetConsoleTitle("STARTING INJECTOR[39%]");
	Sleep(256);
	SetConsoleTitle("STARTING INJECTOR[51%]");
	Sleep(256);
	SetConsoleTitle("STARTING INJECTOR[64%]");
	Sleep(256);
	SetConsoleTitle("STARTING INJECTOR[71%]");
	Sleep(256);
	SetConsoleTitle("STARTING INJECTOR[76%]");
	Sleep(256);
	SetConsoleTitle("STARTING INJECTOR[81%]");
	Sleep(256);
	SetConsoleTitle("STARTING INJECTOR[85%]");
	Sleep(256);
	SetConsoleTitle("STARTING INJECTOR[92%]");
	Sleep(256);
	SetConsoleTitle("STARTING INJECTOR[96%]");
	Sleep(256);
	SetConsoleTitle("Coded by ..no#6516");
	Sleep(694);
	SetConsoleTitle("Loading vac-ban bypass");
	Sleep(256);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cout << "10% ";
	Sleep(39);
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	Sleep(39);
	cout << "24% ";
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cout << "27% ";
	Sleep(480);
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cout << "39% ";
	Sleep(39);
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cout << "52% ";
	Sleep(214);
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cout << "74% ";
	Sleep(68);
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cout << "85% ";
	Sleep(54);
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cout << "LOADED ";
	Sleep(1253);

	system("title %random%SGH%random%");
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);	//Change Color in Console
	cout << "DLL NAME: \n";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cin >> dllname;												
	string lookfor = ".dll";

	if (!(dllname.find(lookfor) != std::string::npos))				
	{
		dllname += ".dll";											
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	cout << "Injecting ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << dllname;


	LPCSTR DLL_NAME = dllname.c_str();

	DWORD dwProcess;

	char myDLL[MAX_PATH];

	GetFullPathName(DLL_NAME, MAX_PATH, myDLL, 0);

	dwProcess = GetPid("csgo.exe");

	HANDLE Process = OpenProcess(PROCESS_CREATE_THREAD | PROCESS_QUERY_INFORMATION | PROCESS_VM_READ | PROCESS_VM_WRITE | PROCESS_VM_OPERATION, FALSE, dwProcess);

	LPVOID allocatedMem = VirtualAllocEx(Process, NULL, sizeof(myDLL), MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);

	WriteProcessMemory(Process, allocatedMem, myDLL, sizeof(myDLL), NULL);

	CreateRemoteThread(Process, 0, 0, (LPTHREAD_START_ROUTINE)LoadLibrary, allocatedMem, 0, 0);

	CloseHandle(Process);


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
	cout << "\nEnjoy ur cheat! ";
	SetConsoleTitle("I");
	Sleep(364);
	SetConsoleTitle("IN");
	Sleep(364);
	SetConsoleTitle("INJ");
	Sleep(364);
	SetConsoleTitle("INJE");
	Sleep(364);
	SetConsoleTitle("INJEC");
	Sleep(364);
	SetConsoleTitle("INJECT");
	Sleep(364);
	SetConsoleTitle("INJECTE");
	Sleep(364);
	SetConsoleTitle("INJECTED");
	Sleep(364);

	auto start3 = std::chrono::high_resolution_clock::now();
	std::this_thread::sleep_for(2s);
	auto end3 = std::chrono::high_resolution_clock::now();
	system("start cmd.exe");
}











































































































































































































































































































































































































































