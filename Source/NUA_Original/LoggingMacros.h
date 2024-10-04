#pragma once

#define SCREEN_DEBUG_MESSAGE(Message) if (GetEngine()) GEngine->DrawOnscreenDebugMessage(-1, 15.f, FColor::Yellow, Message);