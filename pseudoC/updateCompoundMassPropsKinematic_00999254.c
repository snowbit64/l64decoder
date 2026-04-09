// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateCompoundMassPropsKinematic
// Entry Point: 00999254
// Size: 572 bytes
// Signature: undefined __cdecl updateCompoundMassPropsKinematic(TransformGroup * param_1, TransformGroup * * param_2, btCompoundShape * param_3)


/* Bt2PhysicsUtil::updateCompoundMassPropsKinematic(TransformGroup*, TransformGroup**,
   btCompoundShape*) */

void Bt2PhysicsUtil::updateCompoundMassPropsKinematic
               (TransformGroup *param_1,TransformGroup **param_2,btCompoundShape *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  TransformGroup *pTVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  float local_88;
  float fStack_84;
  float local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  float local_68;
  float local_64;
  float fStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  RawTransformGroup::updateWorldTransformation();
  Matrix4x4::invert3x4((Matrix4x4 *)&local_98,(Matrix4x4 *)(param_1 + 0xb8));
  uVar1 = *(uint *)(param_3 + 0x24);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    do {
      fVar6 = 0.0;
      uVar7 = 0x3f800000;
      if (param_2 == (TransformGroup **)0x0) {
        fVar17 = 0.0;
        fVar22 = 0.0;
        uVar15 = 0;
        uVar11 = 0;
        uVar9 = 0;
        uVar20 = 0;
        uVar8 = 0;
        uVar10 = 0;
        uVar14 = 0x3f800000;
        uVar5 = 0x3f800000;
LAB_009992d4:
        local_cc = 0;
        local_bc = 0;
        local_ac = 0;
        local_9c = 0;
        local_d8 = uVar5;
        uStack_d4 = uVar20;
        local_d0 = uVar11;
        local_c8 = uVar10;
        uStack_c4 = uVar14;
        local_c0 = uVar15;
        local_b8 = uVar8;
        uStack_b4 = uVar9;
        local_b0 = uVar7;
        local_a8 = fVar22;
        fStack_a4 = fVar17;
        local_a0 = fVar6;
        btCompoundShape::updateChildTransform(param_3,(int)uVar3,(btTransform *)&local_d8,false);
      }
      else {
        pTVar4 = param_2[uVar3];
        if (pTVar4 != (TransformGroup *)0x0) {
          fVar17 = 0.0;
          fVar22 = 0.0;
          uVar15 = 0;
          uVar11 = 0;
          uVar9 = 0;
          uVar20 = 0;
          uVar8 = 0;
          uVar10 = 0;
          uVar14 = 0x3f800000;
          uVar5 = 0x3f800000;
          if (pTVar4 != param_1) {
            RawTransformGroup::updateWorldTransformation();
            uVar7 = *(undefined4 *)(pTVar4 + 0xb8);
            fVar6 = *(float *)(pTVar4 + 0xbc);
            uVar8 = *(undefined4 *)(pTVar4 + 0xc0);
            uVar15 = *(undefined4 *)(pTVar4 + 200);
            fVar17 = *(float *)(pTVar4 + 0xcc);
            uVar5 = NEON_fmadd(uVar7,local_98,fVar6 * local_88);
            uVar20 = *(undefined4 *)(pTVar4 + 0xe8);
            fVar22 = *(float *)(pTVar4 + 0xec);
            uVar5 = NEON_fmadd(uVar8,local_78,uVar5);
            uVar10 = NEON_fmadd(uVar7,local_94,fVar6 * fStack_84);
            uVar7 = NEON_fmadd(uVar7,uStack_90,fVar6 * local_80);
            uVar19 = *(undefined4 *)(pTVar4 + 0xd8);
            fVar6 = *(float *)(pTVar4 + 0xdc);
            uVar10 = NEON_fmadd(uVar8,uStack_74,uVar10);
            uVar8 = NEON_fmadd(uVar8,local_70,uVar7);
            uVar9 = NEON_fmadd(uVar15,local_98,local_88 * fVar17);
            uVar14 = NEON_fmadd(uVar15,local_94,fStack_84 * fVar17);
            uVar7 = NEON_fmadd(uVar15,uStack_90,local_80 * fVar17);
            uVar18 = NEON_fmadd(uVar19,local_98,local_88 * fVar6);
            uVar15 = NEON_fmadd(uVar20,local_98,local_88 * fVar22);
            uVar11 = *(undefined4 *)(pTVar4 + 0xd0);
            uVar21 = NEON_fmadd(uVar19,local_94,fStack_84 * fVar6);
            uVar12 = NEON_fmadd(uVar20,local_94,fStack_84 * fVar22);
            uVar13 = NEON_fmadd(uVar20,uStack_90,local_80 * fVar22);
            uVar16 = *(undefined4 *)(pTVar4 + 0xf0);
            uVar20 = NEON_fmadd(uVar11,local_78,uVar9);
            uVar14 = NEON_fmadd(uVar11,uStack_74,uVar14);
            uVar19 = NEON_fmadd(uVar19,uStack_90,local_80 * fVar6);
            uVar9 = NEON_fmadd(uVar11,local_70,uVar7);
            fVar22 = (float)NEON_fmadd(uVar16,local_78,uVar15);
            fVar17 = (float)NEON_fmadd(uVar16,uStack_74,uVar12);
            fVar6 = (float)NEON_fmadd(uVar16,local_70,uVar13);
            uVar7 = *(undefined4 *)(pTVar4 + 0xe0);
            uVar11 = NEON_fmadd(uVar7,local_78,uVar18);
            uVar15 = NEON_fmadd(uVar7,uStack_74,uVar21);
            uVar7 = NEON_fmadd(uVar7,local_70,uVar19);
            fVar22 = local_68 + fVar22;
            fVar17 = fVar17 + local_64;
            fVar6 = fVar6 + fStack_60;
          }
          goto LAB_009992d4;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  (**(code **)(*(long *)param_3 + 0x88))(param_3);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


