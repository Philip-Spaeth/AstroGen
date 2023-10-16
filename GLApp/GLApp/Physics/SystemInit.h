#ifndef SYSTEMINIT_H
#define SYSTEMINIT_H

#include <vector>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "Particle.h"
#include "Physics.h"
#include <glm.hpp>

class SystemInit 
{
public:
	void start(std::vector<std::vector<Particle>>& particles);

private:
	Physics physics;
	void SystemInit::spiralGalaxy(int size, glm::vec3 position, glm::vec3 velocity, std::vector<std::vector<Particle>>& particles);
	void SystemInit::ellipticalGalaxy(int size, glm::vec3 position, glm::vec3 velocity, std::vector<std::vector<Particle>>& particles);
	void solarSystem(std::vector<std::vector<Particle>>& particles);
};

#endif