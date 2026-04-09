// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_GroupParameters_EC
// Entry Point: 00c9944c
// Size: 300 bytes
// Signature: undefined __thiscall ~DL_GroupParameters_EC(DL_GroupParameters_EC<CryptoPP::ECP> * this)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::~DL_GroupParameters_EC() */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::~DL_GroupParameters_EC
          (DL_GroupParameters_EC<CryptoPP::ECP> *this)

{
  ulong uVar1;
  void *pvVar2;
  long *in_x1;
  long lVar3;
  
  lVar3 = *in_x1;
  *(long *)this = lVar3;
  *(long *)(this + *(long *)(lVar3 + -0x70)) = in_x1[9];
  *(undefined ***)(this + 0x140) = &PTR__Integer_0100c890;
  pvVar2 = *(void **)(this + 0x160);
  uVar1 = *(ulong *)(this + 0x150);
  if (*(ulong *)(this + 0x158) <= *(ulong *)(this + 0x150)) {
    uVar1 = *(ulong *)(this + 0x158);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c994b0 to 00c994b3 has its CatchHandler @ 00c9957c */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x130);
  *(undefined ***)(this + 0x110) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x120);
  if (*(ulong *)(this + 0x128) <= *(ulong *)(this + 0x120)) {
    uVar1 = *(ulong *)(this + 0x128);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c994e4 to 00c994e7 has its CatchHandler @ 00c99578 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0xf8);
  *(undefined ***)(this + 0xf0) = &PTR__OID_00fecd98;
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x100) = pvVar2;
    operator_delete(pvVar2);
  }
  lVar3 = in_x1[1];
  *(long *)this = lVar3;
  *(long *)(this + *(long *)(lVar3 + -0x70)) = in_x1[8];
  DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *)(this + 0x28));
  *(undefined ***)(this + 0x10) = &PTR__EcPrecomputation_00fecea0;
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  if (*(long **)(this + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c99564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x18) + 8))();
  return;
}


