// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_analysis_blockout
// Entry Point: 00e05658
// Size: 1168 bytes
// Signature: undefined vorbis_analysis_blockout(void)


undefined8 vorbis_analysis_blockout(long param_1,long *param_2)

{
  long lVar1;
  void **ppvVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  void *pvVar6;
  void **ppvVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  size_t sVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  long lVar15;
  size_t sVar16;
  ulong __size;
  long lVar17;
  long *plVar18;
  float *pfVar19;
  long *plVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  
  lVar17 = *(long *)(param_1 + 8);
  plVar18 = *(long **)(lVar17 + 0x30);
  lVar9 = plVar18[*(long *)(param_1 + 0x40)];
  if (lVar9 < 0) {
    lVar9 = lVar9 + 1;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x30) == -1) {
    return 0;
  }
  puVar13 = *(undefined8 **)(param_1 + 0x88);
  lVar15 = *(long *)(param_1 + 0x50);
  plVar20 = (long *)param_2[0x17];
  pfVar19 = (float *)puVar13[0xe];
  lVar5 = _ve_envelope_search(param_1);
  if (lVar5 == -1) {
    if (*(int *)(param_1 + 0x30) == 0) {
      return 0;
    }
LAB_00e056e8:
    lVar5 = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  else {
    if (*plVar18 == plVar18[1]) goto LAB_00e056e8;
    *(long *)(param_1 + 0x48) = lVar5;
  }
  lVar5 = plVar18[lVar5];
  lVar10 = plVar18[*(long *)(param_1 + 0x40)];
  lVar1 = lVar10 + 3;
  if (-1 < lVar10) {
    lVar1 = lVar10;
  }
  lVar10 = lVar5 + 3;
  if (-1 < lVar5) {
    lVar10 = lVar5;
  }
  if (-1 >= lVar5) {
    lVar5 = lVar5 + 1;
  }
  lVar1 = *(long *)(param_1 + 0x50) + (lVar1 >> 2) + (lVar10 >> 2);
  if ((long)*(int *)(param_1 + 0x24) < lVar1 + (lVar5 >> 1)) {
    return 0;
  }
  ppvVar7 = (void **)param_2[0x12];
  while (ppvVar7 != (void **)0x0) {
    ppvVar2 = (void **)ppvVar7[1];
    free(*ppvVar7);
    *ppvVar7 = (void *)0x0;
    ppvVar7[1] = (void *)0x0;
    free(ppvVar7);
    ppvVar7 = ppvVar2;
  }
  if (param_2[0x11] != 0) {
    pvVar6 = realloc((void *)param_2[0xe],param_2[0x10] + param_2[0x11]);
    param_2[0xe] = (long)pvVar6;
    param_2[0x10] = param_2[0x10] + param_2[0x11];
    param_2[0x11] = 0;
  }
  lVar5 = *(long *)(param_1 + 0x38);
  param_2[0xf] = 0;
  lVar12 = *(long *)(param_1 + 0x40);
  param_2[0x12] = 0;
  lVar10 = *(long *)(param_1 + 0x48);
  param_2[6] = lVar5;
  param_2[7] = lVar12;
  param_2[8] = lVar10;
  if (lVar12 == 0) {
    iVar14 = _ve_envelope_mark(param_1);
    if (iVar14 == 0) goto LAB_00e057d0;
LAB_00e057e8:
    *(undefined4 *)((long)plVar20 + 0xc) = 0;
  }
  else {
    if ((lVar5 == 0) || (lVar10 == 0)) goto LAB_00e057e8;
LAB_00e057d0:
    *(undefined4 *)((long)plVar20 + 0xc) = 1;
  }
  lVar5 = *(long *)(param_1 + 0x58);
  lVar10 = *(long *)(param_1 + 0x60);
  lVar12 = *(long *)(param_1 + 0x40);
  param_2[0xd] = param_1;
  fVar23 = *(float *)(plVar20 + 1);
  fVar21 = *pfVar19;
  lVar12 = plVar18[lVar12];
  param_2[0xb] = lVar5;
  param_2[0xc] = lVar10;
  *(long *)(param_1 + 0x60) = lVar10 + 1;
  *(int *)(param_2 + 9) = (int)lVar12;
  if (fVar21 < fVar23) {
    *pfVar19 = fVar23;
    fVar21 = fVar23;
  }
  fVar21 = (float)_vp_ampmax_decay(fVar21,param_1);
  iVar14 = *(int *)(lVar17 + 4);
  *pfVar19 = fVar21;
  lVar5 = param_2[0xf];
  sVar11 = param_2[0x10];
  *(float *)(plVar20 + 1) = fVar21;
  sVar16 = (long)iVar14 * 8;
  pvVar6 = (void *)param_2[0xe];
  if ((long)sVar11 < (long)(sVar16 + lVar5)) {
    if (pvVar6 != (void *)0x0) {
      ppvVar7 = (void **)malloc(0x10);
      lVar10 = param_2[0x11];
      pvVar8 = (void *)param_2[0x12];
      *ppvVar7 = pvVar6;
      ppvVar7[1] = pvVar8;
      param_2[0x11] = lVar10 + lVar5;
      param_2[0x12] = (long)ppvVar7;
    }
    param_2[0x10] = sVar16;
    pvVar6 = malloc(sVar16);
    lVar5 = 0;
    param_2[0xe] = (long)pvVar6;
    sVar11 = sVar16;
  }
  lVar10 = lVar5 + sVar16;
  *param_2 = (long)pvVar6 + lVar5;
  if ((long)sVar11 < (long)(lVar10 + sVar16)) {
    if (pvVar6 != (void *)0x0) {
      ppvVar7 = (void **)malloc(0x10);
      lVar5 = param_2[0x11];
      pvVar8 = (void *)param_2[0x12];
      *ppvVar7 = pvVar6;
      ppvVar7[1] = pvVar8;
      param_2[0x11] = lVar5 + lVar10;
      param_2[0x12] = (long)ppvVar7;
    }
    param_2[0x10] = sVar16;
    pvVar6 = malloc(sVar16);
    lVar10 = 0;
    param_2[0xe] = (long)pvVar6;
    sVar11 = sVar16;
  }
  lVar5 = lVar10 + sVar16;
  param_2[0xf] = lVar5;
  *plVar20 = (long)pvVar6 + lVar10;
  if (0 < iVar14) {
    lVar10 = 0;
    lVar15 = lVar15 - (lVar9 >> 1);
    while( true ) {
      sVar16 = (lVar15 + *(int *)(param_2 + 9)) * 4;
      __size = sVar16 + 7 & 0xfffffffffffffff8;
      if ((long)sVar11 < (long)(__size + lVar5)) {
        if (pvVar6 != (void *)0x0) {
          ppvVar7 = (void **)malloc(0x10);
          lVar9 = param_2[0x11];
          pvVar8 = (void *)param_2[0x12];
          *ppvVar7 = pvVar6;
          ppvVar7[1] = pvVar8;
          param_2[0x11] = lVar9 + lVar5;
          param_2[0x12] = (long)ppvVar7;
        }
        param_2[0x10] = __size;
        pvVar6 = malloc(__size);
        lVar5 = 0;
        param_2[0xe] = (long)pvVar6;
      }
      lVar9 = lVar10 * 8;
      *(long *)(*plVar20 + lVar9) = (long)pvVar6 + lVar5;
      pvVar6 = *(void **)(*plVar20 + lVar9);
      pvVar8 = *(void **)(*(long *)(param_1 + 0x10) + lVar9);
      param_2[0xf] = lVar5 + __size;
      memcpy(pvVar6,pvVar8,sVar16);
      lVar10 = lVar10 + 1;
      iVar14 = *(int *)(lVar17 + 4);
      *(long *)(*param_2 + lVar9) = *(long *)(*plVar20 + lVar9) + lVar15 * 4;
      if (iVar14 <= lVar10) break;
      lVar5 = param_2[0xf];
      sVar11 = param_2[0x10];
      pvVar6 = (void *)param_2[0xe];
    }
  }
  if ((*(int *)(param_1 + 0x30) != 0) &&
     ((long)*(int *)(param_1 + 0x30) <= *(long *)(param_1 + 0x50))) {
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_2 + 10) = 1;
    return 1;
  }
  lVar9 = plVar18[1];
  if (lVar9 < 0) {
    lVar9 = lVar9 + 1;
  }
  iVar14 = (int)lVar1 - (int)(lVar9 >> 1);
  if (iVar14 < 1) {
    return 1;
  }
  lVar9 = (lVar9 << 0x1f) >> 0x20;
  lVar5 = (long)iVar14;
  _ve_envelope_shift(*puVar13,lVar5);
  iVar3 = *(int *)(lVar17 + 4);
  uVar4 = *(int *)(param_1 + 0x24) - iVar14;
  *(uint *)(param_1 + 0x24) = uVar4;
  if ((0 < iVar3) &&
     (memmove(**(void ***)(param_1 + 0x10),(void *)((long)**(void ***)(param_1 + 0x10) + lVar5 * 4),
              -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2),
     1 < *(int *)(lVar17 + 4))) {
    lVar15 = 1;
    do {
      pvVar6 = *(void **)(*(long *)(param_1 + 0x10) + lVar15 * 8);
      memmove(pvVar6,(void *)((long)pvVar6 + lVar5 * 4),(long)*(int *)(param_1 + 0x24) << 2);
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(lVar17 + 4));
  }
  uVar22 = *(undefined8 *)(param_1 + 0x40);
  *(long *)(param_1 + 0x50) = lVar9;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x38) = uVar22;
  if (*(int *)(param_1 + 0x30) == 0) {
    lVar17 = *(long *)(param_1 + 0x58);
  }
  else {
    iVar14 = *(int *)(param_1 + 0x30) - iVar14;
    if (iVar14 < 1) {
      iVar14 = -1;
    }
    lVar17 = *(long *)(param_1 + 0x58);
    *(int *)(param_1 + 0x30) = iVar14;
    if (iVar14 <= lVar9) {
      lVar17 = (lVar5 - lVar9) + (long)iVar14 + lVar17;
      goto LAB_00e05adc;
    }
  }
  lVar17 = lVar17 + lVar5;
LAB_00e05adc:
  *(long *)(param_1 + 0x58) = lVar17;
  return 1;
}


