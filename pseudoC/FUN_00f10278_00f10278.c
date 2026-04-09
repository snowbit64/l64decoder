// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f10278
// Entry Point: 00f10278
// Size: 452 bytes
// Signature: undefined FUN_00f10278(void)


undefined8 * FUN_00f10278(long param_1,long param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_1 + 0x18);
  if ((0x1ff < param_2 - 1U) || (bVar1 = (&DAT_021248e8)[param_2], (char)bVar1 < '\0')) {
    iVar10 = (int)param_2;
    puVar4 = (undefined8 *)
             (**(code **)(lVar11 + 0x10))(*(undefined8 *)(lVar11 + 0x18),0,0,(long)(iVar10 + 0x38));
    if (puVar4 == (undefined8 *)0x0) {
LAB_00f10430:
                    /* WARNING: Subroutine does not return */
      FUN_00f0a90c(param_1,4);
    }
    puVar4[5] = 0;
    puVar4[6] = 0;
    *(int *)(puVar4 + 4) = iVar10 + 0x38;
    *(int *)((long)puVar4 + 0x24) = iVar10;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    lVar8 = *(long *)(lVar11 + 0x260);
    puVar4[3] = lVar8;
    if (lVar8 != 0) {
      *(undefined8 **)(lVar8 + 0x10) = puVar4;
    }
    puVar5 = puVar4 + 7;
    *(undefined8 **)(lVar11 + 0x260) = puVar4;
    *(int *)(puVar4 + 6) = -iVar10;
    *(undefined4 *)((long)puVar4 + 0x34) = 1;
    goto LAB_00f10354;
  }
  lVar8 = lVar11 + (ulong)bVar1 * 8;
  puVar4 = (undefined8 *)(lVar8 + 0x160);
  puVar3 = *(undefined8 **)(lVar8 + 0x160);
  if (puVar3 == (undefined8 *)0x0) {
    iVar10 = *(int *)(&DAT_02124868 + (ulong)bVar1 * 4);
    puVar3 = (undefined8 *)(**(code **)(lVar11 + 0x10))(*(undefined8 *)(lVar11 + 0x18),0,0,0x3fe8);
    if (puVar3 == (undefined8 *)0x0) goto LAB_00f10430;
    puVar3[5] = 0;
    iVar2 = 0;
    if ((long)iVar10 != 0) {
      iVar2 = (int)(0x3fb0 / (ulong)(long)iVar10);
    }
    *(undefined4 *)(puVar3 + 4) = 0x3fe8;
    *(int *)((long)puVar3 + 0x24) = iVar10;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    lVar8 = *(long *)(lVar11 + 0x260);
    puVar3[3] = lVar8;
    *(int *)(puVar3 + 6) = (iVar2 + -1) * iVar10;
    *(undefined4 *)((long)puVar3 + 0x34) = 0;
    if (lVar8 != 0) {
      *(undefined8 **)(lVar8 + 0x10) = puVar3;
    }
    *(undefined8 **)(lVar11 + 0x260) = puVar3;
    *puVar4 = puVar3;
    uVar6 = *(uint *)(puVar3 + 6);
    if ((int)uVar6 < 0) goto LAB_00f103f4;
LAB_00f102dc:
    uVar7 = (ulong)uVar6;
    uVar6 = uVar6 - *(int *)((long)puVar3 + 0x24);
    puVar5 = (undefined8 *)((long)puVar3 + uVar7 + 0x38);
    lVar8 = puVar3[5];
    *(uint *)(puVar3 + 6) = uVar6;
    *(int *)((long)puVar3 + 0x34) = *(int *)((long)puVar3 + 0x34) + 1;
  }
  else {
    uVar6 = *(uint *)(puVar3 + 6);
    if (-1 < (int)uVar6) goto LAB_00f102dc;
LAB_00f103f4:
    puVar5 = (undefined8 *)puVar3[5];
    lVar8 = puVar5[1];
    puVar3[5] = lVar8;
    *(int *)((long)puVar3 + 0x34) = *(int *)((long)puVar3 + 0x34) + 1;
  }
  if ((lVar8 == 0) && ((int)uVar6 < 0)) {
    *puVar4 = puVar3[1];
    if ((undefined8 *)puVar3[1] != (undefined8 *)0x0) {
      *(undefined8 *)puVar3[1] = 0;
    }
    puVar3[1] = 0;
  }
LAB_00f10354:
  lVar8 = lVar11 + (ulong)param_3 * 8;
  lVar9 = *(long *)(lVar8 + 0x270);
  *(long *)(lVar11 + 0x48) = *(long *)(lVar11 + 0x48) + param_2;
  *(long *)(lVar8 + 0x270) = lVar9 + param_2;
  return puVar5;
}


