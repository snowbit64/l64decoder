// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removePageFromFreeList
// Entry Point: 00b836e8
// Size: 24 bytes
// Signature: undefined __thiscall removePageFromFreeList(BuddyAllocator * this, Page * param_1)


/* BuddyAllocator::removePageFromFreeList(BuddyAllocator::Page*) */

void __thiscall BuddyAllocator::removePageFromFreeList(BuddyAllocator *this,Page *param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


