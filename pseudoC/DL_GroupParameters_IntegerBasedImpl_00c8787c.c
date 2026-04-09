// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_GroupParameters_IntegerBasedImpl
// Entry Point: 00c8787c
// Size: 192 bytes
// Signature: undefined __thiscall ~DL_GroupParameters_IntegerBasedImpl(DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>> * this)


/* CryptoPP::DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>
   >::~DL_GroupParameters_IntegerBasedImpl() */

void __thiscall
CryptoPP::
DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>>
::~DL_GroupParameters_IntegerBasedImpl
          (DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>>
           *this)

{
  ulong uVar1;
  void *pvVar2;
  long in_x1;
  long lVar3;
  
  lVar3 = *(long *)(in_x1 + 8);
  *(long *)this = lVar3;
  *(undefined8 *)(this + 8) = *(undefined8 *)(in_x1 + 0x70);
  *(undefined8 *)(this + *(long *)(lVar3 + -0x18)) = *(undefined8 *)(in_x1 + 0x78);
  DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *)(this + 0x58));
  *(undefined ***)(this + 0x48) = &PTR__ModExpPrecomputation_01002598;
  if (*(long **)(this + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x50) + 8))();
  }
  lVar3 = *(long *)(in_x1 + 0x10);
  *(long *)this = lVar3;
  *(undefined8 *)(this + 8) = *(undefined8 *)(in_x1 + 0x60);
  *(undefined8 *)(this + *(long *)(lVar3 + -0x18)) = *(undefined8 *)(in_x1 + 0x68);
  pvVar2 = *(void **)(this + 0x38);
  uVar1 = *(ulong *)(this + 0x28);
  if (*(ulong *)(this + 0x30) <= *(ulong *)(this + 0x28)) {
    uVar1 = *(ulong *)(this + 0x30);
  }
  *(undefined ***)(this + 0x18) = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c8792c to 00c8792f has its CatchHandler @ 00c8793c */
  UnalignedDeallocate(pvVar2);
  return;
}


