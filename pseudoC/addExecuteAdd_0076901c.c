// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addExecuteAdd
// Entry Point: 0076901c
// Size: 32 bytes
// Signature: undefined __thiscall addExecuteAdd(DensityMapMultiModifierLua * this, MethodInvocation * param_1)


/* DensityMapMultiModifierLua::addExecuteAdd(MethodInvocation*) */

void __thiscall
DensityMapMultiModifierLua::addExecuteAdd
          (DensityMapMultiModifierLua *this,MethodInvocation *param_1)

{
  if (*(int *)param_1 != 0) {
    addExecute(this,*(int *)param_1,0,"DensityMapMultiModifier:addExecuteAdd",param_1);
    return;
  }
  return;
}


