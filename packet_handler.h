#pragma once

#ifndef PACKET_HANDLER_H
#define PACKET_HANDLER_H

#include "packet.h"

#include <map>

namespace Compat
{
	class PacketHandler
	{
	private:
		static int _nextId;
		static std::map<int, Packet> _packets;

	public:
		void registerPacket(const Packet& packet);

		void unsetPacket(const int& id);

		void dropPackets();

		Packet getPacket(const int& id);

		int getPacketId(const Packet& packet);

		int getPacketCount();

		std::map<int, Packet> getPacketList();
	};
}

#endif