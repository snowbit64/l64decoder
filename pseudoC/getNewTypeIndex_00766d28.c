// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNewTypeIndex
// Entry Point: 00766d28
// Size: 20 bytes
// Signature: undefined __thiscall getNewTypeIndex(DensityMapModifierLua * this, MethodInvocation * param_1)


/* DensityMapModifierLua::getNewTypeIndex(MethodInvocation*) */

void __thiscall
DensityMapModifierLua::getNewTypeIndex(DensityMapModifierLua *this,MethodInvocation *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 0x30);
  *(undefined4 *)(param_1 + 0x108) = 1;
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  return;
}


