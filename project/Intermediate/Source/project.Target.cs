using UnrealBuildTool;

public class projectTarget : TargetRules
{
	public projectTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("project");
	}
}
