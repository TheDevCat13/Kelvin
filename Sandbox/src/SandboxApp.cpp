#include <Kelvin.h>

class Sandbox : public Kelvin::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

Kelvin::Application* Kelvin::CreateApplication() {
	return new Sandbox();
}