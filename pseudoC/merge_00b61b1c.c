// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: merge
// Entry Point: 00b61b1c
// Size: 212 bytes
// Signature: undefined __thiscall merge(BoundingSphere * this, Vector3 * param_1, float param_2)


/* BoundingSphere::merge(Vector3 const&, float) */

void __thiscall BoundingSphere::merge(BoundingSphere *this,Vector3 *param_1,float param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = *(float *)(this + 0x18);
  if (fVar3 == 0.0) {
    *(float *)(this + 0x18) = param_2;
    uVar2 = *(undefined8 *)param_1;
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 8);
    *(undefined8 *)(this + 0xc) = uVar2;
    return;
  }
  puVar1 = (undefined8 *)(this + 0xc);
  fVar4 = (float)*puVar1 - (float)*(undefined8 *)param_1;
  fVar5 = (float)((ulong)*puVar1 >> 0x20) - (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar6 = *(float *)(this + 0x14) - *(float *)(param_1 + 8);
  fVar7 = fVar3 - param_2;
  fVar8 = (float)NEON_fmadd(fVar6,fVar6,fVar5 * fVar5 + fVar4 * fVar4);
  if (fVar7 * fVar7 < fVar8) {
    fVar8 = SQRT(fVar8);
    uVar2 = *(undefined8 *)param_1;
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 8);
    *puVar1 = uVar2;
    fVar7 = ((fVar3 + fVar8) - param_2) / (fVar8 + fVar8);
    *(ulong *)(this + 0xc) =
         CONCAT44(fVar5 * fVar7 + (float)((ulong)*(undefined8 *)(this + 0xc) >> 0x20),
                  fVar4 * fVar7 + (float)*(undefined8 *)(this + 0xc));
    *(float *)(this + 0x14) = fVar6 * fVar7 + *(float *)(this + 0x14);
    *(float *)(this + 0x18) = (fVar3 + fVar8 + param_2) * 0.5;
    return;
  }
  if (fVar7 < 0.0) {
    *(float *)(this + 0x18) = param_2;
    uVar2 = *(undefined8 *)param_1;
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 8);
    *puVar1 = uVar2;
  }
  return;
}


