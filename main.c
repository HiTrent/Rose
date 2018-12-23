#include <stdio.h>
#include <windows.h>
int main()
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
	printf("\n%s\n", "   .--.---.");
	printf("%s\n", " [  \\'--'/  ]");
	printf("%s\n", "[  '..-...'  ]");
	printf("%s\n", " ' .'-._.'. '");
	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	printf("%s\n", "   <'-.,.->");
	printf("%s\n", "      `\\[   _");
	printf("%s\n", "      < \\ / \\");
	printf("%s\n", "      __ \\|_/");
	printf("%s\n", "     /  \\ \\");
	printf("%s\n", "      '--'.\\ >");
	printf("%s\n", "            \\\n\n");
	system("pause");
}