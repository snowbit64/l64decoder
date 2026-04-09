// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addEmitTriangle
// Entry Point: 0092a6e4
// Size: 288 bytes
// Signature: undefined __thiscall addEmitTriangle(DestructionEmitterShape * this, float * param_1, float * param_2, float * param_3)


/* DestructionEmitterShape::addEmitTriangle(float const*, float const*, float const*) */

void __thiscall
DestructionEmitterShape::addEmitTriangle
          (DestructionEmitterShape *this,float *param_1,float *param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float local_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_70 = *param_1;
  fStack_6c = param_1[1];
  fStack_64 = *param_2;
  local_60 = param_2[1];
  fStack_54 = param_3[1];
  local_50 = param_3[2];
  local_68 = param_1[2];
  fStack_5c = param_2[2];
  local_58 = *param_3;
  fStack_48 = (float)NEON_fmadd(fStack_5c - local_68,local_58 - local_70,
                                (local_50 - local_68) * -(fStack_64 - local_70));
  local_4c = (float)NEON_fmadd(local_60 - fStack_6c,local_50 - local_68,
                               (fStack_54 - fStack_6c) * -(fStack_5c - local_68));
  local_44 = (float)NEON_fmadd(fStack_64 - local_70,fStack_54 - fStack_6c,
                               (local_58 - local_70) * -(local_60 - fStack_6c));
  uVar4 = NEON_fmadd(local_4c,local_4c,fStack_48 * fStack_48);
  fVar3 = (float)NEON_fmadd(local_44,local_44,uVar4);
  fVar2 = 1.0;
  if (1e-06 < fVar3) {
    fVar2 = 1.0 / SQRT(fVar3);
  }
  local_4c = local_4c * fVar2;
  fStack_48 = fStack_48 * fVar2;
  local_44 = local_44 * fVar2;
  fVar2 = (float)ParticleSystem::getCurrentTime();
  local_40 = (float)ParticleSystem::getEmitTrianglesLifespan();
  local_40 = fVar2 + local_40;
  FUN_0092a804(this + 0x18,&local_70);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


