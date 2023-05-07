#include <Kotrata.h>

class Sandbox : public Kotrata::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Kotrata::Application* Kotrata::CreateApplication()
{
	return new Sandbox();
}