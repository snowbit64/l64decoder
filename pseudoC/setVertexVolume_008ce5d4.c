// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVertexVolume
// Entry Point: 008ce5d4
// Size: 204 bytes
// Signature: undefined __thiscall setVertexVolume(FillPlaneGeometry * this, VertexFormat * param_1, float param_2)


/* FillPlaneGeometry::setVertexVolume(FillPlaneGeometry::VertexFormat&, float) */

void __thiscall
FillPlaneGeometry::setVertexVolume(FillPlaneGeometry *this,VertexFormat *param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  *(float *)param_1 = param_2;
  if (*(short *)(param_1 + 0x16) != -1) {
    return;
  }
  fVar6 = *(float *)(this + 0x9c);
  pfVar2 = *(float **)(*(long *)(this + 0xb0) + (ulong)*(ushort *)(param_1 + 0x14) * 8);
  fVar5 = (float)NEON_fmadd((float)((ulong)(*(long *)(this + 0xe8) - *(long *)(this + 0xe0)) >> 5 &
                                   0xffffffff) * param_2,*(undefined4 *)(this + 0x11c),fVar6);
  if ((fVar6 <= fVar5) && (fVar6 = *(float *)(this + 0xa8), fVar5 <= *(float *)(this + 0xa8))) {
    fVar6 = fVar5;
  }
  pfVar1 = *(float **)(pfVar2 + 4);
  do {
    pfVar3 = pfVar1;
    pfVar1 = pfVar3 + 3;
    fVar5 = pfVar3[4];
    pfVar4 = (float *)(*(long *)(pfVar2 + 6) + -0xc);
    if (pfVar1 == (float *)(*(long *)(pfVar2 + 6) + -0xc)) break;
    pfVar4 = pfVar1;
  } while (fVar6 < fVar5);
  fVar9 = pfVar3[2];
  fVar10 = pfVar3[5];
  fVar7 = *pfVar3;
  fVar5 = (fVar6 - fVar5) / (pfVar3[1] - fVar5);
  fVar8 = *pfVar4;
  pfVar2[1] = fVar6;
  fVar7 = (float)NEON_fmadd(fVar7 - fVar8,fVar5,fVar8);
  fVar6 = (float)NEON_fmadd(fVar9 - fVar10,fVar5,fVar10);
  *pfVar2 = fVar7 + pfVar2[10];
  pfVar2[2] = fVar6 + pfVar2[0xb];
  return;
}


