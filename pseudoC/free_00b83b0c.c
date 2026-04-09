// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: free
// Entry Point: 00b83b0c
// Size: 312 bytes
// Signature: undefined __thiscall free(BuddyAllocator * this, uint param_1)


/* BuddyAllocator::free(unsigned int) */

void __thiscall BuddyAllocator::free(BuddyAllocator *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  while( true ) {
    uVar1 = 0;
    if (*(uint *)(this + 0x10) != 0) {
      uVar1 = param_1 / *(uint *)(this + 0x10);
    }
    puVar2 = (uint *)(*(long *)this +
                     (ulong)(uVar1 >> (ulong)(*(int *)(this + 0x18) - 1U & 0x1f)) * 0x20);
    puVar5 = (uint *)0x0;
    while ((puVar6 = puVar2, puVar6[2] != 2 || (*puVar6 != param_1))) {
      lVar3 = 0x10;
      if ((uVar1 >> (ulong)(puVar6[1] - 1 & 0x1f) & 1) != 0) {
        lVar3 = 0x18;
      }
      puVar5 = puVar6;
      puVar2 = *(uint **)((long)puVar6 + lVar3);
    }
    if (puVar5 == (uint *)0x0) break;
    puVar2 = *(uint **)(puVar5 + 4);
    if (puVar2 == puVar6) {
      puVar2 = *(uint **)(puVar5 + 6);
    }
    if (puVar2[2] != 0) break;
    *(undefined8 *)(*(long *)(puVar2 + 4) + 0x18) = *(undefined8 *)(puVar2 + 6);
    *(undefined8 *)(*(long *)(puVar2 + 6) + 0x10) = *(undefined8 *)(puVar2 + 4);
    operator_delete(puVar2);
    operator_delete(puVar6);
    param_1 = *puVar5;
    puVar5[2] = 2;
    *(uint **)(puVar5 + 4) = (uint *)0x0;
    *(undefined8 *)(puVar5 + 6) = 0;
  }
  lVar3 = *(long *)(this + 8);
  puVar6[2] = 0;
  puVar2 = (uint *)(lVar3 + (ulong)puVar6[1] * 0x20);
  for (puVar5 = *(uint **)(puVar2 + 6);
      (puVar4 = puVar2, puVar5 != puVar2 && (puVar4 = puVar5, *puVar5 < param_1));
      puVar5 = *(uint **)(puVar5 + 6)) {
  }
  lVar3 = *(long *)(puVar4 + 4);
  *(long *)(puVar6 + 4) = lVar3;
  *(uint **)(puVar6 + 6) = puVar4;
  *(uint **)(lVar3 + 0x18) = puVar6;
  *(uint **)(*(long *)(puVar6 + 6) + 0x10) = puVar6;
  return;
}


