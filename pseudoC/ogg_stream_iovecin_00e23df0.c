// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_stream_iovecin
// Entry Point: 00e23df0
// Size: 620 bytes
// Signature: undefined ogg_stream_iovecin(void)


undefined8 ogg_stream_iovecin(void **param_1,long param_2,uint param_3,long param_4,void *param_5)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  void **ppvVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  void *pvVar14;
  long lVar15;
  size_t *psVar16;
  ulong uVar17;
  
  if ((param_1 == (void **)0x0) || (pvVar3 = *param_1, pvVar3 == (void *)0x0)) goto LAB_00e23eec;
  if (param_2 == 0) {
LAB_00e24014:
    uVar5 = 0;
  }
  else {
    uVar17 = (ulong)param_3;
    if ((int)param_3 < 1) {
      lVar15 = 0;
      pvVar4 = param_1[3];
      if (pvVar4 != (void *)0x0) goto LAB_00e23e74;
LAB_00e23eb0:
      iVar2 = FUN_00e2405c(param_1,lVar15);
    }
    else {
      lVar15 = 0;
      plVar8 = (long *)(param_2 + 8);
      uVar6 = uVar17;
      do {
        lVar9 = *plVar8;
        if (lVar9 < 0) {
          return 0xffffffff;
        }
        if (0x7fffffffffffffff - lVar9 < lVar15) {
          return 0xffffffff;
        }
        lVar15 = lVar9 + lVar15;
        plVar8 = plVar8 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      pvVar4 = param_1[3];
      if (pvVar4 == (void *)0x0) goto LAB_00e23eb0;
LAB_00e23e74:
      pvVar7 = (void *)((long)param_1[2] - (long)pvVar4);
      param_1[2] = pvVar7;
      if (pvVar7 != (void *)0x0) {
        memmove(pvVar3,(void *)((long)pvVar3 + (long)pvVar4),(size_t)pvVar7);
      }
      param_1[3] = (void *)0x0;
      iVar2 = FUN_00e2405c(param_1,lVar15);
    }
    if (iVar2 == 0) {
      uVar6 = lVar15 / 0xff;
      iVar2 = FUN_00e2414c(param_1,uVar6 + 1);
      if (iVar2 == 0) {
        if (0 < (int)param_3) {
          pvVar3 = param_1[2];
          psVar16 = (size_t *)(param_2 + 8);
          do {
            memcpy((void *)((long)*param_1 + (long)pvVar3),(void *)psVar16[-1],*psVar16);
            iVar2 = *(int *)psVar16;
            psVar16 = psVar16 + 2;
            uVar17 = uVar17 - 1;
            pvVar3 = (void *)((long)iVar2 + (long)param_1[2]);
            param_1[2] = pvVar3;
          } while (uVar17 != 0);
        }
        if (lVar15 < 0xff) {
          pvVar3 = param_1[4];
          pvVar4 = param_1[5];
          uVar17 = 0;
          pvVar7 = param_1[7];
        }
        else {
          pvVar3 = param_1[4];
          pvVar4 = param_1[5];
          pvVar7 = param_1[7];
          if ((uVar6 < 8) ||
             (((void **)((long)pvVar4 + (long)pvVar7 * 8) < param_1 + 0x33 &&
              (param_1 + 0x32 < (void **)((long)pvVar4 + ((long)pvVar7 + uVar6) * 8))))) {
            uVar17 = 0;
LAB_00e23f8c:
            lVar9 = uVar6 - uVar17;
            ppvVar10 = (void **)((long)pvVar4 + (uVar17 + (long)pvVar7) * 8);
            puVar11 = (undefined4 *)((long)pvVar3 + (uVar17 + (long)pvVar7) * 4);
            do {
              pvVar14 = param_1[0x32];
              lVar9 = lVar9 + -1;
              *puVar11 = 0xff;
              *ppvVar10 = pvVar14;
              ppvVar10 = ppvVar10 + 1;
              puVar11 = puVar11 + 1;
            } while (lVar9 != 0);
          }
          else {
            uVar17 = uVar6 & 0xfffffffffffffff8;
            pvVar14 = param_1[0x32];
            ppvVar10 = (void **)((long)pvVar4 + ((long)pvVar7 + 4) * 8);
            puVar12 = (undefined8 *)((long)pvVar3 + ((long)pvVar7 + 4) * 4);
            uVar13 = uVar17;
            do {
              uVar13 = uVar13 - 8;
              puVar12[-1] = 0xff000000ff;
              puVar12[-2] = 0xff000000ff;
              ppvVar10[-3] = pvVar14;
              ppvVar10[-4] = pvVar14;
              ppvVar10[-1] = pvVar14;
              ppvVar10[-2] = pvVar14;
              ppvVar10[1] = pvVar14;
              *ppvVar10 = pvVar14;
              ppvVar10[3] = pvVar14;
              ppvVar10[2] = pvVar14;
              puVar12[1] = 0xff000000ff;
              *puVar12 = 0xff000000ff;
              ppvVar10 = ppvVar10 + 8;
              puVar12 = puVar12 + 4;
            } while (uVar13 != 0);
            if (uVar6 != uVar17) goto LAB_00e23f8c;
          }
          uVar17 = uVar6 & 0xffffffff;
        }
        *(int *)((long)pvVar3 + ((long)pvVar7 + uVar17) * 4) = (int)lVar15 + (int)uVar6 * -0xff;
        *(void **)((long)pvVar4 + ((long)pvVar7 + uVar17) * 8) = param_5;
        uVar1 = *(uint *)((long)pvVar3 + (long)pvVar7 * 4);
        pvVar4 = param_1[0x31];
        param_1[7] = (void *)((long)pvVar7 + uVar6 + 1);
        *(uint *)((long)pvVar3 + (long)pvVar7 * 4) = uVar1 | 0x100;
        param_1[0x31] = (void *)((long)pvVar4 + 1);
        param_1[0x32] = param_5;
        if (param_4 != 0) {
          *(undefined4 *)(param_1 + 0x2e) = 1;
          return 0;
        }
        goto LAB_00e24014;
      }
    }
LAB_00e23eec:
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


