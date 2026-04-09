// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~EC2NPoint
// Entry Point: 00c93db4
// Size: 132 bytes
// Signature: undefined __thiscall ~EC2NPoint(EC2NPoint * this)


/* CryptoPP::EC2NPoint::~EC2NPoint() */

void __thiscall CryptoPP::EC2NPoint::~EC2NPoint(EC2NPoint *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x40);
  *(undefined ***)this = &PTR__EC2NPoint_010026a8;
  uVar1 = *(ulong *)(this + 0x30);
  if (*(ulong *)(this + 0x38) <= *(ulong *)(this + 0x30)) {
    uVar1 = *(ulong *)(this + 0x38);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c93dfc to 00c93dff has its CatchHandler @ 00c93e3c */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x20);
  uVar1 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) <= *(ulong *)(this + 0x10)) {
    uVar1 = *(ulong *)(this + 0x18);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c93e28 to 00c93e2b has its CatchHandler @ 00c93e38 */
  UnalignedDeallocate(pvVar2);
  return;
}


