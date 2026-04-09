// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00788ef0
// Entry Point: 00788ef0
// Size: 32 bytes
// Signature: undefined FUN_00788ef0(void)


void FUN_00788ef0(void *param_1)

{
  ReflectionUtil::executeObjectMethod
            (param_1,"clearTerrainDeformationAreas",(MethodDeclaration *)&DAT_01071ac8,
             0x200000000000000,TerrainDeformation::clearAreas);
  return;
}


