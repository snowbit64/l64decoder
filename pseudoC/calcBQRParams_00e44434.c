// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calcBQRParams
// Entry Point: 00e44434
// Size: 344 bytes
// Signature: undefined calcBQRParams(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::BiquadResonantFilterInstance::calcBQRParams() */

void SoLoud::BiquadResonantFilterInstance::calcBQRParams(void)

{
  long in_x0;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_28;
  float local_24;
  
  lVar1 = *(long *)(in_x0 + 0x10);
  *(undefined4 *)(in_x0 + 0xb8) = 0;
  sincosf((*(float *)(lVar1 + 8) * 6.283185) / *(float *)(lVar1 + 4),&local_24,&local_28);
  fVar2 = *(float *)(lVar1 + 0xc);
  *(undefined4 *)(in_x0 + 0x20) = 1;
  if (3 < *(uint *)(in_x0 + 0xbc)) {
    return;
  }
  local_24 = local_24 / (fVar2 + fVar2);
  fVar2 = 1.0 / (local_24 + 1.0);
  switch(*(uint *)(in_x0 + 0xbc)) {
  case 0:
    *(undefined4 *)(in_x0 + 0x20) = 0;
    return;
  case 1:
    fVar4 = 1.0 - local_28;
    fVar3 = fVar4;
    break;
  case 2:
    fVar4 = -(local_28 + 1.0);
    fVar3 = local_28 + 1.0;
    break;
  case 3:
    *(undefined4 *)(in_x0 + 0xa8) = 0;
    *(float *)(in_x0 + 0xa4) = local_24 * fVar2;
    *(float *)(in_x0 + 0xac) = -(local_24 * fVar2);
    *(float *)(in_x0 + 0xb0) = local_28 * -2.0 * fVar2;
    *(float *)(in_x0 + 0xb4) = (1.0 - local_24) * fVar2;
    return;
  }
  fVar3 = fVar3 * 0.5 * fVar2;
  *(float *)(in_x0 + 0xa4) = fVar3;
  *(float *)(in_x0 + 0xa8) = fVar2 * fVar4;
  *(ulong *)(in_x0 + 0xac) = CONCAT44(local_28 * -2.0 * fVar2,fVar3);
  *(float *)(in_x0 + 0xb4) = (1.0 - local_24) * fVar2;
  return;
}


