#pragma once

#ifndef PACKET_MANAGER_H
#define PACKET_MANAGER_H

#include "packet_handler.h"

namespace Compat
{
	class PacketManager
	{
	private:
		static PacketHandler handler;
		static PacketManager instance;
		static bool isEnable;

	public:
		void enable();

		void disable();

		void registerPacket(const Packet& packet);

		Packet getPacket(const int& id);

		PacketHandler getHandler();
	};
}

#endif