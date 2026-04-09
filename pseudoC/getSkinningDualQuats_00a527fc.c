// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSkinningDualQuats
// Entry Point: 00a527fc
// Size: 564 bytes
// Signature: undefined __thiscall getSkinningDualQuats(SkinningInfo * this, float * param_1)


/* GsShape::SkinningInfo::getSkinningDualQuats(float*) const */

void __thiscall GsShape::SkinningInfo::getSkinningDualQuats(SkinningInfo *this,float *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  GsQuaternion aGStack_b8 [16];
  undefined8 local_a8;
  float local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  float fStack_64;
  float local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar2 = *(uint *)(this + 0x20);
  if (uVar2 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      lVar4 = *(long *)(*(long *)this + uVar6);
      RawTransformGroup::updateWorldTransformation();
      fVar10 = *(float *)(lVar4 + 200);
      fVar8 = *(float *)(lVar4 + 0xcc);
      uVar14 = *(undefined4 *)(lVar4 + 0xe0);
      puVar1 = (undefined4 *)(*(long *)(this + 8) + lVar5);
      uVar15 = *(undefined4 *)(lVar4 + 0xb8);
      uVar7 = *(undefined4 *)(lVar4 + 0xbc);
      uVar11 = NEON_fmadd(*puVar1,uVar15,(float)puVar1[1] * fVar10);
      uVar16 = *(undefined4 *)(lVar4 + 0xd8);
      uVar9 = *(undefined4 *)(lVar4 + 0xdc);
      local_98 = NEON_fmadd(puVar1[2],uVar16,uVar11);
      uVar11 = NEON_fmadd(*puVar1,uVar7,(float)puVar1[1] * fVar8);
      local_94 = NEON_fmadd(puVar1[2],uVar9,uVar11);
      fVar12 = *(float *)(lVar4 + 0xd0);
      uVar13 = *(undefined4 *)(lVar4 + 0xc0);
      uVar11 = NEON_fmadd(*puVar1,uVar13,(float)puVar1[1] * fVar12);
      local_8c = 0;
      local_90 = NEON_fmadd(puVar1[2],uVar14,uVar11);
      uVar11 = NEON_fmadd(puVar1[4],uVar15,fVar10 * (float)puVar1[5]);
      local_88 = NEON_fmadd(puVar1[6],uVar16,uVar11);
      uVar11 = NEON_fmadd(puVar1[4],uVar7,fVar8 * (float)puVar1[5]);
      local_84 = NEON_fmadd(puVar1[6],uVar9,uVar11);
      uVar11 = NEON_fmadd(puVar1[4],uVar13,fVar12 * (float)puVar1[5]);
      local_7c = 0;
      local_80 = NEON_fmadd(puVar1[6],uVar14,uVar11);
      uVar11 = NEON_fmadd(puVar1[8],uVar15,fVar10 * (float)puVar1[9]);
      local_78 = NEON_fmadd(puVar1[10],uVar16,uVar11);
      uVar11 = NEON_fmadd(puVar1[8],uVar7,fVar8 * (float)puVar1[9]);
      local_74 = NEON_fmadd(puVar1[10],uVar9,uVar11);
      uVar11 = NEON_fmadd(puVar1[8],uVar13,fVar12 * (float)puVar1[9]);
      local_6c = 0;
      local_70 = NEON_fmadd(puVar1[10],uVar14,uVar11);
      uVar11 = NEON_fmadd(puVar1[0xc],uVar15,fVar10 * (float)puVar1[0xd]);
      local_68 = (float)NEON_fmadd(puVar1[0xe],uVar16,uVar11);
      local_68 = *(float *)(lVar4 + 0xe8) + local_68;
      uVar7 = NEON_fmadd(puVar1[0xc],uVar7,fVar8 * (float)puVar1[0xd]);
      fStack_64 = (float)NEON_fmadd(puVar1[0xe],uVar9,uVar7);
      fStack_64 = *(float *)(lVar4 + 0xec) + fStack_64;
      uVar7 = NEON_fmadd(puVar1[0xc],uVar13,fVar12 * (float)puVar1[0xd]);
      local_5c = 0x3f800000;
      local_60 = (float)NEON_fmadd(puVar1[0xe],uVar14,uVar7);
      local_60 = *(float *)(lVar4 + 0xf0) + local_60;
      GsQuaternion::set(aGStack_b8,(Matrix4x4 *)&local_98);
      local_a8 = CONCAT44(fStack_64,local_68);
      local_a0 = local_60;
      MathUtil::quatTransToDualQuaternion
                (aGStack_b8,(Vector3 *)&local_a8,param_1 + (uVar6 & 0xfffffff8));
      uVar6 = uVar6 + 8;
      lVar5 = lVar5 + 0x40;
    } while ((ulong)uVar2 * 0x40 - lVar5 != 0);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


