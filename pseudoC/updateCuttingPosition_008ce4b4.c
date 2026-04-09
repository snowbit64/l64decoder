// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateCuttingPosition
// Entry Point: 008ce4b4
// Size: 172 bytes
// Signature: undefined __thiscall updateCuttingPosition(FillPlaneGeometry * this, Polyline * param_1, float param_2)


/* FillPlaneGeometry::updateCuttingPosition(FillPlaneGeometry::Polyline*, float) */

void __thiscall
FillPlaneGeometry::updateCuttingPosition(FillPlaneGeometry *this,Polyline *param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar5 = *(float *)(this + 0x9c);
  fVar4 = (float)NEON_fmadd((float)((ulong)(*(long *)(this + 0xe8) - *(long *)(this + 0xe0)) >> 5 &
                                   0xffffffff) * param_2,*(undefined4 *)(this + 0x11c),fVar5);
  if ((fVar5 <= fVar4) && (fVar5 = *(float *)(this + 0xa8), fVar4 <= *(float *)(this + 0xa8))) {
    fVar5 = fVar4;
  }
  pfVar1 = *(float **)(param_1 + 0x10);
  do {
    pfVar2 = pfVar1;
    pfVar1 = pfVar2 + 3;
    fVar4 = pfVar2[4];
    pfVar3 = (float *)(*(long *)(param_1 + 0x18) + -0xc);
    if (pfVar1 == (float *)(*(long *)(param_1 + 0x18) + -0xc)) break;
    pfVar3 = pfVar1;
  } while (fVar5 < fVar4);
  fVar8 = pfVar2[2];
  fVar9 = pfVar2[5];
  fVar6 = *pfVar2;
  fVar4 = (fVar5 - fVar4) / (pfVar2[1] - fVar4);
  fVar7 = *pfVar3;
  *(float *)(param_1 + 4) = fVar5;
  fVar6 = (float)NEON_fmadd(fVar6 - fVar7,fVar4,fVar7);
  fVar5 = (float)NEON_fmadd(fVar8 - fVar9,fVar4,fVar9);
  *(float *)param_1 = fVar6 + *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 8) = fVar5 + *(float *)(param_1 + 0x2c);
  return;
}


