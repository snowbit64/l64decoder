// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _ve_envelope_init
// Entry Point: 00e074b4
// Size: 1208 bytes
// Signature: undefined _ve_envelope_init(void)


void _ve_envelope_init(int *param_1,long param_2)

{
  int iVar1;
  float *pfVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined auVar12 [16];
  int iVar13;
  undefined auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  int iStack_78;
  int iStack_74;
  
  lVar5 = *(long *)(param_2 + 0x30);
  iVar1 = *(int *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x3e) = 0x80;
  iVar13 = *(int *)(lVar5 + 0x1390);
  lVar5 = *(long *)(lVar5 + 8);
  *param_1 = iVar1;
  param_1[3] = iVar13;
  if (lVar5 < 0) {
    lVar5 = lVar5 + 1;
  }
  *(undefined8 *)(param_1 + 1) = 0x4000000080;
  *(long *)(param_1 + 0x44) = lVar5 >> 1;
  pvVar3 = calloc(0x80,4);
  *(void **)(param_1 + 0xc) = pvVar3;
  mdct_init(param_1 + 4,0x80);
  lVar5 = 0;
  iVar13 = 0;
  iVar15 = 1;
  iVar16 = 2;
  iVar17 = 3;
  lVar6 = *(long *)(param_1 + 0xc);
  do {
    auVar12._0_8_ = (long)iVar16;
    auVar12._8_8_ = (long)iVar17;
    auVar14._0_8_ = (long)iVar13;
    auVar14._8_8_ = (long)iVar15;
    auVar12 = NEON_scvtf(auVar12,8);
    auVar14 = NEON_scvtf(auVar14,8);
    dVar8 = sin((auVar12._8_8_ / 127.0) * 3.141592653589793);
    dVar9 = sin((auVar12._0_8_ / 127.0) * 3.141592653589793);
    dVar10 = sin((auVar14._8_8_ / 127.0) * 3.141592653589793);
    dVar11 = sin((auVar14._0_8_ / 127.0) * 3.141592653589793);
    iVar13 = iVar13 + 4;
    iVar15 = iVar15 + 4;
    iVar16 = iStack_78 + 4;
    iVar17 = iStack_74 + 4;
    pfVar2 = (float *)(lVar6 + lVar5);
    pfVar2[4] = (float)dVar9 * (float)dVar9;
    pfVar2[5] = (float)dVar8 * (float)dVar8;
    *pfVar2 = (float)dVar11 * (float)dVar11;
    pfVar2[1] = (float)dVar10 * (float)dVar10;
    lVar5 = lVar5 + 0x10;
    iStack_78 = iVar16;
    iStack_74 = iVar17;
  } while (lVar5 != 0x200);
  *(undefined8 *)(param_1 + 0x1a) = 0x600000006;
  *(undefined8 *)(param_1 + 0xe) = 0x400000002;
  *(undefined8 *)(param_1 + 0x14) = 0x500000004;
  *(undefined8 *)(param_1 + 0x20) = 0x800000009;
  *(undefined8 *)(param_1 + 0x26) = 0x80000000d;
  *(undefined8 *)(param_1 + 0x2c) = 0x800000011;
  *(undefined8 *)(param_1 + 0x32) = 0x800000016;
  puVar4 = (undefined8 *)malloc(0x10);
  fVar7 = (float)param_1[0x12];
  *(undefined8 **)(param_1 + 0x10) = puVar4;
  *puVar4 = 0x3f6c835e3ec3ef15;
  puVar4[1] = 0x3ec3ef153f6c835e;
  param_1[0x12] = (int)(1.0 / (fVar7 + 0.3826834 + 0.9238795 + 0.9238795 + 0.3826834));
  puVar4 = (undefined8 *)malloc(0x14);
  fVar7 = (float)param_1[0x18];
  *(undefined8 **)(param_1 + 0x16) = puVar4;
  *(undefined4 *)(puVar4 + 2) = 0x3e9e377a;
  *puVar4 = 0x3f4f1bbd3e9e377a;
  puVar4[1] = 0x3f4f1bbd3f800000;
  param_1[0x18] = (int)(1.0 / (fVar7 + 0.309017 + 0.809017 + 1.0 + 0.809017 + 0.309017));
  puVar4 = (undefined8 *)malloc(0x18);
  fVar7 = (float)param_1[0x1e];
  *(undefined8 **)(param_1 + 0x1c) = puVar4;
  puVar4[2] = 0x3e8483ee3f3504f3;
  *puVar4 = 0x3f3504f33e8483ee;
  puVar4[1] = 0x3f7746ea3f7746ea;
  param_1[0x1e] =
       (int)(1.0 / (fVar7 + 0.258819 + 0.7071068 + 0.9659258 + 0.9659258 + 0.7071068 + 0.258819));
  puVar4 = (undefined8 *)malloc(0x20);
  fVar7 = (float)param_1[0x24];
  *(undefined8 **)(param_1 + 0x22) = puVar4;
  *puVar4 = 0x3f0e39da3e47c5c2;
  puVar4[1] = 0x3f7b14be3f54db31;
  puVar4[2] = 0x3f54db313f7b14be;
  puVar4[3] = 0x3e47c5c23f0e39da;
  param_1[0x24] =
       (int)(1.0 / (fVar7 + 0.1950903 + 0.5555702 + 0.8314696 + 0.9807853 + 0.9807853 + 0.8314696 +
                    0.5555702 + 0.1950903));
  puVar4 = (undefined8 *)malloc(0x20);
  fVar7 = (float)param_1[0x2a];
  *(undefined8 **)(param_1 + 0x28) = puVar4;
  *puVar4 = 0x3f0e39da3e47c5c2;
  puVar4[1] = 0x3f7b14be3f54db31;
  puVar4[2] = 0x3f54db313f7b14be;
  puVar4[3] = 0x3e47c5c23f0e39da;
  param_1[0x2a] =
       (int)(1.0 / (fVar7 + 0.1950903 + 0.5555702 + 0.8314696 + 0.9807853 + 0.9807853 + 0.8314696 +
                    0.5555702 + 0.1950903));
  puVar4 = (undefined8 *)malloc(0x20);
  fVar7 = (float)param_1[0x30];
  *(undefined8 **)(param_1 + 0x2e) = puVar4;
  *puVar4 = 0x3f0e39da3e47c5c2;
  puVar4[1] = 0x3f7b14be3f54db31;
  puVar4[2] = 0x3f54db313f7b14be;
  puVar4[3] = 0x3e47c5c23f0e39da;
  param_1[0x30] =
       (int)(1.0 / (fVar7 + 0.1950903 + 0.5555702 + 0.8314696 + 0.9807853 + 0.9807853 + 0.8314696 +
                    0.5555702 + 0.1950903));
  puVar4 = (undefined8 *)malloc(0x20);
  fVar7 = (float)param_1[0x36];
  *(undefined8 **)(param_1 + 0x34) = puVar4;
  *puVar4 = 0x3f0e39da3e47c5c2;
  puVar4[1] = 0x3f7b14be3f54db31;
  puVar4[2] = 0x3f54db313f7b14be;
  puVar4[3] = 0x3e47c5c23f0e39da;
  param_1[0x36] =
       (int)(1.0 / (fVar7 + 0.1950903 + 0.5555702 + 0.8314696 + 0.9807853 + 0.9807853 + 0.8314696 +
                    0.5555702 + 0.1950903));
  pvVar3 = calloc((long)iVar1 * 7,0x90);
  *(void **)(param_1 + 0x38) = pvVar3;
  pvVar3 = calloc(*(size_t *)(param_1 + 0x3e),4);
  *(void **)(param_1 + 0x3c) = pvVar3;
  return;
}


