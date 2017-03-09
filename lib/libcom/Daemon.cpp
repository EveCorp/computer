#include <Daemon.h>

using namespace std;
using namespace gloox;

namespace com {

Daemon::Daemon(const string &name, const string &password,
	       const string &id, int port)
	: dID(id)
	, jid(name)
	, Client(jid, password, port)
{ }

Daemon::~Daemon()
{ }

const string &Daemon::getID() const
{
	return dID;
}

}
