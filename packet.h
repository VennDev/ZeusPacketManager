#pragma once

#ifndef PACKET_H
#define PACKET_H

#include <string>
#include <nlohmann/json.hpp>

namespace Compat
{
	class Packet
	{
	public:

		int _id;
		double _timeCurrent;
		std::string _origin;
		nlohmann::json _data;

		Packet(int& id, std::string& origin, double& timeCurrent, nlohmann::json& data);

		int getId();

		std::string getOrigin();

		double getTimeCurrent();

		nlohmann::json getData();

	};
}

#endif