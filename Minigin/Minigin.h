#pragma once

struct SDL_Window;
namespace dae
{
	class TextObject;
	class Engivan
	{
	public:
		void Initialize();
		void LoadGame();
		void Cleanup();
		void Run();
	private:
		static const int m_MsPerFrame = 8; //16 for 60 fps, 33 for 30 fps
		SDL_Window* m_Window{};
	};
}