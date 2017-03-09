#include <cstddef>
#include <stdexcept>
#include "DaemonHandler.h"

namespace com {

using namespace std;

DaemonHandler &DaemonHandler::get()
{
	static DaemonHandler dHandler;
	return dHandler;
}

DaemonHandler::DaemonHandler()
{ }

void DaemonHandler::registerDaemon(const Daemon &daemon)
{
	pair<map<string, const Daemon &>::iterator, bool> ret;

	ret = daemons.insert({daemon.getID(), daemon});

	if (ret.second) {
		throw invalid_argument("key already in use.");
	}

	/* This should return a "CommandQueue" object that can be used by the
	 * Daemon
	 */
}

void DaemonHandler::unregisterDaemon(const Daemon &daemon)
{
	size_t ret;

	ret = daemons.erase(daemon.getID());
	
	if (ret == 0) {
		throw invalid_argument("key not in use.");
	}
	/* Kill the commandQueues associated with the daemon */
}

void DaemonHandler::unregisterDaemonWithName(const string &name)
{ }

}
