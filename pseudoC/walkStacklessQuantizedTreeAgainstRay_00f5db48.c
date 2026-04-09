// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: walkStacklessQuantizedTreeAgainstRay
// Entry Point: 00f5db48
// Size: 1200 bytes
// Signature: undefined __thiscall walkStacklessQuantizedTreeAgainstRay(btQuantizedBvh * this, btNodeOverlapCallback * param_1, btVector3 * param_2, btVector3 * param_3, btVector3 * param_4, btVector3 * param_5, int param_6, int param_7)


/* btQuantizedBvh::walkStacklessQuantizedTreeAgainstRay(btNodeOverlapCallback*, btVector3 const&,
   btVector3 const&, btVector3 const&, btVector3 const&, int, int) const */

void __thiscall
btQuantizedBvh::walkStacklessQuantizedTreeAgainstRay
          (btQuantizedBvh *this,btNodeOverlapCallback *param_1,btVector3 *param_2,btVector3 *param_3
          ,btVector3 *param_4,btVector3 *param_5,int param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ushort *puVar10;
  int iVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 local_c0;
  float local_b8 [2];
  undefined8 local_b0;
  float local_a8;
  undefined4 local_a4;
  long local_a0;
  
  lVar4 = tpidr_el0;
  local_a0 = *(long *)(lVar4 + 0x28);
  fVar24 = *(float *)param_2;
  fVar30 = *(float *)(param_2 + 4);
  fVar29 = *(float *)param_3;
  fVar27 = 1e+18;
  fVar31 = *(float *)(param_2 + 8);
  fVar17 = fVar29 - fVar24;
  fVar14 = *(float *)(param_3 + 4) - fVar30;
  fVar12 = *(float *)(param_3 + 8) - fVar31;
  uVar15 = NEON_fmadd(fVar14,fVar14,fVar17 * fVar17);
  fVar16 = (float)NEON_fmadd(fVar12,fVar12,uVar15);
  fVar18 = 1.0 / SQRT(fVar16);
  fVar23 = fVar18 * fVar17;
  fVar20 = fVar18 * fVar14;
  fVar18 = fVar18 * fVar12;
  fVar16 = fVar27;
  if (fVar23 != 0.0) {
    fVar16 = 1.0 / fVar23;
  }
  fVar26 = fVar27;
  if (fVar20 != 0.0) {
    fVar26 = 1.0 / fVar20;
  }
  if (fVar18 != 0.0) {
    fVar27 = 1.0 / fVar18;
  }
  if (param_6 < param_7) {
    fVar32 = (float)NEON_fminnm(fVar29,fVar24);
    if (fVar24 <= fVar29) {
      fVar24 = fVar29;
    }
    fVar29 = (float)NEON_fminnm(*(float *)(param_3 + 4),fVar30);
    fVar33 = (float)NEON_fminnm(*(float *)(param_3 + 8),fVar31);
    uVar15 = NEON_fmadd(fVar20,fVar14,fVar23 * fVar17);
    fVar20 = *(float *)(this + 8);
    fVar17 = *(float *)(this + 0xc);
    fVar23 = *(float *)(this + 0x10);
    fVar14 = (float)NEON_fmadd(fVar18,fVar12,uVar15);
    iVar11 = 0;
    fVar12 = *(float *)param_4 + fVar32;
    if (*(float *)param_4 + fVar32 <= fVar20) {
      fVar12 = fVar20;
    }
    fVar18 = *(float *)param_5 + fVar24;
    if (*(float *)param_5 + fVar24 <= fVar20) {
      fVar18 = fVar20;
    }
    fVar24 = *(float *)(param_5 + 4) + fVar30;
    if (*(float *)(param_5 + 4) + fVar30 <= fVar17) {
      fVar24 = fVar17;
    }
    fVar30 = *(float *)(param_5 + 8) + fVar31;
    if (*(float *)(param_5 + 8) + fVar31 <= fVar23) {
      fVar30 = fVar23;
    }
    fVar31 = *(float *)(param_4 + 4) + fVar29;
    if (*(float *)(param_4 + 4) + fVar29 <= fVar17) {
      fVar31 = fVar17;
    }
    fVar29 = *(float *)(param_4 + 8) + fVar33;
    if (*(float *)(param_4 + 8) + fVar33 <= fVar23) {
      fVar29 = fVar23;
    }
    fVar33 = (float)NEON_fminnm(*(undefined4 *)(this + 0x18),fVar12);
    fVar12 = (float)NEON_fminnm(*(undefined4 *)(this + 0x18),fVar18);
    fVar24 = (float)NEON_fminnm(*(undefined4 *)(this + 0x1c),fVar24);
    fVar32 = (float)NEON_fminnm(*(undefined4 *)(this + 0x20),fVar30);
    fVar30 = (float)NEON_fminnm(*(undefined4 *)(this + 0x1c),fVar31);
    fVar29 = (float)NEON_fminnm(*(undefined4 *)(this + 0x20),fVar29);
    fVar31 = *(float *)(this + 0x28);
    fVar12 = (float)NEON_fmadd(fVar31,fVar12 - fVar20,0x3f800000);
    fVar18 = (float)NEON_fmadd(*(float *)(this + 0x2c),fVar24 - fVar17,0x3f800000);
    fVar24 = (float)NEON_fmadd(*(float *)(this + 0x30),fVar32 - fVar23,0x3f800000);
    uVar1 = (int)(*(float *)(this + 0x2c) * (fVar30 - fVar17)) & 0xfffe;
    uVar2 = (int)(*(float *)(this + 0x30) * (fVar29 - fVar23)) & 0xfffe;
    puVar10 = (ushort *)(*(long *)(this + 0xb8) + (long)param_6 * 0x10);
    do {
      bVar5 = false;
      iVar3 = *(int *)(puVar10 + 6);
      if ((uint)puVar10[3] < ((int)(fVar31 * (fVar33 - fVar20)) & 0xfffeU)) {
LAB_00f5df80:
        if ((-1 < iVar3) || (bVar5)) goto LAB_00f5dde0;
        param_6 = param_6 - *(int *)(puVar10 + 6);
        puVar10 = puVar10 + (long)-*(int *)(puVar10 + 6) * 8;
      }
      else {
        bVar6 = false;
        bVar8 = true;
        if ((uint)*puVar10 <= ((int)fVar12 | 1U)) {
          bVar8 = puVar10[5] <= uVar2;
          bVar6 = uVar2 == puVar10[5];
        }
        bVar7 = false;
        bVar9 = true;
        if ((!bVar8 || bVar6) && (uint)puVar10[2] <= ((int)fVar24 | 1U)) {
          bVar9 = puVar10[4] <= uVar1;
          bVar7 = uVar1 == puVar10[4];
        }
        if ((bVar9 && !bVar7) || (((int)fVar18 | 1U) < (uint)puVar10[1])) goto LAB_00f5df80;
        fVar29 = *(float *)(this + 0x30);
        local_b8[1] = 0.0;
        fVar19 = *(float *)(this + 0x10);
        uVar13 = NEON_ucvtf((ulong)CONCAT24(puVar10[1],(uint)*puVar10),4);
        uVar25 = *(undefined8 *)param_5;
        fVar28 = *(float *)(param_5 + 8);
        fVar23 = (float)*(undefined8 *)(this + 0x28);
        fVar32 = (float)((ulong)*(undefined8 *)(this + 0x28) >> 0x20);
        local_b8[0] = fVar19 + (float)(ulong)(uint)puVar10[2] / fVar29;
        fVar21 = (float)*(undefined8 *)(this + 8);
        fVar22 = (float)((ulong)*(undefined8 *)(this + 8) >> 0x20);
        fVar17 = fVar22 + (float)((ulong)uVar13 >> 0x20) / fVar32;
        *(float *)((ulong)&local_c0 | 4) = fVar17;
        local_c0 = CONCAT44(fVar17 - (float)((ulong)uVar25 >> 0x20),
                            (fVar21 + (float)uVar13 / fVar23) - (float)uVar25);
        uVar13 = NEON_ucvtf((ulong)CONCAT24(puVar10[4],(uint)puVar10[3]),4);
        local_a4 = 0;
        fVar30 = (float)NEON_ucvtf((uint)puVar10[5]);
        local_b0 = CONCAT44(((float)((ulong)uVar13 >> 0x20) / fVar32 + fVar22) -
                            (float)((ulong)*(undefined8 *)param_4 >> 0x20),
                            ((float)uVar13 / fVar23 + fVar21) - (float)*(undefined8 *)param_4);
        fVar23 = (*(float *)(&local_c0 + (ulong)(fVar16 < 0.0) * 2) - *(float *)param_2) * fVar16;
        fVar17 = (*(float *)((ulong)(&local_c0 + (ulong)(fVar26 >= 0.0) * 2) | 4) -
                 *(float *)(param_2 + 4)) * fVar26;
        local_a8 = (fVar30 / fVar29 + fVar19) - *(float *)(param_4 + 8);
        local_b8[0] = local_b8[0] - fVar28;
        if (fVar17 < fVar23) {
LAB_00f5df7c:
          bVar5 = false;
          goto LAB_00f5df80;
        }
        fVar30 = (*(float *)(&local_c0 + (ulong)(fVar16 >= 0.0) * 2) - *(float *)param_2) * fVar16;
        fVar29 = (*(float *)((ulong)(&local_c0 + (ulong)(fVar26 < 0.0) * 2) | 4) -
                 *(float *)(param_2 + 4)) * fVar26;
        if (fVar30 < fVar29) goto LAB_00f5df7c;
        if (fVar29 <= fVar23) {
          fVar29 = fVar23;
        }
        fVar23 = (local_b8[(ulong)(fVar27 >= 0.0) * 4] - *(float *)(param_2 + 8)) * fVar27;
        if (fVar23 < fVar29) goto LAB_00f5df7c;
        fVar30 = (float)NEON_fminnm(fVar17,fVar30);
        fVar17 = (local_b8[(ulong)(fVar27 < 0.0) * 4] - *(float *)(param_2 + 8)) * fVar27;
        if (fVar30 < fVar17) goto LAB_00f5df7c;
        if (fVar17 <= fVar29) {
          fVar17 = fVar29;
        }
        fVar23 = (float)NEON_fminnm(fVar23,fVar30);
        bVar5 = fVar17 < fVar14 && 0.0 < fVar23;
        if ((iVar3 < 0) || (fVar17 >= fVar14 || 0.0 >= fVar23)) goto LAB_00f5df80;
        (**(code **)(*(long *)param_1 + 0x10))
                  (param_1,(int)*(uint *)(puVar10 + 6) >> 0x15,*(uint *)(puVar10 + 6) & 0x1fffff);
LAB_00f5dde0:
        puVar10 = puVar10 + 8;
        param_6 = param_6 + 1;
      }
      iVar11 = iVar11 + 1;
    } while (param_6 < param_7);
  }
  else {
    iVar11 = 0;
  }
  if (maxIterations < iVar11) {
    maxIterations = iVar11;
  }
  if (*(long *)(lVar4 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


