// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00885e7c
// Size: 188 bytes
// Signature: undefined __cdecl update(float param_1)


/* SteeringTargetEntity::update(float) */

float SteeringTargetEntity::update(float param_1)

{
  long in_x0;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = *(long *)(in_x0 + 0x30);
  *(undefined8 *)(in_x0 + 8) = *(undefined8 *)(in_x0 + 0x18);
  if (lVar1 != 0) {
    RawTransformGroup::updateWorldTransformation();
    fVar2 = *(float *)(lVar1 + 0xf0);
    fVar6 = *(float *)(in_x0 + 0x38);
    fVar5 = fVar2 - *(float *)(in_x0 + 0x1c);
    fVar3 = *(float *)(lVar1 + 0xe8);
    fVar7 = fVar3 - *(float *)(in_x0 + 0x18);
    *(float *)(in_x0 + 8) = fVar3;
    *(float *)(in_x0 + 0xc) = fVar2;
    fVar4 = (float)NEON_fmadd(fVar7,fVar7,fVar5 * fVar5);
    fVar4 = SQRT(fVar4);
    *(float *)(in_x0 + 0x28) = fVar4;
    if (fVar6 == 0.0) {
      param_1 = fVar5 * (1.0 / fVar4);
      *(float *)(in_x0 + 0x10) = fVar7 * (1.0 / fVar4);
      *(float *)(in_x0 + 0x14) = param_1;
    }
    else {
      *(float *)(in_x0 + 0x28) = fVar4 - fVar6;
      fVar7 = fVar7 * (1.0 / fVar4);
      fVar5 = fVar5 * (1.0 / fVar4);
      *(float *)(in_x0 + 0x10) = fVar7;
      *(float *)(in_x0 + 0x14) = fVar5;
      param_1 = fVar2 - fVar6 * fVar5;
      *(float *)(in_x0 + 8) = fVar3 - fVar6 * fVar7;
      *(float *)(in_x0 + 0xc) = param_1;
      if (fVar4 - fVar6 < 0.0) {
        *(undefined4 *)(in_x0 + 0x28) = 0;
      }
    }
  }
  return param_1;
}


