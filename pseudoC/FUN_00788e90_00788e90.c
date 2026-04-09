// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00788e90
// Entry Point: 00788e90
// Size: 32 bytes
// Signature: undefined FUN_00788e90(void)


void FUN_00788e90(void *param_1)

{
  ReflectionUtil::executeObjectMethod
            (param_1,"enableTerrainDeformationPaintingMode",(MethodDeclaration *)&DAT_01071990,
             0x200000000000000,TerrainDeformation::enablePaintingMode);
  return;
}


