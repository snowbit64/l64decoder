// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_FixedBasePrecomputationImpl
// Entry Point: 00c956f8
// Size: 292 bytes
// Signature: undefined __thiscall ~DL_FixedBasePrecomputationImpl(DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> * this)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::~DL_FixedBasePrecomputationImpl()
    */

void __thiscall
CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::~DL_FixedBasePrecomputationImpl
          (DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(this + 0x90);
  *(undefined ***)this = &PTR__DL_FixedBasePrecomputationImpl_00ff33d8;
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(this + 0x98);
    puVar2 = puVar5;
    if (puVar4 != puVar5) {
      do {
        puVar4 = puVar4 + -10;
        (**(code **)*puVar4)(puVar4);
      } while (puVar4 != puVar5);
      puVar2 = *(undefined8 **)(this + 0x90);
    }
    *(undefined8 **)(this + 0x98) = puVar5;
    operator_delete(puVar2);
  }
  pvVar3 = *(void **)(this + 0x80);
  uVar1 = *(ulong *)(this + 0x70);
  if (*(ulong *)(this + 0x78) <= *(ulong *)(this + 0x70)) {
    uVar1 = *(ulong *)(this + 0x78);
  }
  *(undefined ***)(this + 0x60) = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar3 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c957a0 to 00c957a3 has its CatchHandler @ 00c95824 */
  UnalignedDeallocate(pvVar3);
  pvVar3 = *(void **)(this + 0x48);
  uVar1 = *(ulong *)(this + 0x38);
  if (*(ulong *)(this + 0x40) <= *(ulong *)(this + 0x38)) {
    uVar1 = *(ulong *)(this + 0x40);
  }
  *(undefined ***)(this + 8) = &PTR__EC2NPoint_010026a8;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar3 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c957dc to 00c957df has its CatchHandler @ 00c95820 */
  UnalignedDeallocate(pvVar3);
  pvVar3 = *(void **)(this + 0x28);
  uVar1 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x20) <= *(ulong *)(this + 0x18)) {
    uVar1 = *(ulong *)(this + 0x20);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar3 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c95808 to 00c9580b has its CatchHandler @ 00c9581c */
  UnalignedDeallocate(pvVar3);
  return;
}


