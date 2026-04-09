// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: slerp
// Entry Point: 00b5c45c
// Size: 264 bytes
// Signature: undefined __thiscall slerp(GsQuaternion * this, GsQuaternion * param_1, GsQuaternion * param_2, float param_3)


/* GsQuaternion::slerp(GsQuaternion const&, GsQuaternion const&, float) */

void __thiscall
GsQuaternion::slerp(GsQuaternion *this,GsQuaternion *param_1,GsQuaternion *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = (float)*(undefined8 *)(param_2 + 8);
  fVar5 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar9 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar3 = (float)*(undefined8 *)param_2;
  fVar8 = (float)*(undefined8 *)param_1;
  fVar10 = (float)*(undefined8 *)(param_1 + 8);
  fVar7 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
  fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  fVar2 = fVar9 * fVar5 + fVar3 * fVar8 + fVar6 * fVar10 + fVar7 * fVar11;
  fVar4 = (float)NEON_fmin(fVar2,0x3f800000);
  fVar1 = -1.0;
  if (-1.0 <= fVar2) {
    fVar1 = fVar4;
  }
  fVar1 = acosf(fVar1);
  if (0.001 <= ABS(fVar1)) {
    fVar2 = sinf(fVar1);
    fVar4 = sinf((1.0 - param_3) * fVar1);
    fVar1 = sinf(fVar1 * param_3);
    fVar2 = 1.0 / fVar2;
    *(ulong *)(this + 8) =
         CONCAT44((fVar7 * fVar1 + fVar11 * fVar4) * fVar2,(fVar6 * fVar1 + fVar10 * fVar4) * fVar2)
    ;
    *(ulong *)this =
         CONCAT44((fVar5 * fVar1 + fVar9 * fVar4) * fVar2,(fVar3 * fVar1 + fVar8 * fVar4) * fVar2);
  }
  else {
    *(float *)(this + 4) = fVar9;
    *(float *)this = fVar8;
    *(float *)(this + 8) = fVar10;
    *(float *)(this + 0xc) = fVar11;
  }
  return;
}


