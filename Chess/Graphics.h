#pragma once
/*****************************************************************//**
 * \file   Graphics.h
 * \brief  Graphics class for the chess game
 * 
 * \author adivd
 * \date   October 2022
 *********************************************************************/
/*
DEFINES
*/
#define GLFW_INCLUDE_VULKAN
/*
INCLUDES
*/
#include <GLFW/glfw3.h>
#include <iostream>
#include <string>
/*
NAMESPACES
*/
using std::string;


class Graphics
{
private:
	void initWindow();
	GLFWwindow* game_window;
	const int width;
	const int height;
	string windowName;
public:
	
	
};

