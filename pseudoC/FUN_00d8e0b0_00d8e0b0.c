// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d8e0b0
// Entry Point: 00d8e0b0
// Size: 512 bytes
// Signature: undefined FUN_00d8e0b0(void)


void FUN_00d8e0b0(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 8);
  plVar5 = *(long **)(lVar8 + 0x88);
  if (plVar5 == (long *)0x0) {
    lVar7 = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    lVar7 = 0;
    do {
      if (*plVar5 == 0) {
        lVar6 = lVar6 + (ulong)*(uint *)((long)plVar5 + 0xc) * (ulong)*(uint *)(plVar5 + 2);
        lVar7 = lVar7 + (ulong)*(uint *)(plVar5 + 1) * (ulong)*(uint *)((long)plVar5 + 0xc);
      }
      plVar5 = (long *)plVar5[5];
    } while (plVar5 != (long *)0x0);
  }
  for (plVar5 = *(long **)(lVar8 + 0x90); plVar5 != (long *)0x0; plVar5 = (long *)plVar5[5]) {
    if (*plVar5 == 0) {
      lVar6 = lVar6 + (ulong)*(uint *)(plVar5 + 2) * (ulong)*(uint *)((long)plVar5 + 0xc) * 0x80;
      lVar7 = lVar7 + (ulong)*(uint *)((long)plVar5 + 0xc) * (ulong)*(uint *)(plVar5 + 1) * 0x80;
    }
  }
  if (0 < lVar6) {
    lVar3 = jpeg_mem_available(param_1,lVar6,lVar7,*(undefined8 *)(lVar8 + 0x98));
    if (lVar3 < lVar7) {
      lVar7 = 0;
      if (lVar6 != 0) {
        lVar7 = lVar3 / lVar6;
      }
      if (lVar7 < 2) {
        lVar7 = 1;
      }
      plVar5 = *(long **)(lVar8 + 0x88);
    }
    else {
      lVar7 = 1000000000;
      plVar5 = *(long **)(lVar8 + 0x88);
    }
    for (; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[5]) {
      if (*plVar5 == 0) {
        uVar4 = (ulong)*(uint *)(plVar5 + 1);
        uVar2 = *(uint *)(plVar5 + 2);
        lVar6 = 0;
        if ((ulong)uVar2 != 0) {
          lVar6 = (long)(uVar4 - 1) / (long)(ulong)uVar2;
        }
        if (lVar6 < lVar7) {
          *(uint *)((long)plVar5 + 0x14) = *(uint *)(plVar5 + 1);
        }
        else {
          *(uint *)((long)plVar5 + 0x14) = uVar2 * (int)lVar7;
          jpeg_open_backing_store(param_1,plVar5 + 6,*(uint *)((long)plVar5 + 0xc) * uVar4);
          uVar4 = (ulong)*(uint *)((long)plVar5 + 0x14);
          *(undefined *)((long)plVar5 + 0x26) = 1;
        }
        lVar6 = FUN_00d8db80(param_1,1,*(undefined4 *)((long)plVar5 + 0xc),uVar4);
        uVar1 = *(undefined4 *)(lVar8 + 0xa0);
        *(undefined4 *)((long)plVar5 + 0x1c) = 0;
        *(undefined4 *)(plVar5 + 4) = 0;
        *plVar5 = lVar6;
        *(undefined *)((long)plVar5 + 0x25) = 0;
        *(undefined4 *)(plVar5 + 3) = uVar1;
      }
    }
    for (plVar5 = *(long **)(lVar8 + 0x90); plVar5 != (long *)0x0; plVar5 = (long *)plVar5[5]) {
      if (*plVar5 == 0) {
        uVar4 = (ulong)*(uint *)(plVar5 + 1);
        uVar2 = *(uint *)(plVar5 + 2);
        lVar6 = 0;
        if ((ulong)uVar2 != 0) {
          lVar6 = (long)(uVar4 - 1) / (long)(ulong)uVar2;
        }
        if (lVar6 < lVar7) {
          *(uint *)((long)plVar5 + 0x14) = *(uint *)(plVar5 + 1);
        }
        else {
          *(uint *)((long)plVar5 + 0x14) = uVar2 * (int)lVar7;
          jpeg_open_backing_store(param_1,plVar5 + 6,uVar4 * *(uint *)((long)plVar5 + 0xc) * 0x80);
          uVar4 = (ulong)*(uint *)((long)plVar5 + 0x14);
          *(undefined *)((long)plVar5 + 0x26) = 1;
        }
        lVar6 = FUN_00d8dd68(param_1,1,*(undefined4 *)((long)plVar5 + 0xc),uVar4);
        uVar1 = *(undefined4 *)(lVar8 + 0xa0);
        *(undefined4 *)((long)plVar5 + 0x1c) = 0;
        *(undefined4 *)(plVar5 + 4) = 0;
        *plVar5 = lVar6;
        *(undefined *)((long)plVar5 + 0x25) = 0;
        *(undefined4 *)(plVar5 + 3) = uVar1;
      }
    }
  }
  return;
}


