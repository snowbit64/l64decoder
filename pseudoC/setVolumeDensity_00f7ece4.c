// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVolumeDensity
// Entry Point: 00f7ece4
// Size: 184 bytes
// Signature: undefined __thiscall setVolumeDensity(btSoftBody * this, float param_1)


/* btSoftBody::setVolumeDensity(float) */

void __thiscall btSoftBody::setVolumeDensity(btSoftBody *this,float param_1)

{
  float *pfVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar2 = *(uint *)(this + 0x3d4);
  uVar3 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    fVar8 = 0.0;
  }
  else {
    if (uVar2 == 1) {
      fVar8 = 0.0;
      uVar6 = 0;
    }
    else {
      uVar6 = uVar3 & 0xfffffffe;
      fVar8 = 0.0;
      fVar10 = 0.0;
      pfVar5 = (float *)(*(long *)(this + 0x3e0) + 0xb8);
      uVar7 = uVar6;
      do {
        pfVar1 = pfVar5 + -0x22;
        uVar7 = uVar7 - 2;
        fVar11 = *pfVar5;
        pfVar5 = pfVar5 + 0x44;
        fVar9 = ABS(*pfVar1);
        fVar11 = ABS(fVar11);
        fVar8 = fVar9 + fVar9 + fVar8 + fVar9 + fVar9;
        fVar10 = fVar11 + fVar11 + fVar10 + fVar11 + fVar11;
      } while (uVar7 != 0);
      fVar8 = fVar8 + fVar10;
      if (uVar6 == uVar3) goto LAB_00f7ed84;
    }
    lVar4 = uVar3 - uVar6;
    pfVar5 = (float *)(*(long *)(this + 0x3e0) + uVar6 * 0x88 + 0x30);
    do {
      lVar4 = lVar4 + -1;
      fVar10 = ABS(*pfVar5);
      fVar8 = fVar10 + fVar10 + fVar8 + fVar10 + fVar10;
      pfVar5 = pfVar5 + 0x22;
    } while (lVar4 != 0);
  }
LAB_00f7ed84:
  setVolumeMass(this,param_1 * 0.1666667 * fVar8);
  return;
}


