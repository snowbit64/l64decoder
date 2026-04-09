// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCollisionAABB
// Entry Point: 00994b94
// Size: 580 bytes
// Signature: undefined __thiscall getCollisionAABB(Bt2PhysicsRBObject * this, Matrix4x4 * param_1, Vector3 * param_2, Vector3 * param_3)


/* Bt2PhysicsRBObject::getCollisionAABB(Matrix4x4 const&, Vector3&, Vector3&) */

void __thiscall
Bt2PhysicsRBObject::getCollisionAABB
          (Bt2PhysicsRBObject *this,Matrix4x4 *param_1,Vector3 *param_2,Vector3 *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  float local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(this + 0x30);
  if (lVar3 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = *(long **)(lVar3 + 200);
    if (plVar2 != (long *)0x0) {
      lVar3 = *(long *)(lVar3 + 0x228);
      if (lVar3 == 0) {
        uStack_b4 = *(undefined4 *)(param_1 + 0x10);
        uStack_a4 = *(undefined4 *)(param_1 + 0x14);
        local_b8 = *(undefined4 *)param_1;
        local_a8 = *(undefined4 *)(param_1 + 4);
        local_98 = *(undefined4 *)(param_1 + 8);
        local_b0 = *(undefined4 *)(param_1 + 0x20);
        local_a0 = *(undefined4 *)(param_1 + 0x24);
        uStack_94 = *(undefined4 *)(param_1 + 0x18);
        local_90 = *(undefined4 *)(param_1 + 0x28);
        local_88 = *(undefined8 *)(param_1 + 0x30);
        local_80 = *(float *)(param_1 + 0x38);
      }
      else {
        uVar5 = *(undefined4 *)(lVar3 + 0x88);
        fVar8 = *(float *)(lVar3 + 0x68);
        fVar9 = *(float *)(lVar3 + 0x6c);
        fVar10 = *(float *)(lVar3 + 0x70);
        uVar6 = *(undefined4 *)(lVar3 + 0x58);
        fVar7 = *(float *)(lVar3 + 0x5c);
        fVar4 = -*(float *)(lVar3 + 0x8c);
        uVar17 = *(undefined4 *)(lVar3 + 0x60);
        fVar13 = *(float *)(param_1 + 0x10);
        fVar14 = *(float *)(param_1 + 0x14);
        uVar22 = *(undefined4 *)(lVar3 + 0x90);
        fVar28 = *(float *)(param_1 + 0x18);
        uVar19 = *(undefined4 *)param_1;
        uVar20 = *(undefined4 *)(param_1 + 4);
        uVar11 = NEON_fmsub(uVar6,uVar5,fVar8 * fVar4);
        uVar15 = NEON_fmsub(fVar7,uVar5,fVar9 * fVar4);
        uVar5 = NEON_fmsub(uVar17,uVar5,fVar10 * fVar4);
        uVar21 = *(undefined4 *)(lVar3 + 0x78);
        fVar4 = *(float *)(lVar3 + 0x7c);
        uVar25 = *(undefined4 *)(lVar3 + 0x80);
        uVar18 = NEON_fmadd(uVar6,uVar19,fVar13 * fVar7);
        uVar29 = *(undefined4 *)(param_1 + 8);
        uVar24 = NEON_fmadd(fVar8,uVar19,fVar13 * fVar9);
        fVar16 = (float)NEON_fmsub(fVar4,uVar22,uVar15);
        uVar12 = NEON_fmsub(uVar21,uVar22,uVar11);
        uVar5 = NEON_fmsub(uVar25,uVar22,uVar5);
        uVar27 = NEON_fmadd(uVar6,uVar20,fVar14 * fVar7);
        uVar26 = *(undefined4 *)(param_1 + 0x20);
        uVar23 = *(undefined4 *)(param_1 + 0x24);
        uVar15 = NEON_fmadd(fVar8,uVar20,fVar14 * fVar9);
        uVar6 = NEON_fmadd(uVar6,uVar29,fVar28 * fVar7);
        uVar11 = NEON_fmadd(fVar8,uVar29,fVar28 * fVar9);
        uVar22 = *(undefined4 *)(param_1 + 0x28);
        uStack_b4 = NEON_fmadd(fVar10,uVar26,uVar24);
        uStack_a4 = NEON_fmadd(fVar10,uVar23,uVar15);
        uStack_94 = NEON_fmadd(fVar10,uVar22,uVar11);
        uVar11 = NEON_fmadd(uVar12,uVar19,fVar13 * fVar16);
        uVar15 = NEON_fmadd(uVar12,uVar20,fVar14 * fVar16);
        uVar24 = NEON_fmadd(uVar21,uVar19,fVar13 * fVar4);
        uVar19 = NEON_fmadd(uVar21,uVar20,fVar14 * fVar4);
        local_98 = NEON_fmadd(uVar17,uVar22,uVar6);
        uVar6 = NEON_fmadd(uVar21,uVar29,fVar28 * fVar4);
        uVar12 = NEON_fmadd(uVar12,uVar29,fVar28 * fVar16);
        fVar4 = (float)NEON_fmadd(uVar5,uVar26,uVar11);
        fVar7 = (float)NEON_fmadd(uVar5,uVar23,uVar15);
        local_a8 = NEON_fmadd(uVar17,uVar23,uVar27);
        local_b8 = NEON_fmadd(uVar17,uVar26,uVar18);
        local_b0 = NEON_fmadd(uVar25,uVar26,uVar24);
        local_a0 = NEON_fmadd(uVar25,uVar23,uVar19);
        local_90 = NEON_fmadd(uVar25,uVar22,uVar6);
        local_80 = (float)NEON_fmadd(uVar5,uVar22,uVar12);
        local_80 = *(float *)(param_1 + 0x38) + local_80;
        local_88 = CONCAT44(*(float *)(param_1 + 0x34) + fVar7,*(float *)(param_1 + 0x30) + fVar4);
      }
      local_8c = 0;
      local_9c = 0;
      local_ac = 0;
      local_7c = 0;
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_b8,&local_68,&local_78);
      plVar2 = (long *)0x1;
      *(undefined8 *)param_2 = local_68;
      *(undefined4 *)(param_2 + 8) = local_60;
      *(undefined8 *)param_3 = local_78;
      *(undefined4 *)(param_3 + 8) = local_70;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar2);
}


