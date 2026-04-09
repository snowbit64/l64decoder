// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateLocalInertia
// Entry Point: 00f5e70c
// Size: 236 bytes
// Signature: undefined __thiscall calculateLocalInertia(btCapsuleShape * this, float param_1, btVector3 * param_2)


/* btCapsuleShape::calculateLocalInertia(float, btVector3&) const */

void __thiscall
btCapsuleShape::calculateLocalInertia(btCapsuleShape *this,float param_1,btVector3 *param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float local_28 [4];
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  lVar2 = (long)*(int *)(this + 0x44);
  local_28[3] = 0.0;
  local_28[0] = *(float *)(this + (long)((*(int *)(this + 0x44) + 2) % 3) * 4 + 0x2c);
  local_28[1] = local_28[0];
  local_28[2] = local_28[0];
  local_28[lVar2] = local_28[lVar2] + *(float *)(this + lVar2 * 4 + 0x2c);
  fVar4 = local_28[0] * 2.0 + 0.08;
  fVar5 = local_28[1] * 2.0 + 0.08;
  fVar6 = (float)NEON_fmadd(local_28[2],0x40000000,0x3da3d70a);
  fVar4 = fVar4 * fVar4;
  fVar5 = fVar5 * fVar5;
  fVar3 = param_1 * 0.08333333;
  uVar7 = NEON_rev64(CONCAT44(fVar5,fVar4),4);
  *(float *)(param_2 + 8) = (fVar4 + fVar5) * fVar3;
  *(ulong *)param_2 =
       CONCAT44((fVar6 * fVar6 + (float)((ulong)uVar7 >> 0x20)) * fVar3,
                (fVar6 * fVar6 + (float)uVar7) * fVar3);
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


