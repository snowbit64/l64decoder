// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f17668
// Entry Point: 00f17668
// Size: 620 bytes
// Signature: undefined FUN_00f17668(void)


undefined8 * FUN_00f17668(undefined8 param_1,long param_2,double *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_78;
  undefined4 local_70;
  uint uStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar6 = *(int *)((long)param_3 + 0xc);
  do {
    do {
      if ((iVar6 != 3) || (*param_3 != (double)(*(int *)(param_2 + 8) + 1))) {
        puVar3 = (undefined8 *)FUN_00f173fc(param_2,param_3);
        if ((puVar3 != (undefined8 *)luaH_dummynode) &&
           (puVar8 = puVar3, *(int *)((long)puVar3 + 0xc) == 0)) goto LAB_00f17834;
        uVar9 = *(uint *)(param_2 + 0xc);
        while (0 < (int)uVar9) {
          uVar9 = uVar9 - 1;
          puVar8 = (undefined8 *)(*(long *)(param_2 + 0x20) + (ulong)uVar9 * 0x20);
          *(uint *)(param_2 + 0xc) = uVar9;
          puVar10 = (uint *)((long)puVar8 + 0x1c);
          if ((*(byte *)puVar10 & 0xf) == 0) {
            local_70 = *(undefined4 *)(puVar3 + 3);
            uVar1 = *(uint *)((long)puVar3 + 0x1c);
            local_78 = puVar3[2];
            uVar9 = uVar1 & 0xf;
            uStack_6c = uVar9;
            puVar4 = (undefined8 *)FUN_00f173fc(param_2,&local_78);
            if (puVar4 == puVar3) {
              if (0xf < uVar1) {
                *puVar10 = (uint)((ulong)((long)puVar3 +
                                         ((ulong)(uint)((int)uVar1 >> 4) * 0x20 - (long)puVar8)) >>
                                 1) & 0xfffffff0;
                uVar9 = *(uint *)((long)puVar3 + 0x1c) & 0xf;
              }
              *(uint *)((long)puVar3 + 0x1c) =
                   (uint)((ulong)((long)puVar8 - (long)puVar3) >> 1) & 0xfffffff0 | uVar9;
            }
            else {
              do {
                puVar5 = puVar4;
                puVar4 = puVar5 + ((long)((ulong)*(uint *)((long)puVar5 + 0x1c) << 0x20) >> 0x24) *
                                  4;
              } while (puVar5 + ((long)((ulong)*(uint *)((long)puVar5 + 0x1c) << 0x20) >> 0x24) * 4
                       != puVar3);
              *(uint *)((long)puVar5 + 0x1c) =
                   (uint)((ulong)((long)puVar8 - (long)puVar5) >> 1) & 0xfffffff0 |
                   *(uint *)((long)puVar5 + 0x1c) & 0xf;
              uVar13 = *puVar3;
              uVar12 = puVar3[3];
              uVar11 = puVar3[2];
              puVar8[1] = puVar3[1];
              *puVar8 = uVar13;
              puVar8[3] = uVar12;
              puVar8[2] = uVar11;
              if (0xf < *(uint *)((long)puVar3 + 0x1c)) {
                *puVar10 = *puVar10 +
                           ((uint)((ulong)((long)puVar3 - (long)puVar8) >> 1) & 0xfffffff0);
                *(uint *)((long)puVar3 + 0x1c) = *(uint *)((long)puVar3 + 0x1c) & 0xf;
              }
              *(undefined4 *)((long)puVar3 + 0xc) = 0;
              puVar8 = puVar3;
            }
            goto LAB_00f17834;
          }
        }
      }
      FUN_00f17e28(param_1,param_2,param_3);
      iVar6 = *(int *)((long)param_3 + 0xc);
    } while ((iVar6 != 3) || (iVar7 = (int)*param_3, *param_3 != (double)iVar7));
    uVar9 = iVar7 - 1;
    iVar6 = 3;
  } while (*(uint *)(param_2 + 8) <= uVar9);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return (undefined8 *)(*(long *)(param_2 + 0x18) + (long)(int)uVar9 * 0x10);
  }
LAB_00f178d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00f17834:
  puVar8[2] = *param_3;
  *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(param_3 + 1);
  *(uint *)((long)puVar8 + 0x1c) =
       *(uint *)((long)puVar8 + 0x1c) & 0xfffffff0 | *(uint *)((long)param_3 + 0xc) & 0xf;
  if (((4 < *(int *)((long)param_3 + 0xc)) && ((*(byte *)(param_2 + 1) >> 2 & 1) != 0)) &&
     ((*(byte *)((long)*param_3 + 1) & 3) != 0)) {
    FUN_00f0c9ec(param_1,param_2);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return puVar8;
  }
  goto LAB_00f178d0;
}


