set (
	LIBCOMPUTER_SOURCES
	Daemon.h
	Daemon.cpp
	DaemonHandler.h
	DaemonHandler.cpp
	)

add_library (com SHARED ${LIBCOMPUTER_SOURCES})
