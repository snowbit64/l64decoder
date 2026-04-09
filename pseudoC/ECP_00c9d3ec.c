// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ECP
// Entry Point: 00c9d3ec
// Size: 308 bytes
// Signature: undefined __thiscall ~ECP(ECP * this)


/* CryptoPP::ECP::~ECP() */

void __thiscall CryptoPP::ECP::~ECP(ECP *this)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__ECP_01005df8;
  *(undefined ***)(this + 8) = &PTR__ECP_01005eb8;
  pvVar2 = *(void **)(this + 0xd0);
  *(undefined ***)(this + 0x78) = &PTR__ECPPoint_00fe9fd8;
  uVar1 = *(ulong *)(this + 0xc0);
  if (*(ulong *)(this + 200) <= *(ulong *)(this + 0xc0)) {
    uVar1 = *(ulong *)(this + 200);
  }
  *(undefined ***)(this + 0xb0) = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9d458 to 00c9d45b has its CatchHandler @ 00c9d52c */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0xa0);
  *(undefined ***)(this + 0x80) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x90);
  if (*(ulong *)(this + 0x98) <= *(ulong *)(this + 0x90)) {
    uVar1 = *(ulong *)(this + 0x98);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9d48c to 00c9d48f has its CatchHandler @ 00c9d528 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x68);
  *(undefined ***)(this + 0x48) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x60) <= *(ulong *)(this + 0x58)) {
    uVar1 = *(ulong *)(this + 0x60);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9d4c0 to 00c9d4c3 has its CatchHandler @ 00c9d524 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x38);
  *(undefined ***)(this + 0x18) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x28);
  if (*(ulong *)(this + 0x30) <= *(ulong *)(this + 0x28)) {
    uVar1 = *(ulong *)(this + 0x30);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9d4f4 to 00c9d4f7 has its CatchHandler @ 00c9d520 */
  UnalignedDeallocate(pvVar2);
  if (*(long **)(this + 0x10) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c9d510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x10) + 8))();
  return;
}


