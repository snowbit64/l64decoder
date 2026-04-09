// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Power2
// Entry Point: 00cf6530
// Size: 232 bytes
// Signature: undefined __thiscall Power2(Integer * this, ulong param_1)


/* CryptoPP::Integer::Power2(unsigned long) */

void __thiscall CryptoPP::Integer::Power2(Integer *this,ulong param_1)

{
  Integer *pIVar1;
  uint uVar2;
  uint uVar3;
  Integer *in_x8;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  pIVar1 = this + 0x20;
  uVar6 = (ulong)pIVar1 >> 5;
  Integer(in_x8,0,uVar6);
  if (pIVar1 < (Integer *)0x120) {
    uVar6 = (ulong)(uint)(&DAT_005443f4)[uVar6];
  }
  else if (pIVar1 < (Integer *)0x220) {
    uVar6 = 0x10;
  }
  else if (pIVar1 < (Integer *)0x420) {
    uVar6 = 0x20;
  }
  else if (pIVar1 < (Integer *)0x820) {
    uVar6 = 0x40;
  }
  else {
    uVar5 = 0;
    uVar4 = 0x40;
    do {
      uVar3 = uVar5 + (uint)uVar4 >> 1;
      uVar2 = uVar3;
      if (uVar6 - 1 >> ((ulong)uVar3 & 0x3f) != 0) {
        uVar2 = (uint)uVar4;
        uVar5 = uVar3;
      }
      uVar4 = (ulong)uVar2;
    } while (1 < uVar2 - uVar5);
    uVar6 = 1L << (uVar4 & 0x3f);
  }
                    /* try { // try from 00cf65e4 to 00cf65e7 has its CatchHandler @ 00cf6618 */
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
            ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *)(in_x8 + 8)
             ,uVar6);
  uVar6 = (ulong)this >> 3 & 0x1ffffffffffffffc;
  *(uint *)(*(long *)(in_x8 + 0x20) + uVar6) =
       *(uint *)(*(long *)(in_x8 + 0x20) + uVar6) | 1 << (ulong)((uint)this & 0x1f);
  return;
}


