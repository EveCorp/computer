#ifndef COM_DAEMON_HANDLER_H
#define COM_DAEMON_HANDLER_H

#include <map>

#include "Daemon.h"

namespace com {

class DaemonHandler {
	public:
		static DaemonHandler &get(void);

		DaemonHandler(const DaemonHandler &) = delete;
		DaemonHandler &operator=(const DaemonHandler &) = delete;
		
		void registerDaemon(const Daemon &);
		void unregisterDaemon(const Daemon &);
		void unregisterDaemonWithName(const std::string &);		

	private:

		DaemonHandler();

		std::map<std::string, const Daemon &> daemons;
};

}

#endif /* COM_DAEMON_HANDLER_H */
