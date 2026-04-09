// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initSelectionPools
// Entry Point: 00898f4c
// Size: 220 bytes
// Signature: undefined __thiscall initSelectionPools(PedestrianGroupData * this, float param_1)


/* PedestrianGroupData::initSelectionPools(float) */

void __thiscall PedestrianGroupData::initSelectionPools(PedestrianGroupData *this,float param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar3 = *(long *)(this + 0x60);
  uVar4 = *(long *)(this + 0x38) - *(long *)(this + 0x30) >> 2;
  iVar5 = (int)((float)(unkuint9)uVar4 * param_1);
  iVar1 = (int)uVar4 - iVar5;
  bVar2 = iVar1 == 0;
  if (bVar2) {
    iVar1 = 1;
  }
  uVar6 = (ulong)(int)(iVar5 - (uint)bVar2);
  uVar4 = *(long *)(this + 0x68) - lVar3 >> 2;
  if (uVar4 < uVar6) {
    std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append
              ((vector<int,std::__ndk1::allocator<int>> *)(this + 0x60),uVar6 - uVar4);
  }
  else if (uVar6 < uVar4) {
    *(ulong *)(this + 0x68) = lVar3 + uVar6 * 4;
  }
  uVar7 = (ulong)iVar1;
  lVar3 = *(long *)(this + 0x78);
  uVar4 = *(long *)(this + 0x80) - lVar3 >> 2;
  if (uVar4 < uVar7) {
    std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append
              ((vector<int,std::__ndk1::allocator<int>> *)(this + 0x78),uVar7 - uVar4);
  }
  else if (uVar7 < uVar4) {
    *(ulong *)(this + 0x80) = lVar3 + uVar7 * 4;
  }
  memcpy(*(void **)(this + 0x60),*(void **)(this + 0x30),uVar6 * 4);
  memcpy(*(void **)(this + 0x78),(void *)(*(long *)(this + 0x30) + uVar6 * 4),uVar7 << 2);
  return;
}


