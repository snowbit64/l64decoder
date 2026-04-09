// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRopeAnchorInfo
// Entry Point: 009a9d48
// Size: 488 bytes
// Signature: undefined __cdecl getRopeAnchorInfo(TransformGroup * param_1, Vector3 * param_2, btRigidBody * * param_3, btVector3 * param_4)


/* Bt2ScenegraphPhysicsContext::getRopeAnchorInfo(TransformGroup*, Vector3 const&, btRigidBody*&,
   btVector3&) */

void Bt2ScenegraphPhysicsContext::getRopeAnchorInfo
               (TransformGroup *param_1,Vector3 *param_2,btRigidBody **param_3,btVector3 *param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  
  *param_3 = (btRigidBody *)0x0;
  if (param_1 == (TransformGroup *)0x0) {
    *(undefined4 *)param_4 = *(undefined4 *)param_2;
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_2 + 4);
    fVar4 = *(float *)(param_2 + 8);
  }
  else {
    lVar1 = RawTransformGroup::getPhysicsObject();
    if (((((*(byte *)(lVar1 + 8) >> 3 & 1) == 0) ||
         (lVar1 = RawTransformGroup::getPhysicsObject(), (*(byte *)(lVar1 + 8) & 1) == 0)) ||
        (lVar1 = RawTransformGroup::getPhysicsObject(), (*(byte *)(lVar1 + 8) >> 6 & 1) != 0)) ||
       (lVar1 = *(long *)(*(long *)(lVar1 + 0x30) + 0x228), lVar1 == 0)) {
      RawTransformGroup::updateWorldTransformation();
      fVar5 = *(float *)param_2;
      fVar3 = *(float *)(param_2 + 4);
      fVar6 = *(float *)(param_2 + 8);
      uVar18 = NEON_fmadd(fVar5,*(undefined4 *)(param_1 + 0xc0),fVar3 * *(float *)(param_1 + 0xd0));
      fVar4 = (float)NEON_fmadd(fVar6,*(undefined4 *)(param_1 + 0xe0),uVar18);
      fVar4 = *(float *)(param_1 + 0xf0) + fVar4;
      *(ulong *)param_4 =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20) * fVar3 +
                    (float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20) * fVar5 +
                    (float)((ulong)*(undefined8 *)(param_1 + 0xd8) >> 0x20) * fVar6 +
                    (float)((ulong)*(undefined8 *)(param_1 + 0xe8) >> 0x20),
                    (float)*(undefined8 *)(param_1 + 200) * fVar3 +
                    (float)*(undefined8 *)(param_1 + 0xb8) * fVar5 +
                    (float)*(undefined8 *)(param_1 + 0xd8) * fVar6 +
                    (float)*(undefined8 *)(param_1 + 0xe8));
    }
    else {
      lVar2 = RawTransformGroup::getPhysicsObject();
      fVar15 = *(float *)(lVar1 + 0x68);
      fVar17 = *(float *)(lVar1 + 0x6c);
      fVar3 = *(float *)(lVar1 + 0x58);
      fVar14 = *(float *)(lVar1 + 0x5c);
      *param_3 = *(btRigidBody **)(lVar2 + 0x30);
      fVar21 = *(float *)(lVar1 + 0x70);
      lVar2 = *(long *)(lVar2 + 0x30);
      fVar27 = *(float *)(lVar1 + 0x88);
      fVar28 = *(float *)(lVar1 + 0x8c);
      fVar5 = *(float *)(lVar1 + 0x78);
      fVar10 = *(float *)(lVar1 + 0x7c);
      fVar6 = *(float *)(lVar2 + 8);
      fVar12 = *(float *)(lVar2 + 0xc);
      uVar18 = *(undefined4 *)(lVar2 + 0x28);
      fVar20 = *(float *)(lVar2 + 0x2c);
      fVar23 = *(float *)(lVar2 + 0x10);
      fVar13 = *(float *)(lVar2 + 0x1c);
      fVar7 = *(float *)(lVar2 + 0x18);
      fVar24 = *(float *)(lVar2 + 0x20);
      fVar8 = *(float *)(lVar1 + 0x60);
      uVar25 = NEON_fmadd(fVar14,uVar18,fVar17 * fVar20);
      uVar30 = NEON_fmadd(fVar3,uVar18,fVar15 * fVar20);
      uVar29 = *(undefined4 *)(lVar2 + 0x30);
      fVar4 = (float)NEON_fmadd(fVar10,uVar29,uVar25);
      uVar9 = NEON_fmadd(fVar8,uVar18,fVar21 * fVar20);
      fVar11 = *(float *)param_2;
      fVar22 = *(float *)(param_2 + 4);
      fVar26 = *(float *)(lVar1 + 0x80);
      uVar25 = NEON_fmadd(fVar27,uVar18,fVar20 * fVar28);
      fVar19 = *(float *)(lVar1 + 0x90);
      uVar18 = NEON_fmadd(fVar5,uVar29,uVar30);
      uVar9 = NEON_fmadd(fVar26,uVar29,uVar9);
      fVar20 = (float)NEON_fmadd(fVar19,uVar29,uVar25);
      fVar16 = *(float *)(param_2 + 8);
      uVar18 = NEON_fmadd(fVar11,uVar18,fVar4 * fVar22);
      fVar4 = (float)NEON_fmadd(fVar16,uVar9,uVar18);
      fVar4 = fVar20 + *(float *)(lVar2 + 0x40) + fVar4;
      *(ulong *)param_4 =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x38) >> 0x20) +
                    fVar13 * fVar28 + fVar7 * fVar27 + fVar24 * fVar19 +
                    (fVar13 * fVar17 + fVar7 * fVar14 + fVar24 * fVar10) * fVar22 +
                    (fVar13 * fVar15 + fVar7 * fVar3 + fVar24 * fVar5) * fVar11 +
                    (fVar13 * fVar21 + fVar7 * fVar8 + fVar24 * fVar26) * fVar16,
                    (float)*(undefined8 *)(lVar2 + 0x38) +
                    fVar12 * fVar28 + fVar6 * fVar27 + fVar23 * fVar19 +
                    (fVar12 * fVar17 + fVar6 * fVar14 + fVar23 * fVar10) * fVar22 +
                    (fVar12 * fVar15 + fVar6 * fVar3 + fVar23 * fVar5) * fVar11 +
                    (fVar12 * fVar21 + fVar6 * fVar8 + fVar23 * fVar26) * fVar16);
    }
  }
  *(float *)(param_4 + 8) = fVar4;
  *(undefined4 *)(param_4 + 0xc) = 0;
  return;
}


