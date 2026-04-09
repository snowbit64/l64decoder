// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00884b54
// Size: 224 bytes
// Signature: undefined __cdecl update(float param_1)


/* SteeringTargetEntityAvoid::update(float) */

float SteeringTargetEntityAvoid::update(float param_1)

{
  long in_x0;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_48;
  float fStack_44;
  
  lVar1 = *(long *)(in_x0 + 0x30);
  *(undefined8 *)(in_x0 + 8) = *(undefined8 *)(in_x0 + 0x18);
  if (lVar1 != 0) {
    RawTransformGroup::updateWorldTransformation();
    fVar5 = *(float *)(in_x0 + 0x18);
    fVar4 = *(float *)(in_x0 + 0x1c);
    fVar7 = fVar4 - *(float *)(lVar1 + 0xf0);
    fVar6 = fVar5 - *(float *)(lVar1 + 0xe8);
    *(float *)(in_x0 + 0x10) = fVar6;
    *(float *)(in_x0 + 0x14) = fVar7;
    fVar2 = (float)NEON_fmadd(fVar6,fVar6,fVar7 * fVar7);
    fVar2 = SQRT(fVar2);
    if (0.0001 <= fVar2) {
      fVar6 = fVar6 * (1.0 / fVar2);
      fVar7 = fVar7 * (1.0 / fVar2);
      *(float *)(in_x0 + 0x10) = fVar6;
      *(float *)(in_x0 + 0x14) = fVar7;
    }
    fVar2 = *(float *)(in_x0 + 0x3c) - fVar2;
    *(float *)(in_x0 + 0x28) = fVar2;
    sincosf(*(float *)(in_x0 + 0x38),&fStack_44,&local_48);
    fVar3 = (float)NEON_fmadd(fVar6,local_48,fStack_44 * -fVar7);
    fVar6 = (float)NEON_fmadd(fVar6,fStack_44,local_48 * fVar7);
    param_1 = fVar5 + fVar2 * fVar3;
    *(float *)(in_x0 + 8) = param_1;
    *(float *)(in_x0 + 0xc) = fVar2 * fVar6 + fVar4;
  }
  return param_1;
}


