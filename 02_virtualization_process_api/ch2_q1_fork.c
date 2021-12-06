#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>
#include <sys/wait.h>


/*
Write a program that calls fork().
Before calling fork(), have the main process access a variable (e.g., x)
and set its value to something (e.g., 100). What value is the variable
in the child process? What happens to the variable when both the child
and parent change the value of x?
*/

int main(int arc, char* argv[]) {

	int x = 100;
	int rc = fork();

	if (rc == 0) {

		printf("Child x value: %d\n", x);
		x += 50;
		printf("Child x+ value: %d\n", x);
		
	}

	else {

		printf("Parent x value: %d\n", x);
		x += x;
		printf("Parent x+ value: %d\n", x);

	}

}

/*
$ gcc -o c2q1 ch2_q1_fork.c -Wall
$ ./c2q1
Parent x value: 100
Parent x+ value: 200
Child x value: 100
Child x+ value: 150
*/