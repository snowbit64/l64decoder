// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Integer
// Entry Point: 00cf4ce0
// Size: 532 bytes
// Signature: undefined __thiscall Integer(Integer * this, Integer * param_1)


/* CryptoPP::Integer::Integer(CryptoPP::Integer const&) */

void __thiscall CryptoPP::Integer::Integer(Integer *this,Integer *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  void *__dest;
  void *__src;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  
  DataMemoryBarrier(2,3);
  if ((DAT_02120808 & 1) == 0) {
    DAT_02120978 = Baseline_MultiplyTop2;
    DAT_02120980 = Baseline_MultiplyTop4;
    DAT_021208a0 = Baseline_Multiply2;
    DAT_021208a8 = Baseline_Multiply4;
    DAT_021208b0 = Baseline_Multiply8;
    DAT_02120930 = Baseline_MultiplyBottom2;
    DAT_02120938 = Baseline_MultiplyBottom4;
    DAT_02120940 = Baseline_MultiplyBottom8;
    DAT_021208e8 = Baseline_Square2;
    DAT_021208f0 = Baseline_Square4;
    DAT_021208f8 = Baseline_Square8;
    DAT_02120988 = Baseline_MultiplyTop8;
    DAT_021208c0 = Baseline_Multiply16;
    DAT_02120950 = Baseline_MultiplyBottom16;
    DAT_02120908 = Baseline_Square16;
    DAT_02120998 = Baseline_MultiplyTop16;
    DAT_02120808 = 1;
    DataMemoryBarrier(2,3);
  }
  uVar5 = *(ulong *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x20);
  *(undefined ***)this = &PTR__Integer_0100c890;
  do {
    if (uVar5 == 0) goto LAB_00cf4e04;
    uVar7 = uVar5 - 1;
    lVar1 = uVar5 * 4;
    uVar5 = uVar7;
  } while (*(int *)(lVar3 + -4 + lVar1) == 0);
  uVar6 = (int)uVar7 + 1;
  uVar5 = (ulong)uVar6;
  if (uVar6 < 9) {
LAB_00cf4e04:
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
      uVar4 = uVar6 + (uint)uVar7 >> 1;
      uVar2 = uVar4;
      if (uVar5 - 1 >> ((ulong)uVar4 & 0x3f) != 0) {
        uVar2 = (uint)uVar7;
        uVar6 = uVar4;
      }
      uVar7 = (ulong)uVar2;
    } while (1 < uVar2 - uVar6);
    uVar5 = 1L << (uVar7 & 0x3f);
  }
  *(undefined8 *)(this + 0x10) = 0x3fffffffffffffff;
  *(ulong *)(this + 0x18) = uVar5;
  AllocatorBase<unsigned_int>::CheckSize(uVar5);
  if (uVar5 == 0) {
    __dest = (void *)0x0;
    *(undefined8 *)(this + 0x20) = 0;
    __src = *(void **)(param_1 + 0x20);
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
    if (__src == (void *)0x0) {
      return;
    }
  }
  else {
    __dest = (void *)UnalignedAllocate(uVar5 << 2);
    *(void **)(this + 0x20) = __dest;
    __src = *(void **)(param_1 + 0x20);
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
    if (__dest == __src) {
      return;
    }
  }
  memcpy(__dest,__src,*(long *)(this + 0x18) << 2);
  return;
}


