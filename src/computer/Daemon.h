#ifndef COM_DAEMON_H
#define COM_DAEMON_H

#include <gloox/client.h>

namespace com {

class Daemon : public gloox::Client {

public:
	Daemon(const std::string &name, const std::string &password,
	       const std::string &id, int port = -1);

	~Daemon();


	void registerDaemon(void) const;
	void unregisterDaemon(void) const;

private:
	const std::string &dID;
	const gloox::JID &jid;
};

}
#endif /* COM_DAEMON_H */
