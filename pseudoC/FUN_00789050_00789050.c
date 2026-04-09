// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00789050
// Entry Point: 00789050
// Size: 32 bytes
// Signature: undefined FUN_00789050(void)


void FUN_00789050(void *param_1)

{
  ReflectionUtil::executeObjectMethod
            (param_1,"cancelTerrainDeformation",(MethodDeclaration *)&DAT_01071f40,0x200000000000000
             ,TerrainDeformation::cancelApply);
  return;
}


