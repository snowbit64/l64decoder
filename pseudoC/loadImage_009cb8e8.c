// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImage
// Entry Point: 009cb8e8
// Size: 220 bytes
// Signature: undefined loadImage(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementIndexMask::loadImage() */

void ProceduralPlacementIndexMask::loadImage(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *in_x0;
  void *pvVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  ProceduralPlacementMask::loadImage();
  iVar2 = (**(code **)(*in_x0 + 0x40))();
  iVar3 = (**(code **)(*in_x0 + 0x48))();
  uVar1 = iVar3 * iVar2;
  uVar13 = (ulong)uVar1;
  pvVar4 = operator_new__(uVar13 << 2);
  in_x0[0x19] = (long)pvVar4;
  if (uVar1 != 0) {
    lVar5 = in_x0[0xb];
    if (uVar1 < 8) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar13 & 0xfffffff8;
      puVar9 = (undefined8 *)(lVar5 + 0x10);
      puVar11 = (undefined8 *)((long)pvVar4 + 0x10);
      uVar12 = uVar7;
      do {
        uVar16 = puVar9[-1];
        uVar15 = puVar9[-2];
        uVar18 = puVar9[1];
        uVar17 = *puVar9;
        puVar9[-1] = 0x437f0000437f0000;
        puVar9[-2] = 0x437f0000437f0000;
        puVar9[1] = 0x437f0000437f0000;
        *puVar9 = 0x437f0000437f0000;
        puVar9 = puVar9 + 4;
        uVar12 = uVar12 - 8;
        puVar11[-1] = CONCAT44((int)(float)((ulong)uVar16 >> 0x20),(int)(float)uVar16);
        puVar11[-2] = CONCAT44((int)(float)((ulong)uVar15 >> 0x20),(int)(float)uVar15);
        puVar11[1] = CONCAT44((int)(float)((ulong)uVar18 >> 0x20),(int)(float)uVar18);
        *puVar11 = CONCAT44((int)(float)((ulong)uVar17 >> 0x20),(int)(float)uVar17);
        puVar11 = puVar11 + 4;
      } while (uVar12 != 0);
      if (uVar7 == uVar13) {
        return;
      }
    }
    lVar8 = uVar13 - uVar7;
    pfVar6 = (float *)(lVar5 + uVar7 * 4);
    piVar10 = (int *)((long)pvVar4 + uVar7 * 4);
    do {
      fVar14 = *pfVar6;
      lVar8 = lVar8 + -1;
      *pfVar6 = 255.0;
      *piVar10 = (int)fVar14;
      pfVar6 = pfVar6 + 1;
      piVar10 = piVar10 + 1;
    } while (lVar8 != 0);
  }
  return;
}


