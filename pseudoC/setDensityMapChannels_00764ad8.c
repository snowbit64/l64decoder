// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDensityMapChannels
// Entry Point: 00764ad8
// Size: 24 bytes
// Signature: undefined __thiscall setDensityMapChannels(DensityMapFilterLua * this, MethodInvocation * param_1)


/* DensityMapFilterLua::setDensityMapChannels(MethodInvocation*) */

void __thiscall
DensityMapFilterLua::setDensityMapChannels(DensityMapFilterLua *this,MethodInvocation *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(int *)(this + 0x18) = *(int *)param_1 + *(int *)(this + 0x38);
  *(undefined4 *)(this + 0x1c) = uVar1;
  return;
}


