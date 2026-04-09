// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_3<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>
// Entry Point: 0099072c
// Size: 388 bytes
// Signature: void __cdecl __insertion_sort_3<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>(ushort * param_1, ushort * param_2, VertexSorter * param_3)


/* void std::__ndk1::__insertion_sort_3<Bt2PhysicsMeshInterface::VertexSorter&, unsigned
   short*>(unsigned short*, unsigned short*, Bt2PhysicsMeshInterface::VertexSorter&) */

void std::__ndk1::__insertion_sort_3<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>
               (ushort *param_1,ushort *param_2,VertexSorter *param_3)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  ushort *puVar5;
  ushort *puVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  ushort *puVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  __sort3<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>
            (param_1,param_1 + 1,param_1 + 2,param_3);
  if (param_1 + 3 != param_2) {
    lVar3 = 0;
    lVar4 = *(long *)param_3;
    puVar10 = param_1 + 3;
    puVar6 = param_1 + 2;
    do {
      puVar5 = puVar10;
      uVar1 = *puVar5;
      pfVar7 = (float *)(lVar4 + (ulong)uVar1 * 0xc);
      pfVar11 = (float *)(lVar4 + (ulong)*puVar6 * 0xc);
      fVar12 = *pfVar7;
      if (ABS(fVar12 - *pfVar11) <= 0.0001) {
        fVar13 = pfVar7[1];
        fVar14 = pfVar11[1];
        if (ABS(fVar13 - fVar14) <= 0.0001) {
          fVar13 = pfVar7[2];
          fVar14 = pfVar11[2];
        }
        if (fVar13 < fVar14) goto LAB_00990800;
      }
      else if (fVar12 < *pfVar11) {
LAB_00990800:
        *puVar5 = *puVar6;
        lVar9 = lVar3;
        puVar10 = param_1;
        if (puVar6 != param_1) {
          do {
            uVar2 = *(ushort *)((long)param_1 + lVar9 + 2);
            pfVar11 = (float *)(lVar4 + (ulong)uVar2 * 0xc);
            puVar10 = puVar6;
            if (0.0001 < ABS(fVar12 - *pfVar11)) {
              if (*pfVar11 <= fVar12) break;
            }
            else if (ABS(pfVar7[1] - pfVar11[1]) <= 0.0001) {
              if (pfVar11[2] <= pfVar7[2]) {
                puVar10 = (ushort *)((long)param_1 + lVar9 + 4);
                break;
              }
            }
            else if (pfVar11[1] <= pfVar7[1]) break;
            puVar6 = puVar6 + -1;
            lVar8 = lVar9 + -2;
            *(ushort *)((long)param_1 + lVar9 + 4) = uVar2;
            lVar9 = lVar8;
            puVar10 = param_1;
          } while (lVar8 != -4);
        }
        *puVar10 = uVar1;
      }
      lVar3 = lVar3 + 2;
      puVar10 = puVar5 + 1;
      puVar6 = puVar5;
    } while (puVar5 + 1 != param_2);
  }
  return;
}


