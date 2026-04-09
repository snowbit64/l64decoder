// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setQuantizationValues
// Entry Point: 00f5cb84
// Size: 376 bytes
// Signature: undefined __thiscall setQuantizationValues(btQuantizedBvh * this, btVector3 * param_1, btVector3 * param_2, float param_3)


/* btQuantizedBvh::setQuantizationValues(btVector3 const&, btVector3 const&, float) */

void __thiscall
btQuantizedBvh::setQuantizationValues
          (btQuantizedBvh *this,btVector3 *param_1,btVector3 *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *(float *)(param_1 + 8);
  uVar6 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x14) = 0;
  fVar1 = fVar1 - param_3;
  fVar2 = (float)uVar6 - param_3;
  fVar3 = (float)((ulong)uVar6 >> 0x20) - param_3;
  this[0x40] = (btQuantizedBvh)0x1;
  *(float *)(this + 0x10) = fVar1;
  *(ulong *)(this + 8) = CONCAT44(fVar3,fVar2);
  uVar6 = *(undefined8 *)param_2;
  fVar8 = *(float *)(param_2 + 8);
  *(undefined4 *)(this + 0x24) = 0;
  fVar4 = (float)uVar6 + param_3;
  fVar5 = (float)((ulong)uVar6 >> 0x20) + param_3;
  fVar8 = fVar8 + param_3;
  *(ulong *)(this + 0x18) = CONCAT44(fVar5,fVar4);
  *(float *)(this + 0x20) = fVar8;
  fVar9 = 65533.0 / (fVar4 - fVar2);
  fVar10 = 65533.0 / (fVar5 - fVar3);
  fVar7 = fVar2 - param_3;
  fVar12 = fVar3 - param_3;
  *(ulong *)(this + 0x28) = CONCAT44(fVar10,fVar9);
  if (fVar7 < fVar2) {
    *(float *)(this + 8) = fVar7;
    fVar2 = fVar7;
  }
  fVar7 = fVar8 - fVar1;
  fVar11 = fVar1 - param_3;
  if (fVar12 < fVar3) {
    *(float *)(this + 0xc) = fVar12;
    fVar3 = fVar12;
  }
  fVar12 = 65533.0 / fVar7;
  if (fVar11 < fVar1) {
    fVar7 = fVar8 - fVar11;
    *(float *)(this + 0x10) = fVar11;
    fVar1 = fVar11;
  }
  fVar11 = (float)NEON_fmadd(fVar7,fVar12,0x3f800000);
  fVar10 = fVar3 + param_3 + (float)(ulong)((int)((fVar5 - fVar3) * fVar10 + 1.0) | 1) / fVar10;
  fVar9 = fVar2 + param_3 + (float)(ulong)((int)((fVar4 - fVar2) * fVar9 + 1.0) | 1) / fVar9;
  if (fVar4 < fVar9) {
    *(float *)(this + 0x18) = fVar9;
    fVar4 = fVar9;
  }
  fVar9 = fVar1 + param_3 + (float)(ulong)((int)fVar11 | 1) / fVar12;
  if (fVar5 < fVar10) {
    *(float *)(this + 0x1c) = fVar10;
    fVar5 = fVar10;
  }
  if (fVar8 < fVar9) {
    fVar7 = fVar9 - fVar1;
    *(float *)(this + 0x20) = fVar9;
  }
  *(undefined4 *)(this + 0x34) = 0;
  *(float *)(this + 0x28) = 65533.0 / (fVar4 - fVar2);
  *(float *)(this + 0x2c) = 65533.0 / (fVar5 - fVar3);
  *(float *)(this + 0x30) = 65533.0 / fVar7;
  return;
}


