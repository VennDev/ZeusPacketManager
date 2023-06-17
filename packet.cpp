#include "packet.h"

#include <chrono>
#include <iostream>

namespace Compat 
{

	Packet::Packet(int& id, std::string& origin, double& timeCurrent, nlohmann::json& data)
		: _id(id), _origin(origin), _timeCurrent(timeCurrent), _data(data)
	{

	}

	int Packet::getId()
	{
		return _id;
	}

	std::string Packet::getOrigin()
	{
		return _origin;
	}

	double Packet::getTimeCurrent()
	{
		return _timeCurrent;
	}

	nlohmann::json Packet::getData()
	{
		return _data;
	}

};