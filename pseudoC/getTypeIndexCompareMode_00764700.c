// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTypeIndexCompareMode
// Entry Point: 00764700
// Size: 20 bytes
// Signature: undefined __thiscall getTypeIndexCompareMode(DensityMapFilterLua * this, MethodInvocation * param_1)


/* DensityMapFilterLua::getTypeIndexCompareMode(MethodInvocation*) */

void __thiscall
DensityMapFilterLua::getTypeIndexCompareMode(DensityMapFilterLua *this,MethodInvocation *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 0x108) = 1;
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  return;
}


