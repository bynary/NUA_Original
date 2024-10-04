// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class NUA_OriginalTarget : TargetRules
{
	public NUA_OriginalTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_4;

		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "NUA_Original" } );

		bOverrideBuildEnvironment = true;
	}
}
