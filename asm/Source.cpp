#include <stdio.h>;
#include <stdlib.h>;
#define MAX_COUNT 13

void getHelloWorld(char* ch);
char * setHelloWorld(int* hello);

int main() {
	int hello[] = { 72,101,108,108,111,32,87,111,114,108,100,33, 0};
	
	char* helloStrHeap = setHelloWorld(hello);
	getHelloWorld(helloStrHeap);
	free(helloStrHeap);
	return 0;
}

char * setHelloWorld(int* hello) {
	char* ch = NULL;
	ch = (char*)malloc(MAX_COUNT);
	if (ch) {
		for (int i = 0; i < MAX_COUNT; ++i) {
			*(ch + i) = (char)*(hello + i);
		}
	}
	return ch;

}

void getHelloWorld(char* ch) {
	for (int i = 0; i < MAX_COUNT; ++i) {
		printf("%c", *(ch + i));
	}
}
