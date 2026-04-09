// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeServerUpdateToStream
// Entry Point: 00983b38
// Size: 1512 bytes
// Signature: undefined __cdecl writeServerUpdateToStream(GsBitStream * param_1, uint param_2, float param_3, float param_4, float param_5, float param_6, uint param_7)


/* MeshSplitManager::writeServerUpdateToStream(GsBitStream*, unsigned int, float, float, float,
   float, unsigned int) */

void MeshSplitManager::writeServerUpdateToStream
               (GsBitStream *param_1,uint param_2,float param_3,float param_4,float param_5,
               float param_6,uint param_7)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  GsBitStream *this;
  uint in_w3;
  long lVar9;
  void *pvVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong __n;
  float *pfVar14;
  long lVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  int iVar21;
  undefined4 local_90;
  long local_88;
  
  this = (GsBitStream *)(ulong)param_2;
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  lVar11 = *(long *)(param_1 + 0x198);
  iVar21 = (int)((ulong)(*(long *)(param_1 + 0x1a0) - lVar11) >> 4);
  iVar6 = iVar21 + -1;
  if (iVar21 < 1) {
LAB_00983bdc:
    local_90 = local_90 & 0xffffff00;
    GsBitStream::writeBits(this,(uchar *)&local_90,8,true);
LAB_009840d0:
    if (*(long *)(lVar4 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  iVar21 = 0;
LAB_00983bac:
  iVar1 = iVar21 + iVar6;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 1;
  }
  uVar7 = iVar1 >> 1;
  uVar5 = *(uint *)(lVar11 + (-(ulong)(uVar7 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar7 << 4));
  if (uVar5 < param_7) {
    iVar21 = uVar7 + 1;
    if (iVar6 < iVar21) goto LAB_00983bdc;
    goto LAB_00983bac;
  }
  if (param_7 < uVar5) {
    iVar6 = uVar7 - 1;
    if (iVar6 < iVar21) goto LAB_00983bdc;
    goto LAB_00983bac;
  }
  pvVar10 = *(void **)(param_1 + 0x1b0);
  lVar9 = *(long *)(lVar11 + (ulong)uVar7 * 0x10 + 8);
  lVar11 = *(long *)(lVar9 + 8);
  lVar15 = *(long *)(lVar9 + 0x10);
  *(void **)(param_1 + 0x1b8) = pvVar10;
  uVar13 = (lVar15 - lVar11 >> 2) * 0xb6db6db7;
  if ((ulong)(*(long *)(param_1 + 0x1c0) - (long)pvVar10 >> 3) < (uVar13 & 0xffffffff)) {
    uVar12 = (uVar13 & 0xffffffff) * 8;
    pvVar8 = operator_new(uVar12);
    *(void **)(param_1 + 0x1b0) = pvVar8;
    *(void **)(param_1 + 0x1b8) = pvVar8;
    *(void **)(param_1 + 0x1c0) = (void *)((long)pvVar8 + uVar12);
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
    }
  }
  if ((int)uVar13 != 0) {
    iVar6 = 0;
    lVar11 = 0;
    do {
      pfVar14 = (float *)(*(long *)(lVar9 + 8) + lVar11);
      if (*(short *)(pfVar14 + 6) != 0) {
        piVar2 = *(int **)(param_1 + 0x1b8);
        uVar16 = NEON_fmadd(pfVar14[1] - param_4,pfVar14[1] - param_4,
                            (*pfVar14 - param_3) * (*pfVar14 - param_3));
        uVar16 = NEON_fmadd(pfVar14[2] - param_5,pfVar14[2] - param_5,uVar16);
        uVar20 = NEON_ucvtf((uint)*(ushort *)((long)pfVar14 + 0x1a));
        iVar21 = NEON_fmadd(uVar16,0x3a9d4952,uVar20);
        if (piVar2 == *(int **)(param_1 + 0x1c0)) {
          pvVar10 = *(void **)(param_1 + 0x1b0);
          __n = (long)piVar2 - (long)pvVar10;
          uVar12 = ((long)__n >> 3) + 1;
          if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar12 <= (ulong)((long)__n >> 2)) {
            uVar12 = (long)__n >> 2;
          }
          if (0x7ffffffffffffff7 < __n) {
            uVar12 = 0x1fffffffffffffff;
          }
          if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar8 = operator_new(uVar12 * 8);
          piVar2 = (int *)((long)pvVar8 + ((long)__n >> 3) * 8);
          *piVar2 = iVar6;
          piVar2[1] = iVar21;
          if (0 < (long)__n) {
            memcpy(pvVar8,pvVar10,__n);
          }
          *(void **)(param_1 + 0x1b0) = pvVar8;
          *(int **)(param_1 + 0x1b8) = piVar2 + 2;
          *(void **)(param_1 + 0x1c0) = (void *)((long)pvVar8 + uVar12 * 8);
          if (pvVar10 != (void *)0x0) {
            operator_delete(pvVar10);
          }
        }
        else {
          *piVar2 = iVar6;
          piVar2[1] = iVar21;
          *(int **)(param_1 + 0x1b8) = piVar2 + 2;
        }
        *(short *)((long)pfVar14 + 0x1a) = *(short *)((long)pfVar14 + 0x1a) + 1;
      }
      lVar11 = lVar11 + 0x1c;
      iVar6 = iVar6 + 1;
    } while ((uVar13 & 0xffffffff) * 0x1c - lVar11 != 0);
  }
  std::__ndk1::
  __sort<std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,MeshSplitManager::ConnectionShapeSortData>&,MeshSplitManager::ConnectionShapeSortData*>
            (*(ConnectionShapeSortData **)(param_1 + 0x1b0),
             *(ConnectionShapeSortData **)(param_1 + 0x1b8),(__less *)&local_90);
  uVar5 = GsBitStream::getWriteOffset();
  GsBitStream::writeSkipBits(this,8);
  pvVar10 = *(void **)(param_1 + 0x1b0);
  uVar7 = (uint)((ulong)(*(long *)(param_1 + 0x1b8) - (long)pvVar10) >> 3);
  if ((*(long *)(param_1 + 0x1b8) - (long)pvVar10 & 0x7fffff800U) != 0) {
    uVar7 = 0xff;
  }
  if (uVar7 == 0) {
    uVar13 = 0;
LAB_00984090:
    uVar7 = GsBitStream::getWriteOffset();
    GsBitStream::setWriteOffset(this,uVar5);
    local_90 = CONCAT31(local_90._1_3_,(char)uVar13);
    GsBitStream::writeBits(this,(uchar *)&local_90,8,true);
    GsBitStream::setWriteOffset(this,uVar7);
    goto LAB_009840d0;
  }
  lVar11 = 0;
  uVar13 = 1;
  fVar3 = 6.283185;
  do {
    uVar12 = (ulong)*(uint *)((long)pvVar10 + lVar11);
    lVar15 = *(long *)(lVar9 + 8);
    pfVar14 = (float *)(lVar15 + uVar12 * 0x1c);
    *(undefined2 *)((long)pfVar14 + 0x1a) = 0;
    *(short *)(pfVar14 + 6) = *(short *)(pfVar14 + 6) + -1;
    local_90 = *(undefined4 *)(*(long *)(param_1 + 0x180) + uVar12 * 4);
    GsBitStream::writeBits(this,(uchar *)&local_90,0x20,true);
    fVar17 = *pfVar14 + *(float *)(param_1 + 0x1ec);
    fVar19 = *(float *)(param_1 + 0x1e8);
    if (fVar17 <= *(float *)(param_1 + 0x1e8)) {
      fVar19 = fVar17;
    }
    fVar18 = 0.0;
    if (0.0 <= fVar17) {
      fVar18 = fVar19;
    }
    local_90 = (uint)(*(float *)(param_1 + 0x1e4) * fVar18);
    GsBitStream::writeBits(this,(uchar *)&local_90,*(uint *)(param_1 + 0x1f0),true);
    fVar17 = pfVar14[1] + *(float *)(param_1 + 0x200);
    fVar19 = *(float *)(param_1 + 0x1fc);
    if (fVar17 <= *(float *)(param_1 + 0x1fc)) {
      fVar19 = fVar17;
    }
    fVar18 = 0.0;
    if (0.0 <= fVar17) {
      fVar18 = fVar19;
    }
    local_90 = (uint)(*(float *)(param_1 + 0x1f8) * fVar18);
    GsBitStream::writeBits(this,(uchar *)&local_90,*(uint *)(param_1 + 0x204),true);
    fVar17 = pfVar14[2] + *(float *)(param_1 + 0x214);
    fVar19 = *(float *)(param_1 + 0x210);
    if (fVar17 <= *(float *)(param_1 + 0x210)) {
      fVar19 = fVar17;
    }
    fVar18 = 0.0;
    if (0.0 <= fVar17) {
      fVar18 = fVar19;
    }
    local_90 = (uint)(*(float *)(param_1 + 0x20c) * fVar18);
    GsBitStream::writeBits(this,(uchar *)&local_90,*(uint *)(param_1 + 0x218),true);
    fVar19 = pfVar14[3];
    if (6.283185 <= fVar19) {
      fVar17 = -6.283185;
LAB_00983f4c:
      fVar19 = fVar19 + fVar17;
    }
    else {
      fVar17 = fVar3;
      if (fVar19 < 0.0) goto LAB_00983f4c;
    }
    local_90 = (uint)((fVar19 * 4096.0) / 6.283185);
    if (0xffe < local_90) {
      local_90 = 0xfff;
    }
    GsBitStream::writeBits(this,(uchar *)&local_90,0xc,true);
    fVar19 = *(float *)(lVar15 + uVar12 * 0x1c + 0x10);
    if (6.283185 <= fVar19) {
      fVar17 = -6.283185;
LAB_00983fb4:
      fVar19 = fVar19 + fVar17;
    }
    else {
      fVar17 = fVar3;
      if (fVar19 < 0.0) goto LAB_00983fb4;
    }
    local_90 = (uint)((fVar19 * 4096.0) / 6.283185);
    if (0xffe < local_90) {
      local_90 = 0xfff;
    }
    GsBitStream::writeBits(this,(uchar *)&local_90,0xc,true);
    fVar19 = *(float *)(lVar15 + uVar12 * 0x1c + 0x14);
    if (6.283185 <= fVar19) {
      fVar17 = -6.283185;
LAB_00984018:
      fVar19 = fVar19 + fVar17;
    }
    else {
      fVar17 = fVar3;
      if (fVar19 < 0.0) goto LAB_00984018;
    }
    local_90 = (uint)((fVar19 * 4096.0) / 6.283185);
    if (0xffe < local_90) {
      local_90 = 0xfff;
    }
    GsBitStream::writeBits(this,(uchar *)&local_90,0xc,true);
    iVar6 = GsBitStream::getWriteOffset();
    if ((in_w3 < iVar6 - uVar5) || (uVar7 <= uVar13)) goto LAB_00984090;
    lVar11 = lVar11 + 8;
    uVar13 = uVar13 + 1;
    pvVar10 = *(void **)(param_1 + 0x1b0);
  } while( true );
}


