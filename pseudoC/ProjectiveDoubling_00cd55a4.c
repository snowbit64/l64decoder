// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProjectiveDoubling
// Entry Point: 00cd55a4
// Size: 352 bytes
// Signature: undefined __thiscall ~ProjectiveDoubling(ProjectiveDoubling * this)


/* CryptoPP::ProjectiveDoubling::~ProjectiveDoubling() */

void __thiscall CryptoPP::ProjectiveDoubling::~ProjectiveDoubling(ProjectiveDoubling *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x1b0);
  *(undefined ***)(this + 400) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x1a0);
  if (*(ulong *)(this + 0x1a8) <= *(ulong *)(this + 0x1a0)) {
    uVar1 = *(ulong *)(this + 0x1a8);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cd55ec to 00cd55ef has its CatchHandler @ 00cd5718 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x180);
  *(undefined ***)(this + 0x160) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x170);
  if (*(ulong *)(this + 0x178) <= *(ulong *)(this + 0x170)) {
    uVar1 = *(ulong *)(this + 0x178);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cd5620 to 00cd5623 has its CatchHandler @ 00cd5714 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x150);
  *(undefined ***)(this + 0x130) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x140);
  if (*(ulong *)(this + 0x148) <= *(ulong *)(this + 0x140)) {
    uVar1 = *(ulong *)(this + 0x148);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cd5654 to 00cd5657 has its CatchHandler @ 00cd5710 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x120);
  *(undefined ***)(this + 0x100) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x110);
  if (*(ulong *)(this + 0x118) <= *(ulong *)(this + 0x110)) {
    uVar1 = *(ulong *)(this + 0x118);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cd5688 to 00cd568b has its CatchHandler @ 00cd570c */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0xf0);
  *(undefined ***)(this + 0xd0) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0xe0);
  if (*(ulong *)(this + 0xe8) <= *(ulong *)(this + 0xe0)) {
    uVar1 = *(ulong *)(this + 0xe8);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cd56bc to 00cd56bf has its CatchHandler @ 00cd5708 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0xc0);
  *(undefined ***)(this + 0xa0) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0xb0);
  if (*(ulong *)(this + 0xb8) <= *(ulong *)(this + 0xb0)) {
    uVar1 = *(ulong *)(this + 0xb8);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cd56f0 to 00cd56f3 has its CatchHandler @ 00cd5704 */
  UnalignedDeallocate(pvVar2);
  ProjectivePoint::~ProjectivePoint((ProjectivePoint *)(this + 8));
  return;
}


