// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generate
// Entry Point: 00a5dff4
// Size: 392 bytes
// Signature: undefined generate(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FoliageLayerGraphics::BlockDensity::generate() */

void FoliageLayerGraphics::BlockDensity::generate(void)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint *in_x0;
  uint *__s;
  void *pvVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  
  uVar2 = in_x0[1];
  uVar10 = (ulong)uVar2;
  uVar11 = (ulong)(uVar2 * uVar2);
  __s = (uint *)operator_new__(uVar11 << 4);
  *(uint **)(in_x0 + 4) = __s;
  memset(__s,0,uVar10 * uVar10 * 0x10);
  uVar3 = *in_x0;
  fVar13 = (float)uVar10;
  fVar12 = (float)(ulong)uVar3;
  if (uVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar5 = 0;
    do {
      uVar7 = 0;
      do {
        uVar10 = (ulong)uVar7;
        uVar7 = uVar7 + 1;
        uVar10 = (ulong)(uVar2 * (int)(((float)(ulong)uVar5 / fVar12) * fVar13) +
                        (int)(((float)uVar10 / fVar12) * fVar13));
        __s[uVar10 * 4] = __s[uVar10 * 4] + 1;
      } while (uVar3 != uVar7);
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar3);
    uVar10 = (ulong)(uVar3 * uVar3) * 0xc;
  }
  pvVar4 = operator_new__(uVar10);
  *(void **)(in_x0 + 2) = pvVar4;
  puVar6 = __s;
  if (uVar2 * uVar2 != 0) {
    do {
      uVar5 = *puVar6;
      *(void **)(puVar6 + 2) = pvVar4;
      uVar11 = uVar11 - 1;
      *puVar6 = 0;
      pvVar4 = (void *)((long)pvVar4 + (ulong)uVar5 * 0xc);
      puVar6 = puVar6 + 4;
    } while (uVar11 != 0);
  }
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      uVar8 = 0;
      uVar7 = 0;
      do {
        uVar11 = (ulong)uVar7;
        fVar1 = (float)(uVar8 ^ uVar5);
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + 0x10000;
        puVar6 = __s + (ulong)(uVar2 * (int)(((float)(ulong)uVar5 / fVar12) * fVar13) +
                              (int)(((float)uVar11 / fVar12) * fVar13)) * 4;
        pfVar9 = (float *)(*(long *)(puVar6 + 2) + (ulong)*puVar6 * 0xc);
        *puVar6 = *puVar6 + 1;
        *pfVar9 = (float)uVar11 / fVar12;
        pfVar9[1] = (float)(ulong)uVar5 / fVar12;
        pfVar9[2] = fVar1;
      } while (uVar3 != uVar7);
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar3);
  }
  return;
}


