// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getValueCompareParams
// Entry Point: 00764a90
// Size: 72 bytes
// Signature: undefined __thiscall getValueCompareParams(DensityMapFilterLua * this, MethodInvocation * param_1)


/* DensityMapFilterLua::getValueCompareParams(MethodInvocation*) */

void __thiscall
DensityMapFilterLua::getValueCompareParams(DensityMapFilterLua *this,MethodInvocation *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(this + 0x20);
  uVar1 = *(undefined4 *)(this + 0x24);
  *(undefined4 *)(param_1 + 0x108) = 1;
  *(undefined4 *)(param_1 + 0x118) = 1;
  *(undefined4 *)(param_1 + 0x128) = 1;
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x2c);
  *(undefined4 *)(param_1 + 0x138) = 1;
  *(undefined4 *)(param_1 + 0x148) = 3;
  *(undefined4 *)(param_1 + 0x120) = uVar1;
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(this + 0x30);
  *(DensityMapFilterLua *)(param_1 + 0x140) = this[0x28];
  return;
}


