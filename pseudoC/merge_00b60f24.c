// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: merge
// Entry Point: 00b60f24
// Size: 816 bytes
// Signature: undefined __thiscall merge(BoundingAxisAlignedBox * this, BoundingVolume * param_1, Matrix4x4 * param_2)


/* BoundingAxisAlignedBox::merge(BoundingVolume const*, Matrix4x4 const*) */

void __thiscall
BoundingAxisAlignedBox::merge
          (BoundingAxisAlignedBox *this,BoundingVolume *param_1,Matrix4x4 *param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  
  iVar1 = BoundingVolume::getType();
  if (iVar1 == 0) {
    fVar2 = *(float *)(param_1 + 0xc);
    if (param_2 == (Matrix4x4 *)0x0) {
      fVar6 = *(float *)(param_1 + 0x10);
      fVar8 = *(float *)(param_1 + 0x14);
      fVar9 = *(float *)(param_1 + 0x18);
    }
    else {
      fVar10 = *(float *)(param_2 + 0x10);
      fVar8 = *(float *)(param_2 + 0x14);
      fVar9 = *(float *)(param_1 + 0x18);
      uVar21 = *(undefined4 *)param_2;
      uVar16 = *(undefined4 *)(param_2 + 4);
      uVar29 = *(undefined4 *)(param_2 + 0x20);
      uVar26 = *(undefined4 *)(param_2 + 0x24);
      fVar24 = *(float *)(param_2 + 0x18);
      uVar28 = *(undefined4 *)(param_2 + 8);
      uVar3 = NEON_fmadd(uVar16,0,fVar8 * fVar9);
      uVar25 = NEON_fmadd(uVar21,0,fVar10 * fVar9);
      uVar27 = NEON_fmadd(uVar16,0,fVar8 * 0.0);
      uVar30 = NEON_fmadd(uVar21,0,fVar10 * 0.0);
      uVar7 = NEON_fmadd(fVar9,uVar16,fVar8 * 0.0);
      uVar31 = *(undefined4 *)(param_2 + 0x28);
      fVar6 = (float)NEON_fmadd(uVar26,0,uVar3);
      uVar3 = NEON_fmadd(uVar29,0,uVar25);
      fVar11 = (float)NEON_fmadd(fVar9,uVar26,uVar27);
      uVar27 = NEON_fmadd(uVar28,0,fVar24 * fVar9);
      uVar32 = NEON_fmadd(uVar28,0,fVar24 * 0.0);
      uVar30 = NEON_fmadd(fVar9,uVar29,uVar30);
      fVar12 = (float)NEON_fmadd(uVar26,0,uVar7);
      uVar7 = NEON_fmadd(uVar3,uVar3,fVar6 * fVar6);
      uVar25 = NEON_fmadd(fVar9,uVar21,fVar10 * 0.0);
      uVar27 = NEON_fmadd(uVar31,0,uVar27);
      uVar32 = NEON_fmadd(fVar9,uVar31,uVar32);
      uVar30 = NEON_fmadd(uVar30,uVar30,fVar11 * fVar11);
      uVar3 = NEON_fmadd(fVar9,uVar28,fVar24 * 0.0);
      uVar25 = NEON_fmadd(uVar29,0,uVar25);
      fVar11 = (float)NEON_fmadd(uVar27,uVar27,uVar7);
      fVar9 = (float)NEON_fmadd(uVar32,uVar32,uVar30);
      uVar3 = NEON_fmadd(uVar31,0,uVar3);
      uVar7 = NEON_fmadd(uVar25,uVar25,fVar12 * fVar12);
      fVar6 = (float)NEON_fmadd(uVar3,uVar3,uVar7);
      if (fVar9 <= fVar11) {
        fVar9 = fVar11;
      }
      if (fVar9 <= fVar6) {
        fVar9 = fVar6;
      }
      fVar6 = *(float *)(param_1 + 0x10);
      uVar25 = *(undefined4 *)(param_1 + 0x14);
      fVar9 = SQRT(fVar9);
      uVar21 = NEON_fmadd(fVar2,uVar21,fVar6 * fVar10);
      uVar7 = NEON_fmadd(fVar2,uVar16,fVar6 * fVar8);
      uVar3 = NEON_fmadd(fVar2,uVar28,fVar6 * fVar24);
      fVar2 = (float)NEON_fmadd(uVar25,uVar29,uVar21);
      fVar6 = (float)NEON_fmadd(uVar25,uVar26,uVar7);
      fVar8 = (float)NEON_fmadd(uVar25,uVar31,uVar3);
      fVar2 = fVar2 + *(float *)(param_2 + 0x30);
      fVar6 = *(float *)(param_2 + 0x34) + fVar6;
      fVar8 = *(float *)(param_2 + 0x38) + fVar8;
    }
    fVar10 = *(float *)(this + 0x1c);
    if (fVar2 - fVar9 < *(float *)(this + 0x1c)) {
      fVar10 = fVar2 - fVar9;
    }
    uVar4 = (ulong)(uint)fVar10;
    fVar11 = *(float *)(this + 0x28);
    if (*(float *)(this + 0x28) < fVar9 + fVar2) {
      fVar11 = fVar9 + fVar2;
    }
    *(float *)(this + 0x1c) = fVar10;
    fVar2 = *(float *)(this + 0x20);
    if (fVar6 - fVar9 < *(float *)(this + 0x20)) {
      fVar2 = fVar6 - fVar9;
    }
    *(float *)(this + 0x28) = fVar11;
    *(float *)(this + 0x20) = fVar2;
    fVar10 = *(float *)(this + 0x2c);
    if (*(float *)(this + 0x2c) < fVar9 + fVar6) {
      fVar10 = fVar9 + fVar6;
    }
    fVar6 = *(float *)(this + 0x24);
    if (fVar8 - fVar9 < *(float *)(this + 0x24)) {
      fVar6 = fVar8 - fVar9;
    }
    *(float *)(this + 0x2c) = fVar10;
    fVar10 = *(float *)(this + 0x30);
    if (*(float *)(this + 0x30) < fVar9 + fVar8) {
      fVar10 = fVar9 + fVar8;
    }
    *(float *)(this + 0x24) = fVar6;
  }
  else {
    iVar1 = BoundingVolume::getType();
    if (iVar1 != 1) {
      uVar4 = (ulong)*(uint *)(this + 0x1c);
      fVar2 = *(float *)(this + 0x20);
      fVar6 = *(float *)(this + 0x24);
      goto LAB_00b61214;
    }
    if (param_2 != (Matrix4x4 *)0x0) {
      fVar10 = *(float *)(param_1 + 0x1c);
      fVar2 = *(float *)(param_1 + 0x20);
      fVar6 = *(float *)(param_1 + 0x2c);
      fVar12 = *(float *)(param_1 + 0x30);
      fVar23 = *(float *)(param_1 + 0x24);
      fVar20 = *(float *)(param_1 + 0x28);
      fVar9 = (float)*(undefined8 *)(param_2 + 0x10);
      fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
      fVar24 = (float)*(undefined8 *)param_2;
      fVar17 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
      fVar14 = (float)*(undefined8 *)(param_2 + 0x20);
      fVar18 = (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
      uVar3 = NEON_fmadd(fVar10,*(undefined4 *)(param_2 + 8),fVar2 * *(float *)(param_2 + 0x18));
      uVar7 = NEON_fmadd(fVar20,*(undefined4 *)(param_2 + 8),*(float *)(param_2 + 0x18) * fVar6);
      fVar15 = (float)*(undefined8 *)(param_2 + 0x30);
      fVar11 = fVar9 * fVar2 + fVar24 * fVar10 + fVar14 * fVar23 + fVar15;
      fVar19 = (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
      fVar10 = fVar8 * fVar2 + fVar17 * fVar10 + fVar18 * fVar23 + fVar19;
      uVar5 = CONCAT44(fVar19 + fVar8 * fVar6 + fVar17 * fVar20 + fVar18 * fVar12,
                       fVar15 + fVar9 * fVar6 + fVar24 * fVar20 + fVar14 * fVar12);
      fVar2 = (float)NEON_fmadd(fVar23,*(undefined4 *)(param_2 + 0x28),uVar3);
      fVar8 = (float)NEON_fmadd(fVar12,*(undefined4 *)(param_2 + 0x28),uVar7);
      uVar13 = NEON_fcmge(uVar5,CONCAT44(fVar10,fVar11),4);
      uVar22 = NEON_fcmge(CONCAT44(fVar10,fVar11),uVar5,4);
      fVar2 = *(float *)(param_2 + 0x38) + fVar2;
      fVar8 = *(float *)(param_2 + 0x38) + fVar8;
      uVar13 = NEON_bsl(uVar13,CONCAT44(fVar10,fVar11),uVar5,1);
      uVar5 = NEON_bit(uVar5,CONCAT44(fVar10,fVar11),uVar22,1);
      fVar9 = fVar2;
      if (fVar8 < fVar2) {
        fVar9 = fVar8;
      }
      if (fVar2 < fVar8) {
        fVar2 = fVar8;
      }
      uVar22 = NEON_fcmge(uVar13,*(undefined8 *)(this + 0x1c),4);
      uVar13 = NEON_bit(uVar13,*(undefined8 *)(this + 0x1c),uVar22,1);
      fVar6 = *(float *)(this + 0x24);
      if (fVar9 < *(float *)(this + 0x24)) {
        fVar6 = fVar9;
      }
      uVar22 = NEON_fcmge(uVar5,uVar13,4);
      if (fVar2 < fVar6) {
        fVar6 = fVar2;
      }
      uVar4 = NEON_bsl(uVar22,uVar13,uVar5,1);
      *(float *)(this + 0x24) = fVar6;
      fVar2 = (float)(uVar4 >> 0x20);
      *(ulong *)(this + 0x1c) = uVar4;
      goto LAB_00b61214;
    }
    fVar2 = *(float *)(this + 0x1c);
    if (*(float *)(param_1 + 0x1c) < *(float *)(this + 0x1c)) {
      fVar2 = *(float *)(param_1 + 0x1c);
    }
    uVar4 = (ulong)(uint)fVar2;
    *(float *)(this + 0x1c) = fVar2;
    fVar2 = *(float *)(this + 0x28);
    if (*(float *)(this + 0x28) < *(float *)(param_1 + 0x28)) {
      fVar2 = *(float *)(param_1 + 0x28);
    }
    *(float *)(this + 0x28) = fVar2;
    fVar2 = *(float *)(this + 0x20);
    if (*(float *)(param_1 + 0x20) < *(float *)(this + 0x20)) {
      fVar2 = *(float *)(param_1 + 0x20);
    }
    *(float *)(this + 0x20) = fVar2;
    fVar9 = *(float *)(this + 0x2c);
    if (*(float *)(this + 0x2c) < *(float *)(param_1 + 0x2c)) {
      fVar9 = *(float *)(param_1 + 0x2c);
    }
    *(float *)(this + 0x2c) = fVar9;
    fVar6 = *(float *)(this + 0x24);
    if (*(float *)(param_1 + 0x24) < *(float *)(this + 0x24)) {
      fVar6 = *(float *)(param_1 + 0x24);
    }
    *(float *)(this + 0x24) = fVar6;
    fVar10 = *(float *)(this + 0x30);
    if (*(float *)(this + 0x30) < *(float *)(param_1 + 0x30)) {
      fVar10 = *(float *)(param_1 + 0x30);
    }
  }
  *(float *)(this + 0x30) = fVar10;
LAB_00b61214:
  *(undefined4 *)(this + 0x18) = 0;
  *(float *)(this + 0xc) = ((float)uVar4 + *(float *)(this + 0x28)) * 0.5;
  *(float *)(this + 0x10) = (fVar2 + *(float *)(this + 0x2c)) * 0.5;
  *(float *)(this + 0x14) = (fVar6 + *(float *)(this + 0x30)) * 0.5;
  return;
}


