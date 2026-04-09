// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e119ac
// Entry Point: 00e119ac
// Size: 664 bytes
// Signature: undefined FUN_00e119ac(void)


bool FUN_00e119ac(long param_1,int *param_2,long param_3,void *param_4)

{
  void *pvVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  undefined4 *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  
  uVar6 = *(ulong *)(param_1 + 0x38);
  lVar7 = *(long *)(param_2 + 2);
  lVar8 = *(long *)(param_2 + 6);
  if (*(long *)(lVar7 + uVar6 * 8) == 0) {
    uVar5 = -(uVar6 >> 0x1f & 1) & 0xfffffff800000000 | (uVar6 & 0xffffffff) << 3;
    iVar9 = *param_2;
    fVar16 = (float)*(long *)(lVar8 + 8) * 0.5;
    lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x30) + uVar5);
    if (lVar3 < 0) {
      lVar3 = lVar3 + 1;
    }
    uVar10 = lVar3 >> 1;
    dVar12 = atan((double)(fVar16 * 0.00074));
    dVar13 = atan((double)(fVar16 * fVar16 * 1.85e-08));
    pvVar1 = malloc((long)((uVar10 << 0x20) + 0x100000000) >> 0x1e);
    *(void **)(lVar7 + uVar5) = pvVar1;
    lVar7 = *(long *)(param_2 + 2);
    iVar4 = (int)uVar10;
    puVar11 = *(undefined4 **)(lVar7 + uVar5);
    if (iVar4 < 1) {
      *puVar11 = 0xffffffff;
      param_2[(long)(int)uVar6 + 4] = iVar4;
    }
    else {
      dVar15 = (double)iVar9;
      lVar3 = 0;
      dVar12 = (double)NEON_fmadd(dVar12,0x402a333340000000,dVar13 * 2.240000009536743);
      while( true ) {
        fVar17 = (fVar16 / (float)iVar4) * (float)(int)lVar3;
        dVar13 = atan((double)(fVar17 * 0.00074));
        dVar14 = atan((double)(fVar17 * fVar17 * 1.85e-08));
        dVar13 = (double)NEON_fmadd(dVar13,0x402a333340000000,dVar14 * 2.240000009536743);
        iVar2 = (int)((dVar13 + (double)(fVar17 * 0.0001)) *
                     (double)(float)(dVar15 / (dVar12 + (double)(fVar16 * 0.0001))));
        if (iVar9 <= iVar2) {
          iVar2 = iVar9 + -1;
        }
        puVar11[lVar3] = iVar2;
        if ((uVar10 & 0xffffffff) - 1 == lVar3) break;
        iVar9 = *param_2;
        lVar3 = lVar3 + 1;
      }
      puVar11[uVar10 & 0xffffffff] = 0xffffffff;
      param_2[(long)(int)uVar6 + 4] = iVar4;
    }
  }
  if (param_3 == 0) {
    memset(param_4,0,(long)param_2[uVar6 + 4] << 2);
  }
  else {
    vorbis_lsp_to_curve(*(undefined4 *)(param_3 + (long)param_2[1] * 4),
                        (float)*(int *)(lVar8 + 0x1c),param_4,*(undefined8 *)(lVar7 + uVar6 * 8),
                        param_2[uVar6 + 4],*param_2,param_3);
  }
  return param_3 != 0;
}


