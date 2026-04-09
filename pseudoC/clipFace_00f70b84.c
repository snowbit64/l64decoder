// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clipFace
// Entry Point: 00f70b84
// Size: 1224 bytes
// Signature: undefined __cdecl clipFace(btAlignedObjectArray * param_1, btAlignedObjectArray * param_2, btVector3 * param_3, float param_4)


/* btPolyhedralContactClipping::clipFace(btAlignedObjectArray<btVector3> const&,
   btAlignedObjectArray<btVector3>&, btVector3 const&, float) */

void btPolyhedralContactClipping::clipFace
               (btAlignedObjectArray *param_1,btAlignedObjectArray *param_2,btVector3 *param_3,
               float param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  uVar3 = *(uint *)(param_1 + 4);
  if ((int)uVar3 < 2) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  uVar12 = *(undefined4 *)(param_3 + 8);
  uVar9 = *(undefined4 *)param_3;
  uVar11 = *(undefined4 *)(param_3 + 4);
  pfVar1 = (float *)(lVar7 + (ulong)(uVar3 - 1) * 0x10);
  uVar8 = 0;
  uVar13 = NEON_fmadd(uVar9,*pfVar1,param_4);
  uVar13 = NEON_fmadd(uVar11,pfVar1[1],uVar13);
  fVar19 = (float)NEON_fmadd(uVar12,pfVar1[2],uVar13);
  fVar21 = *pfVar1;
  fVar22 = pfVar1[1];
  fVar15 = pfVar1[2];
  do {
    pfVar1 = (float *)(lVar7 + uVar8 * 0x10);
    fVar16 = *pfVar1;
    fVar17 = pfVar1[1];
    fVar18 = pfVar1[2];
    fVar14 = pfVar1[3];
    uVar9 = NEON_fmadd(uVar9,fVar16,param_4);
    uVar9 = NEON_fmadd(uVar11,fVar17,uVar9);
    fVar20 = (float)NEON_fmadd(uVar12,fVar18,uVar9);
    if (0.0 <= fVar19) {
      if (fVar20 < 0.0) {
        uVar6 = *(uint *)(param_2 + 4);
        if (uVar6 == *(uint *)(param_2 + 8)) {
          uVar4 = uVar6 << 1;
          if (uVar6 == 0) {
            uVar4 = 1;
          }
          if ((int)uVar6 < (int)uVar4) {
            if (uVar4 == 0) {
              lVar7 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar7 = (*(code *)PTR_FUN_01048e38)
                                (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4,
                                 0x10);
              uVar6 = *(uint *)(param_2 + 4);
            }
            if (0 < (int)uVar6) {
              lVar5 = 0;
              do {
                uVar10 = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar5);
                ((undefined8 *)(lVar7 + lVar5))[1] =
                     ((undefined8 *)(*(long *)(param_2 + 0x10) + lVar5))[1];
                *(undefined8 *)(lVar7 + lVar5) = uVar10;
                lVar5 = lVar5 + 0x10;
              } while ((ulong)uVar6 * 0x10 - lVar5 != 0);
            }
            if ((*(long *)(param_2 + 0x10) != 0) && (param_2[0x18] != (btAlignedObjectArray)0x0)) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
            }
            uVar6 = *(uint *)(param_2 + 4);
            param_2[0x18] = (btAlignedObjectArray)0x1;
            *(long *)(param_2 + 0x10) = lVar7;
            *(uint *)(param_2 + 8) = uVar4;
          }
        }
        fVar19 = fVar19 / (fVar19 - fVar20);
        puVar2 = (undefined4 *)(*(long *)(param_2 + 0x10) + (long)(int)uVar6 * 0x10);
        puVar2[3] = 0;
        uVar11 = NEON_fmadd(fVar19,fVar16 - fVar21,fVar21);
        uVar12 = NEON_fmadd(fVar19,fVar17 - fVar22,fVar22);
        uVar9 = NEON_fmadd(fVar19,fVar18 - fVar15,fVar15);
        *puVar2 = uVar11;
        puVar2[1] = uVar12;
        puVar2[2] = uVar9;
        uVar6 = *(int *)(param_2 + 4) + 1;
        *(uint *)(param_2 + 4) = uVar6;
        if (uVar6 == *(uint *)(param_2 + 8)) {
          uVar4 = uVar6 * 2;
          if (uVar6 == 0) {
            uVar4 = 1;
          }
          if ((int)uVar6 < (int)uVar4) {
            if (uVar4 == 0) {
              lVar7 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar7 = (*(code *)PTR_FUN_01048e38)
                                (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4,
                                 0x10);
              uVar6 = *(uint *)(param_2 + 4);
            }
            if (0 < (int)uVar6) {
              lVar5 = 0;
              do {
                uVar10 = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar5);
                ((undefined8 *)(lVar7 + lVar5))[1] =
                     ((undefined8 *)(*(long *)(param_2 + 0x10) + lVar5))[1];
                *(undefined8 *)(lVar7 + lVar5) = uVar10;
                lVar5 = lVar5 + 0x10;
              } while ((ulong)uVar6 * 0x10 - lVar5 != 0);
            }
            lVar5 = *(long *)(param_2 + 0x10);
            goto joined_r0x00f70fbc;
          }
        }
        goto LAB_00f70ffc;
      }
    }
    else {
      if (0.0 <= fVar20) {
        uVar6 = *(uint *)(param_2 + 4);
        if (uVar6 == *(uint *)(param_2 + 8)) {
          uVar4 = uVar6 << 1;
          if (uVar6 == 0) {
            uVar4 = 1;
          }
          if ((int)uVar6 < (int)uVar4) {
            if (uVar4 == 0) {
              lVar7 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar7 = (*(code *)PTR_FUN_01048e38)
                                (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4,
                                 0x10);
              uVar6 = *(uint *)(param_2 + 4);
            }
            if (0 < (int)uVar6) {
              lVar5 = 0;
              do {
                uVar10 = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar5);
                ((undefined8 *)(lVar7 + lVar5))[1] =
                     ((undefined8 *)(*(long *)(param_2 + 0x10) + lVar5))[1];
                *(undefined8 *)(lVar7 + lVar5) = uVar10;
                lVar5 = lVar5 + 0x10;
              } while ((ulong)uVar6 * 0x10 - lVar5 != 0);
            }
            if ((*(long *)(param_2 + 0x10) != 0) && (param_2[0x18] != (btAlignedObjectArray)0x0)) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
            }
            uVar6 = *(uint *)(param_2 + 4);
            param_2[0x18] = (btAlignedObjectArray)0x1;
            *(long *)(param_2 + 0x10) = lVar7;
            *(uint *)(param_2 + 8) = uVar4;
          }
        }
        fVar19 = fVar19 / (fVar19 - fVar20);
        puVar2 = (undefined4 *)(*(long *)(param_2 + 0x10) + (long)(int)uVar6 * 0x10);
        puVar2[3] = 0;
        uVar11 = NEON_fmadd(fVar19,fVar16 - fVar21,fVar21);
        uVar12 = NEON_fmadd(fVar19,fVar17 - fVar22,fVar22);
        uVar9 = NEON_fmadd(fVar19,fVar18 - fVar15,fVar15);
        *puVar2 = uVar11;
        puVar2[1] = uVar12;
        puVar2[2] = uVar9;
      }
      else {
        uVar6 = *(uint *)(param_2 + 4);
        if (uVar6 == *(uint *)(param_2 + 8)) {
          uVar4 = uVar6 << 1;
          if (uVar6 == 0) {
            uVar4 = 1;
          }
          if ((int)uVar6 < (int)uVar4) {
            if (uVar4 == 0) {
              lVar7 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              lVar7 = (*(code *)PTR_FUN_01048e38)
                                (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4,
                                 0x10);
              uVar6 = *(uint *)(param_2 + 4);
            }
            if (0 < (int)uVar6) {
              lVar5 = 0;
              do {
                uVar10 = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar5);
                ((undefined8 *)(lVar7 + lVar5))[1] =
                     ((undefined8 *)(*(long *)(param_2 + 0x10) + lVar5))[1];
                *(undefined8 *)(lVar7 + lVar5) = uVar10;
                lVar5 = lVar5 + 0x10;
              } while ((ulong)uVar6 * 0x10 - lVar5 != 0);
            }
            lVar5 = *(long *)(param_2 + 0x10);
joined_r0x00f70fbc:
            if ((lVar5 != 0) && (param_2[0x18] != (btAlignedObjectArray)0x0)) {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
            }
            uVar6 = *(uint *)(param_2 + 4);
            param_2[0x18] = (btAlignedObjectArray)0x1;
            *(long *)(param_2 + 0x10) = lVar7;
            *(uint *)(param_2 + 8) = uVar4;
          }
        }
LAB_00f70ffc:
        pfVar1 = (float *)(*(long *)(param_2 + 0x10) + (long)(int)uVar6 * 0x10);
        *pfVar1 = fVar16;
        pfVar1[1] = fVar17;
        pfVar1[2] = fVar18;
        pfVar1[3] = fVar14;
      }
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    }
    uVar8 = uVar8 + 1;
    if (uVar8 == uVar3) {
      return;
    }
    uVar9 = *(undefined4 *)param_3;
    uVar11 = *(undefined4 *)(param_3 + 4);
    lVar7 = *(long *)(param_1 + 0x10);
    uVar12 = *(undefined4 *)(param_3 + 8);
    fVar21 = fVar16;
    fVar22 = fVar17;
    fVar15 = fVar18;
    fVar19 = fVar20;
  } while( true );
}


