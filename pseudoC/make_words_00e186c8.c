// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _make_words
// Entry Point: 00e186c8
// Size: 940 bytes
// Signature: undefined _make_words(void)


void _make_words(long param_1,long param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  void *__ptr;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  int iStack_d4;
  undefined8 local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  undefined8 local_58;
  uint local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar6 = param_2;
  if (param_3 != 0) {
    lVar6 = param_3;
  }
  __ptr = malloc(lVar6 << 2);
  local_50 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  if (param_2 < 1) {
    uStack_c8._0_4_ = 0;
LAB_00e188d4:
    if ((((((local_d0._4_4_ & 1 | (uint)uStack_c8 & 3) != 0) ||
          ((((((uStack_c8 & 0x700000000) != 0 || ((local_c0 & 0xf) != 0)) ||
             ((local_c0 & 0x1f00000000) != 0)) ||
            (((local_b8 & 0x3f) != 0 || ((local_b8 & 0x7f00000000) != 0)))) ||
           ((char)local_b0 != '\0')))) ||
         ((((local_b0 & 0x1ff00000000) != 0 || ((uStack_a8 & 0x3ff) != 0)) ||
          ((uStack_a8 & 0x7ff00000000) != 0)))) ||
        ((((((local_a0 & 0xfff) != 0 || ((local_a0 & 0x1fff00000000) != 0)) ||
           ((local_98 & 0x3fff) != 0)) ||
          (((local_98 & 0x7fff00000000) != 0 || ((short)local_90 != 0)))) ||
         ((((local_90 & 0x1ffff00000000) != 0 ||
           (((uStack_88 & 0x3ffff) != 0 || ((uStack_88 & 0x7ffff00000000) != 0)))) ||
          ((local_80 & 0xfffff) != 0)))))) ||
       (((((local_80 & 0x1fffff00000000) != 0 || ((local_78 & 0x3fffff) != 0)) ||
         ((local_78 & 0x7fffff00000000) != 0)) ||
        (((((local_70 & 0xffffff) != 0 || ((local_70 & 0x1ffffff00000000) != 0)) ||
          (((uStack_68 & 0x3ffffff) != 0 ||
           (((uStack_68 & 0x7ffffff00000000) != 0 || ((local_60 & 0xfffffff) != 0)))))) ||
         (((local_60 & 0x1fffffff00000000) != 0 ||
          (((local_58 & 0x3fffffff) != 0 || ((local_58._4_4_ & 0x7fffffff | local_50) != 0))))))))))
    {
LAB_00e18a40:
      free(__ptr);
      __ptr = (void *)0x0;
      goto LAB_00e18a48;
    }
  }
  else {
    lVar6 = 0;
    lVar5 = 0;
    do {
      bVar2 = *(byte *)(param_1 + lVar6);
      uVar10 = (ulong)bVar2;
      uVar12 = (ulong)(param_3 == 0);
      if (bVar2 != 0) {
        uVar8 = *(uint *)((long)&local_d0 + uVar10 * 4);
        if ((bVar2 < 0x20) && (uVar8 >> (ulong)(bVar2 & 0x1f) != 0)) goto LAB_00e18a40;
        puVar11 = (uint *)((long)&local_d0 + uVar10 * 4);
        *(uint *)((long)__ptr + lVar5 * 4) = uVar8;
        uVar12 = uVar10;
        uVar9 = uVar8;
        uVar4 = local_d0;
        while (local_d0 = uVar4, (uVar9 & 1) == 0) {
          *puVar11 = uVar9 + 1;
          if ((long)uVar12 < 2) goto LAB_00e187b8;
          puVar11 = puVar11 + -1;
          uVar12 = uVar12 - 1;
          uVar4 = local_d0;
          uVar9 = *puVar11;
        }
        if (uVar12 == 1) {
          local_d0._4_4_ = (uint)((ulong)uVar4 >> 0x20);
          local_d0 = CONCAT44(local_d0._4_4_ + 1,(int)uVar4);
LAB_00e187b8:
          if (bVar2 < 0x20) {
LAB_00e187dc:
            lVar7 = uVar10 << 2;
            do {
              uVar9 = *(uint *)((long)&local_d0 + lVar7 + 4);
              if (uVar8 != uVar9 >> 1) break;
              lVar1 = lVar7 + 4;
              *(int *)((long)&local_d0 + lVar7 + 4) = *(int *)((long)&local_d0 + lVar7) << 1;
              lVar7 = lVar1;
              uVar8 = uVar9;
            } while (lVar1 != 0x80);
          }
        }
        else {
          *puVar11 = (&iStack_d4)[uVar12] << 1;
          if (bVar2 < 0x20) goto LAB_00e187dc;
        }
        uVar12 = 1;
      }
      lVar5 = uVar12 + lVar5;
      lVar6 = lVar6 + 1;
    } while (lVar6 != param_2);
    if ((lVar5 != 1) || ((uint)uStack_c8 != 2)) goto LAB_00e188d4;
  }
  if (0 < param_2) {
    lVar6 = 0;
    if (param_3 == 0) {
      do {
        if ((ulong)*(byte *)(param_1 + lVar6) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          uVar12 = 0;
          do {
            uVar9 = (uint)uVar12;
            uVar12 = uVar12 + 1;
            uVar8 = *(uint *)((long)__ptr + lVar6 * 4) >> (ulong)(uVar9 & 0x1f) & 1 | uVar8 << 1;
          } while (*(byte *)(param_1 + lVar6) != uVar12);
        }
        lVar5 = lVar6 + 1;
        *(uint *)((long)__ptr + lVar6 * 4) = uVar8;
        lVar6 = lVar5;
      } while (lVar5 != param_2);
    }
    else {
      lVar5 = 0;
      do {
        bVar2 = *(byte *)(param_1 + lVar6);
        lVar7 = lVar5;
        if ((ulong)bVar2 != 0) {
          uVar8 = 0;
          uVar12 = 0;
          do {
            uVar9 = (uint)uVar12;
            uVar12 = uVar12 + 1;
            uVar8 = *(uint *)((long)__ptr + lVar5 * 4) >> (ulong)(uVar9 & 0x1f) & 1 | uVar8 << 1;
          } while (bVar2 != uVar12);
          if (bVar2 != 0) {
            lVar7 = lVar5 + 1;
            *(uint *)((long)__ptr + lVar5 * 4) = uVar8;
          }
        }
        lVar6 = lVar6 + 1;
        lVar5 = lVar7;
      } while (lVar6 != param_2);
    }
  }
LAB_00e18a48:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__ptr);
}


