// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d7b10c
// Entry Point: 00d7b10c
// Size: 1324 bytes
// Signature: undefined FUN_00d7b10c(void)


void FUN_00d7b10c(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  undefined2 *puVar18;
  int iVar19;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  uint local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar15 = *(long *)(param_1 + 0x250);
  if ((*(int *)(param_1 + 0x15c) != 0) && (*(int *)(lVar15 + 0x40) == 0)) {
    iVar17 = *(int *)(lVar15 + 0x20);
    lVar8 = *(long *)(param_1 + 0x248);
    iVar19 = iVar17 + 7;
    if (-1 < iVar17) {
      iVar19 = iVar17;
    }
    *(int *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) + (iVar19 >> 3);
    *(undefined4 *)(lVar15 + 0x20) = 0;
    cVar4 = (**(code **)(lVar8 + 0x10))(param_1);
    if (cVar4 == '\0') {
LAB_00d7b5f4:
      uVar6 = 0;
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return;
      }
      goto LAB_00d7b608;
    }
    if (0 < *(int *)(param_1 + 0x1a0)) {
      lVar8 = 0;
      do {
        *(undefined4 *)(lVar15 + 0x2c + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(param_1 + 0x1a0));
    }
    *(undefined4 *)(lVar15 + 0x28) = 0;
    *(undefined4 *)(lVar15 + 0x40) = *(undefined4 *)(param_1 + 0x15c);
    if (*(int *)(param_1 + 0x21c) == 0) {
      *(undefined *)(lVar15 + 0x3c) = 0;
    }
  }
  if (*(char *)(lVar15 + 0x3c) == '\0') {
    puVar12 = *(undefined8 **)(param_1 + 0x28);
    local_80 = *(undefined8 *)(lVar15 + 0x28);
    local_a8 = *puVar12;
    uStack_a0 = puVar12[1];
    uStack_78 = *(undefined8 *)(lVar15 + 0x30);
    lVar8 = *(long *)(lVar15 + 0x18);
    uVar5 = *(uint *)(lVar15 + 0x20);
    uVar10 = (ulong)uVar5;
    local_70 = *(undefined4 *)(lVar15 + 0x38);
    local_88 = param_1;
    if (0 < *(int *)(param_1 + 0x1d0)) {
      lVar16 = 0;
      do {
        puVar18 = *(undefined2 **)(param_2 + lVar16 * 8);
        lVar13 = *(long *)(lVar15 + lVar16 * 8 + 0xb0);
        if ((int)uVar10 < 8) {
          cVar4 = FUN_00d7b638(&local_a8,lVar8,uVar10,0);
          if (cVar4 == '\0') goto LAB_00d7b5f4;
          uVar10 = (ulong)local_90;
          lVar8 = local_98;
          if (7 < (int)local_90) goto LAB_00d7b224;
          uVar6 = 1;
LAB_00d7b29c:
          uVar5 = FUN_00d7b7dc(&local_a8,lVar8,uVar10,lVar13,uVar6);
          if ((int)uVar5 < 0) goto LAB_00d7b5f4;
          uVar10 = (ulong)local_90;
          iVar19 = *(int *)(lVar15 + lVar16 * 4 + 0x150);
          lVar13 = *(long *)(lVar15 + lVar16 * 8 + 0x100);
          lVar8 = local_98;
          if (iVar19 != 0) goto LAB_00d7b2c4;
LAB_00d7b25c:
          if (uVar5 != 0) {
            uVar14 = (uint)uVar10;
            if (((int)(uint)uVar10 < (int)uVar5) &&
               (cVar4 = FUN_00d7b638(&local_a8,lVar8,uVar10,uVar5), lVar8 = local_98,
               uVar14 = local_90, cVar4 == '\0')) goto LAB_00d7b5f4;
            uVar10 = (ulong)(uVar14 - uVar5);
          }
          iVar17 = 1;
LAB_00d7b4b0:
          do {
            if ((int)uVar10 < 8) {
              cVar4 = FUN_00d7b638(&local_a8,lVar8,uVar10,0);
              if (cVar4 == '\0') goto LAB_00d7b5f4;
              uVar10 = (ulong)local_90;
              lVar8 = local_98;
              if (7 < (int)local_90) goto LAB_00d7b4f4;
              uVar7 = FUN_00d7b7dc(&local_a8,local_98,uVar10,lVar13,1);
              if ((int)uVar7 < 0) goto LAB_00d7b5f4;
LAB_00d7b544:
              uVar10 = (ulong)local_90;
              uVar5 = (uint)(uVar7 >> 4) & 0xfffffff;
              uVar14 = (uint)uVar7;
              lVar8 = local_98;
              if ((uVar7 & 0xf) != 0) goto LAB_00d7b558;
LAB_00d7b524:
              if (uVar5 != 0xf) break;
            }
            else {
LAB_00d7b4f4:
              uVar7 = lVar8 >> ((ulong)((int)uVar10 - 8) & 0x3f);
              iVar19 = *(int *)(lVar13 + (uVar7 & 0xff) * 4 + 0x120);
              if (iVar19 == 0) {
                uVar7 = FUN_00d7b7dc(&local_a8,lVar8,uVar10,lVar13,9);
                if (-1 < (int)uVar7) goto LAB_00d7b544;
                goto LAB_00d7b5f4;
              }
              uVar10 = (ulong)(uint)((int)uVar10 - iVar19);
              bVar2 = *(byte *)(lVar13 + (uVar7 & 0xff) + 0x520);
              uVar5 = (uint)(bVar2 >> 4);
              uVar14 = (uint)bVar2;
              if ((bVar2 & 0xf) == 0) goto LAB_00d7b524;
LAB_00d7b558:
              uVar14 = uVar14 & 0xf;
              uVar9 = (uint)uVar10;
              if (((int)(uint)uVar10 < (int)uVar14) &&
                 (cVar4 = FUN_00d7b638(&local_a8,lVar8,uVar10,uVar14), lVar8 = local_98,
                 uVar9 = local_90, cVar4 == '\0')) goto LAB_00d7b5f4;
              uVar10 = (ulong)(uVar9 - uVar14);
            }
            iVar17 = iVar17 + uVar5 + 1;
          } while (iVar17 < 0x40);
        }
        else {
LAB_00d7b224:
          uVar7 = lVar8 >> ((ulong)((int)uVar10 - 8) & 0x3f);
          iVar19 = *(int *)(lVar13 + (uVar7 & 0xff) * 4 + 0x120);
          if (iVar19 == 0) {
            uVar6 = 9;
            goto LAB_00d7b29c;
          }
          uVar10 = (ulong)(uint)((int)uVar10 - iVar19);
          uVar5 = (uint)*(byte *)(lVar13 + (uVar7 & 0xff) + 0x520);
          iVar19 = *(int *)(lVar15 + lVar16 * 4 + 0x150);
          lVar13 = *(long *)(lVar15 + lVar16 * 8 + 0x100);
          if (iVar19 == 0) goto LAB_00d7b25c;
LAB_00d7b2c4:
          if (uVar5 == 0) {
            iVar11 = 0;
          }
          else {
            uVar14 = (uint)uVar10;
            if (((int)(uint)uVar10 < (int)uVar5) &&
               (cVar4 = FUN_00d7b638(&local_a8,lVar8,uVar10,uVar5), lVar8 = local_98,
               uVar14 = local_90, cVar4 == '\0')) goto LAB_00d7b5f4;
            uVar10 = (ulong)(uVar14 - uVar5);
            uVar14 = *(uint *)(&DAT_00548b04 + (ulong)uVar5 * 4) & (uint)(lVar8 >> (uVar10 & 0x3f));
            uVar9 = 0;
            if ((int)uVar14 <= *(int *)(&DAT_00548b04 + (ulong)(uVar5 - 1) * 4)) {
              uVar9 = *(uint *)(&DAT_00548b04 + (ulong)uVar5 * 4);
            }
            iVar11 = uVar14 - uVar9;
          }
          iVar17 = 1;
          lVar1 = (long)*(int *)(param_1 + lVar16 * 4 + 0x1d4) * 4;
          iVar11 = *(int *)((long)&local_80 + lVar1 + 4) + iVar11;
          *(int *)((long)&local_80 + lVar1 + 4) = iVar11;
          *puVar18 = (short)iVar11;
          if (iVar19 < 2) goto LAB_00d7b4b0;
          do {
            while (7 < (int)uVar10) {
LAB_00d7b3e0:
              uVar7 = lVar8 >> ((ulong)((int)uVar10 - 8) & 0x3f);
              iVar11 = *(int *)(lVar13 + (uVar7 & 0xff) * 4 + 0x120);
              if (iVar11 == 0) {
                uVar6 = 9;
                goto LAB_00d7b438;
              }
              uVar10 = (ulong)(uint)((int)uVar10 - iVar11);
              bVar2 = *(byte *)(lVar13 + (uVar7 & 0xff) + 0x520);
              uVar14 = (uint)(bVar2 >> 4);
              uVar5 = bVar2 & 0xf;
              if ((bVar2 & 0xf) == 0) goto LAB_00d7b410;
LAB_00d7b454:
              uVar9 = (uint)uVar10;
              if (((int)(uint)uVar10 < (int)uVar5) &&
                 (cVar4 = FUN_00d7b638(&local_a8,lVar8,uVar10,(ulong)uVar5), lVar8 = local_98,
                 uVar9 = local_90, cVar4 == '\0')) goto LAB_00d7b5f4;
              uVar10 = (ulong)(uVar9 - uVar5);
              iVar11 = uVar14 + iVar17;
              uVar14 = *(uint *)(&DAT_00548b04 + (ulong)uVar5 * 4) &
                       (uint)(lVar8 >> (uVar10 & 0x3f));
              uVar9 = 0;
              if ((int)uVar14 <= *(int *)(&DAT_00548b04 + (ulong)(uVar5 - 1) * 4)) {
                uVar9 = *(uint *)(&DAT_00548b04 + (ulong)uVar5 * 4);
              }
              puVar18[*(int *)(jpeg_natural_order + (long)iVar11 * 4)] =
                   (short)uVar14 - (short)uVar9;
              iVar17 = iVar11 + 1;
              if (iVar19 <= iVar17) goto LAB_00d7b474;
            }
            cVar4 = FUN_00d7b638(&local_a8,lVar8,uVar10,0);
            if (cVar4 == '\0') goto LAB_00d7b5f4;
            uVar10 = (ulong)local_90;
            lVar8 = local_98;
            if (7 < (int)local_90) goto LAB_00d7b3e0;
            uVar6 = 1;
LAB_00d7b438:
            uVar5 = FUN_00d7b7dc(&local_a8,lVar8,uVar10,lVar13,uVar6);
            if ((int)uVar5 < 0) goto LAB_00d7b5f4;
            uVar10 = (ulong)local_90;
            uVar14 = uVar5 >> 4;
            uVar5 = uVar5 & 0xf;
            lVar8 = local_98;
            if (uVar5 != 0) goto LAB_00d7b454;
LAB_00d7b410:
            if (uVar14 != 0xf) goto LAB_00d7b47c;
            iVar11 = iVar17 + 0xf;
            iVar17 = iVar17 + 0x10;
          } while (iVar17 < iVar19);
LAB_00d7b474:
          if (iVar11 < 0x3f) goto LAB_00d7b4b0;
        }
LAB_00d7b47c:
        uVar5 = (uint)uVar10;
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)(param_1 + 0x1d0));
      puVar12 = *(undefined8 **)(param_1 + 0x28);
    }
    *puVar12 = local_a8;
    puVar12[1] = uStack_a0;
    *(long *)(lVar15 + 0x18) = lVar8;
    *(uint *)(lVar15 + 0x20) = uVar5;
    *(undefined8 *)(lVar15 + 0x30) = uStack_78;
    *(undefined8 *)(lVar15 + 0x28) = local_80;
    *(undefined4 *)(lVar15 + 0x38) = local_70;
  }
  uVar6 = 1;
  *(int *)(lVar15 + 0x40) = *(int *)(lVar15 + 0x40) + -1;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_00d7b608:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


