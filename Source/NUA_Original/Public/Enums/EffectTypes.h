#pragma once

UENUM(BlueprintType)
enum class ECrystalEffectType : uint8
{
	ECE_Chaos UMETA(DisplayName = "Element Effect - Alpha - Chaos"),
	ECE_Plague UMETA(DisplayName = "Element Effect - Boula - Plague"),
	ECE_Language UMETA(DisplayName = "Element Effect - Caliph - Language"),
	ECE_Forge UMETA(DisplayName = "Element Effect - Drak - Forge"),
	ECE_Sky UMETA(DisplayName = "Element Effect - Eos - Sky"),
	ECE_Fire UMETA(DisplayName = "Element Effect - Fera - Fire"),
	ECE_Beauty UMETA(DisplayName = "Element Effect - Gal - Beauty"),
	ECE_War UMETA(DisplayName = "Element Effect - Hyon - War"),
	ECE_Motion UMETA(DisplayName = "Element Effect - Io - Motion"),
	ECE_Deception UMETA(DisplayName = "Element Deception - Jynn - Deception"),
	ECE_Fun UMETA(DisplayName = "Element Effect - Kel - Fun"),
	ECE_Music UMETA(DisplayName = "Element Effect - Lyra - Music"),
	ECE_Sea UMETA(DisplayName = "Element Effect - Mar - Sea"),
	ECE_Food UMETA(DisplayName = "Element Effect - Naan - Food & Drink"),
	ECE_AquaticLife UMETA(DisplayName = "Element Effect - Orco - Aquatic Life"),
	ECE_Thunder UMETA(DisplayName = "Element Effect - Phor - Thunder"),
	ECE_Wisdom UMETA(DisplayName = "Element Effect - Qeo - Wisdom"),
	ECE_Darkness UMETA(DisplayName = "Element Effect - Raffa - Darkness"),
	ECE_Animals UMETA(DisplayName = "Element Effect - Siba - Animals"),
	ECE_Earth UMETA(DisplayName = "Element Effect - Tera - Earth"),
	ECE_Light UMETA(DisplayName = "Element Effect - Uum - Light"),
	ECE_Protection UMETA(DisplayName = "Element Effect - Vard - Protection"),
	ECE_Justice UMETA(DisplayName = "Element Effect - Wei - Justice"),
	ECE_Building UMETA(DisplayName = "Element Effect - Xiu - Building"),
	ECE_Plants UMETA(DisplayName = "Element Effect - Yaro - Plants"),
	ECE_Harmony UMETA(DisplayName = "Element Effect - Zedron - Harmony"),
	ECE_None UMETA(DisplayName = "NONE")
};