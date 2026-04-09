// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addEmitPoint
// Entry Point: 0092a964
// Size: 160 bytes
// Signature: undefined __thiscall addEmitPoint(DestructionEmitterShape * this, float * param_1, float * param_2)


/* DestructionEmitterShape::addEmitPoint(float const*, float const*) */

void __thiscall
DestructionEmitterShape::addEmitPoint(DestructionEmitterShape *this,float *param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  undefined8 local_4c;
  float local_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_70 = *param_1;
  fStack_6c = param_1[1];
  local_68 = param_1[2];
  local_4c = *(undefined8 *)param_2;
  local_44 = param_2[2];
  fStack_64 = local_70;
  local_60 = fStack_6c;
  fStack_5c = local_68;
  local_58 = local_70;
  fStack_54 = fStack_6c;
  local_50 = local_68;
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


