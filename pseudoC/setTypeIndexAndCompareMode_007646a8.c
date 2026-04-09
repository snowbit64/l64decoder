// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTypeIndexAndCompareMode
// Entry Point: 007646a8
// Size: 88 bytes
// Signature: undefined __thiscall setTypeIndexAndCompareMode(DensityMapFilterLua * this, MethodInvocation * param_1)


/* DensityMapFilterLua::setTypeIndexAndCompareMode(MethodInvocation*) */

void __thiscall
DensityMapFilterLua::setTypeIndexAndCompareMode(DensityMapFilterLua *this,MethodInvocation *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 1:
  case 2:
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    break;
  case 4:
    *(int *)(this + 0x14) = (int)*(float *)(param_1 + 0x10);
    setTypeIndexCompareMode(this,param_1);
    return;
  case 5:
    *(int *)(this + 0x14) = (int)*(double *)(param_1 + 0x10);
    setTypeIndexCompareMode(this,param_1);
    return;
  }
  *(undefined4 *)(this + 0x14) = uVar1;
  setTypeIndexCompareMode(this,param_1);
  return;
}


