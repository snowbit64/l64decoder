// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f28bc4
// Entry Point: 00f28bc4
// Size: 2848 bytes
// Signature: undefined FUN_00f28bc4(void)


undefined8
FUN_00f28bc4(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
            undefined4 *param_6)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  char *__ptr;
  size_t __size;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  ulong uVar17;
  byte **ppbVar18;
  byte *pbVar19;
  undefined auStack_6f0 [12];
  int local_6e4;
  byte **local_6e0;
  byte **ppbStack_6d8;
  undefined8 local_6d0;
  byte **local_6c8;
  undefined8 *local_6c0;
  byte *apbStack_6a0 [193];
  byte *local_98;
  long lStack_90;
  undefined8 local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  byte *pbStack_68;
  
  puVar5 = (undefined8 *)auStack_6f0;
  ppbVar18 = &local_98;
  local_6c0 = (undefined8 *)0x0;
  local_98 = (byte *)param_3[2];
  lStack_90 = param_3[1] + *param_3;
  local_88 = 0xffffffffffffffff;
  lStack_80 = param_2[2];
  local_6d0 = param_1;
  local_6c8 = &pbStack_68;
  local_78 = param_2[1] + *param_2;
  lStack_70 = param_4 - param_2[3];
  local_6e0 = apbStack_6a0 + 0x44;
  ppbStack_6d8 = (byte **)(param_6 + 0x8e);
  do {
    apbStack_6a0[192] = *ppbVar18;
    pbVar1 = ppbVar18[1];
    pbVar14 = ppbVar18[2];
    if (apbStack_6a0[192] < pbVar1 && pbVar14 != (byte *)0x0) {
      pbVar15 = (byte *)0x0;
      pbVar19 = apbStack_6a0[192];
      do {
        puVar16 = local_6c0;
        pbVar9 = pbVar19 + 1;
        bVar2 = *pbVar19;
        apbStack_6a0[192] = pbVar9;
        switch((ulong)bVar2) {
        case 0:
          break;
        case 1:
          pbVar15 = (byte *)FUN_00f299dc(local_6d0,apbStack_6a0 + 0xc0,pbVar1,
                                         *(undefined *)(param_3 + 3),0);
          break;
        case 2:
          uVar8 = (uint)pbVar19[1];
          apbStack_6a0[192] = pbVar19 + 2;
          goto LAB_00f28cf0;
        case 3:
          uVar8 = (uint)*(ushort *)(pbVar19 + 1);
          apbStack_6a0[192] = pbVar19 + 3;
          goto LAB_00f28cf0;
        case 4:
          uVar8 = *(uint *)(pbVar19 + 1);
          apbStack_6a0[192] = pbVar19 + 5;
LAB_00f28cf0:
          pbVar15 = pbVar15 + *(int *)(param_3 + 5) * uVar8;
          break;
        case 5:
          uVar17 = FUN_00f29cf0(apbStack_6a0 + 0xc0,pbVar1);
          lVar7 = FUN_00f29cf0(apbStack_6a0 + 0xc0,pbVar1);
          if (0x5f < uVar17) {
            __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
            __size = 0x46;
            goto LAB_00f295d8;
          }
          puVar11 = param_6 + uVar17 * 4;
          iVar4 = *(int *)((long)param_3 + 0x2c);
          if (*(char *)(puVar11 + 7) == '\0') {
            pbVar19 = *(byte **)(param_6 + uVar17 * 4 + 6);
            apbStack_6a0[uVar17 * 2 + 1] = *(byte **)(param_6 + uVar17 * 4 + 8);
            apbStack_6a0[uVar17 * 2] = pbVar19;
            *(undefined *)(puVar11 + 7) = 1;
          }
          lVar7 = lVar7 * iVar4;
          goto LAB_00f29424;
        case 6:
          uVar17 = FUN_00f29cf0(apbStack_6a0 + 0xc0,pbVar1);
          if (0x5f < uVar17) {
            __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_00f29508:
            __size = 0x47;
LAB_00f295d8:
            fwrite(__ptr,__size,1,(FILE *)0x2249f40);
            return 0;
          }
          cVar3 = *(char *)(param_6 + uVar17 * 4 + 7);
joined_r0x00f2944c:
          if (cVar3 != '\0') {
            pbVar19 = apbStack_6a0[uVar17 * 2];
            *(byte **)(param_6 + uVar17 * 4 + 8) = apbStack_6a0[uVar17 * 2 + 1];
            *(byte **)(param_6 + uVar17 * 4 + 6) = pbVar19;
          }
          break;
        case 7:
          uVar17 = FUN_00f29cf0(apbStack_6a0 + 0xc0,pbVar1);
          if (0x5f < uVar17) {
            __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_00f295c8:
            __size = 0x40;
            goto LAB_00f295d8;
          }
          if (*(char *)(param_6 + uVar17 * 4 + 7) == '\0') {
            pbVar19 = *(byte **)(param_6 + uVar17 * 4 + 6);
            apbStack_6a0[uVar17 * 2 + 1] = *(byte **)(param_6 + uVar17 * 4 + 8);
            apbStack_6a0[uVar17 * 2] = pbVar19;
            *(undefined *)(param_6 + uVar17 * 4 + 7) = 1;
          }
          param_6[uVar17 * 4 + 6] = 1;
          break;
        case 8:
          uVar17 = FUN_00f29cf0(apbStack_6a0 + 0xc0,pbVar1);
          if (0x5f < uVar17) {
            __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
            __size = 0x41;
            goto LAB_00f295d8;
          }
          if (*(char *)(param_6 + uVar17 * 4 + 7) == '\0') {
            pbVar19 = *(byte **)(param_6 + uVar17 * 4 + 6);
            apbStack_6a0[uVar17 * 2 + 1] = *(byte **)(param_6 + uVar17 * 4 + 8);
            apbStack_6a0[uVar17 * 2] = pbVar19;
            *(undefined *)(param_6 + uVar17 * 4 + 7) = 1;
          }
          param_6[uVar17 * 4 + 6] = 0;
          break;
        case 9:
          uVar17 = FUN_00f29cf0(apbStack_6a0 + 0xc0,pbVar1);
          uVar12 = FUN_00f29cf0(apbStack_6a0 + 0xc0,pbVar1);
          if (0x5f < uVar17) {
            __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
            __size = 0x3f;
            goto LAB_00f295d8;
          }
          if (0x5f < uVar12) {
            __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
            goto LAB_00f295c8;
          }
          if (*(char *)(param_6 + uVar17 * 4 + 7) == '\0') {
            pbVar19 = *(byte **)(param_6 + uVar17 * 4 + 6);
            apbStack_6a0[uVar17 * 2 + 1] = *(byte **)(param_6 + uVar17 * 4 + 8);
            apbStack_6a0[uVar17 * 2] = pbVar19;
            *(undefined *)(param_6 + uVar17 * 4 + 7) = 1;
          }
          *(ulong *)(param_6 + uVar17 * 4 + 8) = uVar12;
          param_6[uVar17 * 4 + 6] = 4;
          break;
        case 10:
          puVar16 = (undefined8 *)((long)puVar5 + -0x620);
          *puVar16 = local_6c0;
          memcpy((undefined *)((long)puVar5 + -0x618),param_6,0x618);
          local_6c0 = puVar16;
          puVar5 = puVar16;
          break;
        case 0xb:
          if (local_6c0 == (undefined8 *)0x0) {
            return 0;
          }
          memcpy(param_6,local_6c0 + 1,0x618);
          local_6c0 = (undefined8 *)*puVar16;
          break;
        case 0xc:
          uVar17 = FUN_00f29cf0(apbStack_6a0 + 0xc0,pbVar1);
          uVar6 = FUN_00f29cf0(apbStack_6a0 + 0xc0,pbVar1);
          if (0x5f < uVar17) {
            __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
            __size = 0x3e;
            goto LAB_00f295d8;
          }
          *param_6 = (int)uVar17;
          param_6[1] = uVar6;
          break;
        case 0xd:
          uVar17 = FUN_00f29cf0(apbStack_6a0 + 0xc0,pbVar1);
          if (0x5f < uVar17) {
            __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
            goto LAB_00f29508;
          }
          *param_6 = (int)uVar17;
          break;
        case 0xe:
          uVar6 = FUN_00f29cf0(apbStack_6a0 + 0xc0,pbVar1);
          param_6[1] = uVar6;
          break;
        case 0xf:
          *param_6 = 0;
          *(byte **)(param_6 + 2) = pbVar9;
          goto LAB_00f292d4;
        case 0x10:
          uVar17 = FUN_00f29cf0(apbStack_6a0 + 0xc0,pbVar1);
          if (0x5f < uVar17) {
            __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
            __size = 0x41;
            goto LAB_00f295d8;
          }
          puVar11 = param_6 + uVar17 * 4;
          if (*(char *)(puVar11 + 7) == '\0') {
            pbVar19 = *(byte **)(param_6 + uVar17 * 4 + 6);
            apbStack_6a0[uVar17 * 2 + 1] = *(byte **)(param_6 + uVar17 * 4 + 8);
            apbStack_6a0[uVar17 * 2] = pbVar19;
            *(undefined *)(puVar11 + 7) = 1;
          }
          uVar6 = 5;
          goto LAB_00f292c8;
        case 0x11:
          uVar17 = FUN_00f29cf0(apbStack_6a0 + 0xc0,pbVar1);
          if (0x5f < uVar17) {
            __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
            __size = 0x49;
            goto LAB_00f295d8;
          }
          uVar12 = 0;
          uVar10 = 0;
          pbVar19 = apbStack_6a0[192];
          pbVar9 = apbStack_6a0[192];
          do {
            if (pbVar9 == pbVar1) {
              fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","getSLEB128",
                      "truncated sleb128 expression");
              fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
              abort();
            }
            bVar2 = *pbVar9;
            pbVar19 = pbVar19 + 1;
            uVar13 = uVar12 & 0x3f;
            uVar12 = uVar12 + 7;
            uVar10 = ((ulong)bVar2 & 0x7f) << uVar13 | uVar10;
            pbVar9 = pbVar9 + 1;
          } while ((char)bVar2 < '\0');
          puVar11 = param_6 + uVar17 * 4;
          uVar13 = -1L << (uVar12 & 0x3f);
          if (((int)uVar12 - 7U < 0x39 & bVar2 >> 6) == 0) {
            uVar13 = 0;
          }
          iVar4 = *(int *)((long)param_3 + 0x2c);
          apbStack_6a0[192] = pbVar19;
          if (*(char *)(puVar11 + 7) == '\0') {
            pbVar19 = *(byte **)(param_6 + uVar17 * 4 + 6);
            apbStack_6a0[uVar17 * 2 + 1] = *(byte **)(param_6 + uVar17 * 4 + 8);
            apbStack_6a0[uVar17 * 2] = pbVar19;
            *(undefined *)(puVar11 + 7) = 1;
          }
          uVar10 = uVar10 | uVar13;
          uVar6 = 2;
          goto LAB_00f2926c;
        case 0x12:
          uVar12 = FUN_00f29cf0(apbStack_6a0 + 0xc0,pbVar1);
          uVar17 = 0;
          uVar10 = 0;
          pbVar19 = apbStack_6a0[192];
          pbVar9 = apbStack_6a0[192];
          do {
            if (pbVar9 == pbVar1) {
              fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","getSLEB128",
                      "truncated sleb128 expression");
              fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
              abort();
            }
            bVar2 = *pbVar9;
            pbVar19 = pbVar19 + 1;
            uVar13 = uVar17 & 0x3f;
            uVar17 = uVar17 + 7;
            uVar10 = ((ulong)bVar2 & 0x7f) << uVar13 | uVar10;
            pbVar9 = pbVar9 + 1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[192] = pbVar19;
          if (0x5f < uVar12) {
            __ptr = "libunwind: malformed DW_CFA_def_cfa_sf DWARF unwind, reg too big\n";
            __size = 0x41;
            goto LAB_00f295d8;
          }
          iVar4 = *(int *)((long)param_3 + 0x2c);
          uVar8 = (uint)(-1L << (uVar17 & 0x3f));
          if (((int)uVar17 - 7U < 0x39 & bVar2 >> 6) == 0) {
            uVar8 = 0;
          }
          *param_6 = (int)uVar12;
          param_6[1] = iVar4 * ((uint)uVar10 | uVar8);
          break;
        case 0x13:
          uVar17 = 0;
          uVar12 = 0;
          pbVar19 = pbVar9;
          do {
            if (pbVar19 == pbVar1) {
              fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","getSLEB128",
                      "truncated sleb128 expression");
              fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
              abort();
            }
            bVar2 = *pbVar19;
            pbVar9 = pbVar9 + 1;
            uVar10 = uVar17 & 0x3f;
            uVar17 = uVar17 + 7;
            uVar12 = ((ulong)bVar2 & 0x7f) << uVar10 | uVar12;
            pbVar19 = pbVar19 + 1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[192] = pbVar9;
          uVar8 = (uint)(-1L << (uVar17 & 0x3f));
          if (((int)uVar17 - 7U < 0x39 & bVar2 >> 6) == 0) {
            uVar8 = 0;
          }
          param_6[1] = *(int *)((long)param_3 + 0x2c) * ((uint)uVar12 | uVar8);
          break;
        case 0x14:
          uVar17 = FUN_00f29cf0(apbStack_6a0 + 0xc0,pbVar1);
          if (0x5f < uVar17) {
            fprintf((FILE *)0x2249f40,
                    "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n"
                    ,uVar17);
            return 0;
          }
          lVar7 = FUN_00f29cf0(apbStack_6a0 + 0xc0,pbVar1);
          puVar11 = param_6 + uVar17 * 4;
          iVar4 = *(int *)((long)param_3 + 0x2c);
          if (*(char *)(puVar11 + 7) == '\0') {
            pbVar19 = *(byte **)(param_6 + uVar17 * 4 + 6);
            apbStack_6a0[uVar17 * 2 + 1] = *(byte **)(param_6 + uVar17 * 4 + 8);
            apbStack_6a0[uVar17 * 2] = pbVar19;
            *(undefined *)(puVar11 + 7) = 1;
          }
          lVar7 = lVar7 * iVar4;
          uVar6 = 3;
          goto LAB_00f29428;
        case 0x15:
          uVar17 = FUN_00f29cf0(apbStack_6a0 + 0xc0,pbVar1);
          if (0x5f < uVar17) {
            __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
            __size = 0x44;
            goto LAB_00f295d8;
          }
          uVar12 = 0;
          uVar10 = 0;
          pbVar19 = apbStack_6a0[192];
          pbVar9 = apbStack_6a0[192];
          do {
            if (pbVar9 == pbVar1) {
              fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","getSLEB128",
                      "truncated sleb128 expression");
              fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
              abort();
            }
            bVar2 = *pbVar9;
            pbVar19 = pbVar19 + 1;
            uVar13 = uVar12 & 0x3f;
            uVar12 = uVar12 + 7;
            uVar10 = ((ulong)bVar2 & 0x7f) << uVar13 | uVar10;
            pbVar9 = pbVar9 + 1;
          } while ((char)bVar2 < '\0');
          puVar11 = param_6 + uVar17 * 4;
          uVar13 = -1L << (uVar12 & 0x3f);
          if (((int)uVar12 - 7U < 0x39 & bVar2 >> 6) == 0) {
            uVar13 = 0;
          }
          iVar4 = *(int *)((long)param_3 + 0x2c);
          apbStack_6a0[192] = pbVar19;
          if (*(char *)(puVar11 + 7) == '\0') {
            pbVar19 = *(byte **)(param_6 + uVar17 * 4 + 6);
            apbStack_6a0[uVar17 * 2 + 1] = *(byte **)(param_6 + uVar17 * 4 + 8);
            apbStack_6a0[uVar17 * 2] = pbVar19;
            *(undefined *)(puVar11 + 7) = 1;
          }
          uVar10 = uVar10 | uVar13;
          uVar6 = 3;
LAB_00f2926c:
          puVar11[6] = uVar6;
          *(ulong *)(puVar11 + 8) = uVar10 * (long)iVar4;
          break;
        case 0x16:
          uVar17 = FUN_00f29cf0(apbStack_6a0 + 0xc0,pbVar1);
          if (0x5f < uVar17) {
            __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
            __size = 0x45;
            goto LAB_00f295d8;
          }
          puVar11 = param_6 + uVar17 * 4;
          if (*(char *)(puVar11 + 7) == '\0') {
            pbVar19 = *(byte **)(param_6 + uVar17 * 4 + 6);
            apbStack_6a0[uVar17 * 2 + 1] = *(byte **)(param_6 + uVar17 * 4 + 8);
            apbStack_6a0[uVar17 * 2] = pbVar19;
            *(undefined *)(puVar11 + 7) = 1;
          }
          uVar6 = 6;
LAB_00f292c8:
          puVar11[6] = uVar6;
          *(byte **)(puVar11 + 8) = apbStack_6a0[192];
LAB_00f292d4:
          lVar7 = FUN_00f29cf0(apbStack_6a0 + 0xc0,pbVar1);
          apbStack_6a0[192] = apbStack_6a0[192] + lVar7;
          break;
        default:
          uVar17 = (ulong)bVar2 & 0x3f;
          bVar2 = bVar2 & 0xc0;
          if (bVar2 == 0x40) {
            pbVar15 = pbVar15 + (uint)(*(int *)(param_3 + 5) * (int)uVar17);
          }
          else {
            if (bVar2 == 0xc0) {
              cVar3 = *(char *)(param_6 + uVar17 * 4 + 7);
              goto joined_r0x00f2944c;
            }
            if (bVar2 != 0x80) {
              return 0;
            }
            local_6e4 = param_5;
            lVar7 = FUN_00f29cf0(apbStack_6a0 + 0xc0,pbVar1);
            iVar4 = *(int *)((long)param_3 + 0x2c);
            if (*(char *)(param_6 + uVar17 * 4 + 7) == '\0') {
              pbVar19 = *(byte **)(param_6 + uVar17 * 4 + 6);
              apbStack_6a0[uVar17 * 2 + 1] = *(byte **)(param_6 + uVar17 * 4 + 8);
              apbStack_6a0[uVar17 * 2] = pbVar19;
              *(undefined *)(param_6 + uVar17 * 4 + 7) = 1;
            }
            param_6[uVar17 * 4 + 6] = 2;
            *(long *)(param_6 + uVar17 * 4 + 8) = lVar7 * iVar4;
            param_5 = local_6e4;
          }
          break;
        case 0x2d:
          if (param_5 == 4) {
            if (*(char *)(param_6 + 0x8f) == '\0') {
              pbVar19 = *ppbStack_6d8;
              local_6e0[1] = ppbStack_6d8[1];
              *local_6e0 = pbVar19;
              *(undefined *)(param_6 + 0x8f) = 1;
            }
            *(ulong *)(param_6 + 0x90) = *(ulong *)(param_6 + 0x90) ^ 1;
          }
          break;
        case 0x2e:
          uVar6 = FUN_00f29cf0(apbStack_6a0 + 0xc0,pbVar1);
          param_6[4] = uVar6;
          break;
        case 0x2f:
          uVar17 = FUN_00f29cf0(apbStack_6a0 + 0xc0,pbVar1);
          if (0x5f < uVar17) {
            __ptr = 
            "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
            __size = 0x53;
            goto LAB_00f295d8;
          }
          lVar7 = FUN_00f29cf0(apbStack_6a0 + 0xc0,pbVar1);
          puVar11 = param_6 + uVar17 * 4;
          iVar4 = *(int *)((long)param_3 + 0x2c);
          if (*(char *)(puVar11 + 7) == '\0') {
            pbVar19 = *(byte **)(param_6 + uVar17 * 4 + 6);
            apbStack_6a0[uVar17 * 2 + 1] = *(byte **)(param_6 + uVar17 * 4 + 8);
            apbStack_6a0[uVar17 * 2] = pbVar19;
            *(undefined *)(puVar11 + 7) = 1;
          }
          lVar7 = -(lVar7 * iVar4);
LAB_00f29424:
          uVar6 = 2;
LAB_00f29428:
          puVar11[6] = uVar6;
          *(long *)(puVar11 + 8) = lVar7;
        }
      } while ((apbStack_6a0[192] < pbVar1) && (pbVar19 = apbStack_6a0[192], pbVar15 < pbVar14));
    }
    ppbVar18 = ppbVar18 + 3;
    if (ppbVar18 == local_6c8) {
      return 1;
    }
  } while( true );
}


