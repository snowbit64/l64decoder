// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addPageToFreeList
// Entry Point: 00b83568
// Size: 84 bytes
// Signature: undefined __thiscall addPageToFreeList(BuddyAllocator * this, Page * param_1)


/* BuddyAllocator::addPageToFreeList(BuddyAllocator::Page*) */

void __thiscall BuddyAllocator::addPageToFreeList(BuddyAllocator *this,Page *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  
  puVar1 = (uint *)(*(long *)(this + 8) + (ulong)*(uint *)(param_1 + 4) * 0x20);
  puVar3 = *(uint **)(puVar1 + 6);
  puVar2 = puVar1;
  if (puVar3 != puVar1) {
    do {
      puVar2 = puVar3;
      if (*(uint *)param_1 <= *puVar3) break;
      puVar3 = *(uint **)(puVar3 + 6);
      puVar2 = puVar1;
    } while (puVar3 != puVar1);
  }
  lVar4 = *(long *)(puVar2 + 4);
  *(long *)(param_1 + 0x10) = lVar4;
  *(uint **)(param_1 + 0x18) = puVar2;
  *(Page **)(lVar4 + 0x18) = param_1;
  *(Page **)(*(long *)(param_1 + 0x18) + 0x10) = param_1;
  return;
}


