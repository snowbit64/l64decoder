// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_GroupParameters_GFP_DefaultSafePrime
// Entry Point: 00c8ea1c
// Size: 172 bytes
// Signature: undefined __thiscall ~DL_GroupParameters_GFP_DefaultSafePrime(DL_GroupParameters_GFP_DefaultSafePrime * this)


/* CryptoPP::DL_GroupParameters_GFP_DefaultSafePrime::~DL_GroupParameters_GFP_DefaultSafePrime() */

void __thiscall
CryptoPP::DL_GroupParameters_GFP_DefaultSafePrime::~DL_GroupParameters_GFP_DefaultSafePrime
          (DL_GroupParameters_GFP_DefaultSafePrime *this)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined8 *)this = 0x1001b88;
  *(undefined8 *)(this + 8) = 0x1001cd0;
  DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *)(this + 0x58));
  *(undefined ***)(this + 0x48) = &PTR__ModExpPrecomputation_01002598;
  if (*(long **)(this + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x50) + 8))();
  }
  pvVar2 = *(void **)(this + 0x38);
  uVar1 = *(ulong *)(this + 0x28);
  if (*(ulong *)(this + 0x30) <= *(ulong *)(this + 0x28)) {
    uVar1 = *(ulong *)(this + 0x30);
  }
  *(undefined8 *)this = 0x1001df0;
  *(undefined8 *)(this + 8) = 0x1001f20;
  *(undefined ***)(this + 0x18) = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c8eab8 to 00c8eabb has its CatchHandler @ 00c8eac8 */
  UnalignedDeallocate(pvVar2);
  return;
}


