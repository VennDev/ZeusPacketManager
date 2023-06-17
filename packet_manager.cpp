#include "packet_manager.h"

#include <iostream>

namespace Compat
{

	PacketHandler PacketManager::handler;
	PacketManager PacketManager::instance;
	bool PacketManager::isEnable;

	void PacketManager::enable()
	{
		isEnable = true;
		std::cout << "Loading PacketManager..." << std::endl;
	}

	void PacketManager::disable()
	{
		isEnable = false;
	}

	void PacketManager::registerPacket(const Packet& packet)
	{
		handler.registerPacket(packet);
	}

	Packet PacketManager::getPacket(const int& id)
	{
		return handler.getPacket(id);
	}

	PacketHandler PacketManager::getHandler()
	{
		return handler;
	}

}