// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: markHeightRegionDirty
// Entry Point: 008ec21c
// Size: 944 bytes
// Signature: undefined __thiscall markHeightRegionDirty(BaseTerrain * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* BaseTerrain::markHeightRegionDirty(unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
BaseTerrain::markHeightRegionDirty
          (BaseTerrain *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int iVar26;
  long lVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  ulong uVar31;
  long lVar32;
  undefined2 uVar33;
  undefined2 uVar34;
  undefined2 uVar35;
  undefined2 uVar36;
  
  if (s_allowTerrainHeightEditing == '\0') {
    return;
  }
  lVar27 = *(long *)(this + 0xe0);
  if (lVar27 != 0) {
    iVar26 = *(int *)(this + 0x90);
    iVar30 = param_3 + param_1;
    uVar7 = iVar26 - 2U;
    if ((int)param_2 <= iVar26) {
      uVar7 = param_2 - 2;
    }
    uVar28 = 0;
    if (1 < (int)param_2) {
      uVar28 = uVar7;
    }
    uVar7 = iVar26 - 2U;
    if ((int)param_1 <= iVar26) {
      uVar7 = param_1 - 2;
    }
    uVar15 = 0;
    if (1 < (int)param_1) {
      uVar15 = uVar7;
    }
    iVar29 = param_4 + param_2;
    uVar7 = iVar30 + 2U;
    if (iVar26 <= (int)(iVar30 + 2U)) {
      uVar7 = iVar26 - 1U;
    }
    uVar9 = 0;
    if (iVar30 + 2 < 0 == SCARRY4(iVar30,2)) {
      uVar9 = uVar7;
    }
    uVar7 = iVar29 + 2U;
    if (iVar26 <= (int)(iVar29 + 2U)) {
      uVar7 = iVar26 - 1U;
    }
    uVar14 = 0;
    if (iVar29 + 2 < 0 == SCARRY4(iVar29,2)) {
      uVar14 = uVar7;
    }
    if ((int)uVar28 < (int)uVar14) {
      iVar30 = uVar28 << 1;
      do {
        uVar7 = uVar28;
        if (uVar28 == 0 || uVar28 - 1 == 0) {
          uVar7 = 1;
        }
        iVar26 = 0;
        if (uVar28 != 0) {
          iVar26 = uVar28 - 1;
        }
        uVar1 = uVar28 + 1;
        if ((int)uVar15 < (int)uVar9) {
          iVar2 = uVar15 << 1;
          iVar29 = uVar15 - 1;
          do {
            iVar8 = *(int *)(this + 0x90);
            lVar32 = *(long *)(this + 0x80);
            uVar13 = iVar8 - 1;
            iVar12 = iVar8 * uVar28;
            iVar10 = iVar29 + (uVar7 - 1) * iVar8;
            uVar11 = uVar1;
            if (uVar13 <= uVar28) {
              uVar11 = uVar13;
            }
            iVar5 = 0;
            if (iVar29 != -1) {
              iVar5 = iVar29;
            }
            uVar6 = iVar29 + 2;
            if (uVar13 <= iVar29 + 1U) {
              uVar6 = uVar13;
            }
            iVar3 = iVar29 + iVar12;
            iVar4 = iVar29 + uVar11 * iVar8;
            iVar29 = iVar29 + 1;
            fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar32 + (ulong)(iVar10 + 1) * 2));
            fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(lVar32 + (ulong)(iVar3 + 1) * 2));
            fVar19 = (float)NEON_ucvtf((uint)*(ushort *)
                                              (lVar32 + (ulong)(uVar6 + iVar8 * iVar26) * 2));
            fVar21 = (float)NEON_ucvtf((uint)*(ushort *)(lVar32 + (ulong)(uVar6 + iVar12) * 2));
            fVar16 = fVar16 - fVar18;
            fVar23 = (float)NEON_ucvtf((uint)*(ushort *)
                                              (lVar32 + (ulong)(uVar11 * iVar8 + iVar5) * 2));
            uVar11 = iVar2 + iVar30 * uVar13;
            fVar21 = fVar21 - fVar18;
            fVar24 = (float)NEON_ucvtf((uint)*(ushort *)(lVar32 + (ulong)(iVar4 + 1) * 2));
            fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(lVar32 + (ulong)(uint)(iVar12 + iVar5) * 2)
                                      );
            iVar2 = iVar2 + 2;
            fVar24 = fVar24 - fVar18;
            fVar25 = fVar25 - fVar18;
            fVar17 = *(float *)(this + 0xa4) *
                     (fVar16 + (fVar25 - (fVar23 - fVar18)) +
                               (((fVar16 + 0.0 + ((fVar19 - fVar18) - fVar21)) - fVar24) - fVar24));
            fVar16 = *(float *)(this + 0xa4) *
                     (fVar25 + fVar25 + ((fVar23 - fVar18) - fVar24) +
                                        ((((fVar16 - (fVar19 - fVar18)) + 0.0) - fVar21) - fVar21));
            uVar20 = NEON_fmadd(fVar16,fVar16,
                                *(float *)(this + 0xa8) * 6.0 * *(float *)(this + 0xa8) * 6.0);
            fVar25 = (float)NEON_fmadd(fVar17,fVar17,uVar20);
            fVar18 = fVar16 * (127.5 / SQRT(fVar25)) + 127.5;
            fVar16 = fVar17 * (127.5 / SQRT(fVar25)) + 127.5;
            uVar22 = NEON_fmin(fVar18,0x437f0000);
            uVar20 = NEON_fmin(fVar16,0x437f0000);
            uVar35 = 0;
            uVar36 = 0;
            if (0.0 <= fVar18) {
              uVar35 = (short)uVar22;
              uVar36 = (short)((uint)uVar22 >> 0x10);
            }
            uVar33 = 0;
            uVar34 = 0;
            if (0.0 <= fVar16) {
              uVar33 = (short)uVar20;
              uVar34 = (short)((uint)uVar20 >> 0x10);
            }
            *(char *)(lVar27 + (ulong)uVar11) = (char)(int)(float)CONCAT22(uVar36,uVar35);
            *(char *)(lVar27 + (ulong)(uVar11 + 1)) = (char)(int)(float)CONCAT22(uVar34,uVar33);
          } while (iVar29 - uVar9 != -1);
        }
        iVar30 = iVar30 + 2;
        uVar28 = uVar1;
      } while (uVar1 != uVar14);
    }
    this[0x108] = (BaseTerrain)0x1;
  }
  iVar29 = param_3 + param_1;
  iVar26 = param_4 + param_2;
  iVar30 = *(int *)(this + 0x90);
  uVar28 = iVar30 - 2;
  uVar7 = uVar28;
  if ((int)param_1 <= (int)uVar28) {
    uVar7 = param_1;
  }
  uVar15 = 0;
  if (-1 < (int)param_1) {
    uVar15 = uVar7;
  }
  if ((int)param_2 <= (int)uVar28) {
    uVar28 = param_2;
  }
  uVar7 = 0;
  if (-1 < (int)param_2) {
    uVar7 = uVar28;
  }
  iVar2 = iVar29;
  if (iVar30 <= iVar29) {
    iVar2 = iVar30 + -1;
  }
  iVar8 = 0;
  if (-1 < iVar29) {
    iVar8 = iVar2;
  }
  iVar29 = iVar26;
  if (iVar30 <= iVar26) {
    iVar29 = iVar30 + -1;
  }
  iVar30 = 0;
  if (-1 < iVar26) {
    iVar30 = iVar29;
  }
  if (((int)uVar15 < iVar8) && ((int)uVar7 < iVar30)) {
    uVar9 = *(uint *)(this + 0x118);
    uVar28 = 0;
    if (uVar9 != 0) {
      uVar28 = uVar7 / uVar9;
    }
    uVar7 = 0;
    if (uVar9 != 0) {
      uVar7 = (iVar30 - 1U) / uVar9;
    }
    if (uVar28 <= uVar7) {
      uVar14 = 0;
      if (uVar9 != 0) {
        uVar14 = uVar15 / uVar9;
      }
      iVar30 = *(int *)(this + 0x128);
      uVar15 = 0;
      if (uVar9 != 0) {
        uVar15 = (iVar8 - 1U) / uVar9;
      }
      do {
        if (uVar14 <= uVar15) {
          iVar26 = *(int *)(this + 0x11c);
          lVar27 = *(long *)(this + 0x120);
          uVar9 = uVar14;
          do {
            uVar31 = (ulong)(iVar26 * uVar28 + uVar9);
            if (*(char *)(lVar27 + uVar31) == '\0') {
              iVar30 = iVar30 + 1;
              *(undefined *)(lVar27 + uVar31) = 1;
              *(int *)(this + 0x128) = iVar30;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 <= uVar15);
        }
        uVar28 = uVar28 + 1;
      } while (uVar28 <= uVar7);
    }
  }
  BaseTerrainSyncer::markVertexRegionDirty
            (*(BaseTerrainSyncer **)(this + 0x170),param_1,param_2,param_3,param_4);
  return;
}


