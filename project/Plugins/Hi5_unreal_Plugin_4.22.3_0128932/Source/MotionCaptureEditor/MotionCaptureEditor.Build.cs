// Copyright 2015 Noitom Technology Co., Ltd. All Rights Reserved.
using System.IO;

namespace UnrealBuildTool.Rules
{

#if WITH_FORWARDED_MODULE_RULES_CTOR
    using zTargetInfo = ReadOnlyTargetRules;
#else
    using zTargetInfo = TargetInfo;
#endif

    public class MotionCaptureEditor : ModuleRules
    {
        public MotionCaptureEditor(zTargetInfo Target)
#if WITH_FORWARDED_MODULE_RULES_CTOR
            : base(Target)
#endif
        {
            //bEnableExceptions = true;
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
            bUsePrecompiled = true;

            PrivateDependencyModuleNames.AddRange(
                new string[] {	
				    "Core",
				    "CoreUObject",
                    "Engine",
                    "UnrealEd",         // for FAssetEditorManager
				    "AssetTools",       // class FAssetTypeActions_Base
                    "Slate",
                    "SlateCore",
                    "PropertyEditor",
                    "EditorStyle",
                    "DesktopWidgets",
                    "DesktopPlatform",
                    "Projects",
                    "InputCore",
                    "AnimGraph",
                    "BlueprintGraph",
                    "MotionCaptureRuntime",
			    }
            );

            PrivateIncludePaths.AddRange(
                new string[] {
                    Path.Combine(ModuleDirectory, "Private"),
					// ... add other private include paths required here ...
				}
                );

            /// List of modules with header files that our module's public headers needs access to, but we don't need to "import" or link against.
            PublicIncludePathModuleNames.AddRange(
                new string[] {
                    "AnimGraph",
                }
            );

            LoadDependencies(Target);

        }

        public bool LoadDependencies(zTargetInfo Target)
        {
            bool isLibrarySupported = false;
            if ((Target.Platform == UnrealTargetPlatform.Win64) || (Target.Platform == UnrealTargetPlatform.Win32))
            {
                isLibrarySupported = true;
                //RuntimeDependencies.Add(new RuntimeDependency(Path.Combine(ModuleDirectory, "MotionCaptureEditor.Build.cs")));
            }

            return isLibrarySupported;
        }
    }
}
