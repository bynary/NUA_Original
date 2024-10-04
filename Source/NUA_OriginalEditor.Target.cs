// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class NUA_OriginalEditorTarget : TargetRules
{
	public NUA_OriginalEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.Latest;

		ExtraModuleNames.AddRange( new string[] { "NUA_Original" } );
	}
}
