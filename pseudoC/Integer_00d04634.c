// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Integer
// Entry Point: 00d04634
// Size: 92 bytes
// Signature: undefined __thiscall ~Integer(Integer * this)


/* CryptoPP::Integer::~Integer() */

void __thiscall CryptoPP::Integer::~Integer(Integer *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x20);
  *(undefined ***)this = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) <= *(ulong *)(this + 0x10)) {
    uVar1 = *(ulong *)(this + 0x18);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d0467c to 00d0467f has its CatchHandler @ 00d04690 */
  UnalignedDeallocate(pvVar2);
  operator_delete(this);
  return;
}


