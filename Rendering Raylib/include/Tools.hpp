#ifndef TOOLS_HPP
#define TOOLS_HPP

#define _USE_MATH_DEFINES
#include "raylib.h"

#include <cmath>
#include <string>

#define FONT_SIZE_INFO (30)
#define SPACING_INFO (5)

const Color softGray = {50, 54, 52, 128};
const Color softGreen = {40, 237, 142};
const Color lightGray = {175, 175, 175, 255};
const Color softRed = {245, 71, 71, 255};
const Color darkBlue = {65, 24, 153, 255};
const Color softBlue = {0, 3, 220, 255};
const Color semiTransparentWhite = {176, 176, 176, 5};
const Color semiTransparentGray = {110, 125, 113, 30};
const Color swamp = {52, 59, 41, 255};
const Color darkSwamp = {23, 31, 9, 255};
const Color softPink = {245, 0, 183, 255};
const Color colorSky = {65, 173, 250, 255};
const Color grass = {17, 107, 32, 255};
const Color darkGrass = {4, 54, 15, 255};
const Color darkBrown = {59, 33, 3, 255};
const Color colorEarth = {31, 25, 16, 255};
const Color softYellow = {174, 194, 45, 255};
const Color tintText = {255, 255, 255, 255};
const Color darkGray = {30, 30, 30, 255};
const Color flashlight = {59, 64, 61, 255};

float getDist2Points(const Vector2 &v1, const Vector2 &v2);
float DegToRad(const float angle);
float RadToDeg(const float angle);
double constrainAngle360(const double angle);
Color changeLightness(const Color &color, const int delta);

#endif