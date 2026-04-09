// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d71eb8
// Entry Point: 00d71eb8
// Size: 1096 bytes
// Signature: undefined FUN_00d71eb8(void)


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00d71eb8(long *param_1)

{
  uint uVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  long *plVar10;
  long **pplVar11;
  bool bVar12;
  char cVar13;
  byte *pbVar14;
  long **pplVar15;
  long *plVar16;
  byte *pbVar17;
  long lVar18;
  long *plVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  byte **ppbVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  long lVar29;
  uint uVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  
  ppbVar25 = (byte **)param_1[5];
  lVar29 = param_1[0x49];
  pbVar28 = *ppbVar25;
  pbVar26 = ppbVar25[1];
  plVar23 = *(long **)(lVar29 + 0xf8);
  if (plVar23 == (long *)0x0) {
    if (pbVar26 == (byte *)0x0) {
      cVar13 = (*(code *)ppbVar25[3])(param_1);
      if (cVar13 == '\0') {
        return 0;
      }
      pbVar28 = *ppbVar25;
      pbVar26 = ppbVar25[1] + -1;
      uVar22 = (ulong)*pbVar28;
      if (pbVar26 != (byte *)0x0) goto LAB_00d72054;
LAB_00d7219c:
      cVar13 = (*(code *)ppbVar25[3])(param_1);
      if (cVar13 == '\0') {
        return 0;
      }
      pbVar26 = ppbVar25[1];
      pbVar28 = *ppbVar25 + 1;
      uVar22 = uVar22 << 8 | (ulong)**ppbVar25;
    }
    else {
      pbVar26 = pbVar26 + -1;
      uVar22 = (ulong)*pbVar28;
      if (pbVar26 == (byte *)0x0) goto LAB_00d7219c;
LAB_00d72054:
      pbVar27 = pbVar28 + 1;
      pbVar28 = pbVar28 + 2;
      uVar22 = uVar22 << 8 | (ulong)*pbVar27;
    }
    uVar21 = uVar22 - 2;
    pbVar26 = pbVar26 + -1;
    if (uVar22 < 2) {
      uVar22 = 0;
      uVar30 = 0;
      plVar24 = (long *)0x0;
      iVar5 = *(int *)((long)param_1 + 0x21c);
      *(undefined8 *)(lVar29 + 0xf8) = 0;
      goto joined_r0x00d721e0;
    }
    puVar2 = (uint *)(lVar29 + 0xb0);
    if (*(int *)((long)param_1 + 0x21c) != 0xfe) {
      puVar2 = (uint *)(lVar29 + (long)(*(int *)((long)param_1 + 0x21c) + -0xe0) * 4 + 0xb4);
    }
    uVar20 = (uint)uVar21;
    uVar30 = uVar20;
    if (*puVar2 <= uVar20) {
      uVar30 = *puVar2;
    }
    uVar22 = (ulong)uVar30;
    plVar23 = (long *)(**(code **)(param_1[1] + 8))(param_1,1,uVar22 + 0x20);
    uVar4 = *(undefined4 *)((long)param_1 + 0x21c);
    plVar24 = plVar23 + 4;
    uVar31 = 0;
    *plVar23 = 0;
    *(char *)(plVar23 + 1) = (char)uVar4;
    *(uint *)((long)plVar23 + 0xc) = uVar20;
    *(uint *)(plVar23 + 2) = uVar30;
    plVar23[3] = (long)plVar24;
    *(long **)(lVar29 + 0xf8) = plVar23;
    *(undefined4 *)(lVar29 + 0x100) = 0;
    if (uVar30 != 0) goto LAB_00d71f24;
LAB_00d720e8:
    pplVar11 = (long **)param_1[0x2f];
    if ((long **)param_1[0x2f] == (long **)0x0) {
      pplVar15 = (long **)(param_1 + 0x2f);
    }
    else {
      do {
        pplVar15 = pplVar11;
        pplVar11 = (long **)*pplVar15;
      } while ((long **)*pplVar15 != (long **)0x0);
    }
    iVar5 = *(int *)((long)plVar23 + 0xc);
    *pplVar15 = plVar23;
    plVar24 = (long *)plVar23[3];
    uVar21 = (ulong)(uint)(iVar5 - (int)uVar22);
  }
  else {
    uVar31 = (ulong)*(uint *)(lVar29 + 0x100);
    uVar21 = 0;
    uVar22 = (ulong)*(uint *)(plVar23 + 2);
    plVar24 = (long *)(plVar23[3] + uVar31);
    if (*(uint *)(plVar23 + 2) <= *(uint *)(lVar29 + 0x100)) goto LAB_00d720e8;
LAB_00d71f24:
    do {
      *ppbVar25 = pbVar28;
      ppbVar25[1] = pbVar26;
      uVar30 = (uint)uVar31;
      *(uint *)(lVar29 + 0x100) = uVar30;
      if (pbVar26 == (byte *)0x0) {
        cVar13 = (*(code *)ppbVar25[3])(param_1);
        if (cVar13 == '\0') {
          return 0;
        }
        pbVar28 = *ppbVar25;
        pbVar26 = ppbVar25[1];
      }
      uVar20 = (uint)uVar22;
      if ((uVar30 < uVar20) && (pbVar26 != (byte *)0x0)) {
        pbVar17 = pbVar26 + -1;
        uVar1 = uVar20 + ~uVar30;
        pbVar14 = (byte *)(ulong)uVar1;
        pbVar27 = pbVar17;
        if (pbVar14 <= pbVar17) {
          pbVar27 = pbVar14;
        }
        pbVar3 = (byte *)0x1;
        if (uVar1 != 0) {
          pbVar3 = pbVar27 + 1;
        }
        pbVar27 = pbVar28;
        if ((byte *)0x1f < pbVar3) {
          if (pbVar14 <= pbVar17) {
            pbVar17 = pbVar14;
          }
          pbVar14 = (byte *)0x0;
          if (uVar1 != 0) {
            pbVar14 = pbVar17;
          }
          if ((pbVar28 + (long)pbVar14 + 1 <= plVar24) ||
             ((byte *)((long)plVar24 + (long)pbVar14) + 1 <= pbVar28)) {
            pbVar17 = (byte *)((ulong)pbVar3 & 0x1ffffffe0);
            plVar19 = plVar24 + 2;
            pbVar26 = pbVar26 + -(long)pbVar17;
            pbVar27 = pbVar28 + (long)pbVar17;
            plVar24 = (long *)((long)plVar24 + (long)pbVar17);
            uVar30 = uVar30 + (int)pbVar17;
            uVar31 = (ulong)uVar30;
            plVar16 = (long *)(pbVar28 + 0x10);
            pbVar28 = pbVar17;
            do {
              plVar10 = plVar16 + -1;
              lVar18 = plVar16[-2];
              lVar33 = plVar16[1];
              lVar32 = *plVar16;
              plVar16 = plVar16 + 4;
              pbVar28 = pbVar28 + -0x20;
              plVar19[-1] = *plVar10;
              plVar19[-2] = lVar18;
              plVar19[1] = lVar33;
              *plVar19 = lVar32;
              plVar19 = plVar19 + 4;
            } while (pbVar28 != (byte *)0x0);
            pbVar28 = pbVar27;
            if (pbVar3 == pbVar17) goto LAB_00d71f1c;
          }
        }
        pbVar28 = (byte *)0x0;
        do {
          pbVar17 = pbVar28 + 1;
          *(byte *)((long)plVar24 + (long)pbVar28) = pbVar27[(long)pbVar28];
          if (uVar20 <= uVar30 + (int)pbVar28 + 1) break;
          bVar12 = pbVar26 + -1 != pbVar28;
          pbVar28 = pbVar17;
        } while (bVar12);
        pbVar26 = pbVar26 + -(long)pbVar17;
        plVar24 = (long *)((long)plVar24 + (long)pbVar17);
        uVar31 = (ulong)(uVar30 + (int)pbVar17);
        pbVar28 = pbVar27 + (long)pbVar17;
      }
LAB_00d71f1c:
    } while ((uint)uVar31 < uVar20);
    if (plVar23 != (long *)0x0) goto LAB_00d720e8;
  }
  uVar30 = (uint)uVar22;
  iVar5 = *(int *)((long)param_1 + 0x21c);
  *(undefined8 *)(lVar29 + 0xf8) = 0;
joined_r0x00d721e0:
  if (iVar5 == 0xee) {
    if ((((uVar30 < 0xc) || (*(char *)plVar24 != 'A')) || (*(char *)((long)plVar24 + 1) != 'd')) ||
       (((*(char *)((long)plVar24 + 2) != 'o' || (*(char *)((long)plVar24 + 3) != 'b')) ||
        (*(char *)((long)plVar24 + 4) != 'e')))) {
      lVar29 = *param_1;
      *(uint *)(lVar29 + 0x2c) = uVar30 + (int)uVar21;
      lVar18 = *param_1;
      *(undefined4 *)(lVar29 + 0x28) = 0x50;
      (**(code **)(lVar18 + 8))(param_1,1);
    }
    else {
      uVar7 = *(ushort *)((long)plVar24 + 5);
      uVar8 = *(ushort *)((long)plVar24 + 7);
      uVar9 = *(ushort *)((long)plVar24 + 9);
      lVar29 = *param_1;
      bVar6 = *(byte *)((long)plVar24 + 0xb);
      *(undefined4 *)(lVar29 + 0x28) = 0x4e;
      *(uint *)(lVar29 + 0x2c) = (((uVar7 & 0xff00) << 0x10) >> 8 | (uint)uVar7 << 0x18) >> 0x10;
      *(uint *)(lVar29 + 0x30) = (((uVar8 & 0xff00) << 0x10) >> 8 | (uint)uVar8 << 0x18) >> 0x10;
      *(uint *)(lVar29 + 0x34) = (((uVar9 & 0xff00) << 0x10) >> 8 | (uint)uVar9 << 0x18) >> 0x10;
      *(uint *)(lVar29 + 0x38) = (uint)bVar6;
      (**(code **)(lVar29 + 8))(param_1,1);
      *(undefined *)(param_1 + 0x2d) = 1;
      *(byte *)((long)param_1 + 0x169) = bVar6;
    }
  }
  else if (iVar5 == 0xe0) {
    FUN_00d72890(param_1,plVar24,uVar22,uVar21);
  }
  else {
    lVar29 = *param_1;
    *(int *)(lVar29 + 0x2c) = iVar5;
    lVar18 = *param_1;
    *(undefined4 *)(lVar29 + 0x28) = 0x5d;
    *(int *)(lVar18 + 0x30) = (int)uVar22 + (int)uVar21;
    (**(code **)(*param_1 + 8))(param_1,1);
  }
  *ppbVar25 = pbVar28;
  ppbVar25[1] = pbVar26;
  if (0 < (long)uVar21) {
    (**(code **)(param_1[5] + 0x20))(param_1,uVar21);
  }
  return 1;
}


