// Copyright 2015 Noitom Technology Co., Ltd. All Rights Reserved.
using System.IO;
namespace UnrealBuildTool.Rules
{

#if WITH_FORWARDED_MODULE_RULES_CTOR
    using zTargetInfo = ReadOnlyTargetRules;
#else
    using zTargetInfo = TargetInfo;
#endif

    public class MotionCaptureRuntime : ModuleRules
    {
        // 该Module的.Build.cs文件所在的目录
        private string ModulePath
        {
            get { return ModuleDirectory; }
        }

        public MotionCaptureRuntime(zTargetInfo Target)
#if WITH_FORWARDED_MODULE_RULES_CTOR
            : base(Target)
#endif
        {
            //bEnableExceptions = true;
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
            bUsePrecompiled = true;

            Definitions.Add("WITH_AVATARID=0");
            Definitions.Add("WITH_DAPENG=0");
            Definitions.Add("USE_ALICE=1");

            // List of all paths to this module's internal include files, not exposed to other modules
            PrivateIncludePaths.AddRange(
                new string[] {
                    Path.Combine(ModuleDirectory, "Private"),
					// ... add other private include paths required here ...
					Path.Combine(ModuleDirectory, "../../..", "HybridData/Source/HybridData/Public"),
                }
                );

            // List of modules with header files that our module's public headers needs access to, but we don't need to "import" or link against.
            PublicIncludePathModuleNames.AddRange(
                new string[] {
                    "Launch",
                }
                );

            // List of modules with header files that our module's private code files needs access to, but we don't need to "import" or link against.
            PrivateIncludePathModuleNames.AddRange(
                new string[] {
                    "Launch",
                }
                );

            // List of public dependency module names. These are modules that are required by our public source files.
            PublicDependencyModuleNames.AddRange(
                new string[]
                {
					// ... add other public dependencies that you statically link with here ...
                    "HI5Glove_SDK",
                    "OpenVR",
                }
                );

            // List of private dependency module names. These are modules that our private code depends on but nothing in our public
            // include files depend on.
            PrivateDependencyModuleNames.AddRange(
                new string[]
                {
                    "Core",
                    "CoreUObject",
                    "Engine",
                    "Networking",
                    "Sockets",
                    "Projects",
                    //"HybridData",
					// ... add private dependencies that you statically link with here ...
                    "SteamVR",
                    "HeadMountedDisplay",
                    "XmlParser",
                    "InputDevice",
                }
                );

            // Addition modules this module may require at run-time.
            DynamicallyLoadedModuleNames.AddRange(
                new string[]
                {
					// ... add any modules that your module loads dynamically here ...
				}
                );

            CheckAndSetMacros(Target);
        }

        private string ModuleRootPath
        {
            get { return Path.GetFullPath(Path.Combine(ModulePath, "../../")); }
        }

        public void CheckAndSetMacros(zTargetInfo Target)
        {
            if (Definitions.Contains("WITH_DAPENG=1"))
            {
                PublicDependencyModuleNames.Remove("SteamVR");
                PrivateDependencyModuleNames.Remove("SteamVR");
                DynamicallyLoadedModuleNames.Remove("SteamVR");

                Definitions.Add("STEAMVR_MODULE_LOADED=0");
            }
            else
            {
                Definitions.Add("STEAMVR_MODULE_LOADED=1");
            }
        }
    }
}
