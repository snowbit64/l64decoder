// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDensityMapChannels
// Entry Point: 00764af0
// Size: 40 bytes
// Signature: undefined __thiscall getDensityMapChannels(DensityMapFilterLua * this, MethodInvocation * param_1)


/* DensityMapFilterLua::getDensityMapChannels(MethodInvocation*) */

void __thiscall
DensityMapFilterLua::getDensityMapChannels(DensityMapFilterLua *this,MethodInvocation *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x18);
  iVar2 = *(int *)(this + 0x38);
  *(undefined4 *)(param_1 + 0x108) = 1;
  *(undefined4 *)(param_1 + 0x118) = 1;
  *(int *)(param_1 + 0x100) = iVar1 - iVar2;
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(this + 0x1c);
  return;
}


