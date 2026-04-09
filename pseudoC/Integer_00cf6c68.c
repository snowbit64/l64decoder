// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Integer
// Entry Point: 00cf6c68
// Size: 576 bytes
// Signature: undefined __thiscall Integer(Integer * this, uint param_1, ulong param_2)


/* WARNING: Removing unreachable block (ram,0x00cf6dd4) */
/* WARNING: Removing unreachable block (ram,0x00cf6db0) */
/* CryptoPP::Integer::Integer(unsigned int, unsigned long) */

void __thiscall CryptoPP::Integer::Integer(Integer *this,uint param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
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
  *(undefined ***)this = &PTR__Integer_0100c890;
  if (param_2 < 9) {
    uVar6 = (ulong)(uint)(&DAT_005443f4)[param_2];
    *(undefined8 *)(this + 0x10) = 0x3fffffffffffffff;
    *(ulong *)(this + 0x18) = uVar6;
    AllocatorBase<unsigned_int>::CheckSize(uVar6);
joined_r0x00cf6e84:
    if (uVar6 == 0) {
      puVar3 = (uint *)0x0;
      lVar4 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x20) = 0;
      *(undefined4 *)(this + 0x28) = 0;
      uRam0000000000000000 = param_1;
      goto joined_r0x00cf6e14;
    }
  }
  else if (param_2 < 0x11) {
    uVar6 = 0x10;
    *(undefined8 *)(this + 0x10) = 0x3fffffffffffffff;
    *(undefined8 *)(this + 0x18) = 0x10;
    AllocatorBase<unsigned_int>::CheckSize(0x10);
  }
  else if (param_2 < 0x21) {
    uVar6 = 0x20;
    *(undefined8 *)(this + 0x10) = 0x3fffffffffffffff;
    *(undefined8 *)(this + 0x18) = 0x20;
    AllocatorBase<unsigned_int>::CheckSize(0x20);
  }
  else {
    if (0x40 < param_2) {
      uVar5 = 0;
      uVar6 = 0x40;
      do {
        uVar2 = uVar5 + (uint)uVar6 >> 1;
        uVar1 = uVar2;
        if (param_2 - 1 >> ((ulong)uVar2 & 0x3f) != 0) {
          uVar1 = (uint)uVar6;
          uVar5 = uVar2;
        }
        uVar6 = (ulong)uVar1;
      } while (1 < uVar1 - uVar5);
      uVar6 = 1L << (uVar6 & 0x3f);
      *(undefined8 *)(this + 0x10) = 0x3fffffffffffffff;
      *(ulong *)(this + 0x18) = uVar6;
      AllocatorBase<unsigned_int>::CheckSize(uVar6);
      goto joined_r0x00cf6e84;
    }
    uVar6 = 0x40;
    *(undefined8 *)(this + 0x10) = 0x3fffffffffffffff;
    *(undefined8 *)(this + 0x18) = 0x40;
    AllocatorBase<unsigned_int>::CheckSize(0x40);
  }
  puVar3 = (uint *)UnalignedAllocate(uVar6 << 2);
  lVar4 = *(long *)(this + 0x18);
  *(uint **)(this + 0x20) = puVar3;
  *(undefined4 *)(this + 0x28) = 0;
  *puVar3 = param_1;
joined_r0x00cf6e14:
  if (lVar4 != 1) {
    memset(puVar3 + 1,0,lVar4 * 4 - 4);
  }
  return;
}


