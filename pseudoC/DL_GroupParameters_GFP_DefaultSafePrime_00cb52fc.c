// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_GroupParameters_GFP_DefaultSafePrime
// Entry Point: 00cb52fc
// Size: 180 bytes
// Signature: undefined __thiscall ~DL_GroupParameters_GFP_DefaultSafePrime(DL_GroupParameters_GFP_DefaultSafePrime * this)


/* non-virtual thunk to
   CryptoPP::DL_GroupParameters_GFP_DefaultSafePrime::~DL_GroupParameters_GFP_DefaultSafePrime() */

void __thiscall
CryptoPP::DL_GroupParameters_GFP_DefaultSafePrime::~DL_GroupParameters_GFP_DefaultSafePrime
          (DL_GroupParameters_GFP_DefaultSafePrime *this)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined8 *)(this + -8) = 0x1001b88;
  *(undefined8 *)this = 0x1001cd0;
  DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *)(this + 0x50));
  *(undefined ***)(this + 0x40) = &PTR__ModExpPrecomputation_01002598;
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 8))();
  }
  pvVar2 = *(void **)(this + 0x30);
  uVar1 = *(ulong *)(this + 0x20);
  if (*(ulong *)(this + 0x28) <= *(ulong *)(this + 0x20)) {
    uVar1 = *(ulong *)(this + 0x28);
  }
  *(undefined8 *)(this + -8) = 0x1001df0;
  *(undefined8 *)this = 0x1001f20;
  *(undefined ***)(this + 0x10) = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cb53a0 to 00cb53a3 has its CatchHandler @ 00cb53b0 */
  UnalignedDeallocate(pvVar2);
  return;
}


