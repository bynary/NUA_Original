#pragma once
#include "DrawDebugHelpers.h"

// Draw debug sphere macros
#define DRAW_DEBUG_SPHERE(Location) if (DrawDebugShapes && GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 12, FColor::Cyan, true);
#define DRAW_DEBUG_SPHERE_COLOR(Location, Color) if (DrawDebugShapes && GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 12, Color, false, 30.f);
#define DRAW_DEBUG_SPHERE_SINGLE_FRAME(Location, Color) if (DrawDebugShapes && GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 12, Color, false, -1.f);

// Draw debug line macros
#define DRAW_DEBUG_LINE(StartLocation, EndLocation) if (DrawDebugShapes && GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Magenta, true, -1.f, 0, 1.f);
#define DRAW_DEBUG_LINE_SINGLE_FRAME(StartLocation, EndLocation) if (DrawDebugShapes && GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Magenta, false, -1.f, 0, 1.f);

// Draw debug line macros
#define DRAW_DEBUG_POINT(Location) if (DrawDebugShapes && GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Magenta, true);
#define DRAW_DEBUG_POINT_SINGLE_FRAME(Location) if (DrawDebugShapes && GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Magenta, false, -1.f);

// Draw debug vector macros
#define DRAW_DEBUG_VECTOR(StartLocation, EndLocation) if (DrawDebugShapes && GetWorld()) \
	{ \
		DRAW_DEBUG_LINE(StartLocation, EndLocation) if (GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Magenta, true, -1.f, 0, 1.f); \
		DRAW_DEBUG_POINT(EndLocation) if (GetWorld()) DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Magenta, true); \
	};
#define DRAW_DEBUG_VECTOR_SINGLE_FRAME(StartLocation, EndLocation) if (DrawDebugShapes && GetWorld()) \
	{ \
		DRAW_DEBUG_LINE(StartLocation, EndLocation) if (GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Magenta, false, -1.f); \
		DRAW_DEBUG_POINT(EndLocation) if (GetWorld()) DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Magenta, false, -1.f); \
	};

// Draw debug crosshairs macros
#define DRAW_DEBUG_CROSSHAIRS(Location, Rotator) if (DrawDebugShapes && GetWorld()) DrawDebugCrosshairs(GetWorld(), Location, Rotator, 2.f, FColor::White, true);
#define DRAW_DEBUG_CROSSHAIRS_SINGLE_FRAME(Location, Rotator) if (DrawDebugShapes && GetWorld()) DrawDebugCrosshairs(GetWorld(), Location, Rotator, 2.f, FColor::White, false, -1.f);

// Draw debug cylinder macros
#define DRAW_DEBUG_CYLINDER(StartLocation, EndLocation) if (DrawDebugShapes && GetWorld()) DrawDebugCylinder(GetWorld(), StartLocation, EndLocation, 30.f, 24, FColor::Yellow, true);
#define DRAW_DEBUG_CYLINDER_SINGLE_FRAME(StartLocation, EndLocation) if (DrawDebugShapes && GetWorld()) DrawDebugCylinder(GetWorld(), StartLocation, EndLocation, 30.f, 24, FColor::Yellow, false, -1.f);