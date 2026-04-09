// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PriorityQueue
// Entry Point: 007434f4
// Size: 140 bytes
// Signature: undefined __thiscall ~PriorityQueue(PriorityQueue<Candidate,unsigned_int,std::__ndk1::less<Candidate>,std::__ndk1::vector<std::__ndk1::pair<Candidate,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<Candidate,unsigned_int*>>>> * this)


/* PriorityQueue<Candidate, unsigned int, std::__ndk1::less<Candidate>,
   std::__ndk1::vector<std::__ndk1::pair<Candidate, unsigned int*>,
   std::__ndk1::allocator<std::__ndk1::pair<Candidate, unsigned int*> > > >::~PriorityQueue() */

void __thiscall
PriorityQueue<Candidate,unsigned_int,std::__ndk1::less<Candidate>,std::__ndk1::vector<std::__ndk1::pair<Candidate,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<Candidate,unsigned_int*>>>>
::~PriorityQueue(PriorityQueue<Candidate,unsigned_int,std::__ndk1::less<Candidate>,std::__ndk1::vector<std::__ndk1::pair<Candidate,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<Candidate,unsigned_int*>>>>
                 *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  
  pvVar2 = *(void **)this;
  pvVar3 = *(void **)(this + 8);
  if (pvVar2 != pvVar3) {
    uVar5 = (long)pvVar3 + (-0x10 - (long)pvVar2);
    pvVar4 = pvVar2;
    if (0xf < uVar5) {
      uVar5 = (uVar5 >> 4) + 1;
      uVar6 = uVar5 & 0x1ffffffffffffffe;
      pvVar4 = (void *)((long)pvVar2 + uVar6 * 0x10);
      puVar7 = (undefined8 *)((long)pvVar2 + 0x18);
      uVar8 = uVar6;
      do {
        uVar8 = uVar8 - 2;
        puVar9 = (undefined4 *)*puVar7;
        *(undefined4 *)puVar7[-2] = 0xffffffff;
        *puVar9 = 0xffffffff;
        puVar7 = puVar7 + 4;
      } while (uVar8 != 0);
      if (uVar5 == uVar6) goto LAB_00743570;
    }
    do {
      pvVar1 = (void *)((long)pvVar4 + 0x10);
      **(undefined4 **)((long)pvVar4 + 8) = 0xffffffff;
      pvVar4 = pvVar1;
    } while (pvVar1 != pvVar3);
  }
LAB_00743570:
  *(void **)(this + 8) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


