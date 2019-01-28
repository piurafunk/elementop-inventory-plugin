#pragma once

#include "ItemContainerInterface.generated.h"

// Forward declarations
class IItemInterface;
template<class> class TScriptInterface;

UINTERFACE(BlueprintType)
class UItemContainerInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class IItemContainerInterface
{
	GENERATED_IINTERFACE_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Inventory")
		bool CanAddItem(const TScriptInterface<IItemInterface>& Item) const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Inventory")
		bool AddItem(const TScriptInterface<IItemInterface>& Item);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Inventory")
		float GetCurrentWeight() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Inventory")
		float GetCurrentVolume() const;
};
