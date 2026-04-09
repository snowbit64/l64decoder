// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00788e70
// Entry Point: 00788e70
// Size: 32 bytes
// Signature: undefined FUN_00788e70(void)


void FUN_00788e70(void *param_1)

{
  ReflectionUtil::executeObjectMethod
            (param_1,"enableTerrainDeformationHeightSmoothingMode",
             (MethodDeclaration *)&DAT_01071928,0x200000000000000,
             TerrainDeformation::enableHeightSmoothingMode);
  return;
}


