#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

#include <iostream>
#include <string>

namespace Game {
	class GameWindow
	{
	public:
		GameWindow(const int w, const int h, const std::string name);

		bool shouldClose();

		~GameWindow();
	private:
		void initWindow();

		GLFWwindow *window;

		const int height;
		const int width;

		std::string windowName;
	};
}


