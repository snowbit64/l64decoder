// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDensityMapChannelOffset
// Entry Point: 00764b1c
// Size: 20 bytes
// Signature: undefined __thiscall getDensityMapChannelOffset(DensityMapFilterLua * this, MethodInvocation * param_1)


/* DensityMapFilterLua::getDensityMapChannelOffset(MethodInvocation*) */

void __thiscall
DensityMapFilterLua::getDensityMapChannelOffset(DensityMapFilterLua *this,MethodInvocation *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 0x38);
  *(undefined4 *)(param_1 + 0x108) = 1;
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  return;
}


