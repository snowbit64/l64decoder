// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRestLengthScale
// Entry Point: 00f7f9f0
// Size: 128 bytes
// Signature: undefined __thiscall setRestLengthScale(btSoftBody * this, float param_1)


/* btSoftBody::setRestLengthScale(float) */

void __thiscall btSoftBody::setRestLengthScale(btSoftBody *this,float param_1)

{
  ulong uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = (ulong)*(uint *)(this + 0x394);
  if (0 < (int)*(uint *)(this + 0x394)) {
    fVar3 = *(float *)(this + 0x668);
    pfVar2 = (float *)(*(long *)(this + 0x3a0) + 0x30);
    do {
      uVar1 = uVar1 - 1;
      fVar4 = pfVar2[-4] * param_1 * (1.0 / fVar3);
      pfVar2[-4] = fVar4;
      pfVar2[-1] = fVar4 * fVar4;
      *pfVar2 = SQRT(*pfVar2) * param_1 * (1.0 / fVar3);
      pfVar2 = pfVar2 + 0x12;
    } while (uVar1 != 0);
  }
  *(float *)(this + 0x668) = param_1;
  if ((*(int *)(this + 0xec) == 2) && (((byte)this[0xe0] & 3) == 0)) {
    *(undefined8 *)(this + 0xec) = 1;
    return;
  }
  return;
}


