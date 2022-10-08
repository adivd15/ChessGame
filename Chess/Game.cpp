#include "Game.h"

namespace Game {
	GameWindow::GameWindow(const int w, const int h, const std::string name) : width{ w }, height{ h }, windowName{ name } {
		initWindow();
	}

	bool GameWindow::shouldClose() {
		return glfwWindowShouldClose(window);
	}

	GameWindow::~GameWindow() {
		glfwDestroyWindow(window);
		glfwTerminate();
	}

	void GameWindow::initWindow() {
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
		window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
	}
}