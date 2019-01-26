#pragma once

#include "ItemInterface.generated.h"

UINTERFACE(BlueprintType)
class UItemInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class IItemInterface
{
	GENERATED_IINTERFACE_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Inventory")
		float GetWeight() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Inventory")
		float GetVolume() const;
};
