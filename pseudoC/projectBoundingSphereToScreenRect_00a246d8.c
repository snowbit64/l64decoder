// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: projectBoundingSphereToScreenRect
// Entry Point: 00a246d8
// Size: 1256 bytes
// Signature: undefined __thiscall projectBoundingSphereToScreenRect(ReflectionRenderController * this, Vector3 * param_1, float param_2, float * param_3, float * param_4, float * param_5, float * param_6)


/* ReflectionRenderController::projectBoundingSphereToScreenRect(Vector3 const&, float, float&,
   float&, float&, float&) */

void __thiscall
ReflectionRenderController::projectBoundingSphereToScreenRect
          (ReflectionRenderController *this,Vector3 *param_1,float param_2,float *param_3,
          float *param_4,float *param_5,float *param_6)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float local_28;
  float fStack_24;
  
  lVar1 = *(long *)(this + 0x10);
  fVar10 = *(float *)param_1;
  fVar16 = *(float *)(param_1 + 4);
  fVar20 = *(float *)(lVar1 + 0x37c);
  fVar22 = fVar16 - *(float *)(lVar1 + 0x358);
  fVar17 = *(float *)(param_1 + 8);
  fVar24 = fVar10 - *(float *)(lVar1 + 0x354);
  fVar11 = *(float *)(lVar1 + 0x378);
  fVar25 = fVar17 - *(float *)(lVar1 + 0x35c);
  fVar18 = *(float *)(lVar1 + 0x36c);
  uVar2 = NEON_fmadd(fVar24,fVar11,fVar22 * fVar20);
  fVar8 = *(float *)(lVar1 + 0x380);
  fVar12 = *(float *)(lVar1 + 0x364);
  fVar3 = (float)NEON_fmadd(fVar25,fVar8,uVar2);
  fVar13 = *(float *)(lVar1 + 0x360);
  fVar3 = fVar3 / param_2;
  uVar2 = NEON_fmadd(fVar24,fVar13,fVar22 * fVar12);
  fVar9 = *(float *)(lVar1 + 0x368);
  fVar4 = (float)NEON_fmadd(fVar25,fVar9,uVar2);
  fVar4 = fVar4 / param_2;
  fVar5 = (float)NEON_fmadd(fVar4,fVar4,fVar3 * fVar3);
  fVar5 = SQRT(fVar5);
  fVar6 = *(float *)(lVar1 + 0x370);
  fVar7 = *(float *)(lVar1 + 0x374);
  fVar4 = atan2f(fVar3,fVar4);
  if (fVar5 <= -1.001 || 1.001 <= fVar5) {
    uVar2 = NEON_fmadd(fVar24,fVar18,fVar22 * fVar6);
    fVar22 = (float)NEON_fmadd(fVar25,fVar7,uVar2);
    fVar5 = acosf(-1.0 / fVar5);
    fVar22 = fVar22 / param_2;
    fVar24 = (float)NEON_fmadd(fVar22,fVar22,fVar3 * fVar3);
    fVar24 = SQRT(fVar24);
    fVar3 = atan2f(fVar3,fVar22);
    if ((fVar24 <= -1.001) || (1.001 <= fVar24)) {
      fVar22 = acosf(-1.0 / fVar24);
      sincosf(fVar4 + fVar5,&fStack_24,&local_28);
      fVar25 = fVar10 + (fVar13 * local_28 + fVar11 * fStack_24) * param_2;
      fVar14 = fVar16 + (fVar12 * local_28 + fVar20 * fStack_24) * param_2;
      fVar24 = fVar17 + (fVar9 * local_28 + fVar8 * fStack_24) * param_2;
      sincosf(fVar4 - fVar5,&fStack_84,&local_88);
      fVar13 = fVar10 + (fVar13 * local_88 + fVar11 * fStack_84) * param_2;
      fVar4 = fVar17 + (fVar9 * local_88 + fVar8 * fStack_84) * param_2;
      fVar9 = fVar16 + (fVar12 * local_88 + fVar20 * fStack_84) * param_2;
      sincosf(fVar3 + fVar22,&fStack_94,&local_98);
      fVar21 = fVar10 + (fVar18 * local_98 + fVar11 * fStack_94) * param_2;
      fVar23 = fVar16 + (fVar6 * local_98 + fVar20 * fStack_94) * param_2;
      fVar5 = fVar17 + (fVar7 * local_98 + fVar8 * fStack_94) * param_2;
      sincosf(fVar3 - fVar22,&local_8c,&local_90);
      fVar12 = *(float *)(lVar1 + 0xec);
      uVar15 = *(undefined4 *)(lVar1 + 0xdc);
      uVar2 = NEON_fmadd(fVar25,uVar15,fVar14 * fVar12);
      uVar19 = *(undefined4 *)(lVar1 + 0xfc);
      fVar3 = (float)NEON_fmadd(fVar24,uVar19,uVar2);
      fVar22 = *(float *)(lVar1 + 0x10c);
      uVar2 = NEON_fmadd(fVar13,uVar15,fVar9 * fVar12);
      fVar16 = fVar16 + (fVar6 * local_90 + fVar20 * local_8c) * param_2;
      fVar20 = (float)NEON_fmadd(fVar4,uVar19,uVar2);
      uVar26 = NEON_fmadd(fVar21,uVar15,fVar23 * fVar12);
      fVar10 = fVar10 + (fVar18 * local_90 + fVar11 * local_8c) * param_2;
      fVar17 = fVar17 + (fVar7 * local_90 + fVar8 * local_8c) * param_2;
      uVar2 = NEON_fmadd(fVar10,uVar15,fVar16 * fVar12);
      fVar8 = (float)NEON_fmadd(fVar5,uVar19,uVar26);
      fVar6 = (float)NEON_fmadd(fVar17,uVar19,uVar2);
      uVar2 = NEON_fmadd(fVar25,*(undefined4 *)(lVar1 + 0xd0),fVar14 * *(float *)(lVar1 + 0xe0));
      uVar15 = NEON_fmadd(fVar13,*(undefined4 *)(lVar1 + 0xd0),fVar9 * *(float *)(lVar1 + 0xe0));
      fVar7 = (float)NEON_fmadd(fVar24,*(undefined4 *)(lVar1 + 0xf0),uVar2);
      fVar4 = (float)NEON_fmadd(fVar4,*(undefined4 *)(lVar1 + 0xf0),uVar15);
      uVar2 = NEON_fmadd(fVar21,*(undefined4 *)(lVar1 + 0xd4),fVar23 * *(float *)(lVar1 + 0xe4));
      fVar9 = (float)NEON_fmadd(fVar5,*(undefined4 *)(lVar1 + 0xf4),uVar2);
      fVar7 = (*(float *)(lVar1 + 0x100) + fVar7) * ABS(1.0 / (fVar22 + fVar3));
      uVar2 = NEON_fmadd(fVar10,*(undefined4 *)(lVar1 + 0xd4),fVar16 * *(float *)(lVar1 + 0xe4));
      fVar4 = (*(float *)(lVar1 + 0x100) + fVar4) * ABS(1.0 / (fVar22 + fVar20));
      fVar5 = (float)NEON_fmadd(fVar17,*(undefined4 *)(lVar1 + 0xf4),uVar2);
      fVar3 = -1.0;
      if ((-1.0 <= fVar7) && (fVar3 = 1.0, fVar7 <= 1.0)) {
        fVar3 = fVar7;
      }
      fVar8 = (*(float *)(lVar1 + 0x104) + fVar9) * ABS(1.0 / (fVar22 + fVar8));
      fVar7 = -1.0;
      if ((-1.0 <= fVar4) && (fVar7 = 1.0, fVar4 <= 1.0)) {
        fVar7 = fVar4;
      }
      fVar5 = (*(float *)(lVar1 + 0x104) + fVar5) * ABS(1.0 / (fVar22 + fVar6));
      fVar4 = -1.0;
      if ((-1.0 <= fVar8) && (fVar4 = 1.0, fVar8 <= 1.0)) {
        fVar4 = fVar8;
      }
      fVar6 = -1.0;
      if ((-1.0 <= fVar5) && (fVar6 = 1.0, fVar5 <= 1.0)) {
        fVar6 = fVar5;
      }
      fVar5 = fVar3;
      if (fVar7 < fVar3) {
        fVar5 = fVar7;
      }
      if (fVar3 < fVar7) {
        fVar3 = fVar7;
      }
      fVar7 = fVar4;
      if (fVar4 < fVar6) {
        fVar7 = fVar6;
      }
      if (fVar6 < fVar4) {
        fVar4 = fVar6;
      }
      *param_3 = fVar5;
      *param_4 = fVar3;
      *param_5 = fVar7;
      goto LAB_00a24b94;
    }
  }
  fVar4 = -1.0;
  *param_3 = -1.0;
  *param_4 = 1.0;
  *param_5 = 1.0;
LAB_00a24b94:
  *param_6 = fVar4;
  return;
}


