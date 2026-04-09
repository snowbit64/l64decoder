// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeCandidates
// Entry Point: 00b68f74
// Size: 248 bytes
// Signature: undefined __thiscall computeCandidates(Brep * this, PriorityQueue * param_1, uint param_2)


/* Brep::computeCandidates(PriorityQueue<std::__ndk1::pair<float, unsigned int>, unsigned short,
   std::__ndk1::less<std::__ndk1::pair<float, unsigned int> >,
   std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float, unsigned int>, unsigned short*>,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float, unsigned int>, unsigned short*>
   > > >&, unsigned int) */

void __thiscall Brep::computeCandidates(Brep *this,PriorityQueue *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined2 *puVar9;
  uint uVar10;
  
  lVar2 = *(long *)param_1;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar2 != lVar3) {
    uVar5 = (lVar3 - lVar2) - 0x10;
    lVar4 = lVar2;
    if (0xf < uVar5) {
      uVar5 = (uVar5 >> 4) + 1;
      uVar6 = uVar5 & 0x1ffffffffffffffe;
      lVar4 = lVar2 + uVar6 * 0x10;
      puVar7 = (undefined8 *)(lVar2 + 0x18);
      uVar8 = uVar6;
      do {
        uVar8 = uVar8 - 2;
        puVar9 = (undefined2 *)*puVar7;
        *(undefined2 *)puVar7[-2] = 0xffff;
        *puVar9 = 0xffff;
        puVar7 = puVar7 + 4;
      } while (uVar8 != 0);
      if (uVar5 == uVar6) goto LAB_00b69008;
    }
    do {
      lVar1 = lVar4 + 0x10;
      **(undefined2 **)(lVar4 + 8) = 0xffff;
      lVar4 = lVar1;
    } while (lVar1 != lVar3);
  }
LAB_00b69008:
  lVar3 = *(long *)(this + 0x2f70);
  *(long *)(param_1 + 8) = lVar2;
  uVar5 = (ulong)(lVar3 - *(long *)(this + 0x2f68)) >> 3;
  if ((uVar5 & 0xfffffffc) != 0) {
    uVar10 = 0;
    do {
      if ((uVar10 & 3) != 0) {
        addCandidate(this,param_1,uVar10,param_2);
      }
      uVar10 = uVar10 + 1;
    } while (((uint)uVar5 & 0xfffffffc) != uVar10);
  }
  return;
}


