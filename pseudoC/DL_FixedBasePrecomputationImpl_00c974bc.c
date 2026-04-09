// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_FixedBasePrecomputationImpl
// Entry Point: 00c974bc
// Size: 308 bytes
// Signature: undefined __thiscall ~DL_FixedBasePrecomputationImpl(DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> * this)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::~DL_FixedBasePrecomputationImpl()
    */

void __thiscall
CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::~DL_FixedBasePrecomputationImpl
          (DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(this + 0xb0);
  *(undefined ***)this = &PTR__DL_FixedBasePrecomputationImpl_00ff3438;
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(this + 0xb8);
    puVar2 = puVar5;
    if (puVar4 != puVar5) {
      do {
        puVar4 = puVar4 + -0xe;
        (**(code **)*puVar4)(puVar4);
      } while (puVar4 != puVar5);
      puVar2 = *(undefined8 **)(this + 0xb0);
    }
    *(undefined8 **)(this + 0xb8) = puVar5;
    operator_delete(puVar2);
  }
  pvVar3 = *(void **)(this + 0xa0);
  uVar1 = *(ulong *)(this + 0x90);
  if (*(ulong *)(this + 0x98) <= *(ulong *)(this + 0x90)) {
    uVar1 = *(ulong *)(this + 0x98);
  }
  *(undefined ***)(this + 0x80) = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar3 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c97564 to 00c97567 has its CatchHandler @ 00c975f8 */
  UnalignedDeallocate(pvVar3);
  *(undefined ***)(this + 0x40) = &PTR__Integer_0100c890;
  pvVar3 = *(void **)(this + 0x60);
  *(undefined ***)(this + 8) = &PTR__ECPPoint_00fe9fd8;
  uVar1 = *(ulong *)(this + 0x50);
  if (*(ulong *)(this + 0x58) <= *(ulong *)(this + 0x50)) {
    uVar1 = *(ulong *)(this + 0x58);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar3 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c975a8 to 00c975ab has its CatchHandler @ 00c975f4 */
  UnalignedDeallocate(pvVar3);
  pvVar3 = *(void **)(this + 0x30);
  *(undefined ***)(this + 0x10) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x20);
  if (*(ulong *)(this + 0x28) <= *(ulong *)(this + 0x20)) {
    uVar1 = *(ulong *)(this + 0x28);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar3 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c975dc to 00c975df has its CatchHandler @ 00c975f0 */
  UnalignedDeallocate(pvVar3);
  return;
}


