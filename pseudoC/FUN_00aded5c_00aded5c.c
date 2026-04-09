// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00aded5c
// Entry Point: 00aded5c
// Size: 760 bytes
// Signature: undefined FUN_00aded5c(void)


ulong FUN_00aded5c(long param_1,long param_2,int *param_3,long param_4)

{
  uint *puVar1;
  long lVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  ushort uVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  void *pvVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  int *piVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  undefined8 uVar22;
  
  lVar19 = *(long *)(param_3 + 0x58);
  if (lVar19 == 0) {
    uVar11 = 0;
  }
  else {
    uVar4 = param_3[0x57];
    uVar11 = (ulong)uVar4;
    if (uVar4 != 0) {
      *(uint *)(param_4 + 0x148) = uVar4;
      pvVar12 = calloc(uVar11,0x160);
      *(void **)(param_4 + 0x150) = pvVar12;
      if (pvVar12 == (void *)0x0) {
        return 3;
      }
      lVar14 = *(long *)(param_1 + 0x38);
      if (lVar14 == 0) {
        return 0xc;
      }
      piVar16 = *(int **)(param_1 + 0x40);
      lVar21 = lVar14;
      piVar20 = piVar16;
      while (*piVar20 != *param_3) {
        piVar20 = piVar20 + 0x32;
        lVar21 = lVar21 + -1;
        if (lVar21 == 0) {
          return 0xc;
        }
      }
      while (puVar1 = (uint *)(piVar20 + 1), (*puVar1 & 0xfffffffe) == 0x1c) {
        iVar5 = piVar20[8];
        lVar21 = lVar14;
        piVar20 = piVar16;
        if (*puVar1 == 0x1c) {
          while (*piVar20 != iVar5) {
            lVar21 = lVar21 + -1;
            piVar20 = piVar20 + 0x32;
            if (lVar21 == 0) {
              return 0xc;
            }
          }
        }
        else {
          lVar21 = *(long *)(*(long *)(param_2 + 0x498) + 0x20);
          if (lVar21 == 0) {
            return 0xc;
          }
          piVar17 = *(int **)(*(long *)(param_2 + 0x498) + 0x28);
          while (lVar18 = lVar14, *piVar17 != iVar5) {
            piVar17 = piVar17 + 0x5a;
            lVar21 = lVar21 + -1;
            if (lVar21 == 0) {
              return 0xc;
            }
          }
          while (*piVar20 != iVar5) {
            lVar18 = lVar18 + -1;
            piVar20 = piVar20 + 0x32;
            if (lVar18 == 0) {
              return 0xc;
            }
          }
        }
      }
      lVar21 = 0;
      lVar14 = 0;
      uVar11 = 0;
      bVar9 = false;
      lVar18 = 0x30;
      while( true ) {
        lVar2 = lVar19 + lVar14;
        if (((*(byte *)(lVar2 + 0x1f) >> 4 & 1) != 0) &&
           (uVar13 = FUN_00aded5c(param_1,param_2,lVar2,(long)pvVar12 + lVar21), (int)uVar13 != 0))
        {
          return uVar13;
        }
        puVar3 = (undefined4 *)(*(long *)(piVar20 + 0x30) + lVar18);
        *(undefined8 *)((long)pvVar12 + lVar21 + 8) =
             *(undefined8 *)(*(long *)(piVar20 + 0x2e) + uVar11 * 8);
        cVar6 = *(char *)((long)puVar3 + -0x2d);
        *(undefined4 *)((long)pvVar12 + lVar21 + 0x10) = *puVar3;
        cVar7 = *(char *)((long)puVar3 + -0x2e);
        uVar8 = *(ushort *)(puVar3 + -0xc);
        *(uint *)((long)pvVar12 + lVar21 + 0x144) = *(uint *)((long)pvVar12 + lVar21 + 0x144) | 1;
        uVar4 = (((uVar8 & 0xff00) << 0x10) >> 8 | (uint)uVar8 << 0x18) >> 0x10;
        if (cVar7 != '\0') {
          uVar4 = uVar4 | 2;
        }
        if (cVar6 != '\0') {
          uVar4 = uVar4 | 4;
        }
        if (*(char *)(puVar3 + -0xb) != '\0') {
          uVar4 = uVar4 | 8;
        }
        if (*(char *)((long)puVar3 + -0x2b) != '\0') {
          uVar4 = uVar4 | 0x10;
        }
        if (*(char *)((long)puVar3 + -0x2a) != '\0') {
          uVar4 = uVar4 | 0x20;
        }
        if (*(char *)((long)puVar3 + -0x29) != '\0') {
          uVar4 = uVar4 | 0x40;
        }
        if (*(char *)(puVar3 + -10) != '\0') {
          uVar4 = uVar4 | 0x80;
        }
        if (*(char *)((long)puVar3 + -0x27) != '\0') {
          uVar4 = uVar4 | 0x200;
        }
        *(uint *)((long)pvVar12 + lVar21 + 0x20) = uVar4;
        uVar22 = *(undefined8 *)(lVar2 + 0x2c);
        uVar15 = *(undefined8 *)(lVar2 + 0x24);
        *(undefined8 *)((long)pvVar12 + lVar21 + 0x34) = *(undefined8 *)(lVar2 + 0x34);
        bVar10 = bVar9;
        if ((uVar4 & 0x80) != 0) {
          bVar10 = true;
        }
        *(undefined8 *)((long)pvVar12 + lVar21 + 0x2c) = uVar22;
        *(undefined8 *)((long)pvVar12 + lVar21 + 0x24) = uVar15;
        if (bVar9) {
          bVar10 = bVar9;
        }
        bVar9 = bVar10;
        if (*(int *)(lVar2 + 4) == 0x1c) {
          memcpy((void *)((long)pvVar12 + lVar21 + 0x3c),(void *)(lVar19 + lVar14 + 0x54),0x108);
        }
        uVar4 = param_3[0x57];
        uVar11 = uVar11 + 1;
        *(long *)((long)pvVar12 + lVar21 + 0x158) = lVar2;
        if (uVar4 <= uVar11) break;
        lVar14 = lVar14 + 0x168;
        lVar19 = *(long *)(param_3 + 0x58);
        lVar21 = lVar21 + 0x160;
        lVar18 = lVar18 + 0x60;
        pvVar12 = *(void **)(param_4 + 0x150);
      }
      *(undefined8 *)(param_4 + 8) = *(undefined8 *)(param_3 + 2);
      *(int **)(param_4 + 0x158) = param_3;
      if (bVar9) {
        *(uint *)(param_4 + 0x20) = *(uint *)(param_4 + 0x20) | 0x80;
      }
      return 0;
    }
  }
  uVar15 = *(undefined8 *)(param_3 + 2);
  *(int **)(param_4 + 0x158) = param_3;
  *(undefined8 *)(param_4 + 8) = uVar15;
  return uVar11;
}


