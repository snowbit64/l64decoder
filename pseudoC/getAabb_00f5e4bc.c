// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAabb
// Entry Point: 00f5e4bc
// Size: 404 bytes
// Signature: undefined __thiscall getAabb(btCapsuleShape * this, btTransform * param_1, btVector3 * param_2, btVector3 * param_3)


/* btCapsuleShape::getAabb(btTransform const&, btVector3&, btVector3&) const */

void __thiscall
btCapsuleShape::getAabb
          (btCapsuleShape *this,btTransform *param_1,btVector3 *param_2,btVector3 *param_3)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float local_68 [4];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(this + 0x44);
  local_68[0] = *(float *)(this + (long)((iVar1 + 2) % 3) * 4 + 0x2c);
  pcVar3 = *(code **)(*(long *)this + 0x60);
  local_68[1] = local_68[0];
  local_68[2] = local_68[0];
  local_68[iVar1] = *(float *)(this + (long)iVar1 * 4 + 0x2c) + local_68[0];
  fVar4 = (float)(*pcVar3)();
  fVar5 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar6 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar4 = local_68[0] + fVar4;
  fVar5 = local_68[1] + fVar5;
  fVar6 = local_68[2] + fVar6;
  uVar9 = NEON_fmadd(ABS(*(float *)(param_1 + 4)),fVar5,ABS(*(float *)param_1) * fVar4);
  uVar12 = NEON_fmadd(ABS(*(float *)(param_1 + 0x14)),fVar5,ABS(*(float *)(param_1 + 0x10)) * fVar4)
  ;
  uVar7 = NEON_fmadd(ABS(*(float *)(param_1 + 0x24)),fVar5,ABS(*(float *)(param_1 + 0x20)) * fVar4);
  fVar8 = (float)NEON_fmadd(ABS(*(float *)(param_1 + 8)),fVar6,uVar9);
  fVar10 = (float)NEON_fmadd(ABS(*(float *)(param_1 + 0x18)),fVar6,uVar12);
  fVar11 = *(float *)(param_1 + 0x30);
  fVar13 = *(float *)(param_1 + 0x34);
  fVar4 = (float)NEON_fmadd(ABS(*(float *)(param_1 + 0x28)),fVar6,uVar7);
  fVar5 = *(float *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(float *)param_2 = fVar11 - fVar8;
  *(float *)(param_2 + 4) = fVar13 - fVar10;
  *(float *)(param_2 + 8) = fVar5 - fVar4;
  *(float *)param_3 = fVar11 + fVar8;
  *(float *)(param_3 + 4) = fVar13 + fVar10;
  *(float *)(param_3 + 8) = fVar4 + fVar5;
  *(undefined4 *)(param_3 + 0xc) = 0;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


