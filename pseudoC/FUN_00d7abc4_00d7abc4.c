// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d7abc4
// Entry Point: 00d7abc4
// Size: 1352 bytes
// Signature: undefined FUN_00d7abc4(void)


void FUN_00d7abc4(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  undefined2 *puVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  uint local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  lVar20 = *(long *)(param_1 + 0x250);
  if ((*(int *)(param_1 + 0x15c) != 0) && (*(int *)(lVar20 + 0x40) == 0)) {
    iVar22 = *(int *)(lVar20 + 0x20);
    lVar10 = *(long *)(param_1 + 0x248);
    iVar3 = iVar22 + 7;
    if (-1 < iVar22) {
      iVar3 = iVar22;
    }
    *(int *)(lVar10 + 0x20) = *(int *)(lVar10 + 0x20) + (iVar3 >> 3);
    *(undefined4 *)(lVar20 + 0x20) = 0;
    cVar7 = (**(code **)(lVar10 + 0x10))(param_1);
    if (cVar7 == '\0') {
      uVar9 = 0;
      if (*(long *)(lVar6 + 0x28) == local_68) {
        return;
      }
      goto LAB_00d7b0d8;
    }
    if (0 < *(int *)(param_1 + 0x1a0)) {
      lVar10 = 0;
      do {
        *(undefined4 *)(lVar20 + 0x2c + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(param_1 + 0x1a0));
    }
    *(undefined4 *)(lVar20 + 0x28) = 0;
    *(undefined4 *)(lVar20 + 0x40) = *(undefined4 *)(param_1 + 0x15c);
    if (*(int *)(param_1 + 0x21c) == 0) {
      *(undefined *)(lVar20 + 0x3c) = 0;
    }
  }
  if (*(char *)(lVar20 + 0x3c) == '\0') {
    puVar14 = *(undefined8 **)(param_1 + 0x28);
    lVar15 = *(long *)(param_1 + 0x210);
    iVar3 = *(int *)(param_1 + 0x218);
    lVar10 = *(long *)(lVar20 + 0x18);
    local_a8 = *puVar14;
    uStack_a0 = puVar14[1];
    local_80 = *(undefined8 *)(lVar20 + 0x28);
    uVar8 = *(uint *)(lVar20 + 0x20);
    uVar12 = (ulong)uVar8;
    uStack_78 = *(undefined8 *)(lVar20 + 0x30);
    local_70 = *(undefined4 *)(lVar20 + 0x38);
    local_88 = param_1;
    if (0 < *(int *)(param_1 + 0x1d0)) {
      lVar21 = 0;
LAB_00d7ac98:
      puVar17 = *(undefined2 **)(param_2 + lVar21 * 8);
      lVar18 = *(long *)(lVar20 + lVar21 * 8 + 0xb0);
      if (7 < (int)uVar12) {
LAB_00d7ace4:
        uVar16 = lVar10 >> ((ulong)((int)uVar12 - 8) & 0x3f);
        iVar22 = *(int *)(lVar18 + (uVar16 & 0xff) * 4 + 0x120);
        if (iVar22 == 0) {
          uVar9 = 9;
LAB_00d7ad58:
          uVar8 = FUN_00d7b7dc(&local_a8,lVar10,uVar12,lVar18,uVar9);
          if ((int)uVar8 < 0) goto LAB_00d7b08c;
          uVar12 = (ulong)local_90;
          iVar22 = *(int *)(lVar20 + lVar21 * 4 + 0x150);
          lVar18 = *(long *)(lVar20 + lVar21 * 8 + 0x100);
          lVar10 = local_98;
          if (iVar22 == 0) goto LAB_00d7ad1c;
LAB_00d7ad80:
          if (uVar8 == 0) {
            iVar13 = 0;
          }
          else {
            uVar19 = (uint)uVar12;
            if (((int)(uint)uVar12 < (int)uVar8) &&
               (cVar7 = FUN_00d7b638(&local_a8,lVar10,uVar12,uVar8), lVar10 = local_98,
               uVar19 = local_90, cVar7 == '\0')) goto LAB_00d7b08c;
            uVar12 = (ulong)(uVar19 - uVar8);
            uVar19 = *(uint *)(&DAT_00548b04 + (ulong)uVar8 * 4) & (uint)(lVar10 >> (uVar12 & 0x3f))
            ;
            uVar11 = 0;
            if ((int)uVar19 <= *(int *)(&DAT_00548b04 + (ulong)(uVar8 - 1) * 4)) {
              uVar11 = *(uint *)(&DAT_00548b04 + (ulong)uVar8 * 4);
            }
            iVar13 = uVar19 - uVar11;
          }
          lVar1 = (long)*(int *)(param_1 + lVar21 * 4 + 0x1d4) * 4;
          iVar13 = *(int *)((long)&local_80 + lVar1 + 4) + iVar13;
          *(int *)((long)&local_80 + lVar1 + 4) = iVar13;
          *puVar17 = (short)iVar13;
          if (1 < iVar22) {
            iVar13 = 1;
            do {
              while (7 < (int)uVar12) {
LAB_00d7ae98:
                uVar16 = lVar10 >> ((ulong)((int)uVar12 - 8) & 0x3f);
                iVar4 = *(int *)(lVar18 + (uVar16 & 0xff) * 4 + 0x120);
                if (iVar4 == 0) {
                  uVar9 = 9;
                  goto LAB_00d7aef0;
                }
                uVar12 = (ulong)(uint)((int)uVar12 - iVar4);
                bVar5 = *(byte *)(lVar18 + (uVar16 & 0xff) + 0x520);
                uVar19 = (uint)(bVar5 >> 4);
                uVar8 = bVar5 & 0xf;
                if ((bVar5 & 0xf) == 0) goto LAB_00d7aec8;
LAB_00d7af0c:
                uVar11 = (uint)uVar12;
                if (((int)(uint)uVar12 < (int)uVar8) &&
                   (cVar7 = FUN_00d7b638(&local_a8,lVar10,uVar12,(ulong)uVar8), lVar10 = local_98,
                   uVar11 = local_90, cVar7 == '\0')) goto LAB_00d7b08c;
                uVar12 = (ulong)(uVar11 - uVar8);
                uVar11 = *(uint *)(&DAT_00548b04 + (ulong)uVar8 * 4) &
                         (uint)(lVar10 >> (uVar12 & 0x3f));
                uVar2 = 0;
                if ((int)uVar11 <= *(int *)(&DAT_00548b04 + (ulong)(uVar8 - 1) * 4)) {
                  uVar2 = *(uint *)(&DAT_00548b04 + (ulong)uVar8 * 4);
                }
                puVar17[*(int *)(lVar15 + (long)(int)(uVar19 + iVar13) * 4)] =
                     (short)uVar11 - (short)uVar2;
                iVar13 = uVar19 + iVar13 + 1;
                if (iVar22 <= iVar13) goto LAB_00d7af40;
              }
              cVar7 = FUN_00d7b638(&local_a8,lVar10,uVar12,0);
              if (cVar7 == '\0') goto LAB_00d7b08c;
              uVar12 = (ulong)local_90;
              lVar10 = local_98;
              if (7 < (int)local_90) goto LAB_00d7ae98;
              uVar9 = 1;
LAB_00d7aef0:
              uVar8 = FUN_00d7b7dc(&local_a8,lVar10,uVar12,lVar18,uVar9);
              if ((int)uVar8 < 0) goto LAB_00d7b08c;
              uVar12 = (ulong)local_90;
              uVar19 = uVar8 >> 4;
              uVar8 = uVar8 & 0xf;
              lVar10 = local_98;
              if (uVar8 != 0) goto LAB_00d7af0c;
LAB_00d7aec8:
              if (uVar19 != 0xf) goto LAB_00d7ac84;
              iVar13 = iVar13 + 0x10;
            } while (iVar13 < iVar22);
            goto LAB_00d7af40;
          }
        }
        else {
          uVar12 = (ulong)(uint)((int)uVar12 - iVar22);
          uVar8 = (uint)*(byte *)(lVar18 + (uVar16 & 0xff) + 0x520);
          iVar22 = *(int *)(lVar20 + lVar21 * 4 + 0x150);
          lVar18 = *(long *)(lVar20 + lVar21 * 8 + 0x100);
          if (iVar22 != 0) goto LAB_00d7ad80;
LAB_00d7ad1c:
          if (uVar8 != 0) {
            uVar19 = (uint)uVar12;
            if (((int)(uint)uVar12 < (int)uVar8) &&
               (cVar7 = FUN_00d7b638(&local_a8,lVar10,uVar12,uVar8), lVar10 = local_98,
               uVar19 = local_90, cVar7 == '\0')) goto LAB_00d7b08c;
            uVar12 = (ulong)(uVar19 - uVar8);
          }
        }
        iVar13 = 1;
LAB_00d7af40:
        do {
          if (iVar3 < iVar13) goto LAB_00d7ac84;
          if ((int)uVar12 < 8) {
            cVar7 = FUN_00d7b638(&local_a8,lVar10,uVar12,0);
            if (cVar7 == '\0') goto LAB_00d7b08c;
            uVar12 = (ulong)local_90;
            lVar10 = local_98;
            if (7 < (int)local_90) goto LAB_00d7af84;
            uVar9 = 1;
LAB_00d7afcc:
            uVar8 = FUN_00d7b7dc(&local_a8,lVar10,uVar12,lVar18,uVar9);
            if ((int)uVar8 < 0) goto LAB_00d7b08c;
            uVar12 = (ulong)local_90;
            uVar19 = uVar8 >> 4;
            uVar8 = uVar8 & 0xf;
            lVar10 = local_98;
            if (uVar8 != 0) goto LAB_00d7afe8;
LAB_00d7afb4:
            if (uVar19 != 0xf) goto LAB_00d7ac84;
          }
          else {
LAB_00d7af84:
            uVar16 = lVar10 >> ((ulong)((int)uVar12 - 8) & 0x3f);
            iVar22 = *(int *)(lVar18 + (uVar16 & 0xff) * 4 + 0x120);
            if (iVar22 == 0) {
              uVar9 = 9;
              goto LAB_00d7afcc;
            }
            uVar12 = (ulong)(uint)((int)uVar12 - iVar22);
            bVar5 = *(byte *)(lVar18 + (uVar16 & 0xff) + 0x520);
            uVar19 = (uint)(bVar5 >> 4);
            uVar8 = bVar5 & 0xf;
            if ((bVar5 & 0xf) == 0) goto LAB_00d7afb4;
LAB_00d7afe8:
            uVar11 = (uint)uVar12;
            if (((int)(uint)uVar12 < (int)uVar8) &&
               (cVar7 = FUN_00d7b638(&local_a8,lVar10,uVar12,uVar8), lVar10 = local_98,
               uVar11 = local_90, cVar7 == '\0')) goto LAB_00d7b08c;
            uVar12 = (ulong)(uVar11 - uVar8);
          }
          iVar13 = iVar13 + uVar19 + 1;
        } while( true );
      }
      cVar7 = FUN_00d7b638(&local_a8,lVar10,uVar12,0);
      if (cVar7 != '\0') {
        uVar12 = (ulong)local_90;
        lVar10 = local_98;
        if (7 < (int)local_90) goto LAB_00d7ace4;
        uVar9 = 1;
        goto LAB_00d7ad58;
      }
LAB_00d7b08c:
      uVar9 = 0;
      if (*(long *)(lVar6 + 0x28) == local_68) {
        return;
      }
      goto LAB_00d7b0d8;
    }
    goto LAB_00d7b0e8;
  }
LAB_00d7ac14:
  uVar9 = 1;
  *(int *)(lVar20 + 0x40) = *(int *)(lVar20 + 0x40) + -1;
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
LAB_00d7b0d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
LAB_00d7ac84:
  uVar8 = (uint)uVar12;
  lVar21 = lVar21 + 1;
  if (*(int *)(param_1 + 0x1d0) <= lVar21) goto LAB_00d7b0dc;
  goto LAB_00d7ac98;
LAB_00d7b0dc:
  puVar14 = *(undefined8 **)(param_1 + 0x28);
LAB_00d7b0e8:
  *puVar14 = local_a8;
  puVar14[1] = uStack_a0;
  *(long *)(lVar20 + 0x18) = lVar10;
  *(uint *)(lVar20 + 0x20) = uVar8;
  *(undefined8 *)(lVar20 + 0x30) = uStack_78;
  *(undefined8 *)(lVar20 + 0x28) = local_80;
  *(undefined4 *)(lVar20 + 0x38) = local_70;
  goto LAB_00d7ac14;
}


