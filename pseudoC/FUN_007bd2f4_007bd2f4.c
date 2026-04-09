// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bd2f4
// Entry Point: 007bd2f4
// Size: 32 bytes
// Signature: undefined FUN_007bd2f4(void)


void FUN_007bd2f4(DensityMapMultiModifierLua *param_1,int *param_2)

{
  if (*param_2 != 0) {
    DensityMapMultiModifierLua::addExecute
              (param_1,*param_2,0,"DensityMapMultiModifier:addExecuteAdd",
               (MethodInvocation *)param_2);
    return;
  }
  return;
}


