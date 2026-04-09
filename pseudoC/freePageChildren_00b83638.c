// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: freePageChildren
// Entry Point: 00b83638
// Size: 96 bytes
// Signature: undefined __thiscall freePageChildren(BuddyAllocator * this, Page * param_1)


/* BuddyAllocator::freePageChildren(BuddyAllocator::Page*) */

void __thiscall BuddyAllocator::freePageChildren(BuddyAllocator *this,Page *param_1)

{
  if (*(int *)(param_1 + 8) == 1) {
    freePageChildren(this,*(Page **)(param_1 + 0x10));
    if (*(void **)(param_1 + 0x10) != (void *)0x0) {
      operator_delete(*(void **)(param_1 + 0x10));
    }
    freePageChildren(this,*(Page **)(param_1 + 0x18));
    if (*(void **)(param_1 + 0x18) != (void *)0x0) {
      operator_delete(*(void **)(param_1 + 0x18));
      return;
    }
  }
  return;
}


