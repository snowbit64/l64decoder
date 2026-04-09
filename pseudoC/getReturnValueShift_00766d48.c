// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getReturnValueShift
// Entry Point: 00766d48
// Size: 20 bytes
// Signature: undefined __thiscall getReturnValueShift(DensityMapModifierLua * this, MethodInvocation * param_1)


/* DensityMapModifierLua::getReturnValueShift(MethodInvocation*) */

void __thiscall
DensityMapModifierLua::getReturnValueShift(DensityMapModifierLua *this,MethodInvocation *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 0x38);
  *(undefined4 *)(param_1 + 0x108) = 1;
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  return;
}


