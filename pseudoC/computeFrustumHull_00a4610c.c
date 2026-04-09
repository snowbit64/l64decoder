// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeFrustumHull
// Entry Point: 00a4610c
// Size: 684 bytes
// Signature: undefined __cdecl computeFrustumHull(Vector3 * param_1, Matrix4x4 * param_2, float param_3, float * param_4)


/* ShadowRenderController::computeFrustumHull(Vector3 const*, Matrix4x4 const&, float, float (*)
   [2]) */

void ShadowRenderController::computeFrustumHull
               (Vector3 *param_1,Matrix4x4 *param_2,float param_3,float *param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  *(ulong *)param_4 =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * *(float *)(param_1 + 4) +
                (float)((ulong)*(undefined8 *)param_2 >> 0x20) * *(float *)param_1 +
                (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) * *(float *)(param_1 + 8) +
                (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20),
                (float)*(undefined8 *)(param_2 + 0x10) * *(float *)(param_1 + 4) +
                (float)*(undefined8 *)param_2 * *(float *)param_1 +
                (float)*(undefined8 *)(param_2 + 0x20) * *(float *)(param_1 + 8) +
                (float)*(undefined8 *)(param_2 + 0x30));
  *(ulong *)(param_4 + 2) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * *(float *)(param_1 + 0x10)
                + (float)((ulong)*(undefined8 *)param_2 >> 0x20) * *(float *)(param_1 + 0xc) +
                (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) * *(float *)(param_1 + 0x14)
                + (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20),
                (float)*(undefined8 *)(param_2 + 0x10) * *(float *)(param_1 + 0x10) +
                (float)*(undefined8 *)param_2 * *(float *)(param_1 + 0xc) +
                (float)*(undefined8 *)(param_2 + 0x20) * *(float *)(param_1 + 0x14) +
                (float)*(undefined8 *)(param_2 + 0x30));
  *(ulong *)(param_4 + 4) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * *(float *)(param_1 + 0x1c)
                + (float)((ulong)*(undefined8 *)param_2 >> 0x20) * *(float *)(param_1 + 0x18) +
                (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) * *(float *)(param_1 + 0x20)
                + (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20),
                (float)*(undefined8 *)(param_2 + 0x10) * *(float *)(param_1 + 0x1c) +
                (float)*(undefined8 *)param_2 * *(float *)(param_1 + 0x18) +
                (float)*(undefined8 *)(param_2 + 0x20) * *(float *)(param_1 + 0x20) +
                (float)*(undefined8 *)(param_2 + 0x30));
  *(ulong *)(param_4 + 6) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * *(float *)(param_1 + 0x28)
                + (float)((ulong)*(undefined8 *)param_2 >> 0x20) * *(float *)(param_1 + 0x24) +
                (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) * *(float *)(param_1 + 0x2c)
                + (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20),
                (float)*(undefined8 *)(param_2 + 0x10) * *(float *)(param_1 + 0x28) +
                (float)*(undefined8 *)param_2 * *(float *)(param_1 + 0x24) +
                (float)*(undefined8 *)(param_2 + 0x20) * *(float *)(param_1 + 0x2c) +
                (float)*(undefined8 *)(param_2 + 0x30));
  *(ulong *)(param_4 + 8) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * *(float *)(param_1 + 0x34)
                + (float)((ulong)*(undefined8 *)param_2 >> 0x20) * *(float *)(param_1 + 0x30) +
                (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) * *(float *)(param_1 + 0x38)
                + (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20),
                (float)*(undefined8 *)(param_2 + 0x10) * *(float *)(param_1 + 0x34) +
                (float)*(undefined8 *)param_2 * *(float *)(param_1 + 0x30) +
                (float)*(undefined8 *)(param_2 + 0x20) * *(float *)(param_1 + 0x38) +
                (float)*(undefined8 *)(param_2 + 0x30));
  *(ulong *)(param_4 + 10) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * *(float *)(param_1 + 0x40)
                + (float)((ulong)*(undefined8 *)param_2 >> 0x20) * *(float *)(param_1 + 0x3c) +
                (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) * *(float *)(param_1 + 0x44)
                + (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20),
                (float)*(undefined8 *)(param_2 + 0x10) * *(float *)(param_1 + 0x40) +
                (float)*(undefined8 *)param_2 * *(float *)(param_1 + 0x3c) +
                (float)*(undefined8 *)(param_2 + 0x20) * *(float *)(param_1 + 0x44) +
                (float)*(undefined8 *)(param_2 + 0x30));
  *(ulong *)(param_4 + 0xc) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * *(float *)(param_1 + 0x4c)
                + (float)((ulong)*(undefined8 *)param_2 >> 0x20) * *(float *)(param_1 + 0x48) +
                (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) * *(float *)(param_1 + 0x50)
                + (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20),
                (float)*(undefined8 *)(param_2 + 0x10) * *(float *)(param_1 + 0x4c) +
                (float)*(undefined8 *)param_2 * *(float *)(param_1 + 0x48) +
                (float)*(undefined8 *)(param_2 + 0x20) * *(float *)(param_1 + 0x50) +
                (float)*(undefined8 *)(param_2 + 0x30));
  *(ulong *)(param_4 + 0xe) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * *(float *)(param_1 + 0x58)
                + (float)((ulong)*(undefined8 *)param_2 >> 0x20) * *(float *)(param_1 + 0x54) +
                (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) * *(float *)(param_1 + 0x5c)
                + (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20),
                (float)*(undefined8 *)(param_2 + 0x10) * *(float *)(param_1 + 0x58) +
                (float)*(undefined8 *)param_2 * *(float *)(param_1 + 0x54) +
                (float)*(undefined8 *)(param_2 + 0x20) * *(float *)(param_1 + 0x5c) +
                (float)*(undefined8 *)(param_2 + 0x30));
  uVar1 = ConvexHull2DUtil::createHull(param_4,8,param_4);
  if (param_3 == 1.0) {
    return;
  }
  if (uVar1 == 0) {
    return;
  }
  uVar2 = (ulong)uVar1;
  if (uVar1 == 1) {
    fVar8 = 0.0;
    fVar9 = 0.0;
    uVar3 = 0;
  }
  else {
    uVar3 = uVar2 & 0xfffffffe;
    fVar8 = 0.0;
    fVar9 = 0.0;
    puVar5 = (undefined8 *)(param_4 + 2);
    uVar6 = uVar3;
    do {
      uVar6 = uVar6 - 2;
      fVar8 = fVar8 + (float)puVar5[-1] + (float)*puVar5;
      fVar9 = fVar9 + (float)((ulong)puVar5[-1] >> 0x20) + (float)((ulong)*puVar5 >> 0x20);
      puVar5 = puVar5 + 2;
    } while (uVar6 != 0);
    if (uVar3 == uVar2) goto LAB_00a4630c;
  }
  lVar4 = uVar2 - uVar3;
  puVar5 = (undefined8 *)(param_4 + uVar3 * 2);
  do {
    lVar4 = lVar4 + -1;
    fVar8 = fVar8 + (float)*puVar5;
    fVar9 = fVar9 + (float)((ulong)*puVar5 >> 0x20);
    puVar5 = puVar5 + 1;
  } while (lVar4 != 0);
LAB_00a4630c:
  if (uVar1 != 0) {
    fVar8 = fVar8 / (float)(ulong)uVar1;
    fVar9 = fVar9 / (float)(ulong)uVar1;
    if (uVar1 < 4) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar2 & 0xfffffffc;
      uVar6 = uVar3;
      pfVar7 = param_4;
      do {
        uVar6 = uVar6 - 4;
        *pfVar7 = fVar8 + param_3 * (*pfVar7 - fVar8);
        pfVar7[1] = fVar9 + param_3 * (pfVar7[1] - fVar9);
        pfVar7[2] = fVar8 + param_3 * (pfVar7[2] - fVar8);
        pfVar7[3] = fVar9 + param_3 * (pfVar7[3] - fVar9);
        pfVar7[4] = fVar8 + param_3 * (pfVar7[4] - fVar8);
        pfVar7[5] = fVar9 + param_3 * (pfVar7[5] - fVar9);
        pfVar7[6] = fVar8 + param_3 * (pfVar7[6] - fVar8);
        pfVar7[7] = fVar9 + param_3 * (pfVar7[7] - fVar9);
        pfVar7 = pfVar7 + 8;
      } while (uVar6 != 0);
      if (uVar3 == uVar2) {
        return;
      }
    }
    lVar4 = uVar2 - uVar3;
    pfVar7 = param_4 + uVar3 * 2 + 1;
    do {
      lVar4 = lVar4 + -1;
      fVar10 = (float)NEON_fmadd(pfVar7[-1] - fVar8,param_3,fVar8);
      fVar11 = (float)NEON_fmadd(*pfVar7 - fVar9,param_3,fVar9);
      pfVar7[-1] = fVar10;
      *pfVar7 = fVar11;
      pfVar7 = pfVar7 + 2;
    } while (lVar4 != 0);
  }
  return;
}


