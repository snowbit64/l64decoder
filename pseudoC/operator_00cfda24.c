// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator<<=
// Entry Point: 00cfda24
// Size: 464 bytes
// Signature: undefined __thiscall operator<<=(Integer * this, ulong param_1)


/* CryptoPP::Integer::TEMPNAMEPLACEHOLDERVALUE(unsigned long) */

Integer * __thiscall CryptoPP::Integer::operator<<=(Integer *this,ulong param_1)

{
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *__s;
  ulong uVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar9 = *(ulong *)(this + 0x18);
  do {
    uVar7 = uVar9;
    if (uVar7 == 0) break;
    uVar9 = uVar7 - 1;
  } while (*(int *)(*(long *)(this + 0x20) + -4 + uVar7 * 4) == 0);
  uVar10 = uVar7 & 0xffffffff;
  uVar1 = (uint)param_1 & 0x1f;
  this_00 = (SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *)(this + 8);
  uVar9 = uVar10 + (param_1 + 0x1f >> 5);
  if (uVar9 < 9) {
    SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
              (this_00,(ulong)(uint)(&DAT_005443f4)[uVar9]);
    __s = *(void **)(this + 0x20);
  }
  else if (uVar9 < 0x11) {
    SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
              (this_00,0x10);
    __s = *(void **)(this + 0x20);
  }
  else if (uVar9 < 0x21) {
    SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
              (this_00,0x20);
    __s = *(void **)(this + 0x20);
  }
  else if (uVar9 < 0x41) {
    SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
              (this_00,0x40);
    __s = *(void **)(this + 0x20);
  }
  else {
    uVar6 = 0;
    uVar4 = 0x40;
    do {
      uVar2 = uVar6 + (uint)uVar4 >> 1;
      uVar3 = uVar2;
      if (uVar9 - 1 >> ((ulong)uVar2 & 0x3f) != 0) {
        uVar3 = (uint)uVar4;
        uVar6 = uVar2;
      }
      uVar4 = (ulong)uVar3;
    } while (1 < uVar3 - uVar6);
    SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
              (this_00,1L << (uVar4 & 0x3f));
    __s = *(void **)(this + 0x20);
  }
  if (0x1f < param_1) {
    uVar4 = param_1 >> 5;
    uVar9 = (uVar4 + uVar10) - 1;
    if (uVar4 <= uVar9) {
      lVar8 = (uVar7 & 0xffffffff) * 4;
      do {
        lVar8 = lVar8 + -4;
        *(undefined4 *)((long)__s + uVar9 * 4) = *(undefined4 *)((long)__s + lVar8);
        uVar9 = uVar9 - 1;
      } while (uVar4 <= uVar9);
    }
    memset(__s,0,uVar4 << 2);
    __s = *(void **)(this + 0x20);
  }
  if (((param_1 & 0x1f) != 0) && (uVar9 = (ulong)(uVar1 + 0x1f >> 5), uVar10 + uVar9 != 0)) {
    uVar6 = 0;
    lVar8 = uVar9 + (uVar7 & 0xffffffff);
    puVar5 = (uint *)((long)__s + (param_1 >> 5) * 4);
    do {
      lVar8 = lVar8 + -1;
      uVar3 = *puVar5 << (ulong)uVar1 | uVar6;
      uVar6 = *puVar5 >> (ulong)(0x20 - uVar1 & 0x1f);
      *puVar5 = uVar3;
      puVar5 = puVar5 + 1;
    } while (lVar8 != 0);
  }
  return this;
}


