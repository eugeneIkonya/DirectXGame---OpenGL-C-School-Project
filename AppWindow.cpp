#include "AppWindow.h"

AppWindow::AppWindow()
{

}

void AppWindow::onCreate()
{
	Window::onCreate();
	GraphicsEngine::get()->init();
}

void AppWindow::onUpdate()
{
	Window::onUpdate();
}

void AppWindow::onDestroy()
{
	Window::onDestroy();  //onDestroy Method of the super class i.e Window Class
	GraphicsEngine::get()->release();
}

AppWindow::~AppWindow()
{

}