// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Divide
// Entry Point: 00cf3f80
// Size: 1240 bytes
// Signature: undefined __cdecl Divide(uint * param_1, uint * param_2, uint * param_3, uint * param_4, ulong param_5, uint * param_6, ulong param_7)


/* CryptoPP::Divide(unsigned int*, unsigned int*, unsigned int*, unsigned int const*, unsigned long,
   unsigned int const*, unsigned long) */

void CryptoPP::Divide(uint *param_1,uint *param_2,uint *param_3,uint *param_4,ulong param_5,
                     uint *param_6,ulong param_7)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  DWord DVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  uint *puVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  size_t __n;
  uint *puVar24;
  long lVar25;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint auStack_78 [4];
  long local_68;
  
  lVar9 = tpidr_el0;
  lVar25 = param_7 - 1;
  local_68 = *(long *)(lVar9 + 0x28);
  puVar3 = (undefined8 *)(param_3 + param_5);
  puVar2 = puVar3 + 1;
  uVar7 = param_6[lVar25];
  *(undefined4 *)((long)puVar2 + lVar25 * 4) = 0;
  *(undefined4 *)(puVar3 + 1) = 0;
  uVar19 = (ulong)(uVar7 == 0);
  puVar1 = (uint *)((long)puVar2 + uVar19 * 4);
  if (puVar1 != param_6) {
    memcpy(puVar1,param_6,(param_7 - uVar19) * 4);
  }
  uVar7 = *(uint *)((long)puVar2 + lVar25 * 4);
  if (uVar7 == 0) {
    uVar23 = 0;
    uVar7 = 0;
  }
  else {
    uVar12 = 0;
    uVar22 = 0x20;
    do {
      uVar8 = uVar12 + uVar22 >> 1;
      uVar23 = uVar8;
      if (uVar7 >> (ulong)(uVar8 & 0x1f) != 0) {
        uVar23 = uVar22;
        uVar12 = uVar8;
      }
      uVar22 = uVar23;
    } while (1 < uVar23 - uVar12);
    uVar7 = 0x20 - uVar23;
  }
  if ((param_7 != 0) && (uVar23 != 0x20)) {
    uVar12 = 0;
    puVar11 = puVar2;
    uVar21 = param_7;
    do {
      uVar21 = uVar21 - 1;
      uVar22 = *(uint *)puVar11 << (ulong)(uVar7 & 0x1f) | uVar12;
      uVar12 = *(uint *)puVar11 >> (ulong)(uVar23 & 0x1f);
      *(uint *)puVar11 = uVar22;
      puVar11 = (undefined8 *)((long)puVar11 + 4);
    } while (uVar21 != 0);
  }
  *puVar3 = 0;
  puVar1 = param_3 + uVar19;
  *param_3 = 0;
  if (puVar1 != param_4) {
    memcpy(puVar1,param_4,param_5 << 2);
  }
  uVar19 = param_5 + 2;
  if ((uVar19 != 0) && (uVar23 != 0x20)) {
    uVar12 = 0;
    puVar13 = param_3;
    uVar21 = uVar19;
    do {
      uVar21 = uVar21 - 1;
      uVar22 = *puVar13 << (ulong)(uVar7 & 0x1f) | uVar12;
      uVar12 = *puVar13 >> (ulong)(uVar23 & 0x1f);
      *puVar13 = uVar22;
      puVar13 = puVar13 + 1;
    } while (uVar21 != 0);
  }
  __n = param_7 * 4;
  if ((param_3[param_5 + 1] != 0) || (1 < *(uint *)puVar3)) {
LAB_00cf41e0:
    iVar16 = *(int *)((long)puVar2 + lVar25 * 4);
    uVar21 = uVar19 - 2;
    iVar6 = *(int *)((long)puVar2 + (__n - 8));
    if (iVar6 == -1) {
      iVar16 = iVar16 + 1;
    }
    if (uVar21 < param_7) {
LAB_00cf43d0:
      if (puVar1 != param_1) {
        memcpy(param_1,puVar1,__n);
      }
      if (uVar23 != 0x20) {
        uVar12 = 0;
        do {
          uVar19 = param_7 - 1;
          uVar22 = param_1[param_7 - 1] >> (ulong)(uVar7 & 0x1f) | uVar12;
          uVar12 = param_1[param_7 - 1] << (ulong)(uVar23 & 0x1f);
          param_1[param_7 - 1] = uVar22;
          param_7 = uVar19;
        } while (uVar19 != 0);
      }
      if (*(long *)(lVar9 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar13 = (uint *)((long)puVar2 + param_7 * 4);
    puVar24 = param_3 + (uVar19 - param_7) + -1;
    puVar20 = param_3 + (uVar19 - 3);
LAB_00cf4264:
    puVar3 = (undefined8 *)(param_3 + uVar21);
    puVar5 = (ulong *)(param_2 + (uVar21 - param_7));
    uStack_80 = puVar3[-1];
    local_88 = *puVar3;
    local_90 = CONCAT44(iVar16,iVar6 + 1);
    DVar10 = DivideFourWordsByTwo<unsigned_int,CryptoPP::DWord>
                       (auStack_78,(DWord_conflict *)&uStack_80,(DWord_conflict *)&local_88,
                        (DWord_conflict *)&local_90);
    *puVar5 = (ulong)DVar10;
    AsymmetricMultiply(puVar13,puVar13 + param_7 + 2,(uint *)puVar5,2,(uint *)puVar2,param_7);
    if (param_7 != 0xfffffffffffffffe) {
      uVar19 = 0;
      lVar25 = 0;
      puVar14 = puVar24;
      puVar15 = param_3 + param_7 + param_5 + 3;
      do {
        uVar19 = uVar19 + 2;
        lVar25 = (lVar25 + (ulong)puVar14[-1]) - (ulong)puVar15[-1];
        puVar14[-1] = (uint)lVar25;
        lVar17 = ((ulong)*puVar14 - (ulong)*puVar15) + (lVar25 >> 0x3f);
        lVar25 = lVar17 >> 0x3f;
        *puVar14 = (uint)lVar17;
        puVar14 = puVar14 + 2;
        puVar15 = puVar15 + 2;
      } while (uVar19 < param_7 + 2);
    }
    if (*(int *)puVar3 == 0) goto LAB_00cf4390;
    do {
      do {
        lVar25 = 0;
        uVar19 = 0;
        lVar17 = 0;
        do {
          puVar14 = (uint *)((long)puVar24 + lVar25);
          puVar15 = (uint *)((long)puVar2 + lVar25);
          uVar19 = uVar19 + 2;
          lVar25 = lVar25 + 8;
          lVar17 = (lVar17 + (ulong)puVar14[-1]) - (ulong)*puVar15;
          puVar14[-1] = (uint)lVar17;
          lVar4 = ((ulong)*puVar14 - (ulong)puVar15[1]) + (lVar17 >> 0x3f);
          lVar17 = lVar4 >> 0x3f;
          *puVar14 = (uint)lVar4;
        } while (uVar19 < param_7);
        *(int *)puVar3 = *(int *)puVar3 + (int)(lVar4 >> 0x3f);
        uVar12 = *(uint *)((long)puVar5 + 4);
        if (*(uint *)puVar5 == 0xffffffff) {
          uVar12 = uVar12 + 1;
        }
        *(uint *)puVar5 = *(uint *)puVar5 + 1;
        *(uint *)((long)puVar5 + 4) = uVar12;
      } while (*(int *)puVar3 != 0);
LAB_00cf4390:
      lVar25 = 0;
      while (param_7 + lVar25 != 0) {
        puVar14 = puVar20 + lVar25;
        lVar17 = lVar25 + 1;
        if (param_3[param_7 + param_5 + lVar17] < *puVar14) break;
        lVar25 = lVar25 + -1;
        if (*puVar14 < param_3[param_7 + param_5 + lVar17]) {
          uVar21 = uVar21 - 2;
          puVar24 = puVar24 + -2;
          puVar20 = puVar20 + -2;
          if (param_7 <= uVar21) goto LAB_00cf4264;
          goto LAB_00cf43d0;
        }
      }
    } while( true );
  }
  puVar11 = (undefined8 *)(param_2 + (param_5 - param_7));
  *puVar11 = 0;
  do {
    iVar16 = *(int *)puVar3;
    puVar18 = puVar3;
    lVar17 = -param_7;
    if (iVar16 == 0) {
      while (lVar17 != 0) {
        uVar12 = *(uint *)((long)puVar18 + __n + 4);
        puVar13 = (uint *)((long)puVar18 + -4);
        if (uVar12 < *puVar13) break;
        uVar19 = param_5;
        puVar18 = (undefined8 *)((long)puVar18 + -4);
        lVar17 = lVar17 + 1;
        if (*puVar13 < uVar12) goto LAB_00cf41e0;
      }
    }
    if (param_7 == 0) {
      lVar17 = 0;
    }
    else {
      uVar19 = 0;
      lVar17 = 0;
      puVar18 = puVar3;
      do {
        puVar13 = (uint *)((long)puVar18 + param_7 * -4 + 4);
        uVar19 = uVar19 + 2;
        lVar17 = (lVar17 + (ulong)puVar13[-1]) - (ulong)*(uint *)(puVar18 + 1);
        puVar13[-1] = (uint)lVar17;
        lVar4 = ((ulong)*puVar13 - (ulong)*(uint *)((long)puVar18 + 0xc)) + (lVar17 >> 0x3f);
        lVar17 = lVar4 >> 0x3f;
        *puVar13 = (uint)lVar4;
        puVar18 = puVar18 + 1;
      } while (uVar19 < param_7);
      iVar16 = *(int *)puVar3;
    }
    *(int *)puVar3 = iVar16 + (int)lVar17;
    *(int *)puVar11 = *(int *)puVar11 + 1;
  } while( true );
}


