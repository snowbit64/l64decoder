// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findFreePageAtLevel
// Entry Point: 00b83700
// Size: 344 bytes
// Signature: undefined __thiscall findFreePageAtLevel(BuddyAllocator * this, uint param_1)


/* BuddyAllocator::findFreePageAtLevel(unsigned int) */

int * __thiscall BuddyAllocator::findFreePageAtLevel(BuddyAllocator *this,uint param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  
  if (param_1 < *(uint *)(this + 0x18)) {
    lVar9 = *(long *)(this + 8) + (ulong)param_1 * 0x20;
    if (*(long *)(lVar9 + 0x18) == lVar9) {
      piVar4 = (int *)findFreePageAtLevel(this,param_1 + 1);
      if (piVar4 != (int *)0x0) {
        piVar4[2] = 1;
        pvVar5 = operator_new(0x20);
        *(void **)(piVar4 + 4) = pvVar5;
        iVar2 = *piVar4;
        *(uint *)((long)pvVar5 + 4) = param_1;
        **(int **)(piVar4 + 4) = iVar2;
        *(undefined4 *)(*(long *)(piVar4 + 4) + 8) = 0;
        *(undefined8 *)(*(long *)(piVar4 + 4) + 0x10) = 0;
        *(undefined8 *)(*(long *)(piVar4 + 4) + 0x18) = 0;
        puVar6 = *(uint **)(piVar4 + 4);
        puVar1 = (uint *)(*(long *)(this + 8) + (ulong)puVar6[1] * 0x20);
        puVar8 = *(uint **)(puVar1 + 6);
        puVar7 = puVar1;
        if (puVar8 != puVar1) {
          do {
            puVar7 = puVar8;
            if (*puVar6 <= *puVar8) break;
            puVar8 = *(uint **)(puVar8 + 6);
            puVar7 = puVar1;
          } while (puVar8 != puVar1);
        }
        lVar9 = *(long *)(puVar7 + 4);
        *(long *)(puVar6 + 4) = lVar9;
        *(uint **)(puVar6 + 6) = puVar7;
        *(uint **)(lVar9 + 0x18) = puVar6;
        *(uint **)(*(long *)(puVar6 + 6) + 0x10) = puVar6;
        pvVar5 = operator_new(0x20);
        *(void **)(piVar4 + 6) = pvVar5;
        iVar2 = *piVar4;
        iVar3 = *(int *)(this + 0x10);
        *(uint *)((long)pvVar5 + 4) = param_1;
        **(int **)(piVar4 + 6) = (iVar3 << (ulong)(param_1 & 0x1f)) + iVar2;
        *(undefined4 *)(*(long *)(piVar4 + 6) + 8) = 0;
        *(undefined8 *)(*(long *)(piVar4 + 6) + 0x10) = 0;
        *(undefined8 *)(*(long *)(piVar4 + 6) + 0x18) = 0;
        piVar4 = *(int **)(piVar4 + 6);
      }
    }
    else {
      piVar4 = *(int **)(lVar9 + 0x10);
      *(undefined8 *)(*(long *)(piVar4 + 4) + 0x18) = *(undefined8 *)(piVar4 + 6);
      *(undefined8 *)(*(long *)(piVar4 + 6) + 0x10) = *(undefined8 *)(piVar4 + 4);
      *(undefined8 *)(piVar4 + 4) = 0;
      *(undefined8 *)(piVar4 + 6) = 0;
    }
  }
  else {
    piVar4 = (int *)0x0;
  }
  return piVar4;
}


