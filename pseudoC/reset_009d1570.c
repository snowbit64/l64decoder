// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 009d1570
// Size: 724 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementManager::reset() */

void ProceduralPlacementManager::reset(void)

{
  byte bVar1;
  long lVar2;
  long in_x0;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  
  lVar4 = *(long *)(in_x0 + 0x58);
  if (lVar4 != *(long *)(in_x0 + 0x50)) {
    uVar6 = 0;
    lVar2 = *(long *)(in_x0 + 0x50);
    lVar5 = lVar4;
    do {
      lVar4 = lVar2;
      plVar3 = *(long **)(lVar4 + uVar6 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        lVar4 = *(long *)(in_x0 + 0x50);
        lVar5 = *(long *)(in_x0 + 0x58);
      }
      uVar6 = (ulong)((int)uVar6 + 1);
      lVar2 = lVar4;
    } while (uVar6 < (ulong)(lVar5 - lVar4 >> 3));
  }
  lVar5 = *(long *)(in_x0 + 0x70);
  *(long *)(in_x0 + 0x58) = lVar4;
  if (lVar5 != *(long *)(in_x0 + 0x68)) {
    uVar6 = 0;
    lVar2 = *(long *)(in_x0 + 0x68);
    lVar4 = lVar5;
    do {
      lVar5 = lVar2;
      plVar3 = *(long **)(lVar5 + uVar6 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        lVar5 = *(long *)(in_x0 + 0x68);
        lVar4 = *(long *)(in_x0 + 0x70);
      }
      uVar6 = (ulong)((int)uVar6 + 1);
      lVar2 = lVar5;
    } while (uVar6 < (ulong)(lVar4 - lVar5 >> 3));
  }
  lVar4 = *(long *)(in_x0 + 0xc0);
  *(long *)(in_x0 + 0x70) = lVar5;
  if (lVar4 != *(long *)(in_x0 + 0xb8)) {
    uVar6 = 0;
    lVar2 = *(long *)(in_x0 + 0xb8);
    lVar5 = lVar4;
    do {
      lVar4 = lVar2;
      plVar3 = *(long **)(lVar4 + uVar6 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        lVar4 = *(long *)(in_x0 + 0xb8);
        lVar5 = *(long *)(in_x0 + 0xc0);
      }
      uVar6 = (ulong)((int)uVar6 + 1);
      lVar2 = lVar4;
    } while (uVar6 < (ulong)(lVar5 - lVar4 >> 3));
  }
  lVar5 = *(long *)(in_x0 + 0x88);
  *(long *)(in_x0 + 0xc0) = lVar4;
  if (lVar5 != *(long *)(in_x0 + 0x80)) {
    uVar6 = 0;
    lVar2 = *(long *)(in_x0 + 0x80);
    lVar4 = lVar5;
    do {
      lVar5 = lVar2;
      plVar3 = *(long **)(lVar5 + uVar6 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        lVar5 = *(long *)(in_x0 + 0x80);
        lVar4 = *(long *)(in_x0 + 0x88);
      }
      uVar6 = (ulong)((int)uVar6 + 1);
      lVar2 = lVar5;
    } while (uVar6 < (ulong)(lVar4 - lVar5 >> 3));
  }
  lVar4 = *(long *)(in_x0 + 0x10);
  *(long *)(in_x0 + 0x88) = lVar5;
  if (lVar4 != *(long *)(in_x0 + 8)) {
    uVar6 = 0;
    lVar2 = *(long *)(in_x0 + 8);
    lVar5 = lVar4;
    do {
      lVar4 = lVar2;
      pbVar7 = *(byte **)(lVar4 + uVar6 * 8);
      if (pbVar7 != (byte *)0x0) {
        if ((pbVar7[0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar7 + 0x28));
        }
        if ((*pbVar7 & 1) != 0) {
          operator_delete(*(void **)(pbVar7 + 0x10));
        }
        operator_delete(pbVar7);
        lVar4 = *(long *)(in_x0 + 8);
        lVar5 = *(long *)(in_x0 + 0x10);
      }
      uVar6 = (ulong)((int)uVar6 + 1);
      lVar2 = lVar4;
    } while (uVar6 < (ulong)(lVar5 - lVar4 >> 3));
  }
  lVar5 = *(long *)(in_x0 + 0x28);
  *(long *)(in_x0 + 0x10) = lVar4;
  if (lVar5 != *(long *)(in_x0 + 0x20)) {
    uVar6 = 0;
    lVar2 = *(long *)(in_x0 + 0x20);
    lVar4 = lVar5;
    do {
      lVar5 = lVar2;
      pbVar7 = *(byte **)(lVar5 + uVar6 * 8);
      if (pbVar7 != (byte *)0x0) {
        if ((pbVar7[0x38] & 1) == 0) {
          if ((pbVar7[0x18] & 1) == 0) goto LAB_009d1750;
LAB_009d176c:
          operator_delete(*(void **)(pbVar7 + 0x28));
          bVar1 = *pbVar7;
        }
        else {
          operator_delete(*(void **)(pbVar7 + 0x48));
          if ((pbVar7[0x18] & 1) != 0) goto LAB_009d176c;
LAB_009d1750:
          bVar1 = *pbVar7;
        }
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar7 + 0x10));
        }
        operator_delete(pbVar7);
        lVar5 = *(long *)(in_x0 + 0x20);
        lVar4 = *(long *)(in_x0 + 0x28);
      }
      uVar6 = (ulong)((int)uVar6 + 1);
      lVar2 = lVar5;
    } while (uVar6 < (ulong)(lVar4 - lVar5 >> 3));
  }
  lVar4 = *(long *)(in_x0 + 0x40);
  *(long *)(in_x0 + 0x28) = lVar5;
  if (lVar4 != *(long *)(in_x0 + 0x38)) {
    uVar6 = 0;
    lVar2 = *(long *)(in_x0 + 0x38);
    lVar5 = lVar4;
    do {
      lVar4 = lVar2;
      pbVar7 = *(byte **)(lVar4 + uVar6 * 8);
      if (pbVar7 != (byte *)0x0) {
        if ((pbVar7[0x30] & 1) == 0) {
          if ((pbVar7[0x18] & 1) == 0) goto LAB_009d17d8;
LAB_009d17f4:
          operator_delete(*(void **)(pbVar7 + 0x28));
          bVar1 = *pbVar7;
        }
        else {
          operator_delete(*(void **)(pbVar7 + 0x40));
          if ((pbVar7[0x18] & 1) != 0) goto LAB_009d17f4;
LAB_009d17d8:
          bVar1 = *pbVar7;
        }
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar7 + 0x10));
        }
        operator_delete(pbVar7);
        lVar4 = *(long *)(in_x0 + 0x38);
        lVar5 = *(long *)(in_x0 + 0x40);
      }
      uVar6 = (ulong)((int)uVar6 + 1);
      lVar2 = lVar4;
    } while (uVar6 < (ulong)(lVar5 - lVar4 >> 3));
  }
  *(long *)(in_x0 + 0x40) = lVar4;
  if (*(long **)(in_x0 + 0xb0) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0xb0) + 8))();
  }
  *(undefined8 *)(in_x0 + 0xb0) = 0;
  *(undefined8 *)(in_x0 + 0xe8) = 0;
  return;
}


