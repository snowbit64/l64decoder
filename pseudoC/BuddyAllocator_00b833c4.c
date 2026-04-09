// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BuddyAllocator
// Entry Point: 00b833c4
// Size: 420 bytes
// Signature: undefined __thiscall BuddyAllocator(BuddyAllocator * this, uint param_1, uint param_2, uint param_3)


/* BuddyAllocator::BuddyAllocator(unsigned int, unsigned int, unsigned int) */

void __thiscall
BuddyAllocator::BuddyAllocator(BuddyAllocator *this,uint param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  
  uVar14 = (ulong)param_3;
  *(uint *)(this + 0x10) = param_1;
  if (1 < param_3) {
    iVar7 = param_3 - 1;
    do {
      iVar7 = iVar7 + -1;
      param_1 = param_1 + 1 >> 1;
    } while (iVar7 != 0);
    *(uint *)(this + 0x10) = param_1;
  }
  uVar4 = param_1 << (ulong)(param_3 - 1 & 0x1f);
  *(uint *)(this + 0x14) = uVar4;
  *(uint *)(this + 0x18) = param_3;
  uVar15 = 0;
  if (uVar4 != 0) {
    uVar15 = ((param_2 + uVar4) - 1) / uVar4;
  }
  *(uint *)(this + 0x1c) = uVar15;
  puVar5 = (undefined8 *)operator_new__((ulong)param_3 << 5);
  *(undefined8 **)(this + 8) = puVar5;
  if (param_3 != 0) {
    lVar8 = *(long *)(this + 8);
    puVar5[2] = puVar5;
    *(undefined4 *)(puVar5 + 1) = 3;
    *puVar5 = 0xffffffff;
    *(long *)(lVar8 + 0x18) = lVar8;
    uVar14 = (ulong)*(uint *)(this + 0x18);
    if (1 < *(uint *)(this + 0x18)) {
      lVar8 = 0;
      uVar9 = 1;
      do {
        lVar13 = *(long *)(this + 8) + lVar8;
        *(undefined4 *)(lVar13 + 0x20) = 0xffffffff;
        *(undefined4 **)(lVar13 + 0x30) = (undefined4 *)(lVar13 + 0x20);
        lVar12 = *(long *)(this + 8);
        *(int *)(lVar13 + 0x24) = (int)uVar9;
        *(undefined4 *)(lVar13 + 0x28) = 3;
        uVar9 = uVar9 + 1;
        lVar12 = lVar12 + lVar8;
        lVar8 = lVar8 + 0x20;
        *(long *)(lVar12 + 0x38) = lVar12 + 0x20;
        uVar14 = (ulong)*(uint *)(this + 0x18);
      } while (uVar9 < uVar14);
    }
    uVar15 = *(uint *)(this + 0x1c);
  }
  pvVar6 = operator_new__((ulong)uVar15 << 5);
  *(void **)this = pvVar6;
  if (uVar15 == 0) {
    return;
  }
  uVar9 = 0;
  do {
    lVar8 = uVar9 * 0x20;
    iVar7 = *(int *)(this + 0x14);
    piVar1 = (int *)((long)pvVar6 + lVar8);
    *(undefined8 *)(piVar1 + 4) = 0;
    lVar13 = *(long *)this;
    piVar1[2] = 0;
    *piVar1 = iVar7 * (int)uVar9;
    piVar1[1] = (int)uVar14 + -1;
    *(undefined8 *)(lVar13 + lVar8 + 0x18) = 0;
    puVar2 = (uint *)(*(long *)this + lVar8);
    puVar3 = (uint *)(*(long *)(this + 8) + (ulong)puVar2[1] * 0x20);
    puVar11 = *(uint **)(puVar3 + 6);
    puVar10 = puVar3;
    if (puVar11 != puVar3) {
      do {
        puVar10 = puVar11;
        if (*puVar2 <= *puVar11) break;
        puVar11 = *(uint **)(puVar11 + 6);
        puVar10 = puVar3;
      } while (puVar11 != puVar3);
    }
    lVar13 = *(long *)(puVar10 + 4);
    lVar8 = *(long *)this + uVar9 * 0x20;
    uVar9 = uVar9 + 1;
    *(long *)(lVar8 + 0x10) = lVar13;
    *(uint **)(lVar8 + 0x18) = puVar10;
    *(uint **)(lVar13 + 0x18) = puVar2;
    *(uint **)(*(long *)(lVar8 + 0x18) + 0x10) = puVar2;
    if (*(uint *)(this + 0x1c) <= uVar9) {
      return;
    }
    uVar14 = (ulong)*(uint *)(this + 0x18);
    pvVar6 = *(void **)this;
  } while( true );
}


