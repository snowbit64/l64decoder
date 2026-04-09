// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00788e30
// Entry Point: 00788e30
// Size: 32 bytes
// Signature: undefined FUN_00788e30(void)


void FUN_00788e30(void *param_1)

{
  ReflectionUtil::executeObjectMethod
            (param_1,"enableTerrainDeformationHeightAdditiveMode",(MethodDeclaration *)&DAT_01071858
             ,0x200000000000000,TerrainDeformation::enableHeightAdditiveMode);
  return;
}


