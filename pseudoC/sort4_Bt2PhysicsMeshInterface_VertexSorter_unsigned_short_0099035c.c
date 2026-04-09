// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>
// Entry Point: 0099035c
// Size: 428 bytes
// Signature: uint __cdecl __sort4<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>(ushort * param_1, ushort * param_2, ushort * param_3, ushort * param_4, VertexSorter * param_5)


/* unsigned int std::__ndk1::__sort4<Bt2PhysicsMeshInterface::VertexSorter&, unsigned
   short*>(unsigned short*, unsigned short*, unsigned short*, unsigned short*,
   Bt2PhysicsMeshInterface::VertexSorter&) */

uint std::__ndk1::__sort4<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>
               (ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4,
               VertexSorter *param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  
  uVar2 = __sort3<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>
                    (param_1,param_2,param_3,param_5);
  lVar4 = *(long *)param_5;
  uVar1 = *param_3;
  pfVar5 = (float *)(lVar4 + (ulong)*param_4 * 0xc);
  pfVar6 = (float *)(lVar4 + (ulong)uVar1 * 0xc);
  fVar7 = *pfVar5;
  fVar8 = *pfVar6;
  if (ABS(fVar7 - fVar8) <= 0.0001) {
    fVar7 = pfVar5[1];
    fVar8 = pfVar6[1];
    if (ABS(fVar7 - fVar8) <= 0.0001) {
      fVar7 = pfVar5[2];
      fVar8 = pfVar6[2];
    }
  }
  uVar3 = uVar2;
  if (fVar7 < fVar8) {
    *param_3 = *param_4;
    *param_4 = uVar1;
    uVar1 = *param_2;
    pfVar5 = (float *)(lVar4 + (ulong)*param_3 * 0xc);
    pfVar6 = (float *)(lVar4 + (ulong)uVar1 * 0xc);
    fVar7 = *pfVar5;
    fVar8 = *pfVar6;
    uVar3 = uVar2 + 1;
    if (ABS(fVar7 - fVar8) <= 0.0001) {
      fVar7 = pfVar5[1];
      fVar8 = pfVar6[1];
      if (ABS(fVar7 - fVar8) <= 0.0001) {
        fVar7 = pfVar5[2];
        fVar8 = pfVar6[2];
      }
    }
    if (fVar7 < fVar8) {
      *param_2 = *param_3;
      *param_3 = uVar1;
      uVar1 = *param_1;
      pfVar6 = (float *)(lVar4 + (ulong)*param_2 * 0xc);
      pfVar5 = (float *)(lVar4 + (ulong)uVar1 * 0xc);
      fVar7 = *pfVar6;
      fVar8 = *pfVar5;
      uVar3 = uVar2 + 2;
      if (ABS(fVar7 - fVar8) <= 0.0001) {
        fVar7 = pfVar6[1];
        fVar8 = pfVar5[1];
        if (ABS(fVar7 - fVar8) <= 0.0001) {
          fVar7 = pfVar6[2];
          fVar8 = pfVar5[2];
        }
      }
      if (fVar7 < fVar8) {
        uVar3 = uVar2 + 3;
        *param_1 = *param_2;
        *param_2 = uVar1;
      }
    }
  }
  return uVar3;
}


