// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: evaluate
// Entry Point: 00b56a34
// Size: 84 bytes
// Signature: undefined __thiscall evaluate(LinearSpline * this, float param_1, float * param_2, float * param_3, Vector3 * param_4, Vector3 * param_5)


/* LinearSpline::evaluate(float, float*, float*, Vector3&, Vector3&) const */

void __thiscall
LinearSpline::evaluate
          (LinearSpline *this,float param_1,float *param_2,float *param_3,Vector3 *param_4,
          Vector3 *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = param_2[2];
  fVar2 = (float)*(undefined8 *)param_2;
  fVar5 = (float)*(undefined8 *)param_3 - fVar2;
  fVar3 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar6 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) - fVar3;
  fVar7 = param_3[2] - fVar4;
  fVar1 = (float)NEON_fmadd(param_1,0,fVar7);
  *(ulong *)param_4 = CONCAT44(fVar3 + fVar6 * param_1,fVar2 + fVar5 * param_1);
  *(float *)(param_4 + 8) = fVar4 + fVar7 * param_1;
  *(ulong *)param_5 = CONCAT44(fVar6 + param_1 * 0.0 + 0.0,fVar5 + param_1 * 0.0 + 0.0);
  *(float *)(param_5 + 8) = fVar1 + 0.0;
  return;
}


