// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: merge
// Entry Point: 00b60408
// Size: 152 bytes
// Signature: undefined __thiscall merge(BoundingAxisAlignedBox * this, Vector3 * param_1)


/* BoundingAxisAlignedBox::merge(Vector3 const&) */

void __thiscall BoundingAxisAlignedBox::merge(BoundingAxisAlignedBox *this,Vector3 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)(this + 0x28);
  if (*(float *)(this + 0x28) < *(float *)param_1) {
    fVar1 = *(float *)param_1;
  }
  *(float *)(this + 0x28) = fVar1;
  fVar2 = *(float *)(this + 0x1c);
  if (*(float *)param_1 < *(float *)(this + 0x1c)) {
    fVar2 = *(float *)param_1;
  }
  *(float *)(this + 0x1c) = fVar2;
  fVar3 = *(float *)(this + 0x2c);
  if (*(float *)(this + 0x2c) < *(float *)(param_1 + 4)) {
    fVar3 = *(float *)(param_1 + 4);
  }
  *(float *)(this + 0x2c) = fVar3;
  fVar4 = *(float *)(this + 0x20);
  if (*(float *)(param_1 + 4) < *(float *)(this + 0x20)) {
    fVar4 = *(float *)(param_1 + 4);
  }
  *(float *)(this + 0x20) = fVar4;
  fVar5 = *(float *)(this + 0x30);
  if (*(float *)(this + 0x30) < *(float *)(param_1 + 8)) {
    fVar5 = *(float *)(param_1 + 8);
  }
  *(float *)(this + 0x30) = fVar5;
  fVar6 = *(float *)(param_1 + 8);
  *(float *)(this + 0xc) = (fVar2 + fVar1) * 0.5;
  *(float *)(this + 0x10) = (fVar4 + fVar3) * 0.5;
  *(undefined4 *)(this + 0x18) = 0;
  fVar1 = *(float *)(this + 0x24);
  if (fVar6 < *(float *)(this + 0x24)) {
    fVar1 = fVar6;
  }
  *(float *)(this + 0x24) = fVar1;
  *(float *)(this + 0x14) = (fVar1 + fVar5) * 0.5;
  return;
}


