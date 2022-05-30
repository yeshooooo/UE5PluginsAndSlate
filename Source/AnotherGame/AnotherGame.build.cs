using UnrealBuildTool;

public class AnotherGame : ModuleRules
{
	public AnotherGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"InputCore"
			}
			);
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"AnotherModule"
			});
	}
}