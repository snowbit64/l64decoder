// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_FixedBasePrecomputationImpl
// Entry Point: 00c84f8c
// Size: 240 bytes
// Signature: undefined __thiscall ~DL_FixedBasePrecomputationImpl(DL_FixedBasePrecomputationImpl<CryptoPP::Integer> * this)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::~DL_FixedBasePrecomputationImpl() */

void __thiscall
CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::~DL_FixedBasePrecomputationImpl
          (DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(this + 0x70);
  *(undefined ***)this = &PTR__DL_FixedBasePrecomputationImpl_00ff25e0;
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(this + 0x78);
    puVar2 = puVar5;
    if (puVar4 != puVar5) {
      do {
        puVar4 = puVar4 + -6;
        (**(code **)*puVar4)(puVar4);
      } while (puVar4 != puVar5);
      puVar2 = *(undefined8 **)(this + 0x70);
    }
    *(undefined8 **)(this + 0x78) = puVar5;
    operator_delete(puVar2);
  }
  pvVar3 = *(void **)(this + 0x60);
  uVar1 = *(ulong *)(this + 0x50);
  if (*(ulong *)(this + 0x58) <= *(ulong *)(this + 0x50)) {
    uVar1 = *(ulong *)(this + 0x58);
  }
  *(undefined ***)(this + 0x40) = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar3 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c85034 to 00c85037 has its CatchHandler @ 00c85080 */
  UnalignedDeallocate(pvVar3);
  pvVar3 = *(void **)(this + 0x28);
  *(undefined ***)(this + 8) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x20) <= *(ulong *)(this + 0x18)) {
    uVar1 = *(ulong *)(this + 0x20);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar3 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c85068 to 00c8506b has its CatchHandler @ 00c8507c */
  UnalignedDeallocate(pvVar3);
  return;
}


