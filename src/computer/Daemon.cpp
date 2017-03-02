#include "Daemon.h"

using namespace gloox;

namespace com {

Daemon::Daemon(const std::string &name, const std::string &password,
	       const std::string &id, int port)
	: dID(id)
	, jid(name)
	, Client(jid, password, port)
{ }

Daemon::~Daemon()
{ }

void Daemon::registerDaemon() const
{
	//TODO: Will register daemon at library
}

void Daemon::unregisterDaemon() const
{
	//TODO: Will unregister daemon at library
}

}
