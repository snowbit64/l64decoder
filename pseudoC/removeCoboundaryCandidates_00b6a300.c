// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeCoboundaryCandidates
// Entry Point: 00b6a300
// Size: 348 bytes
// Signature: undefined __thiscall removeCoboundaryCandidates(Brep * this, PriorityQueue * param_1, uint param_2)


/* Brep::removeCoboundaryCandidates(PriorityQueue<std::__ndk1::pair<float, unsigned int>, unsigned
   short, std::__ndk1::less<std::__ndk1::pair<float, unsigned int> >,
   std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float, unsigned int>, unsigned short*>,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float, unsigned int>, unsigned short*>
   > > >&, unsigned int) */

void __thiscall Brep::removeCoboundaryCandidates(Brep *this,PriorityQueue *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar6 = *(long *)(this + 0x2f68);
  uVar8 = (ulong)param_2;
  uVar3 = *(uint *)(lVar6 + (ulong)param_2 * 8 + 4);
  uVar9 = uVar3;
  uVar7 = param_2;
  if (uVar3 != 0xffffffff) {
    uVar4 = *(ushort *)(lVar6 + (ulong)uVar3 * 8 + 2);
    if (-1 < (short)uVar4) {
      PriorityQueue<std::__ndk1::pair<float,unsigned_int>,unsigned_short,std::__ndk1::less<std::__ndk1::pair<float,unsigned_int>>,std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>>
      ::remove((PriorityQueue<std::__ndk1::pair<float,unsigned_int>,unsigned_short,std::__ndk1::less<std::__ndk1::pair<float,unsigned_int>>,std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>>
                *)param_1,uVar4);
      lVar6 = *(long *)(this + 0x2f68);
    }
    uVar7 = param_2 + 2;
    if ((param_2 - 1 & 3) != 0) {
      uVar7 = param_2 - 1;
    }
    uVar8 = isOuterCone(this,*(ushort *)(lVar6 + (ulong)uVar7 * 8));
    bVar5 = (uVar8 & 1) == 0;
    lVar6 = *(long *)(this + 0x2f68);
    uVar7 = uVar3;
    if (bVar5) {
      uVar7 = param_2;
    }
    uVar8 = (ulong)uVar7;
    uVar9 = param_2;
    if (bVar5) {
      uVar9 = uVar3;
    }
  }
  uVar3 = *(uint *)(*(long *)(this + 0x2f50) + (ulong)*(ushort *)(lVar6 + uVar8 * 8) * 0xc + 4);
  uVar10 = uVar3;
  if (uVar3 == uVar9) {
    uVar3 = uVar9 + 2;
    if ((uVar9 - 1 & 3) != 0) {
      uVar3 = uVar9 - 1;
    }
    uVar3 = *(uint *)(lVar6 + (ulong)uVar3 * 8 + 4);
    uVar10 = uVar3;
  }
  do {
    uVar1 = uVar3 + 2;
    if ((uVar3 - 1 & 3) != 0) {
      uVar1 = uVar3 - 1;
    }
    if ((uVar1 == uVar7) || (uVar2 = uVar1, uVar1 == uVar9)) {
      uVar2 = uVar1 + 2;
      if ((uVar1 - 1 & 3) != 0) {
        uVar2 = uVar1 - 1;
      }
    }
    uVar4 = *(ushort *)(lVar6 + (ulong)uVar3 * 8 + 2);
    if (-1 < (short)uVar4) {
      PriorityQueue<std::__ndk1::pair<float,unsigned_int>,unsigned_short,std::__ndk1::less<std::__ndk1::pair<float,unsigned_int>>,std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>>
      ::remove((PriorityQueue<std::__ndk1::pair<float,unsigned_int>,unsigned_short,std::__ndk1::less<std::__ndk1::pair<float,unsigned_int>>,std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>>
                *)param_1,uVar4);
      lVar6 = *(long *)(this + 0x2f68);
    }
    uVar4 = *(ushort *)(lVar6 + (ulong)uVar2 * 8 + 2);
    if (-1 < (short)uVar4) {
      PriorityQueue<std::__ndk1::pair<float,unsigned_int>,unsigned_short,std::__ndk1::less<std::__ndk1::pair<float,unsigned_int>>,std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>>
      ::remove((PriorityQueue<std::__ndk1::pair<float,unsigned_int>,unsigned_short,std::__ndk1::less<std::__ndk1::pair<float,unsigned_int>>,std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>>
                *)param_1,uVar4);
      lVar6 = *(long *)(this + 0x2f68);
    }
    uVar3 = *(uint *)(lVar6 + (ulong)uVar2 * 8 + 4);
  } while (uVar3 != uVar10 && uVar3 != 0xffffffff);
  return;
}


