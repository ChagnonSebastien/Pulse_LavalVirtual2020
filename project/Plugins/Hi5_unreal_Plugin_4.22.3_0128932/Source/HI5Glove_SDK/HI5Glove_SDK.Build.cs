// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{

#if WITH_FORWARDED_MODULE_RULES_CTOR
    using zTargetInfo = ReadOnlyTargetRules;
#else
    using zTargetInfo = TargetInfo;
#endif

    public class HI5Glove_SDK : ModuleRules
    {


        public HI5Glove_SDK(zTargetInfo Target)
#if WITH_FORWARDED_MODULE_RULES_CTOR
            : base(Target)
#endif
        {
            Type = ModuleType.External;

            if (Target.Platform == UnrealTargetPlatform.Win64)
            {
                // 
                PublicIncludePaths.AddRange(
                    new string[] {
                        // ... add public include paths required here ...
                        Path.Combine(ModuleDirectory, "include"),
                    }
                );

                // Add the import library
                PublicLibraryPaths.Add(Path.Combine(ModuleDirectory, "lib"));
                PublicAdditionalLibraries.Add("Hi5Glove.lib");

                // Delay-load the DLL, so we can load it from the right place first
                PublicLibraryPaths.Add(Path.Combine(ModuleDirectory, "bin"));
                PublicDelayLoadDLLs.Add("hidapi.dll");
                PublicDelayLoadDLLs.Add("NCLib.dll");
                PublicDelayLoadDLLs.Add("PNLib.dll");
                PublicDelayLoadDLLs.Add("Hi5Glove.dll");

                // Runtime Dependencies for Project Package
                RuntimeDependencies.Add(new RuntimeDependency(Path.Combine(ModuleDirectory, "bin", "hidapi.dll")));
                RuntimeDependencies.Add(new RuntimeDependency(Path.Combine(ModuleDirectory, "bin", "NCLib.dll")));
                RuntimeDependencies.Add(new RuntimeDependency(Path.Combine(ModuleDirectory, "bin", "PNLib.dll")));
                RuntimeDependencies.Add(new RuntimeDependency(Path.Combine(ModuleDirectory, "bin", "Hi5Glove.dll")));
            }
        }
    }
}