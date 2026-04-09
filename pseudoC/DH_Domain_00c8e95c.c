// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DH_Domain
// Entry Point: 00c8e95c
// Size: 188 bytes
// Signature: undefined __thiscall ~DH_Domain(DH_Domain<CryptoPP::DL_GroupParameters_GFP_DefaultSafePrime,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,0>> * this)


/* CryptoPP::DH_Domain<CryptoPP::DL_GroupParameters_GFP_DefaultSafePrime,
   CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption, 0> >::~DH_Domain() */

void __thiscall
CryptoPP::
DH_Domain<CryptoPP::DL_GroupParameters_GFP_DefaultSafePrime,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,0>>
::~DH_Domain(DH_Domain<CryptoPP::DL_GroupParameters_GFP_DefaultSafePrime,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,0>>
             *this)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__DH_Domain_00ff30b0;
  *(undefined8 *)(this + 8) = 0x1001b88;
  *(undefined8 *)(this + 0x10) = 0x1001cd0;
  DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *)(this + 0x60));
  *(undefined ***)(this + 0x50) = &PTR__ModExpPrecomputation_01002598;
  if (*(long **)(this + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x58) + 8))();
  }
  pvVar2 = *(void **)(this + 0x40);
  uVar1 = *(ulong *)(this + 0x30);
  if (*(ulong *)(this + 0x38) <= *(ulong *)(this + 0x30)) {
    uVar1 = *(ulong *)(this + 0x38);
  }
  *(undefined8 *)(this + 8) = 0x1001df0;
  *(undefined8 *)(this + 0x10) = 0x1001f20;
  *(undefined ***)(this + 0x20) = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c8ea08 to 00c8ea0b has its CatchHandler @ 00c8ea18 */
  UnalignedDeallocate(pvVar2);
  return;
}


