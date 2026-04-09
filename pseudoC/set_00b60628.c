// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set
// Entry Point: 00b60628
// Size: 544 bytes
// Signature: undefined __thiscall set(BoundingAxisAlignedBox * this, BoundingVolume * param_1, Matrix4x4 * param_2)


/* BoundingAxisAlignedBox::set(BoundingVolume const*, Matrix4x4 const*) */

void __thiscall
BoundingAxisAlignedBox::set(BoundingAxisAlignedBox *this,BoundingVolume *param_1,Matrix4x4 *param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  undefined8 uVar6;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  
  iVar1 = BoundingVolume::getType();
  if (iVar1 == 0) {
    fVar4 = *(float *)(param_1 + 0x18);
    fVar18 = *(float *)(param_2 + 0x18);
    fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    fVar2 = (float)*(undefined8 *)(param_2 + 0x10);
    uVar24 = *(undefined4 *)(param_2 + 8);
    fVar7 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    fVar11 = (float)*(undefined8 *)param_2;
    uVar3 = NEON_fmadd(uVar24,0,fVar18 * fVar4);
    uVar28 = NEON_fmadd(uVar24,0,fVar18 * 0.0);
    fVar14 = (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
    fVar10 = fVar4 * fVar5 + fVar7 * 0.0 + fVar14 * 0.0;
    fVar17 = fVar5 * 0.0 + fVar7 * 0.0 + fVar4 * fVar14;
    fVar9 = (float)*(undefined8 *)(param_2 + 0x20);
    fVar21 = fVar4 * fVar2 + fVar11 * 0.0 + fVar9 * 0.0;
    fVar15 = fVar2 * 0.0 + fVar11 * 0.0 + fVar4 * fVar9;
    uVar27 = *(undefined4 *)(param_2 + 0x28);
    fVar16 = fVar5 * 0.0 + fVar4 * fVar7 + fVar14 * 0.0;
    fVar26 = fVar2 * 0.0 + fVar4 * fVar11 + fVar9 * 0.0;
    uVar8 = NEON_fmadd(fVar21,fVar21,fVar10 * fVar10);
    uVar22 = NEON_fmadd(uVar27,0,uVar3);
    uVar25 = NEON_fmadd(fVar4,uVar27,uVar28);
    uVar28 = NEON_fmadd(fVar15,fVar15,fVar17 * fVar17);
    uVar3 = NEON_fmadd(fVar4,uVar24,fVar18 * 0.0);
    fVar17 = (float)NEON_fmadd(uVar22,uVar22,uVar8);
    fVar4 = (float)NEON_fmadd(uVar25,uVar25,uVar28);
    uVar3 = NEON_fmadd(uVar27,0,uVar3);
    uVar8 = NEON_fmadd(fVar26,fVar26,fVar16 * fVar16);
    fVar10 = (float)NEON_fmadd(uVar3,uVar3,uVar8);
    if (fVar4 <= fVar17) {
      fVar4 = fVar17;
    }
    if (fVar4 <= fVar10) {
      fVar4 = fVar10;
    }
    fVar4 = SQRT(fVar4);
    fVar21 = *(float *)(param_1 + 0xc);
    fVar10 = *(float *)(param_1 + 0x10);
    uVar3 = NEON_fmadd(fVar21,uVar24,fVar10 * fVar18);
    fVar18 = *(float *)(param_1 + 0x14);
    fVar17 = (float)NEON_fmadd(fVar18,uVar27,uVar3);
    fVar11 = fVar2 * fVar10 + fVar11 * fVar21 + fVar9 * fVar18 +
             (float)*(undefined8 *)(param_2 + 0x30);
    fVar5 = fVar5 * fVar10 + fVar7 * fVar21 + fVar14 * fVar18 +
            (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
    fVar2 = (*(float *)(param_2 + 0x38) + fVar17) - fVar4;
    uVar6 = CONCAT44(fVar5 - fVar4,fVar11 - fVar4);
    uVar13 = CONCAT44(fVar5 + fVar4,fVar11 + fVar4);
    fVar4 = *(float *)(param_2 + 0x38) + fVar17 + fVar4;
  }
  else {
    iVar1 = BoundingVolume::getType();
    if (iVar1 != 1) {
      uVar6 = *(undefined8 *)(this + 0x1c);
      uVar13 = *(undefined8 *)(this + 0x28);
      fVar2 = *(float *)(this + 0x24);
      fVar4 = *(float *)(this + 0x30);
      goto LAB_00b60814;
    }
    fVar2 = *(float *)(param_1 + 0x1c);
    fVar5 = *(float *)(param_1 + 0x20);
    fVar14 = *(float *)(param_1 + 0x2c);
    fVar20 = *(float *)(param_1 + 0x30);
    fVar18 = (float)*(undefined8 *)(param_2 + 0x10);
    fVar21 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    fVar23 = *(float *)(param_1 + 0x24);
    fVar15 = *(float *)(param_1 + 0x28);
    fVar26 = (float)*(undefined8 *)param_2;
    fVar19 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    uVar3 = NEON_fmadd(fVar2,*(undefined4 *)(param_2 + 8),fVar5 * *(float *)(param_2 + 0x18));
    uVar8 = NEON_fmadd(fVar15,*(undefined4 *)(param_2 + 8),*(float *)(param_2 + 0x18) * fVar14);
    fVar10 = (float)*(undefined8 *)(param_2 + 0x20);
    fVar11 = (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
    fVar4 = (float)NEON_fmadd(fVar23,*(undefined4 *)(param_2 + 0x28),uVar3);
    fVar9 = (float)NEON_fmadd(fVar20,*(undefined4 *)(param_2 + 0x28),uVar8);
    fVar17 = (float)*(undefined8 *)(param_2 + 0x30);
    fVar16 = fVar18 * fVar5 + fVar26 * fVar2 + fVar10 * fVar23 + fVar17;
    fVar7 = (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
    fVar2 = fVar21 * fVar5 + fVar19 * fVar2 + fVar11 * fVar23 + fVar7;
    uVar13 = CONCAT44(fVar7 + fVar21 * fVar14 + fVar19 * fVar15 + fVar11 * fVar20,
                      fVar17 + fVar18 * fVar14 + fVar26 * fVar15 + fVar10 * fVar20);
    fVar4 = *(float *)(param_2 + 0x38) + fVar4;
    fVar9 = *(float *)(param_2 + 0x38) + fVar9;
    uVar6 = NEON_fcmge(uVar13,CONCAT44(fVar2,fVar16),4);
    uVar12 = NEON_fcmge(CONCAT44(fVar2,fVar16),uVar13,4);
    uVar6 = NEON_bsl(uVar6,CONCAT44(fVar2,fVar16),uVar13,1);
    uVar13 = NEON_bsl(uVar12,CONCAT44(fVar2,fVar16),uVar13,1);
    fVar2 = fVar4;
    if (fVar9 < fVar4) {
      fVar2 = fVar9;
    }
    if (fVar4 < fVar9) {
      fVar4 = fVar9;
    }
  }
  *(float *)(this + 0x24) = fVar2;
  *(undefined8 *)(this + 0x1c) = uVar6;
  *(undefined8 *)(this + 0x28) = uVar13;
  *(float *)(this + 0x30) = fVar4;
LAB_00b60814:
  *(undefined4 *)(this + 0x18) = 0;
  *(ulong *)(this + 0xc) =
       CONCAT44(((float)((ulong)uVar6 >> 0x20) + (float)((ulong)uVar13 >> 0x20)) * 0.5,
                ((float)uVar6 + (float)uVar13) * 0.5);
  *(float *)(this + 0x14) = (fVar2 + fVar4) * 0.5;
  return;
}


