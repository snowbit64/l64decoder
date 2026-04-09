// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPitchedBuffer
// Entry Point: 008bab6c
// Size: 688 bytes
// Signature: undefined __thiscall getPitchedBuffer(SteadyLoopSoundGenerator * this, LoopRuntimeData * param_1, uint param_2, float * param_3, bool param_4)


/* SteadyLoopSoundGenerator::getPitchedBuffer(SteadyLoopSoundGenerator::LoopRuntimeData&, unsigned
   int, float*, bool) */

void __thiscall
SteadyLoopSoundGenerator::getPitchedBuffer
          (SteadyLoopSoundGenerator *this,LoopRuntimeData *param_1,uint param_2,float *param_3,
          bool param_4)

{
  float *pfVar1;
  uint *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined4 *puVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  float *pfVar19;
  ulong uVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  
  lVar9 = (long)*(int *)param_1;
  fVar25 = (float)NEON_fmin(*(undefined4 *)(param_1 + 8),0x49000000);
  if (*(int *)(**(long **)(this + 8) + lVar9 * 0x48 + 0x38) == 1) {
    if ((param_2 != 0) && (lVar9 = *(long *)(*(long *)(this + 0x50) + lVar9 * 8), lVar9 != 0)) {
      uVar10 = (ulong)*(uint *)(param_1 + 0x10);
      do {
        uVar11 = (int)(4096.0 / fVar25) + -4 + (int)uVar10;
        uVar5 = param_2;
        if (uVar11 <= param_2) {
          uVar5 = uVar11;
        }
        uVar20 = (ulong)uVar5;
        iVar8 = ((int)(fVar25 * (float)uVar20) - (int)uVar10) + 4;
        while (0 < iVar8) {
          iVar7 = stb_vorbis_get_samples_float_interleaved
                            (lVar9,1,*(long *)(param_1 + 0x18) + uVar10 * 4,iVar8);
          if (iVar8 - iVar7 != 0 && iVar7 <= iVar8) {
            stb_vorbis_seek_start(lVar9);
          }
          uVar10 = (ulong)(uint)(*(int *)(param_1 + 0x10) + iVar7);
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar7;
          iVar8 = iVar8 - iVar7;
        }
        iVar8 = (int)uVar10;
        if (uVar5 == 0) {
          uVar11 = *(uint *)(param_1 + 0xc);
        }
        else {
          uVar11 = *(uint *)(param_1 + 0xc);
          pfVar19 = param_3;
          do {
            pfVar1 = (float *)(*(long *)(param_1 + 0x18) + (long)((int)uVar11 >> 0xd) * 4);
            fVar21 = (float)AudioMathUtil::lerp(*pfVar1,pfVar1[1],
                                                (float)(uVar11 & 0x1fff) * 0.0001220703);
            fVar21 = fVar21 * *(float *)(param_1 + 4);
            if (param_4) {
              fVar21 = fVar21 + *pfVar19;
            }
            iVar8 = *(int *)(param_1 + 0xc);
            uVar20 = uVar20 - 1;
            *pfVar19 = fVar21;
            uVar11 = iVar8 + (int)(fVar25 * 8192.0);
            *(uint *)(param_1 + 0xc) = uVar11;
            pfVar19 = pfVar19 + 1;
          } while (uVar20 != 0);
          iVar8 = *(int *)(param_1 + 0x10);
        }
        iVar7 = (int)uVar11 >> 0xd;
        uVar6 = iVar8 - iVar7;
        uVar10 = (ulong)uVar6;
        if (uVar6 == 0 || iVar8 < iVar7) {
          uVar10 = 0;
        }
        else {
          puVar12 = *(undefined8 **)(param_1 + 0x18);
          lVar16 = (long)iVar7;
          if ((uVar6 < 8) ||
             ((puVar12 < (undefined8 *)((long)puVar12 + (lVar16 + uVar10) * 4) &&
              ((ulong)((long)puVar12 + lVar16 * 4) < (long)puVar12 + uVar10 * 4)))) {
            uVar20 = 0;
            lVar14 = lVar16;
          }
          else {
            uVar20 = uVar10 & 0xfffffff8;
            lVar14 = uVar20 + lVar16;
            uVar17 = uVar20;
            puVar18 = puVar12;
            do {
              puVar4 = (undefined8 *)((long)puVar18 + lVar16 * 4);
              uVar17 = uVar17 - 8;
              uVar22 = *puVar4;
              uVar24 = puVar4[3];
              uVar23 = puVar4[2];
              puVar18[1] = puVar4[1];
              *puVar18 = uVar22;
              puVar18[3] = uVar24;
              puVar18[2] = uVar23;
              puVar18 = puVar18 + 4;
            } while (uVar17 != 0);
            if (uVar20 == uVar10) goto LAB_008bac00;
          }
          lVar16 = uVar10 - uVar20;
          puVar13 = (undefined4 *)((long)puVar12 + uVar20 * 4);
          puVar15 = (undefined4 *)((long)puVar12 + lVar14 * 4);
          do {
            lVar16 = lVar16 + -1;
            *puVar13 = *puVar15;
            puVar13 = puVar13 + 1;
            puVar15 = puVar15 + 1;
          } while (lVar16 != 0);
        }
LAB_008bac00:
        param_2 = param_2 - uVar5;
        *(uint *)(param_1 + 0xc) = uVar11 & 0x1fff;
        *(int *)(param_1 + 0x10) = (int)uVar10;
      } while (param_2 != 0);
    }
  }
  else if (param_2 != 0) {
    puVar2 = (uint *)(param_1 + 0xc);
    uVar10 = (ulong)param_2;
    lVar9 = **(long **)(this + 8) + lVar9 * 0x48;
    piVar3 = (int *)(lVar9 + 0x40);
    uVar11 = *puVar2;
    do {
      iVar8 = *piVar3;
      if (iVar8 <= (int)uVar11 >> 0xd) {
        *(uint *)(param_1 + 0xc) = uVar11 & 0x1fff;
        iVar8 = *piVar3;
      }
      fVar21 = (float)AudioMathUtil::lerpFixedPoint
                                (*(short **)(lVar9 + 0x30),iVar8,(FixedPoint *)puVar2);
      fVar21 = fVar21 * *(float *)(param_1 + 4);
      if (param_4) {
        fVar21 = fVar21 + *param_3;
      }
      uVar11 = *puVar2;
      uVar10 = uVar10 - 1;
      *param_3 = fVar21;
      uVar11 = uVar11 + (int)(fVar25 * 8192.0);
      *puVar2 = uVar11;
      param_3 = param_3 + 1;
    } while (uVar10 != 0);
  }
  return;
}


