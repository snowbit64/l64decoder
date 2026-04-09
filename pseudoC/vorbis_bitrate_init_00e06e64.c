// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_bitrate_init
// Entry Point: 00e06e64
// Size: 160 bytes
// Signature: undefined vorbis_bitrate_init(void)


void vorbis_bitrate_init(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  ulong uVar5;
  undefined auVar6 [16];
  double dVar7;
  double dVar8;
  
  puVar1 = *(ulong **)(param_1 + 0x30);
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  uVar2 = puVar1[0x2ab];
  if (0 < (long)uVar2) {
    uVar5 = *puVar1;
    lVar3 = 0;
    if (uVar5 != 0) {
      lVar3 = (long)puVar1[1] / (long)uVar5;
    }
    dVar4 = (double)*(long *)(param_1 + 8);
    dVar7 = (double)(int)(uVar5 >> 1);
    *(undefined4 *)param_2 = 1;
    param_2[6] = lVar3;
    auVar6 = NEON_scvtf(*(undefined (*) [16])(puVar1 + 0x2a8),8);
    param_2[4] = (long)(double)(long)((auVar6._8_8_ * dVar7) / dVar4);
    param_2[3] = (long)(double)(long)((auVar6._0_8_ * dVar7) / dVar4);
    uVar5 = puVar1[0x2aa];
    dVar8 = (double)puVar1[0x2ac];
    param_2[7] = 0x401c000000000000;
    lVar3 = (long)(dVar8 * (double)uVar2);
    param_2[1] = lVar3;
    param_2[2] = lVar3;
    param_2[5] = (long)(double)(long)((dVar7 * (double)uVar5) / dVar4);
  }
  return;
}


