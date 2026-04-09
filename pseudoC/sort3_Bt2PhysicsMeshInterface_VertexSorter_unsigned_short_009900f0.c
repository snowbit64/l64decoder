// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort3<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>
// Entry Point: 009900f0
// Size: 620 bytes
// Signature: uint __cdecl __sort3<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>(ushort * param_1, ushort * param_2, ushort * param_3, VertexSorter * param_4)


/* unsigned int std::__ndk1::__sort3<Bt2PhysicsMeshInterface::VertexSorter&, unsigned
   short*>(unsigned short*, unsigned short*, unsigned short*,
   Bt2PhysicsMeshInterface::VertexSorter&) */

uint std::__ndk1::__sort3<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>
               (ushort *param_1,ushort *param_2,ushort *param_3,VertexSorter *param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar1 = *param_2;
  lVar4 = *(long *)param_4;
  uVar2 = *param_1;
  pfVar6 = (float *)(lVar4 + (ulong)uVar1 * 0xc);
  pfVar5 = (float *)(lVar4 + (ulong)uVar2 * 0xc);
  fVar9 = *pfVar6;
  fVar8 = *pfVar5;
  if (ABS(fVar9 - fVar8) <= 0.0001) {
    fVar10 = pfVar6[1];
    fVar11 = pfVar5[1];
    if (ABS(fVar10 - fVar11) <= 0.0001) {
      fVar10 = pfVar6[2];
      fVar11 = pfVar5[2];
    }
    if (fVar11 <= fVar10) goto LAB_0099019c;
  }
  else if (fVar8 <= fVar9) {
LAB_0099019c:
    pfVar5 = (float *)(lVar4 + (ulong)*param_3 * 0xc);
    fVar8 = *pfVar5;
    if (0.0001 < ABS(fVar8 - fVar9)) {
LAB_009901e4:
      if (fVar9 <= fVar8) {
        return 0;
      }
    }
    else {
      fVar8 = pfVar5[1];
      fVar9 = pfVar6[1];
      if (0.0001 < ABS(fVar8 - fVar9)) goto LAB_009901e4;
      if (pfVar6[2] <= pfVar5[2]) {
        return 0;
      }
    }
    *param_2 = *param_3;
    *param_3 = uVar1;
    uVar1 = *param_1;
    pfVar6 = (float *)(lVar4 + (ulong)*param_2 * 0xc);
    pfVar5 = (float *)(lVar4 + (ulong)uVar1 * 0xc);
    fVar8 = *pfVar6;
    fVar9 = *pfVar5;
    if (ABS(fVar8 - fVar9) <= 0.0001) {
      fVar8 = pfVar6[1];
      fVar9 = pfVar5[1];
      if (ABS(fVar8 - fVar9) <= 0.0001) {
        if (pfVar5[2] <= pfVar6[2]) {
          return 1;
        }
        goto LAB_0099031c;
      }
    }
    if (fVar9 <= fVar8) {
      return 1;
    }
LAB_0099031c:
    *param_1 = *param_2;
    *param_2 = uVar1;
    return 2;
  }
  pfVar7 = (float *)(lVar4 + (ulong)*param_3 * 0xc);
  if (ABS(*pfVar7 - fVar9) <= 0.0001) {
    fVar9 = pfVar7[1];
    fVar10 = pfVar6[1];
    if (ABS(fVar9 - fVar10) <= 0.0001) {
      fVar9 = pfVar7[2];
      fVar10 = pfVar6[2];
    }
    if (fVar10 <= fVar9) goto LAB_00990288;
  }
  else if (fVar9 <= *pfVar7) {
LAB_00990288:
    *param_1 = uVar1;
    *param_2 = uVar2;
    pfVar6 = (float *)(lVar4 + (ulong)*param_3 * 0xc);
    if (ABS(*pfVar6 - fVar8) <= 0.0001) {
      if (ABS(pfVar6[1] - pfVar5[1]) <= 0.0001) {
        if (pfVar5[2] <= pfVar6[2]) {
          return 1;
        }
      }
      else if (pfVar5[1] <= pfVar6[1]) {
        return 1;
      }
    }
    else if (fVar8 <= *pfVar6) {
      return 1;
    }
    uVar3 = 2;
    *param_2 = *param_3;
    goto LAB_00990348;
  }
  uVar3 = 1;
  *param_1 = *param_3;
LAB_00990348:
  *param_3 = uVar2;
  return uVar3;
}


