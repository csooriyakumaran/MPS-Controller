
#include "oak.h"
#include "oak/core/EntryPoint.h"
#include "UI.h"
//#include "layers/Workspace.h"


class VenturiApp : public Oak::Application
{
public:

	VenturiApp(const Oak::ApplicationSpecification& spec)
		: Oak::Application(spec)
	{
		PushLayer(new Venturi::UI());
	}

	VenturiApp::~VenturiApp()
	{
	}

};

Oak::Application* Oak::CreateApplication(int argc, char** argv)
{
	OAK_TRACE("Testing OAK_TRACE");
	OAK_INFO("Testing OAK_INFO");
	OAK_WARN("Testing OAK_WARN");
	OAK_ERROR("Testing OAK_ERROR");
	OAK_CRITICAL("Testing OAK_CRITICAL");

	Oak::ApplicationSpecification spec;
	spec.name = "Venturi";
	spec.fullscreen = true;

	return new VenturiApp(spec);
}
