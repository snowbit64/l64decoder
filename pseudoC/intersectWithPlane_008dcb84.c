// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: intersectWithPlane
// Entry Point: 008dcb84
// Size: 464 bytes
// Signature: undefined __cdecl intersectWithPlane(float * param_1, float * param_2, Matrix4x4 * param_3, Plane * param_4, Vector3 * param_5, Vector3 * param_6)


/* TensionBeltGeometryUtil::intersectWithPlane(float const*, float const*, Matrix4x4 const&, Plane
   const&, Vector3&, Vector3&) */

void TensionBeltGeometryUtil::intersectWithPlane
               (float *param_1,float *param_2,Matrix4x4 *param_3,Plane *param_4,Vector3 *param_5,
               Vector3 *param_6)

{
  long lVar1;
  byte bVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_4c;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar3 = *param_1;
  fVar7 = param_1[1];
  fVar12 = *param_2;
  fVar14 = param_2[1];
  fVar13 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar11 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  fVar10 = param_1[2];
  fVar17 = (float)*(undefined8 *)param_3;
  fVar18 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  uVar4 = NEON_fmadd(fVar3,*(undefined4 *)(param_3 + 8),fVar7 * *(float *)(param_3 + 0x18));
  uVar8 = NEON_fmadd(fVar12,*(undefined4 *)(param_3 + 8),fVar14 * *(float *)(param_3 + 0x18));
  fVar16 = param_2[2];
  fVar19 = (float)*(undefined8 *)(param_3 + 0x20);
  fVar20 = (float)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20);
  local_40 = (float)NEON_fmadd(fVar10,*(undefined4 *)(param_3 + 0x28),uVar4);
  fVar9 = (float)NEON_fmadd(fVar16,*(undefined4 *)(param_3 + 0x28),uVar8);
  fVar5 = (float)*(undefined8 *)(param_3 + 0x30);
  fVar15 = fVar5 + fVar13 * fVar7 + fVar17 * fVar3 + fVar19 * fVar10;
  fVar6 = (float)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20);
  fVar3 = fVar6 + fVar11 * fVar7 + fVar18 * fVar3 + fVar20 * fVar10;
  fVar5 = fVar5 + fVar13 * fVar14 + fVar17 * fVar12 + fVar19 * fVar16;
  fVar6 = fVar6 + fVar11 * fVar14 + fVar18 * fVar12 + fVar20 * fVar16;
  local_40 = *(float *)(param_3 + 0x38) + local_40;
  fVar9 = *(float *)(param_3 + 0x38) + fVar9;
  fVar7 = fVar5 - fVar15;
  fVar10 = fVar6 - fVar3;
  local_48 = CONCAT44(fVar3,fVar15);
  fVar3 = fVar9 - local_40;
  *(ulong *)param_6 = CONCAT44(fVar10,fVar7);
  *(float *)(param_6 + 8) = fVar3;
  fVar13 = (float)NEON_fmadd(fVar3,*(undefined4 *)(param_4 + 8),
                             *(float *)(param_4 + 4) * fVar10 + *(float *)param_4 * fVar7);
  if (fVar13 < 0.0) {
    local_48 = CONCAT44(fVar6,fVar5);
    *(ulong *)param_6 = CONCAT44(-fVar10,-fVar7);
    *(float *)(param_6 + 8) = -fVar3;
    local_40 = fVar9;
  }
  bVar2 = Plane::intersectionWithLine(param_4,(Vector3 *)&local_48,param_6,&local_4c);
  fVar3 = 1.0;
  if ((bVar2 & 0.0 <= local_4c & local_4c <= 1.0) == 1) {
    *(undefined8 *)param_5 = local_48;
    *(float *)(param_5 + 8) = local_40;
    uVar4 = NEON_fmadd(*(undefined4 *)param_6,local_4c,*(undefined4 *)param_5);
    *(undefined4 *)param_5 = uVar4;
    uVar4 = NEON_fmadd(*(undefined4 *)(param_6 + 4),local_4c,*(undefined4 *)(param_5 + 4));
    *(undefined4 *)(param_5 + 4) = uVar4;
    uVar4 = NEON_fmadd(*(undefined4 *)(param_6 + 8),local_4c,*(undefined4 *)(param_5 + 8));
    *(undefined4 *)(param_5 + 8) = uVar4;
    fVar7 = *(float *)param_6;
    fVar5 = *(float *)(param_6 + 4);
    uVar4 = NEON_fmadd(fVar7,fVar7,fVar5 * fVar5);
    fVar6 = *(float *)(param_6 + 8);
    fVar9 = (float)NEON_fmadd(fVar6,fVar6,uVar4);
    if (1e-06 < fVar9) {
      fVar3 = 1.0 / SQRT(fVar9);
    }
    *(float *)param_6 = fVar7 * fVar3;
    *(float *)(param_6 + 4) = fVar5 * fVar3;
    *(float *)(param_6 + 8) = fVar6 * fVar3;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


