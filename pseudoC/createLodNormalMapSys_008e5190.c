// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createLodNormalMapSys
// Entry Point: 008e5190
// Size: 500 bytes
// Signature: undefined createLodNormalMapSys(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BaseTerrain::createLodNormalMapSys() */

undefined8 BaseTerrain::createLodNormalMapSys(void)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  long in_x0;
  void *pvVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  undefined2 uVar28;
  undefined2 uVar29;
  undefined2 uVar30;
  undefined2 uVar31;
  
  if (*(void **)(in_x0 + 0xe0) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0xe0));
  }
  uVar4 = *(uint *)(in_x0 + 0x90);
  uVar25 = (ulong)uVar4;
  *(undefined8 *)(in_x0 + 0xe0) = 0;
  uVar6 = uVar4 - 1;
  pvVar17 = operator_new__((ulong)(uVar6 * uVar6 * 2));
  if (uVar6 != 0) {
    lVar19 = 0;
    uVar21 = 0;
    fVar27 = *(float *)(in_x0 + 0xa8) * 6.0;
    fVar26 = *(float *)(in_x0 + 0xa4);
    lVar20 = *(long *)(in_x0 + 0x80);
    uVar22 = 1;
    uVar23 = uVar25;
    do {
      uVar24 = 0;
      uVar3 = uVar21;
      if (uVar21 < 2) {
        uVar3 = 1;
      }
      iVar5 = uVar21 * uVar4;
      uVar21 = uVar21 + 1;
      uVar18 = uVar22;
      do {
        uVar1 = uVar4 * (uVar3 - 1) + uVar24;
        iVar2 = 0;
        if (uVar24 != 0) {
          iVar2 = (int)uVar24 + -1;
        }
        fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar20 + (lVar19 + uVar24 & 0xffffffff) * 2));
        fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar20 + (uVar1 & 0xffffffff) * 2));
        fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar20 + (ulong)((int)uVar1 + 1) * 2));
        fVar12 = (float)NEON_ucvtf((uint)*(ushort *)
                                          (lVar20 + (ulong)((int)(lVar19 + uVar24) + 1) * 2));
        fVar8 = fVar8 - fVar7;
        fVar14 = (float)NEON_ucvtf((uint)*(ushort *)
                                          (lVar20 + (ulong)(uint)((int)uVar23 + (int)uVar24) * 2));
        fVar12 = fVar12 - fVar7;
        fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar20 + (ulong)(iVar2 + uVar21 * uVar4) * 2));
        uVar24 = uVar24 + 1;
        fVar14 = fVar14 - fVar7;
        fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar20 + (ulong)(uint)(iVar2 + iVar5) * 2));
        fVar16 = fVar16 - fVar7;
        fVar9 = fVar26 * (fVar8 + (fVar16 - (fVar15 - fVar7)) +
                                  (((fVar8 + 0.0 + ((fVar10 - fVar7) - fVar12)) - fVar14) - fVar14))
        ;
        fVar7 = fVar26 * (fVar16 + fVar16 + ((fVar15 - fVar7) - fVar14) +
                                            ((((fVar8 - (fVar10 - fVar7)) + 0.0) - fVar12) - fVar12)
                         );
        uVar11 = NEON_fmadd(fVar7,fVar7,fVar27 * fVar27);
        fVar16 = (float)NEON_fmadd(fVar9,fVar9,uVar11);
        fVar7 = fVar7 * (127.5 / SQRT(fVar16)) + 127.5;
        fVar16 = fVar9 * (127.5 / SQRT(fVar16)) + 127.5;
        uVar13 = NEON_fmin(fVar7,0x437f0000);
        uVar11 = NEON_fmin(fVar16,0x437f0000);
        uVar28 = 0;
        uVar29 = 0;
        uVar30 = uVar28;
        uVar31 = uVar29;
        if (0.0 <= fVar7) {
          uVar30 = (short)uVar13;
          uVar31 = (short)((uint)uVar13 >> 0x10);
        }
        if (0.0 <= fVar16) {
          uVar28 = (undefined2)uVar11;
          uVar29 = (undefined2)((uint)uVar11 >> 0x10);
        }
        *(char *)((long)pvVar17 + (ulong)(uVar18 - 1)) = (char)(int)(float)CONCAT22(uVar31,uVar30);
        *(char *)((long)pvVar17 + (ulong)uVar18) = (char)(int)(float)CONCAT22(uVar29,uVar28);
        uVar18 = uVar18 + 2;
      } while (uVar6 != uVar24);
      uVar23 = uVar23 + uVar25;
      lVar19 = lVar19 + uVar25;
      uVar22 = uVar22 + uVar4 * 2 + -2;
    } while (uVar21 != uVar6);
  }
  *(void **)(in_x0 + 0xe0) = pvVar17;
  return 1;
}


