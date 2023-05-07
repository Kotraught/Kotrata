#pragma once

#ifdef KT_PLATFORM_WINDOWS

extern Kotrata::Application* Kotrata::CreateApplication();

int main(int argc, char** argv)
{
	printf("Kotrata Engine");
	auto app = Kotrata::CreateApplication();
	app->Run();
	delete app;
}
#else
#error Only supports windows!
#endif // KT_PLATFORM_WINDOWS
