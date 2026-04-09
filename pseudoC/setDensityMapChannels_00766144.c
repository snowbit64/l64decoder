// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDensityMapChannels
// Entry Point: 00766144
// Size: 32 bytes
// Signature: undefined __thiscall setDensityMapChannels(DensityMapModifierLua * this, MethodInvocation * param_1)


/* DensityMapModifierLua::setDensityMapChannels(MethodInvocation*) */

void __thiscall
DensityMapModifierLua::setDensityMapChannels(DensityMapModifierLua *this,MethodInvocation *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)param_1;
  *(int *)(this + 0x3c) = iVar1 + *(int *)(this + 0x44);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x40) = uVar2;
  *(int *)(this + 0x58) = iVar1 + *(int *)(this + 0x44);
  *(undefined4 *)(this + 0x5c) = uVar2;
  return;
}


