// Copyright (c) Improbable Worlds Ltd, All Rights Reserved

using UnrealBuildTool;

public class Mirror : ModuleRules
{
	public Mirror(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;


        PublicDependencyModuleNames.AddRange(
             new string[]
             {
        "Core",
        "CoreUObject",
        "Engine",
        "InputCore",
        "Sockets",
        "OnlineSubsystemUtils",
        "PhysXVehicles",
        "SpatialGDK",
        "HeadMountedDisplay"
             });
        PrivateDependencyModuleNames.AddRange(new string[] {
           "Slate",
           "SlateCore",
           "GameplayAbilities",
           "GameplayTags",
           "GameplayTasks"
          });
            }
}
