// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00788670
// Entry Point: 00788670
// Size: 28 bytes
// Signature: undefined FUN_00788670(void)


void FUN_00788670(void *param_1)

{
  ReflectionUtil::executeClassMethod
            (param_1,(MethodDeclaration *)&DAT_0107b378,"resetDensityMapAndChannels",
             DensityMapFilterLua::initialize);
  return;
}


