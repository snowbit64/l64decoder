// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 00cf677c
// Size: 368 bytes
// Signature: undefined __thiscall operator=(Integer * this, Integer * param_1)


/* CryptoPP::Integer::TEMPNAMEPLACEHOLDERVALUE(CryptoPP::Integer const&) */

Integer * __thiscall CryptoPP::Integer::operator=(Integer *this,Integer *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  void *__dest;
  void *__src;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  
  if (this == param_1) {
    return this;
  }
  uVar4 = *(ulong *)(this + 0x18);
  uVar5 = *(ulong *)(param_1 + 0x18);
  __src = *(void **)(param_1 + 0x20);
  if ((uVar4 == uVar5) && (*(int *)((long)__src + (uVar4 & 0x7ffffffffffffffe) * 2) != 0)) {
    __dest = *(void **)(this + 0x20);
    uVar5 = uVar4;
    if (__dest == __src) goto LAB_00cf6874;
  }
  else {
    do {
      if (uVar5 == 0) goto LAB_00cf67f4;
      uVar7 = uVar5 - 1;
      lVar1 = uVar5 * 4;
      uVar5 = uVar7;
    } while (*(int *)((long)__src + lVar1 + -4) == 0);
    uVar6 = (int)uVar7 + 1;
    uVar5 = (ulong)uVar6;
    if (uVar6 < 9) {
LAB_00cf67f4:
      uVar5 = (ulong)(uint)(&DAT_005443f4)[uVar5];
    }
    else if (uVar5 < 0x11) {
      uVar5 = 0x10;
    }
    else if (uVar5 < 0x21) {
      uVar5 = 0x20;
    }
    else if (uVar5 < 0x41) {
      uVar5 = 0x40;
    }
    else {
      uVar6 = 0;
      uVar7 = 0x40;
      do {
        uVar3 = uVar6 + (uint)uVar7 >> 1;
        uVar2 = uVar3;
        if (uVar5 - 1 >> ((ulong)uVar3 & 0x3f) != 0) {
          uVar2 = (uint)uVar7;
          uVar6 = uVar3;
        }
        uVar7 = (ulong)uVar2;
      } while (1 < uVar2 - uVar6);
      uVar5 = 1L << (uVar7 & 0x3f);
    }
    __dest = *(void **)(this + 0x20);
    if (uVar4 != uVar5) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)((long)__dest + uVar4 * 4 + -4) = 0;
      }
      UnalignedDeallocate(__dest);
      AllocatorBase<unsigned_int>::CheckSize(uVar5);
      if (uVar5 == 0) {
        __dest = (void *)0x0;
      }
      else {
        __dest = (void *)UnalignedAllocate(uVar5 << 2);
      }
    }
    *(void **)(this + 0x20) = __dest;
    __src = *(void **)(param_1 + 0x20);
    *(undefined8 *)(this + 0x10) = 0x3fffffffffffffff;
    *(ulong *)(this + 0x18) = uVar5;
    if (__dest == __src) goto LAB_00cf6874;
  }
  memcpy(__dest,__src,uVar5 << 2);
LAB_00cf6874:
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return this;
}


