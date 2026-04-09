// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007888e4
// Entry Point: 007888e4
// Size: 28 bytes
// Signature: undefined FUN_007888e4(void)


void FUN_007888e4(void *param_1)

{
  ReflectionUtil::executeClassMethod
            (param_1,(MethodDeclaration *)&DAT_0107bbc8,"resetDensityMapAndChannels",
             DensityMapModifierLua::initialize);
  return;
}


