// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_GroupParameters_EC
// Entry Point: 00c9eed4
// Size: 252 bytes
// Signature: undefined __thiscall ~DL_GroupParameters_EC(DL_GroupParameters_EC<CryptoPP::EC2N> * this)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::~DL_GroupParameters_EC() */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::~DL_GroupParameters_EC
          (DL_GroupParameters_EC<CryptoPP::EC2N> *this)

{
  ulong uVar1;
  void *pvVar2;
  long *in_x1;
  long lVar3;
  
  lVar3 = *in_x1;
  *(long *)this = lVar3;
  *(long *)(this + *(long *)(lVar3 + -0x70)) = in_x1[9];
  *(undefined ***)(this + 0x1b8) = &PTR__Integer_0100c890;
  pvVar2 = *(void **)(this + 0x1d8);
  uVar1 = *(ulong *)(this + 0x1c8);
  if (*(ulong *)(this + 0x1d0) <= *(ulong *)(this + 0x1c8)) {
    uVar1 = *(ulong *)(this + 0x1d0);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9ef38 to 00c9ef3b has its CatchHandler @ 00c9efd4 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x1a8);
  *(undefined ***)(this + 0x188) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x198);
  if (*(ulong *)(this + 0x1a0) <= *(ulong *)(this + 0x198)) {
    uVar1 = *(ulong *)(this + 0x1a0);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9ef6c to 00c9ef6f has its CatchHandler @ 00c9efd0 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x170);
  *(undefined ***)(this + 0x168) = &PTR__OID_00fecd98;
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x178) = pvVar2;
    operator_delete(pvVar2);
  }
  lVar3 = in_x1[1];
  *(long *)this = lVar3;
  *(long *)(this + *(long *)(lVar3 + -0x70)) = in_x1[8];
  DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *)(this + 0xc0));
  *(undefined ***)(this + 0x10) = &PTR__EcPrecomputation_01002c20;
  EC2N::~EC2N((EC2N *)(this + 0x18));
  return;
}


