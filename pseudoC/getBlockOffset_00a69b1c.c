// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBlockOffset
// Entry Point: 00a69b1c
// Size: 44 bytes
// Signature: undefined __thiscall getBlockOffset(FoliageTransformGroup * this, int param_1, int param_2)


/* FoliageTransformGroup::getBlockOffset(int, int) */

int __thiscall
FoliageTransformGroup::getBlockOffset(FoliageTransformGroup *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(this + 0x248);
  iVar2 = 0;
  if (uVar1 != 0) {
    iVar2 = param_2 / (int)uVar1;
  }
  iVar2 = param_2 - iVar2 * uVar1;
  iVar3 = 0;
  if (uVar1 != 0) {
    iVar3 = param_1 / (int)uVar1;
  }
  iVar3 = param_1 - iVar3 * uVar1;
  return (uVar1 & iVar3 >> 0x1f) + iVar3 + ((uVar1 & iVar2 >> 0x1f) + iVar2) * uVar1;
}


