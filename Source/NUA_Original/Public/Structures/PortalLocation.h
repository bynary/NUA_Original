// © 2024 Wulfhaven. All rights reserved.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class NUA_ORIGINAL_API PortalLocation
{
public:
	PortalLocation();
	~PortalLocation();

	FName PortalName;
	FVector Location;
	FRotator Rotation;
	bool PlayerCanConnect;
};
