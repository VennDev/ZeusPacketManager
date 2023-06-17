#include "packet_handler.h"

#include <iostream>

namespace Compat
{

	int PacketHandler::_nextId = 0;
	std::map<int, Packet> PacketHandler::_packets;

	void PacketHandler::registerPacket(const Packet& packet)
	{
		_packets.insert(std::make_pair(_nextId, packet));
		_nextId++;
	}

	void PacketHandler::unsetPacket(const int& id)
	{
		_packets.erase(id);
	}

	void PacketHandler::dropPackets()
	{
		_packets.clear();
	}

	Packet PacketHandler::getPacket(const int& id)
	{
		std::map<int, Packet>::iterator packet = _packets.find(id);
		return packet->second;
	}

	int PacketHandler::getPacketId(const Packet& packet)
	{
		int foundKey = 0;
		for (auto it = _packets.begin(); it != _packets.end(); ++it) {
			if (it->second._id == packet._id) {
				foundKey = it->first;
				break;
			}
		}
		return foundKey;
	}

	int PacketHandler::getPacketCount()
	{
		return _packets.size();
	}

	std::map<int, Packet> PacketHandler::getPacketList()
	{
		std::map<int, Packet> result;

		for (auto it = _packets.begin(); it != _packets.end(); ++it) {
			result.insert(std::make_pair(it->first, it->second));
		}

		return result;
	}

}