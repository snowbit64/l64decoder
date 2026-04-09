// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_sPLT
// Entry Point: 00dc97b8
// Size: 848 bytes
// Signature: undefined png_write_sPLT(void)


void png_write_sPLT(long param_1,undefined8 *param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  ushort *puVar15;
  undefined8 uVar16;
  uint local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  ushort local_bc;
  undefined auStack_b8 [80];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  puVar14 = param_2 + 1;
  iVar3 = *(int *)(param_2 + 3);
  iVar2 = 6;
  if (*(char *)puVar14 != '\b') {
    iVar2 = 10;
  }
  iVar9 = png_check_keyword(param_1,*param_2,auStack_b8);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"sPLT: invalid keyword");
  }
  if (param_1 == 0) {
    if (0 < *(int *)(param_2 + 3)) {
      puVar10 = (undefined8 *)param_2[2];
      puVar12 = (undefined8 *)((long)puVar10 + (long)*(int *)(param_2 + 3) * 10);
      if (*(char *)puVar14 == '\b') {
        do {
          uVar16 = *puVar10;
          local_c4 = CONCAT13((char)((ulong)uVar16 >> 0x30),
                              CONCAT12((char)((ulong)uVar16 >> 0x20),
                                       CONCAT11((char)((ulong)uVar16 >> 0x10),(char)uVar16)));
          puVar14 = puVar10 + 1;
          puVar10 = (undefined8 *)((long)puVar10 + 10);
          local_c0 = CONCAT22(local_c0._2_2_,
                              *(ushort *)puVar14 >> 8 |
                              (ushort)((*(ushort *)puVar14 & 0xff00ff) << 8));
        } while (puVar10 < puVar12);
      }
      else {
        do {
          local_c4 = CONCAT22(*(ushort *)((long)puVar10 + 2) >> 8 |
                              (ushort)((*(ushort *)((long)puVar10 + 2) & 0xff00ff) << 8),
                              *(ushort *)puVar10 >> 8 |
                              (ushort)((*(ushort *)puVar10 & 0xff00ff) << 8));
          local_c0 = CONCAT22(*(ushort *)((long)puVar10 + 6) >> 8 |
                              (ushort)((*(ushort *)((long)puVar10 + 6) & 0xff00ff) << 8),
                              *(ushort *)((long)puVar10 + 4) >> 8 |
                              (ushort)((*(ushort *)((long)puVar10 + 4) & 0xff00ff) << 8));
          puVar14 = puVar10 + 1;
          puVar10 = (undefined8 *)((long)puVar10 + 10);
          local_bc = *(ushort *)puVar14 >> 8 | (ushort)((*(ushort *)puVar14 & 0xff00ff) << 8);
        } while (puVar10 < puVar12);
      }
    }
LAB_00dc9a98:
    if (param_1 == 0) goto LAB_00dc9ac0;
  }
  else {
    iVar3 = iVar9 + iVar3 * iVar2 + 2;
    *(undefined4 *)(param_1 + 0x4ac) = 0x22;
    local_c4._0_2_ = CONCAT11((char)((uint)iVar3 >> 0x10),(char)((uint)iVar3 >> 0x18));
    local_c4._3_1_ = (undefined)iVar3;
    local_c4._0_3_ = CONCAT12((char)((uint)iVar3 >> 8),(undefined2)local_c4);
    local_c0 = 0x544c5073;
    png_write_data(param_1,&local_c4,8);
    *(undefined4 *)(param_1 + 0x250) = 0x73504c54;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_c0,4);
    *(undefined4 *)(param_1 + 0x4ac) = 0x42;
    if (iVar9 != -1) {
      png_write_data(param_1,auStack_b8,iVar9 + 1);
      png_calculate_crc(param_1,auStack_b8,iVar9 + 1);
    }
    png_write_data(param_1,puVar14,1);
    png_calculate_crc(param_1,puVar14,1);
    if (0 < *(int *)(param_2 + 3)) {
      puVar15 = (ushort *)(param_2[2] + 4);
      do {
        uVar8 = local_c4;
        uVar4 = puVar15[-2];
        if (*(char *)puVar14 == '\b') {
          local_c4._0_2_ = CONCAT11(*(undefined *)(puVar15 + -1),(char)uVar4);
          local_c4._3_1_ = SUB41(uVar8,3);
          local_c4._0_3_ = CONCAT12(*(undefined *)puVar15,(undefined2)local_c4);
          uVar4 = puVar15[1];
          puVar11 = &local_c0;
          puVar13 = (undefined *)((ulong)&local_c4 | 3);
          puVar7 = &local_c0;
        }
        else {
          local_c4 = CONCAT22(puVar15[-1] >> 8 | (ushort)((puVar15[-1] & 0xff00ff) << 8),
                              uVar4 >> 8 | (ushort)((uVar4 & 0xff00ff) << 8));
          uVar4 = puVar15[1];
          puVar11 = (undefined4 *)&local_bc;
          puVar13 = (undefined *)((long)&local_c0 + 3);
          puVar7 = (undefined4 *)&local_bc;
        }
        *puVar13 = (char)uVar4;
        uVar4 = puVar15[2];
        *(char *)((long)puVar7 + 1) = (char)uVar4;
        *(char *)puVar11 = (char)(uVar4 >> 8);
        png_write_data(param_1,&local_c4,iVar2);
        png_calculate_crc(param_1,&local_c4,iVar2);
        puVar1 = puVar15 + 3;
        puVar15 = puVar15 + 5;
      } while (puVar1 < (ushort *)(param_2[2] + (long)*(int *)(param_2 + 3) * 10));
      goto LAB_00dc9a98;
    }
  }
  uVar5 = (*(uint *)(param_1 + 0x284) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x284) & 0xff00ff) << 8;
  local_c8 = uVar5 >> 0x10 | uVar5 << 0x10;
  *(undefined4 *)(param_1 + 0x4ac) = 0x82;
  png_write_data(param_1,&local_c8,4);
LAB_00dc9ac0:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


