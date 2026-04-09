// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ECPPoint
// Entry Point: 00b4aa88
// Size: 156 bytes
// Signature: undefined __thiscall ~ECPPoint(ECPPoint * this)


/* CryptoPP::ECPPoint::~ECPPoint() */

void __thiscall CryptoPP::ECPPoint::~ECPPoint(ECPPoint *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x58);
  uVar1 = *(ulong *)(this + 0x48);
  if (*(ulong *)(this + 0x50) <= *(ulong *)(this + 0x48)) {
    uVar1 = *(ulong *)(this + 0x50);
  }
  *(undefined ***)this = &PTR__ECPPoint_00fe9fd8;
  *(undefined ***)(this + 0x38) = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00b4aae0 to 00b4aae3 has its CatchHandler @ 00b4ab28 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x28);
  *(undefined ***)(this + 8) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x20) <= *(ulong *)(this + 0x18)) {
    uVar1 = *(ulong *)(this + 0x20);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00b4ab14 to 00b4ab17 has its CatchHandler @ 00b4ab24 */
  UnalignedDeallocate(pvVar2);
  return;
}


