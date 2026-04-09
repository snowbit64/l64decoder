// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set
// Entry Point: 00b5bfc8
// Size: 444 bytes
// Signature: undefined __thiscall set(GsQuaternion * this, Matrix4x4 * param_1)


/* GsQuaternion::set(Matrix4x4 const&) */

void __thiscall GsQuaternion::set(GsQuaternion *this,Matrix4x4 *param_1)

{
  char cVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = *(float *)param_1;
  fVar4 = *(float *)(param_1 + 0x14);
  fVar5 = *(float *)(param_1 + 0x28);
  fVar6 = fVar3 + fVar4 + fVar5;
  if (0.0 <= fVar6) {
    fVar3 = SQRT(fVar6 + 1.0);
    *(float *)this = fVar3 * 0.5;
    fVar3 = 0.5 / fVar3;
    *(float *)(this + 4) = fVar3 * (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x24));
    *(float *)(this + 8) = fVar3 * (*(float *)(param_1 + 0x20) - *(float *)(param_1 + 8));
    *(float *)(this + 0xc) = fVar3 * (*(float *)(param_1 + 4) - *(float *)(param_1 + 0x10));
    return;
  }
  lVar2 = 0x14;
  if (fVar4 <= fVar3) {
    lVar2 = 0;
  }
  cVar1 = '\x02';
  if (fVar5 <= *(float *)(param_1 + lVar2)) {
    cVar1 = fVar3 < fVar4;
  }
  if (cVar1 == '\x02') {
    fVar3 = SQRT((fVar5 - (fVar3 + fVar4)) + 1.0);
    *(float *)(this + 0xc) = fVar3 * 0.5;
    fVar3 = 0.5 / fVar3;
    *(float *)(this + 4) = fVar3 * (*(float *)(param_1 + 8) + *(float *)(param_1 + 0x20));
    *(float *)(this + 8) = fVar3 * (*(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x18));
    fVar4 = *(float *)(param_1 + 4);
    fVar5 = *(float *)(param_1 + 0x10);
  }
  else if (cVar1 == '\x01') {
    fVar3 = SQRT((fVar4 - (fVar3 + fVar5)) + 1.0);
    *(float *)(this + 8) = fVar3 * 0.5;
    fVar3 = 0.5 / fVar3;
    *(float *)(this + 0xc) = fVar3 * (*(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x18));
    *(float *)(this + 4) = fVar3 * (*(float *)(param_1 + 0x10) + *(float *)(param_1 + 4));
    fVar4 = *(float *)(param_1 + 0x20);
    fVar5 = *(float *)(param_1 + 8);
  }
  else {
    if (cVar1 != '\0') {
      return;
    }
    fVar3 = SQRT((fVar3 - (fVar4 + fVar5)) + 1.0);
    *(float *)(this + 4) = fVar3 * 0.5;
    fVar3 = 0.5 / fVar3;
    *(float *)(this + 8) = fVar3 * (*(float *)(param_1 + 0x10) + *(float *)(param_1 + 4));
    *(float *)(this + 0xc) = fVar3 * (*(float *)(param_1 + 8) + *(float *)(param_1 + 0x20));
    fVar4 = *(float *)(param_1 + 0x18);
    fVar5 = *(float *)(param_1 + 0x24);
  }
  *(float *)this = fVar3 * (fVar4 - fVar5);
  return;
}


