// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPolylineTranslation
// Entry Point: 008d0940
// Size: 88 bytes
// Signature: undefined __thiscall setPolylineTranslation(FillPlaneGeometry * this, uint param_1, float param_2, float param_3)


/* FillPlaneGeometry::setPolylineTranslation(unsigned int, float, float) */

void __thiscall
FillPlaneGeometry::setPolylineTranslation
          (FillPlaneGeometry *this,uint param_1,float param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((ulong)param_1 < (ulong)(*(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 3)) {
    pfVar1 = *(float **)(*(long *)(this + 0xb0) + (ulong)param_1 * 8);
    fVar2 = pfVar1[10];
    fVar3 = pfVar1[0xb];
    fVar4 = *pfVar1;
    pfVar1[10] = param_2;
    fVar5 = pfVar1[2];
    this[0x96] = (FillPlaneGeometry)0x1;
    pfVar1[0xb] = param_3;
    *pfVar1 = (param_2 - fVar2) + fVar4;
    pfVar1[2] = (param_3 - fVar3) + fVar5;
    *(undefined2 *)(this + 0x94) = 0x101;
  }
  return;
}


