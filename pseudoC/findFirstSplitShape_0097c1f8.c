// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findFirstSplitShape
// Entry Point: 0097c1f8
// Size: 108 bytes
// Signature: undefined __thiscall findFirstSplitShape(LoadedFileId * this, uint param_1)


/* MeshSplitManager::LoadedFileId::findFirstSplitShape(unsigned int) const */

int __thiscall MeshSplitManager::LoadedFileId::findFirstSplitShape(LoadedFileId *this,uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)((ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10)) >> 3) * -0x45d1745d;
  iVar5 = iVar6 + -1;
  if (0 < iVar6) {
    iVar6 = 0;
    iVar4 = -1;
    do {
      iVar1 = iVar6 + iVar5;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 >> 1;
      uVar3 = *(uint *)(*(long *)(this + 0x10) + (long)iVar1 * 0x58 + 4);
      if (param_1 <= uVar3) {
        iVar5 = iVar1 + -1;
      }
      iVar2 = iVar1;
      if (uVar3 != param_1) {
        iVar2 = iVar4;
      }
      if (param_1 > uVar3) {
        iVar6 = iVar1 + 1;
      }
      iVar4 = iVar2;
    } while (iVar6 <= iVar5);
    return iVar2;
  }
  return -1;
}


