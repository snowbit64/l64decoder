// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLocalScaling
// Entry Point: 00ba6f50
// Size: 88 bytes
// Signature: undefined __thiscall setLocalScaling(Bt2HeightfieldTerrainShape * this, btVector3 * param_1)


/* Bt2HeightfieldTerrainShape::setLocalScaling(btVector3 const&) */

void __thiscall
Bt2HeightfieldTerrainShape::setLocalScaling(Bt2HeightfieldTerrainShape *this,btVector3 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)param_1;
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xac) = uVar5;
  *(undefined8 *)(this + 0xa4) = uVar3;
  *(undefined4 *)(this + 0xa0) = 0;
  fVar2 = (float)*(undefined8 *)(this + 0xa4);
  fVar4 = (float)((ulong)*(undefined8 *)(this + 0xa4) >> 0x20);
  *(float *)(this + 0x98) = fVar4;
  *(ulong *)(this + 0xb4) = CONCAT44((float)((ulong)uVar1 >> 0x20) / fVar4,(float)uVar1 / fVar2);
  *(float *)(this + 0xbc) = 1.0 / *(float *)(this + 0xac);
  *(float *)(this + 0x94) = fVar2 / (float)*(int *)(this + 0x68);
  *(float *)(this + 0x9c) = *(float *)(this + 0xac) / (float)*(int *)(this + 0x6c);
  return;
}


