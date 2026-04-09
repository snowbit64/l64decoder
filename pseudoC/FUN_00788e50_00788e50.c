// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00788e50
// Entry Point: 00788e50
// Size: 32 bytes
// Signature: undefined FUN_00788e50(void)


void FUN_00788e50(void *param_1)

{
  ReflectionUtil::executeObjectMethod
            (param_1,"enableTerrainDeformationHeightSetMode",(MethodDeclaration *)&DAT_010718c0,
             0x200000000000000,TerrainDeformation::enableHeightSetMode);
  return;
}


