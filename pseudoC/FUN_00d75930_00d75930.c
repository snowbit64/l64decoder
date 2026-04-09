// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d75930
// Entry Point: 00d75930
// Size: 512 bytes
// Signature: undefined FUN_00d75930(void)


ulong FUN_00d75930(long *param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  code **ppcVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  byte **ppbVar16;
  
  lVar15 = param_1[0x4a];
  lVar12 = *(long *)(lVar15 + 0x20);
  uVar8 = (ulong)*(uint *)(lVar15 + 0x28);
  while (lVar12 < 0x8000) {
    iVar6 = (int)uVar8;
    uVar7 = iVar6 - 1;
    uVar8 = (ulong)uVar7;
    *(uint *)(lVar15 + 0x28) = uVar7;
    if (iVar6 < 1) {
      if (*(int *)((long)param_1 + 0x21c) == 0) {
        ppbVar16 = (byte **)param_1[5];
        if ((ppbVar16[1] == (byte *)0x0) && (cVar4 = (*(code *)ppbVar16[3])(param_1), cVar4 == '\0')
           ) {
          ppcVar9 = (code **)*param_1;
          *(undefined4 *)(ppcVar9 + 5) = 0x19;
          (**ppcVar9)(param_1);
        }
        pbVar2 = *ppbVar16;
        *ppbVar16 = pbVar2 + 1;
        ppbVar16[1] = ppbVar16[1] + -1;
        uVar11 = (ulong)*pbVar2;
        if (uVar11 == 0xff) {
          do {
            ppbVar16 = (byte **)param_1[5];
            if ((ppbVar16[1] == (byte *)0x0) &&
               (cVar4 = (*(code *)ppbVar16[3])(param_1), cVar4 == '\0')) {
              ppcVar9 = (code **)*param_1;
              *(undefined4 *)(ppcVar9 + 5) = 0x19;
              (**ppcVar9)(param_1);
            }
            pbVar2 = *ppbVar16;
            *ppbVar16 = pbVar2 + 1;
            ppbVar16[1] = ppbVar16[1] + -1;
            bVar5 = *pbVar2;
          } while (bVar5 == 0xff);
          if (bVar5 == 0) {
            uVar11 = 0xff;
          }
          else {
            uVar11 = 0;
            *(uint *)((long)param_1 + 0x21c) = (uint)bVar5;
          }
        }
        uVar7 = *(uint *)(lVar15 + 0x28);
      }
      else {
        uVar11 = 0;
      }
      uVar1 = uVar7 + 9;
      uVar8 = (ulong)(uVar7 + 8);
      *(uint *)(lVar15 + 0x28) = uVar7 + 8;
      *(ulong *)(lVar15 + 0x18) = uVar11 | *(long *)(lVar15 + 0x18) << 8;
      if (uVar1 == 0 || (int)uVar1 < 0 != SCARRY4(uVar7,9)) {
        uVar8 = (ulong)uVar1;
        *(uint *)(lVar15 + 0x28) = uVar1;
        if (uVar1 == 0) {
          uVar8 = 0;
          *(undefined8 *)(lVar15 + 0x20) = 0x8000;
        }
      }
    }
    lVar12 = *(long *)(lVar15 + 0x20) * 2;
    *(long *)(lVar15 + 0x20) = lVar12;
  }
  bVar3 = *param_2;
  uVar11 = (ulong)bVar3;
  lVar13 = *(long *)(jpeg_aritab + (uVar11 & 0x7f) * 8);
  lVar14 = lVar13 >> 0x10;
  lVar12 = lVar12 - lVar14;
  lVar10 = lVar12 << (uVar8 & 0x3f);
  *(long *)(lVar15 + 0x20) = lVar12;
  bVar5 = (byte)((ulong)lVar13 >> 8);
  if (*(long *)(lVar15 + 0x18) < lVar10) {
    if (0x7fff < lVar12) goto LAB_00d75b18;
    if (lVar12 < lVar14) {
      bVar5 = bVar3 & 0x80 ^ (byte)lVar13;
      uVar11 = (ulong)(bVar3 ^ 0x80);
    }
    else {
      bVar5 = bVar3 & 0x80 ^ bVar5;
    }
  }
  else {
    *(long *)(lVar15 + 0x18) = *(long *)(lVar15 + 0x18) - lVar10;
    *(long *)(lVar15 + 0x20) = lVar14;
    if (lVar12 < lVar14) {
      bVar5 = bVar3 & 0x80 ^ bVar5;
    }
    else {
      bVar5 = bVar3 & 0x80 ^ (byte)lVar13;
      uVar11 = (ulong)(bVar3 ^ 0x80);
    }
  }
  *param_2 = bVar5;
LAB_00d75b18:
  return uVar11 >> 7;
}


