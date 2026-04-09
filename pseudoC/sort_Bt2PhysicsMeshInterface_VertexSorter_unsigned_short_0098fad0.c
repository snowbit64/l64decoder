// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>
// Entry Point: 0098fad0
// Size: 1568 bytes
// Signature: void __cdecl __sort<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>(ushort * param_1, ushort * param_2, VertexSorter * param_3)


/* void std::__ndk1::__sort<Bt2PhysicsMeshInterface::VertexSorter&, unsigned short*>(unsigned
   short*, unsigned short*, Bt2PhysicsMeshInterface::VertexSorter&) */

void std::__ndk1::__sort<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>
               (ushort *param_1,ushort *param_2,VertexSorter *param_3)

{
  ulong uVar1;
  ushort *puVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ushort *puVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  ushort *puVar14;
  ushort *puVar15;
  ushort *puVar16;
  ushort *puVar17;
  ushort *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
LAB_0098fb04:
  puVar14 = param_2 + -1;
  puVar18 = param_2 + -2;
  puVar16 = param_1;
LAB_0098fb10:
  param_1 = puVar16;
  uVar9 = (long)param_2 - (long)param_1;
  uVar7 = (long)uVar9 >> 1;
  switch(uVar7) {
  case 0:
  case 1:
    goto switchD_0098ffe0_caseD_0;
  case 2:
    uVar3 = *param_1;
    pfVar11 = (float *)(*(long *)param_3 + (ulong)param_2[-1] * 0xc);
    pfVar12 = (float *)(*(long *)param_3 + (ulong)uVar3 * 0xc);
    fVar19 = *pfVar11;
    fVar20 = *pfVar12;
    if (ABS(fVar19 - fVar20) <= 0.0001) {
      fVar19 = pfVar11[1];
      fVar20 = pfVar12[1];
      if (ABS(fVar19 - fVar20) <= 0.0001) {
        fVar19 = pfVar11[2];
        fVar20 = pfVar12[2];
      }
    }
    if (fVar20 <= fVar19) {
      return;
    }
    *param_1 = param_2[-1];
    param_2[-1] = uVar3;
    return;
  case 3:
    __sort3<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>
              (param_1,param_1 + 1,puVar14,param_3);
    return;
  case 4:
    __sort4<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>
              (param_1,param_1 + 1,param_1 + 2,puVar14,param_3);
    return;
  case 5:
    FUN_00990508(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar14,param_3);
    goto switchD_0098ffe0_caseD_0;
  }
  if ((long)uVar9 < 0x3e) {
    __insertion_sort_3<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>
              (param_1,param_2,param_3);
    return;
  }
  uVar1 = uVar7;
  if ((long)uVar7 < 0) {
    uVar1 = uVar7 + 1;
  }
  puVar16 = (ushort *)((long)param_1 + (uVar1 & 0xfffffffffffffffe));
  if (uVar9 < 1999) {
    uVar6 = __sort3<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>
                      (param_1,puVar16,puVar14,param_3);
  }
  else {
    uVar9 = uVar7 + 3;
    if (-1 < (long)uVar7) {
      uVar9 = uVar7;
    }
    uVar6 = FUN_00990508(param_1,param_1 + ((long)uVar9 >> 2),puVar16,puVar16 + ((long)uVar9 >> 2),
                         puVar14,param_3);
  }
  uVar3 = *param_1;
  lVar8 = *(long *)param_3;
  pfVar11 = (float *)(lVar8 + (ulong)uVar3 * 0xc);
  pfVar12 = (float *)(lVar8 + (ulong)*puVar16 * 0xc);
  fVar19 = *pfVar11;
  fVar20 = *pfVar12;
  puVar10 = puVar14;
  puVar15 = puVar18;
  if (ABS(fVar19 - fVar20) <= 0.0001) {
    if (ABS(pfVar11[1] - pfVar12[1]) <= 0.0001) {
      if (pfVar12[2] <= pfVar11[2]) goto joined_r0x0098fc08;
    }
    else if (pfVar12[1] <= pfVar11[1]) {
joined_r0x0098fc08:
      for (; param_1 != puVar15; puVar15 = puVar15 + -1) {
        pfVar13 = (float *)(lVar8 + (ulong)*puVar15 * 0xc);
        if (0.0001 < ABS(*pfVar13 - fVar20)) {
          if (*pfVar13 < fVar20) goto LAB_0098fc90;
        }
        else {
          fVar21 = pfVar13[1];
          fVar22 = pfVar12[1];
          if (ABS(fVar21 - fVar22) <= 0.0001) {
            fVar21 = pfVar13[2];
            fVar22 = pfVar12[2];
          }
          if (fVar21 < fVar22) {
LAB_0098fc90:
            uVar6 = uVar6 + 1;
            *param_1 = *puVar15;
            *puVar15 = uVar3;
            puVar10 = puVar15;
            goto LAB_0098fc9c;
          }
        }
      }
      puVar15 = param_1 + 1;
      pfVar12 = (float *)(lVar8 + (ulong)*puVar14 * 0xc);
      puVar16 = puVar15;
      if (ABS(fVar19 - *pfVar12) <= 0.0001) {
        fVar20 = pfVar11[1];
        fVar21 = pfVar12[1];
        if (ABS(fVar20 - fVar21) <= 0.0001) {
          fVar20 = pfVar11[2];
          fVar21 = pfVar12[2];
        }
        if (fVar21 <= fVar20) goto LAB_0098fe7c;
      }
      else if (*pfVar12 <= fVar19) {
LAB_0098fe7c:
        do {
          if (puVar16 == puVar14) {
            return;
          }
          uVar3 = *puVar16;
          pfVar12 = (float *)(lVar8 + (ulong)uVar3 * 0xc);
          if (0.0001 < ABS(fVar19 - *pfVar12)) {
            if (fVar19 < *pfVar12) goto LAB_0098fec8;
          }
          else {
            fVar20 = pfVar11[1];
            fVar21 = pfVar12[1];
            if (ABS(fVar20 - fVar21) <= 0.0001) {
              fVar20 = pfVar11[2];
              fVar21 = pfVar12[2];
            }
            if (fVar20 < fVar21) goto LAB_0098fec8;
          }
          puVar16 = puVar16 + 1;
        } while( true );
      }
      goto LAB_0098fed0;
    }
  }
  else if (fVar20 <= fVar19) goto joined_r0x0098fc08;
LAB_0098fc9c:
  puVar15 = param_1 + 1;
  puVar17 = puVar15;
  if (puVar15 < puVar10) {
LAB_0098fca8:
    pfVar11 = (float *)(lVar8 + (ulong)*puVar16 * 0xc);
    fVar19 = *pfVar11;
    puVar17 = puVar15;
    do {
      uVar3 = *puVar17;
      pfVar12 = (float *)(lVar8 + (ulong)uVar3 * 0xc);
      if (ABS(*pfVar12 - fVar19) <= 0.0001) {
        fVar20 = pfVar12[1];
        fVar21 = pfVar11[1];
        if (ABS(fVar20 - fVar21) <= 0.0001) {
          fVar20 = pfVar12[2];
          fVar21 = pfVar11[2];
        }
        if (fVar21 <= fVar20) goto LAB_0098fd1c;
      }
      else if (fVar19 <= *pfVar12) goto LAB_0098fd1c;
      puVar17 = puVar17 + 1;
    } while( true );
  }
LAB_0098fd80:
  if (puVar17 != puVar16) {
    uVar3 = *puVar17;
    pfVar12 = (float *)(lVar8 + (ulong)*puVar16 * 0xc);
    pfVar11 = (float *)(lVar8 + (ulong)uVar3 * 0xc);
    fVar19 = *pfVar12;
    fVar20 = *pfVar11;
    if (ABS(fVar19 - fVar20) <= 0.0001) {
      fVar19 = pfVar12[1];
      fVar20 = pfVar11[1];
      if (ABS(fVar19 - fVar20) <= 0.0001) {
        fVar19 = pfVar12[2];
        fVar20 = pfVar11[2];
      }
    }
    if (fVar19 < fVar20) {
      uVar6 = uVar6 + 1;
      *puVar17 = *puVar16;
      *puVar16 = uVar3;
    }
  }
  if (uVar6 == 0) {
    bVar4 = __insertion_sort_incomplete<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>
                      (param_1,puVar17,param_3);
    bVar5 = __insertion_sort_incomplete<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>
                      (puVar17 + 1,param_2,param_3);
    if (bVar5) goto LAB_0098ffc0;
    puVar16 = puVar17 + 1;
    if (bVar4) goto LAB_0098fb10;
  }
  if ((long)param_2 - (long)puVar17 <= (long)puVar17 - (long)param_1) {
    __sort<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>(puVar17 + 1,param_2,param_3);
    param_2 = puVar17;
    goto LAB_0098fb04;
  }
  __sort<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>(param_1,puVar17,param_3);
  puVar16 = puVar17 + 1;
  goto LAB_0098fb10;
LAB_0098fec8:
  puVar15 = puVar16 + 1;
  *puVar16 = *puVar14;
  *puVar14 = uVar3;
LAB_0098fed0:
  if (puVar15 == puVar14) {
    return;
  }
LAB_0098fedc:
  pfVar11 = (float *)(lVar8 + (ulong)*param_1 * 0xc);
  fVar19 = *pfVar11;
  puVar16 = puVar15;
  do {
    uVar3 = *puVar16;
    pfVar12 = (float *)(lVar8 + (ulong)uVar3 * 0xc);
    if (ABS(fVar19 - *pfVar12) <= 0.0001) {
      fVar20 = pfVar11[1];
      fVar21 = pfVar12[1];
      if (ABS(fVar20 - fVar21) <= 0.0001) {
        fVar20 = pfVar11[2];
        fVar21 = pfVar12[2];
      }
      if (fVar20 < fVar21) break;
    }
    else if (fVar19 < *pfVar12) break;
    puVar16 = puVar16 + 1;
  } while( true );
  while (fVar19 < *pfVar12) {
LAB_0098ff50:
    puVar10 = puVar10 + -1;
    pfVar12 = (float *)(lVar8 + (ulong)*puVar10 * 0xc);
    if (ABS(fVar19 - *pfVar12) <= 0.0001) {
      fVar20 = pfVar11[1];
      fVar21 = pfVar12[1];
      if (ABS(fVar20 - fVar21) <= 0.0001) {
        fVar20 = pfVar11[2];
        fVar21 = pfVar12[2];
      }
      if (fVar21 <= fVar20) break;
      goto LAB_0098ff50;
    }
  }
  if (puVar10 <= puVar16) goto LAB_0098fb10;
  puVar15 = puVar16 + 1;
  *puVar16 = *puVar10;
  *puVar10 = uVar3;
  goto LAB_0098fedc;
  while (fVar19 <= *pfVar12) {
LAB_0098fd1c:
    puVar10 = puVar10 + -1;
    pfVar12 = (float *)(lVar8 + (ulong)*puVar10 * 0xc);
    if (ABS(*pfVar12 - fVar19) <= 0.0001) {
      fVar20 = pfVar12[1];
      fVar21 = pfVar11[1];
      if (ABS(fVar20 - fVar21) <= 0.0001) {
        fVar20 = pfVar12[2];
        fVar21 = pfVar11[2];
      }
      if (fVar20 < fVar21) break;
      goto LAB_0098fd1c;
    }
  }
  if (puVar10 < puVar17) goto LAB_0098fd80;
  uVar6 = uVar6 + 1;
  puVar2 = puVar10;
  if (puVar17 != puVar16) {
    puVar2 = puVar16;
  }
  puVar15 = puVar17 + 1;
  *puVar17 = *puVar10;
  *puVar10 = uVar3;
  puVar16 = puVar2;
  goto LAB_0098fca8;
LAB_0098ffc0:
  param_2 = puVar17;
  if (bVar4) {
switchD_0098ffe0_caseD_0:
    return;
  }
  goto LAB_0098fb04;
}


