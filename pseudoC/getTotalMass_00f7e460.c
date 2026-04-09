// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTotalMass
// Entry Point: 00f7e460
// Size: 188 bytes
// Signature: undefined getTotalMass(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btSoftBody::getTotalMass() const */

float btSoftBody::getTotalMass(void)

{
  uint uVar1;
  long in_x0;
  ulong uVar2;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar1 = *(uint *)(in_x0 + 0x374);
  uVar2 = (ulong)uVar1;
  if ((int)uVar1 < 1) {
    return 0.0;
  }
  if (uVar1 == 1) {
    fVar7 = 0.0;
    uVar5 = 0;
  }
  else {
    uVar5 = uVar2 & 0xfffffffe;
    fVar8 = 0.0;
    fVar7 = 0.0;
    pfVar4 = (float *)(*(long *)(in_x0 + 0x380) + 0xd8);
    uVar6 = uVar5;
    do {
      fVar10 = 1.0 / *pfVar4;
      fVar9 = 1.0 / pfVar4[-0x1e];
      if (pfVar4[-0x1e] <= 0.0) {
        fVar9 = 0.0;
      }
      fVar8 = fVar9 + fVar8;
      if (*pfVar4 <= 0.0) {
        fVar10 = 0.0;
      }
      uVar6 = uVar6 - 2;
      fVar7 = fVar10 + fVar7;
      pfVar4 = pfVar4 + 0x3c;
    } while (uVar6 != 0);
    fVar7 = fVar7 + fVar8;
    if (uVar5 == uVar2) {
      return fVar7;
    }
  }
  lVar3 = uVar2 - uVar5;
  pfVar4 = (float *)(*(long *)(in_x0 + 0x380) + uVar5 * 0x78 + 0x60);
  do {
    fVar8 = 1.0 / *pfVar4;
    if (*pfVar4 <= 0.0) {
      fVar8 = 0.0;
    }
    lVar3 = lVar3 + -1;
    fVar7 = fVar8 + fVar7;
    pfVar4 = pfVar4 + 0x1e;
  } while (lVar3 != 0);
  return fVar7;
}


