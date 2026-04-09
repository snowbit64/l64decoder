// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resetLinkRestLengths
// Entry Point: 00f80238
// Size: 92 bytes
// Signature: undefined resetLinkRestLengths(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btSoftBody::resetLinkRestLengths() */

void btSoftBody::resetLinkRestLengths(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  ulong uVar3;
  float *pfVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  uVar3 = (ulong)*(uint *)(in_x0 + 0x394);
  if (0 < (int)*(uint *)(in_x0 + 0x394)) {
    pfVar4 = (float *)(*(long *)(in_x0 + 0x3a0) + 0x30);
    do {
      lVar1 = *(long *)(pfVar4 + -8);
      lVar2 = *(long *)(pfVar4 + -6);
      uVar3 = uVar3 - 1;
      fVar5 = *(float *)(lVar1 + 0x10) - *(float *)(lVar2 + 0x10);
      fVar8 = *(float *)(lVar1 + 0x14) - *(float *)(lVar2 + 0x14);
      fVar7 = *(float *)(lVar1 + 0x18) - *(float *)(lVar2 + 0x18);
      uVar6 = NEON_fmadd(fVar8,fVar8,fVar5 * fVar5);
      fVar5 = (float)NEON_fmadd(fVar7,fVar7,uVar6);
      pfVar4[-1] = fVar5;
      *pfVar4 = fVar5;
      pfVar4[-4] = SQRT(fVar5);
      pfVar4 = pfVar4 + 0x12;
    } while (uVar3 != 0);
  }
  return;
}


