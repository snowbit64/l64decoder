// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~EC2N
// Entry Point: 00ca27e4
// Size: 268 bytes
// Signature: undefined __thiscall ~EC2N(EC2N * this)


/* CryptoPP::EC2N::~EC2N() */

void __thiscall CryptoPP::EC2N::~EC2N(EC2N *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x98);
  uVar1 = *(ulong *)(this + 0x88);
  if (*(ulong *)(this + 0x90) <= *(ulong *)(this + 0x88)) {
    uVar1 = *(ulong *)(this + 0x90);
  }
  *(undefined ***)this = &PTR__EC2N_01005c90;
  *(undefined ***)(this + 8) = &PTR__EC2N_01005d50;
  *(undefined ***)(this + 0x58) = &PTR__EC2NPoint_010026a8;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00ca2840 to 00ca2843 has its CatchHandler @ 00ca28fc */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x78);
  uVar1 = *(ulong *)(this + 0x68);
  if (*(ulong *)(this + 0x70) <= *(ulong *)(this + 0x68)) {
    uVar1 = *(ulong *)(this + 0x70);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00ca286c to 00ca286f has its CatchHandler @ 00ca28f8 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x50);
  uVar1 = *(ulong *)(this + 0x40);
  if (*(ulong *)(this + 0x48) <= *(ulong *)(this + 0x40)) {
    uVar1 = *(ulong *)(this + 0x48);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00ca2898 to 00ca289b has its CatchHandler @ 00ca28f4 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x30);
  uVar1 = *(ulong *)(this + 0x20);
  if (*(ulong *)(this + 0x28) <= *(ulong *)(this + 0x20)) {
    uVar1 = *(ulong *)(this + 0x28);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00ca28c4 to 00ca28c7 has its CatchHandler @ 00ca28f0 */
  UnalignedDeallocate(pvVar2);
  if (*(long **)(this + 0x10) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ca28e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x10) + 8))();
  return;
}


