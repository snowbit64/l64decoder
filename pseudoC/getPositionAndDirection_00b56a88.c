// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPositionAndDirection
// Entry Point: 00b56a88
// Size: 104 bytes
// Signature: undefined __thiscall getPositionAndDirection(LinearSpline * this, uint param_1, float param_2, Vector3 * param_3, Vector3 * param_4)


/* LinearSpline::getPositionAndDirection(unsigned int, float, Vector3&, Vector3&) const */

void __thiscall
LinearSpline::getPositionAndDirection
          (LinearSpline *this,uint param_1,float param_2,Vector3 *param_3,Vector3 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  
  puVar1 = (undefined8 *)(*(long *)(this + 0x18) + (ulong)(param_1 * 3) * 4);
  puVar2 = (undefined8 *)(*(long *)(this + 0x18) + (ulong)(param_1 * 3 + 3) * 4);
  uVar5 = *puVar1;
  fVar7 = *(float *)(puVar1 + 1);
  uVar9 = *puVar2;
  fVar4 = (float)uVar5;
  fVar8 = (float)uVar9 - fVar4;
  fVar6 = (float)((ulong)uVar5 >> 0x20);
  fVar10 = (float)((ulong)uVar9 >> 0x20) - fVar6;
  fVar11 = *(float *)(puVar2 + 1) - fVar7;
  fVar3 = (float)NEON_fmadd(param_2,0,fVar11);
  *(ulong *)param_3 = CONCAT44(fVar6 + fVar10 * param_2,fVar4 + fVar8 * param_2);
  *(float *)(param_3 + 8) = fVar7 + fVar11 * param_2;
  *(ulong *)param_4 = CONCAT44(fVar10 + param_2 * 0.0 + 0.0,fVar8 + param_2 * 0.0 + 0.0);
  *(float *)(param_4 + 8) = fVar3 + 0.0;
  return;
}


