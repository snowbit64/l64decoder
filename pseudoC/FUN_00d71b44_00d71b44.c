// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d71b44
// Entry Point: 00d71b44
// Size: 672 bytes
// Signature: undefined FUN_00d71b44(void)


void FUN_00d71b44(long *param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  byte *pbVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  byte **ppbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte local_78 [4];
  char local_74;
  ushort local_73;
  ushort local_71;
  ushort local_6f;
  byte local_6d;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  ppbVar12 = (byte **)param_1[5];
  pbVar6 = ppbVar12[1];
  if (pbVar6 == (byte *)0x0) {
    cVar4 = (*(code *)ppbVar12[3])(param_1);
    if (cVar4 != '\0') {
      pbVar13 = *ppbVar12;
      pbVar6 = ppbVar12[1];
      bVar2 = *pbVar13;
      goto joined_r0x00d71bb4;
    }
LAB_00d71c34:
    uVar5 = 0;
    goto LAB_00d71c90;
  }
  pbVar13 = *ppbVar12;
  bVar2 = *pbVar13;
joined_r0x00d71bb4:
  pbVar6 = pbVar6 + -1;
  pbVar13 = pbVar13 + 1;
  if (pbVar6 == (byte *)0x0) {
    cVar4 = (*(code *)ppbVar12[3])(param_1);
    if (cVar4 == '\0') goto LAB_00d71c34;
    pbVar13 = *ppbVar12;
    pbVar6 = ppbVar12[1];
  }
  pbVar14 = pbVar13 + 1;
  pbVar6 = pbVar6 + -1;
  uVar9 = (ulong)CONCAT11(bVar2,*pbVar13);
  lVar11 = uVar9 - 2;
  uVar10 = (uint)lVar11;
  if (uVar9 < 2 || lVar11 == 0) {
    uVar10 = 0;
  }
  uVar1 = 0xe;
  if (uVar9 < 0x10) {
    uVar1 = uVar10;
  }
  if (uVar1 == 0) {
    iVar8 = *(int *)((long)param_1 + 0x21c);
    if (iVar8 != 0xee) goto LAB_00d71c50;
LAB_00d71cd4:
    if ((((uVar1 < 0xc) || (local_78[0] != 0x41)) || (local_78[1] != 'd')) ||
       (((local_78[2] != 'o' || (local_78[3] != 'b')) || (local_74 != 'e')))) {
      lVar7 = *param_1;
      *(undefined4 *)(lVar7 + 0x28) = 0x50;
      *(uint *)(lVar7 + 0x2c) = uVar1 + (int)lVar11;
      (**(code **)(*param_1 + 8))(param_1,1);
      *ppbVar12 = pbVar14;
      ppbVar12[1] = pbVar6;
    }
    else {
      lVar7 = *param_1;
      *(undefined4 *)(lVar7 + 0x28) = 0x4e;
      *(uint *)(lVar7 + 0x2c) =
           (((local_73 & 0xff00) << 0x10) >> 8 | (uint)local_73 << 0x18) >> 0x10;
      *(uint *)(lVar7 + 0x30) =
           (((local_71 & 0xff00) << 0x10) >> 8 | (uint)local_71 << 0x18) >> 0x10;
      *(uint *)(lVar7 + 0x34) =
           (((local_6f & 0xff00) << 0x10) >> 8 | (uint)local_6f << 0x18) >> 0x10;
      *(uint *)(lVar7 + 0x38) = (uint)local_6d;
      (**(code **)(lVar7 + 8))(param_1,1);
      *(undefined *)(param_1 + 0x2d) = 1;
      *(byte *)((long)param_1 + 0x169) = local_6d;
      *ppbVar12 = pbVar14;
      ppbVar12[1] = pbVar6;
    }
  }
  else {
    pbVar13 = pbVar14;
    pbVar15 = local_78;
    uVar9 = (ulong)uVar1;
    do {
      if (pbVar6 == (byte *)0x0) {
        cVar4 = (*(code *)ppbVar12[3])(param_1);
        if (cVar4 == '\0') goto LAB_00d71c34;
        pbVar13 = *ppbVar12;
        pbVar6 = ppbVar12[1];
      }
      pbVar14 = pbVar13 + 1;
      pbVar6 = pbVar6 + -1;
      uVar9 = uVar9 - 1;
      *pbVar15 = *pbVar13;
      pbVar13 = pbVar14;
      pbVar15 = pbVar15 + 1;
    } while (uVar9 != 0);
    iVar8 = *(int *)((long)param_1 + 0x21c);
    lVar11 = lVar11 - (ulong)uVar1;
    if (iVar8 == 0xee) goto LAB_00d71cd4;
LAB_00d71c50:
    if (iVar8 == 0xe0) {
      FUN_00d72890(param_1,local_78,uVar1,lVar11);
      *ppbVar12 = pbVar14;
      ppbVar12[1] = pbVar6;
    }
    else {
      lVar7 = *param_1;
      *(undefined4 *)(lVar7 + 0x28) = 0x46;
      *(int *)(lVar7 + 0x2c) = iVar8;
      (**(code **)*param_1)(param_1);
      *ppbVar12 = pbVar14;
      ppbVar12[1] = pbVar6;
    }
  }
  if (0 < lVar11) {
    (**(code **)(param_1[5] + 0x20))(param_1,lVar11);
  }
  uVar5 = 1;
LAB_00d71c90:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


