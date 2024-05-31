#include "ClimbingSystemGameMode.h"
#include "UObject/ConstructorHelpers.h"
#include UE_INLINE_GENERATED_CPP_BY_NAME(ClimbingSystemGameMode)

AClimbingSystemGameMode::AClimbingSystemGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
