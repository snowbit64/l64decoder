// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTypeIndexAndCompareMode
// Entry Point: 00764714
// Size: 32 bytes
// Signature: undefined __thiscall getTypeIndexAndCompareMode(DensityMapFilterLua * this, MethodInvocation * param_1)


/* DensityMapFilterLua::getTypeIndexAndCompareMode(MethodInvocation*) */

void __thiscall
DensityMapFilterLua::getTypeIndexAndCompareMode(DensityMapFilterLua *this,MethodInvocation *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(this + 0x14);
  uVar1 = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 0x118) = 1;
  *(undefined4 *)(param_1 + 0x108) = 1;
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  return;
}


