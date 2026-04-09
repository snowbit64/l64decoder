// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProjectivePoint
// Entry Point: 00cd5aa8
// Size: 192 bytes
// Signature: undefined __thiscall ~ProjectivePoint(ProjectivePoint * this)


/* CryptoPP::ProjectivePoint::~ProjectivePoint() */

void __thiscall CryptoPP::ProjectivePoint::~ProjectivePoint(ProjectivePoint *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x80);
  *(undefined ***)(this + 0x60) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x70);
  if (*(ulong *)(this + 0x78) <= *(ulong *)(this + 0x70)) {
    uVar1 = *(ulong *)(this + 0x78);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cd5af0 to 00cd5af3 has its CatchHandler @ 00cd5b70 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x50);
  *(undefined ***)(this + 0x30) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x40);
  if (*(ulong *)(this + 0x48) <= *(ulong *)(this + 0x40)) {
    uVar1 = *(ulong *)(this + 0x48);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cd5b24 to 00cd5b27 has its CatchHandler @ 00cd5b6c */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x20);
  *(undefined ***)this = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) <= *(ulong *)(this + 0x10)) {
    uVar1 = *(ulong *)(this + 0x18);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cd5b58 to 00cd5b5b has its CatchHandler @ 00cd5b68 */
  UnalignedDeallocate(pvVar2);
  return;
}


