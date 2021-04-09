#ifndef TRANSPORTATION_H
#define TRANSPORTATION_H
using std::cout;
using std::endl;

class Transportation
{
public:

; void virtual printTransportInfo() = 0;

};

class SeaTransport : public Transportation
{
public:
	void printTransportInfo();
};

class Canoe : public SeaTransport
{
public:
	void printTransportInfo();
};

class LandTransport : public Transportation
{
public:

	void printTransportInfo();
};

class Car : public LandTransport
{
public:
	void printTransportInfo();

};

class HoverCraft : public SeaTransport, public LandTransport {
public:
	void printTransportInfo();
};

class Bicyle : public LandTransport
{
public:
	void printTransportInfo();
};

class AirTransport : public Transportation
{
public:
	void printTransportInfo();
};

class Glider : public AirTransport
{
public:
	void printTransportInfo();
};
#endif // !TRANSPORTATION_H
