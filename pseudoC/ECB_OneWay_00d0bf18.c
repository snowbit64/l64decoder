// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ECB_OneWay
// Entry Point: 00d0bf18
// Size: 168 bytes
// Signature: undefined __thiscall ~ECB_OneWay(ECB_OneWay * this)


/* non-virtual thunk to CryptoPP::ECB_OneWay::~ECB_OneWay() */

void __thiscall CryptoPP::ECB_OneWay::~ECB_OneWay(ECB_OneWay *this)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  pvVar2 = *(void **)(this + 0x48);
  *(undefined ***)this = &PTR__BlockOrientedCipherModeBase_0100da78;
  uVar1 = *(ulong *)(this + 0x38);
  if (*(ulong *)(this + 0x40) <= *(ulong *)(this + 0x38)) {
    uVar1 = *(ulong *)(this + 0x40);
  }
  puVar3 = (undefined8 *)(this + -8);
  *puVar3 = &PTR__BlockOrientedCipherModeBase_0100d9a8;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d0bf6c to 00d0bf6f has its CatchHandler @ 00d0bfc4 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x28);
  *puVar3 = &PTR__CipherModeBase_0100d378;
  *(undefined ***)this = &PTR__CipherModeBase_0100d428;
  uVar1 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x20) <= *(ulong *)(this + 0x18)) {
    uVar1 = *(ulong *)(this + 0x20);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d0bfac to 00d0bfaf has its CatchHandler @ 00d0bfc0 */
  UnalignedDeallocate(pvVar2);
  operator_delete(puVar3);
  return;
}


