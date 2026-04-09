// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: remove
// Entry Point: 007474a4
// Size: 428 bytes
// Signature: undefined __thiscall remove(PriorityQueue<Candidate,unsigned_int,std::__ndk1::less<Candidate>,std::__ndk1::vector<std::__ndk1::pair<Candidate,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<Candidate,unsigned_int*>>>> * this, uint param_1)


/* PriorityQueue<Candidate, unsigned int, std::__ndk1::less<Candidate>,
   std::__ndk1::vector<std::__ndk1::pair<Candidate, unsigned int*>,
   std::__ndk1::allocator<std::__ndk1::pair<Candidate, unsigned int*> > > >::remove(unsigned int) */

void __thiscall
PriorityQueue<Candidate,unsigned_int,std::__ndk1::less<Candidate>,std::__ndk1::vector<std::__ndk1::pair<Candidate,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<Candidate,unsigned_int*>>>>
::remove(PriorityQueue<Candidate,unsigned_int,std::__ndk1::less<Candidate>,std::__ndk1::vector<std::__ndk1::pair<Candidate,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<Candidate,unsigned_int*>>>>
         *this,uint param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  lVar5 = *(long *)this;
  **(undefined4 **)(lVar5 + (ulong)param_1 * 0x10 + 8) = 0xffffffff;
  if (param_1 != 0) {
    do {
      uVar9 = param_1 - 1;
      uVar3 = uVar9 >> 1;
      puVar2 = (undefined8 *)(lVar5 + (ulong)param_1 * 0x10);
      puVar1 = (undefined8 *)(lVar5 + (ulong)uVar3 * 0x10);
      uVar11 = puVar1[1];
      *puVar2 = *puVar1;
      lVar5 = *(long *)this;
      puVar2[1] = uVar11;
      **(uint **)(lVar5 + (ulong)param_1 * 0x10 + 8) = param_1;
      param_1 = uVar3;
    } while (1 < uVar9);
  }
  lVar6 = *(long *)(this + 8);
  if ((ulong)(lVar6 - lVar5) < 0x11) goto LAB_00747644;
  uVar3 = (int)((ulong)(lVar6 - lVar5) >> 4) - 1;
  uVar7 = (ulong)uVar3;
  if (uVar3 < 3) {
    uVar10 = 0;
    uVar9 = 1;
    uVar8 = 0;
    if (1 < uVar3) goto LAB_007475c4;
  }
  else {
    uVar9 = 2;
    uVar8 = 0;
    do {
      uVar4 = uVar9 - (*(ushort *)(lVar5 + (ulong)(uVar9 - 1) * 0x10) <
                      *(ushort *)(lVar5 + (ulong)uVar9 * 0x10));
      uVar10 = (ulong)uVar4;
      puVar1 = (undefined8 *)(lVar5 + uVar10 * 0x10);
      if (*(ushort *)(lVar5 + uVar7 * 0x10) <= *(ushort *)puVar1) goto LAB_00747618;
      puVar2 = (undefined8 *)(lVar5 + (ulong)uVar8 * 0x10);
      uVar11 = *(undefined8 *)(lVar5 + uVar10 * 0x10 + 8);
      *puVar2 = *puVar1;
      lVar5 = *(long *)this;
      puVar2[1] = uVar11;
      **(uint **)(lVar5 + (ulong)uVar8 * 0x10 + 8) = uVar8;
      uVar9 = uVar4 * 2 + 2;
      uVar8 = uVar4;
    } while (uVar9 < uVar3);
    uVar9 = uVar4 * 2 | 1;
    if (uVar9 < uVar3) {
LAB_007475c4:
      puVar1 = (undefined8 *)(lVar5 + (ulong)uVar9 * 0x10);
      uVar8 = (uint)uVar10;
      if (*(ushort *)puVar1 < *(ushort *)(lVar5 + uVar7 * 0x10)) {
        puVar2 = (undefined8 *)(lVar5 + uVar10 * 0x10);
        lVar6 = lVar5 + (ulong)uVar9 * 0x10;
        *puVar2 = *puVar1;
        lVar5 = *(long *)this;
        puVar2[1] = *(undefined8 *)(lVar6 + 8);
        **(uint **)(lVar5 + uVar10 * 0x10 + 8) = (uint)uVar10;
        uVar8 = uVar9;
      }
    }
  }
LAB_00747618:
  puVar1 = (undefined8 *)(lVar5 + uVar7 * 0x10);
  puVar2 = (undefined8 *)(lVar5 + (ulong)uVar8 * 0x10);
  uVar11 = puVar1[1];
  *puVar2 = *puVar1;
  lVar5 = *(long *)this;
  lVar6 = *(long *)(this + 8);
  puVar2[1] = uVar11;
  **(uint **)(lVar5 + (ulong)uVar8 * 0x10 + 8) = uVar8;
LAB_00747644:
  *(long *)(this + 8) = lVar6 + -0x10;
  return;
}


