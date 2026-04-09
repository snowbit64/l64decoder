// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_GroupParameters_IntegerBased
// Entry Point: 00cb60d0
// Size: 108 bytes
// Signature: undefined __thiscall ~DL_GroupParameters_IntegerBased(DL_GroupParameters_IntegerBased * this)


/* CryptoPP::DL_GroupParameters_IntegerBased::~DL_GroupParameters_IntegerBased() */

void __thiscall
CryptoPP::DL_GroupParameters_IntegerBased::~DL_GroupParameters_IntegerBased
          (DL_GroupParameters_IntegerBased *this)

{
  ulong uVar1;
  void *pvVar2;
  long *in_x1;
  long lVar3;
  
  lVar3 = *in_x1;
  *(long *)this = lVar3;
  *(long *)(this + 8) = in_x1[10];
  *(long *)(this + *(long *)(lVar3 + -0x18)) = in_x1[0xb];
  *(undefined ***)(this + 0x18) = &PTR__Integer_0100c890;
  pvVar2 = *(void **)(this + 0x38);
  uVar1 = *(ulong *)(this + 0x28);
  if (*(ulong *)(this + 0x30) <= *(ulong *)(this + 0x28)) {
    uVar1 = *(ulong *)(this + 0x30);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cb6130 to 00cb6133 has its CatchHandler @ 00cb613c */
  UnalignedDeallocate(pvVar2);
  return;
}


