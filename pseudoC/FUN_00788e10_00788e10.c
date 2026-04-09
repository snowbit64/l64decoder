// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00788e10
// Entry Point: 00788e10
// Size: 32 bytes
// Signature: undefined FUN_00788e10(void)


void FUN_00788e10(void *param_1)

{
  ReflectionUtil::executeObjectMethod
            (param_1,"enableTerrainDeformationMode",(MethodDeclaration *)&DAT_010717f0,
             0x200000000000000,TerrainDeformation::enableDeformationMode);
  return;
}


