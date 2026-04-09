// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>
// Entry Point: 009908b0
// Size: 688 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>(ushort * param_1, ushort * param_2, VertexSorter * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<Bt2PhysicsMeshInterface::VertexSorter&, unsigned
   short*>(unsigned short*, unsigned short*, Bt2PhysicsMeshInterface::VertexSorter&) */

bool std::__ndk1::
     __insertion_sort_incomplete<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>
               (ushort *param_1,ushort *param_2,VertexSorter *param_3)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ushort *puVar6;
  ushort *puVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  ushort *puVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  switch((long)param_2 - (long)param_1 >> 1) {
  case 0:
  case 1:
    break;
  case 2:
    uVar1 = *param_1;
    pfVar8 = (float *)(*(long *)param_3 + (ulong)param_2[-1] * 0xc);
    pfVar12 = (float *)(*(long *)param_3 + (ulong)uVar1 * 0xc);
    fVar13 = *pfVar8;
    fVar14 = *pfVar12;
    if (ABS(fVar13 - fVar14) <= 0.0001) {
      fVar13 = pfVar8[1];
      fVar14 = pfVar12[1];
      if (ABS(fVar13 - fVar14) <= 0.0001) {
        if (pfVar12[2] <= pfVar8[2]) {
          return true;
        }
        goto LAB_00990b40;
      }
    }
    if (fVar13 < fVar14) {
LAB_00990b40:
      *param_1 = param_2[-1];
      param_2[-1] = uVar1;
      return true;
    }
    break;
  case 3:
    __sort3<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>
              (param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    __sort4<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>
              (param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_00990508(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    __sort3<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>
              (param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar3 = 0;
      iVar4 = 0;
      lVar5 = *(long *)param_3;
      puVar11 = param_1 + 3;
      puVar7 = param_1 + 2;
      do {
        puVar6 = puVar11;
        uVar1 = *puVar6;
        pfVar8 = (float *)(lVar5 + (ulong)uVar1 * 0xc);
        pfVar12 = (float *)(lVar5 + (ulong)*puVar7 * 0xc);
        fVar13 = *pfVar8;
        if (ABS(fVar13 - *pfVar12) <= 0.0001) {
          fVar14 = pfVar8[1];
          fVar15 = pfVar12[1];
          if (ABS(fVar14 - fVar15) <= 0.0001) {
            fVar14 = pfVar8[2];
            fVar15 = pfVar12[2];
          }
          if (fVar14 < fVar15) goto LAB_00990a44;
        }
        else if (fVar13 < *pfVar12) {
LAB_00990a44:
          *puVar6 = *puVar7;
          lVar10 = lVar3;
          puVar11 = param_1;
          if (puVar7 != param_1) {
            do {
              uVar2 = *(ushort *)((long)param_1 + lVar10 + 2);
              pfVar12 = (float *)(lVar5 + (ulong)uVar2 * 0xc);
              puVar11 = puVar7;
              if (0.0001 < ABS(fVar13 - *pfVar12)) {
                if (*pfVar12 <= fVar13) break;
              }
              else if (ABS(pfVar8[1] - pfVar12[1]) <= 0.0001) {
                if (pfVar12[2] <= pfVar8[2]) {
                  puVar11 = (ushort *)((long)param_1 + lVar10 + 4);
                  break;
                }
              }
              else if (pfVar12[1] <= pfVar8[1]) break;
              puVar7 = puVar7 + -1;
              lVar9 = lVar10 + -2;
              *(ushort *)((long)param_1 + lVar10 + 4) = uVar2;
              lVar10 = lVar9;
              puVar11 = param_1;
            } while (lVar9 != -4);
          }
          iVar4 = iVar4 + 1;
          *puVar11 = uVar1;
          if (iVar4 == 8) {
            return puVar6 + 1 == param_2;
          }
        }
        lVar3 = lVar3 + 2;
        puVar11 = puVar6 + 1;
        puVar7 = puVar6;
      } while (puVar6 + 1 != param_2);
    }
  }
  return true;
}


