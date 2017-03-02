set (
	COMPUTER_SOURCES
	main.cpp
	Daemon.h
	Daemon.cpp
	)

add_executable (computer ${COMPUTER_SOURCES})

target_link_libraries (computer ${GLOOX})
