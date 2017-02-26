#include <iostream>

int main(int argc, char *argv[])
{
    pid_t pid = fork();

	if (pid < 0) {
		return EXIT_FAILURE;
	}
	if (pid > 0) {
		//Setup
	}
	std::cout << "Hello World!" << std::endl;
	return EXIT_SUCCESS;
}
