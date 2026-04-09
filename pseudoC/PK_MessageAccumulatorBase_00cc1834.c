// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PK_MessageAccumulatorBase
// Entry Point: 00cc1834
// Size: 332 bytes
// Signature: undefined __thiscall ~PK_MessageAccumulatorBase(PK_MessageAccumulatorBase * this)


/* CryptoPP::PK_MessageAccumulatorBase::~PK_MessageAccumulatorBase() */

void __thiscall
CryptoPP::PK_MessageAccumulatorBase::~PK_MessageAccumulatorBase(PK_MessageAccumulatorBase *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0xd8);
  uVar1 = *(ulong *)(this + 200);
  if (*(ulong *)(this + 0xd0) <= *(ulong *)(this + 200)) {
    uVar1 = *(ulong *)(this + 0xd0);
  }
  *(undefined ***)this = &PTR__PK_MessageAccumulatorBase_01004170;
  *(undefined ***)(this + 0xb8) = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cc188c to 00cc188f has its CatchHandler @ 00cc1994 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0xa8);
  *(undefined ***)(this + 0x88) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x98);
  if (*(ulong *)(this + 0xa0) <= *(ulong *)(this + 0x98)) {
    uVar1 = *(ulong *)(this + 0xa0);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cc18c0 to 00cc18c3 has its CatchHandler @ 00cc1990 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x80);
  uVar1 = *(ulong *)(this + 0x70);
  if (*(ulong *)(this + 0x78) <= *(ulong *)(this + 0x70)) {
    uVar1 = *(ulong *)(this + 0x78);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00cc18ec to 00cc18ef has its CatchHandler @ 00cc198c */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x60);
  uVar1 = *(ulong *)(this + 0x50);
  if (*(ulong *)(this + 0x58) <= *(ulong *)(this + 0x50)) {
    uVar1 = *(ulong *)(this + 0x58);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00cc1918 to 00cc191b has its CatchHandler @ 00cc1988 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x40);
  uVar1 = *(ulong *)(this + 0x30);
  if (*(ulong *)(this + 0x38) <= *(ulong *)(this + 0x30)) {
    uVar1 = *(ulong *)(this + 0x38);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00cc1944 to 00cc1947 has its CatchHandler @ 00cc1984 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x20);
  uVar1 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) <= *(ulong *)(this + 0x10)) {
    uVar1 = *(ulong *)(this + 0x18);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00cc1970 to 00cc1973 has its CatchHandler @ 00cc1980 */
  UnalignedDeallocate(pvVar2);
  return;
}


