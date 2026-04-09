// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df7440
// Entry Point: 00df7440
// Size: 1368 bytes
// Signature: undefined FUN_00df7440(void)


undefined8 FUN_00df7440(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined8 uVar13;
  void *__ptr;
  void *__ptr_00;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined4 uVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  void **ppvVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  
  if (param_2 - 5 < 0xfffffffe) {
    uVar13 = 0xfffffff6;
  }
  else {
    uVar7 = *(uint *)(param_1 + 4);
    uVar8 = *(uint *)(param_1 + 8);
    uVar26 = CONCAT44(0,param_2);
    uVar22 = ~*(uint *)(param_1 + 0x30) & 1;
    uVar20 = (*(uint *)(param_1 + 0x30) >> 1 ^ 0xffffffff) & 1;
    uVar1 = uVar7 + 0x20;
    iVar2 = uVar8 + 0x20;
    iVar6 = (int)uVar1 >> uVar22;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (long)(int)uVar1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (long)iVar2;
    uVar13 = 0xffffffe9;
    uVar24 = (long)(iVar2 >> uVar20) * (long)iVar6;
    uVar25 = (long)(int)uVar1 * (long)iVar2;
    uVar18 = uVar24 * 2;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar26;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar18 + uVar25;
    if ((((SUB168(auVar9 * auVar11,8) == 0) && (uVar24 <= uVar18)) &&
        (CARRY8(uVar18,uVar25) == false)) && (SUB168(auVar10 * auVar12,8) == 0)) {
      __ptr = malloc(uVar26 * (uVar18 + uVar25));
      __ptr_00 = malloc(*(long *)(param_1 + 0x128) << 3);
      *(void **)(param_1 + 0x118) = __ptr_00;
      if ((__ptr == (void *)0x0) || (__ptr_00 == (void *)0x0)) {
        free(__ptr_00);
        free(__ptr);
        uVar13 = 0xffffffff;
      }
      else {
        *(uint *)(param_1 + 0x1a4) = uVar8;
        *(uint *)(param_1 + 0x1a8) = uVar1;
        *(uint *)(param_1 + 0x1a0) = uVar7;
        *(uint *)(param_1 + 0x1d0) = uVar7 >> uVar22;
        *(uint *)(param_1 + 0x1b8) = uVar7 >> uVar22;
        *(uint *)(param_1 + 0x1bc) = uVar8 >> uVar20;
        *(int *)(param_1 + 0x1c0) = iVar6;
        *(uint *)(param_1 + 0x1d4) = uVar8 >> uVar20;
        *(int *)(param_1 + 0x1d8) = iVar6;
        *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_1 + 0x1b8);
        *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_1 + 0x1b0);
        *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_1 + 0x1c8);
        *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_1 + 0x1c0);
        *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_1 + 0x1d8);
        *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_1 + 0x1d0);
        *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_1 + 0x1e0);
        *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0x1a8);
        *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_1 + 0x1a0);
        if (param_2 != 2) {
          *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_1 + 0x1c8);
          *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_1 + 0x1c0);
          *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_1 + 0x1d8);
          *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_1 + 0x1d0);
          *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_1 + 0x1e0);
          *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_1 + 0x1a8);
          *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_1 + 0x1a0);
          *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_1 + 0x1b8);
          *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_1 + 0x1b0);
          if (param_2 != 3) {
            *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x1b8);
            *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_1 + 0x1b0);
            *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_1 + 0x1c8);
            *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_1 + 0x1c0);
            *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_1 + 0x1d8);
            *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_1 + 0x1d0);
            *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_1 + 0x1a8);
            *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 0x1a0);
            *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_1 + 0x1e0);
          }
        }
        if (0 < (int)param_2) {
          lVar23 = param_1 + 0x1a0;
          ppvVar21 = (void **)(param_1 + 0x2c0);
          do {
            *ppvVar21 = __ptr;
            *(ulong *)(lVar23 + 0x10) =
                 (long)__ptr +
                 (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4) + 0x10;
            *(ulong *)(lVar23 + 0x28) =
                 (long)__ptr + uVar25 + (0x10UL >> uVar20) * (long)iVar6 + (0x10UL >> uVar22);
            *(ulong *)(lVar23 + 0x40) =
                 (long)__ptr +
                 uVar25 + ((long)(iVar2 >> uVar20) + (0x10UL >> uVar20)) * (long)iVar6 +
                 (0x10UL >> uVar22);
            oc_ycbcr_buffer_flip(lVar23,lVar23);
            lVar23 = lVar23 + 0x48;
            uVar26 = uVar26 - 1;
            ppvVar21 = ppvVar21 + 1;
            __ptr = (void *)((long)__ptr + uVar24 * 2 + uVar25);
          } while (uVar26 != 0);
        }
        lVar16 = *(long *)(param_1 + 0x2c0);
        *(int *)(param_1 + 0x2e8) = -iVar6;
        lVar23 = *(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0x2e0) = -0x20 - uVar7;
        *(int *)(param_1 + 0x2e4) = -iVar6;
        if (lVar23 < 1) {
          lVar14 = 0;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x1a8);
          lVar14 = 0;
          iVar6 = *(int *)(param_1 + 0x98);
          lVar19 = *(long *)(param_1 + 0x1b0);
          do {
            if (0 < iVar6) {
              lVar3 = lVar14 + iVar6;
              lVar15 = lVar3;
              if (lVar3 <= lVar14 + 1) {
                lVar15 = lVar14 + 1;
              }
              uVar26 = lVar15 - lVar14;
              lVar15 = lVar19;
              if (3 < uVar26) {
                uVar24 = uVar26 & 0xfffffffffffffffc;
                lVar15 = 0;
                lVar4 = lVar14 + uVar24;
                uVar18 = uVar24;
                do {
                  lVar28 = lVar19 + lVar15;
                  uVar18 = uVar18 - 4;
                  plVar5 = (long *)((long)__ptr_00 + lVar15 + lVar14 * 8);
                  lVar15 = lVar15 + 0x20;
                  lVar27 = lVar28 - lVar16;
                  lVar28 = lVar28 - lVar16;
                  plVar5[1] = lVar28 + 8;
                  *plVar5 = lVar27;
                  plVar5[3] = lVar28 + 0x18;
                  plVar5[2] = lVar27 + 0x10;
                } while (uVar18 != 0);
                lVar15 = lVar19 + uVar24 * 8;
                lVar14 = lVar4;
                if (uVar26 == uVar24) goto LAB_00df76d4;
              }
              lVar15 = lVar15 - lVar16;
              do {
                *(long *)((long)__ptr_00 + lVar14 * 8) = lVar15;
                lVar14 = lVar14 + 1;
                lVar15 = lVar15 + 8;
              } while (lVar14 < lVar3);
            }
LAB_00df76d4:
            lVar19 = lVar19 + (long)iVar2 * 8;
          } while (lVar14 < lVar23);
        }
        lVar23 = *(long *)(param_1 + 0xd0) + *(long *)(param_1 + 200);
        if (lVar14 < lVar23) {
          iVar2 = *(int *)(param_1 + 0x1c0);
          iVar6 = *(int *)(param_1 + 0xc0);
          lVar19 = *(long *)(param_1 + 0x1c8);
          do {
            if (0 < iVar6) {
              lVar3 = lVar14 + iVar6;
              lVar15 = lVar3;
              if (lVar3 <= lVar14 + 1) {
                lVar15 = lVar14 + 1;
              }
              uVar26 = lVar15 - lVar14;
              lVar15 = lVar19;
              if (3 < uVar26) {
                uVar24 = uVar26 & 0xfffffffffffffffc;
                lVar15 = 0;
                lVar4 = lVar14 + uVar24;
                uVar18 = uVar24;
                do {
                  lVar28 = lVar19 + lVar15;
                  uVar18 = uVar18 - 4;
                  plVar5 = (long *)((long)__ptr_00 + lVar15 + lVar14 * 8);
                  lVar15 = lVar15 + 0x20;
                  lVar27 = lVar28 - lVar16;
                  lVar28 = lVar28 - lVar16;
                  plVar5[1] = lVar28 + 8;
                  *plVar5 = lVar27;
                  plVar5[3] = lVar28 + 0x18;
                  plVar5[2] = lVar27 + 0x10;
                } while (uVar18 != 0);
                lVar15 = lVar19 + uVar24 * 8;
                lVar14 = lVar4;
                if (uVar26 == uVar24) goto LAB_00df77cc;
              }
              lVar15 = lVar15 - lVar16;
              do {
                *(long *)((long)__ptr_00 + lVar14 * 8) = lVar15;
                lVar14 = lVar14 + 1;
                lVar15 = lVar15 + 8;
              } while (lVar14 < lVar3);
            }
LAB_00df77cc:
            lVar19 = lVar19 + (long)iVar2 * 8;
          } while (lVar14 < lVar23);
        }
        lVar23 = *(long *)(param_1 + 0xf8) + *(long *)(param_1 + 0xf0);
        if (lVar14 < lVar23) {
          iVar2 = *(int *)(param_1 + 0x1d8);
          iVar6 = *(int *)(param_1 + 0xe8);
          lVar19 = *(long *)(param_1 + 0x1e0);
          do {
            if (0 < iVar6) {
              lVar3 = lVar14 + iVar6;
              lVar15 = lVar3;
              if (lVar3 <= lVar14 + 1) {
                lVar15 = lVar14 + 1;
              }
              uVar26 = lVar15 - lVar14;
              lVar15 = lVar19;
              if (3 < uVar26) {
                uVar24 = uVar26 & 0xfffffffffffffffc;
                lVar15 = 0;
                lVar4 = lVar14 + uVar24;
                uVar18 = uVar24;
                do {
                  lVar28 = lVar19 + lVar15;
                  uVar18 = uVar18 - 4;
                  plVar5 = (long *)((long)__ptr_00 + lVar15 + lVar14 * 8);
                  lVar15 = lVar15 + 0x20;
                  lVar27 = lVar28 - lVar16;
                  lVar28 = lVar28 - lVar16;
                  plVar5[1] = lVar28 + 8;
                  *plVar5 = lVar27;
                  plVar5[3] = lVar28 + 0x18;
                  plVar5[2] = lVar27 + 0x10;
                } while (uVar18 != 0);
                lVar14 = lVar4;
                lVar15 = lVar19 + uVar24 * 8;
                if (uVar26 == uVar24) goto LAB_00df78ac;
              }
              lVar15 = lVar15 - lVar16;
              do {
                *(long *)((long)__ptr_00 + lVar14 * 8) = lVar15;
                lVar14 = lVar14 + 1;
                lVar15 = lVar15 + 8;
              } while (lVar14 < lVar3);
            }
LAB_00df78ac:
            lVar19 = lVar19 + (long)iVar2 * 8;
          } while (lVar14 < lVar23);
        }
        uVar13 = 0;
        uVar17 = 3;
        if ((int)param_2 < 4) {
          uVar17 = 0xffffffff;
        }
        *(undefined8 *)(param_1 + 400) = 0xffffffffffffffff;
        *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x19c) = uVar17;
      }
    }
  }
  return uVar13;
}


