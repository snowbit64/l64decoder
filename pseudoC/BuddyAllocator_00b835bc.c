// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BuddyAllocator
// Entry Point: 00b835bc
// Size: 124 bytes
// Signature: undefined __thiscall ~BuddyAllocator(BuddyAllocator * this)


/* BuddyAllocator::~BuddyAllocator() */

void __thiscall BuddyAllocator::~BuddyAllocator(BuddyAllocator *this)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(this + 0x1c) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      freePageChildren(this,(Page *)(*(long *)this + lVar1));
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x20;
    } while (uVar2 < *(uint *)(this + 0x1c));
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
    return;
  }
  return;
}


