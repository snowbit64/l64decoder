// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_ExternalEntityParserCreate
// Entry Point: 00d2d15c
// Size: 1676 bytes
// Signature: undefined XML_ExternalEntityParserCreate(void)


long * XML_ExternalEntityParserCreate(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined uVar17;
  undefined uVar18;
  long lVar19;
  char cVar20;
  int iVar21;
  long *plVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  char **ppcVar26;
  char *pcVar27;
  code *pcVar28;
  undefined *puVar29;
  undefined8 *puVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  undefined8 uVar40;
  long lVar41;
  char *pcVar42;
  long lVar43;
  undefined8 *puVar44;
  ulong uVar45;
  undefined local_74 [4];
  long local_70;
  
  lVar19 = tpidr_el0;
  local_70 = *(long *)(lVar19 + 0x28);
  if (param_1 == (long *)0x0) {
    plVar22 = (long *)0x0;
    goto LAB_00d2d3f8;
  }
  lVar1 = param_1[0xd];
  lVar25 = param_1[0xe];
  lVar31 = param_1[0x13];
  puVar36 = (undefined8 *)param_1[0x54];
  lVar2 = param_1[0xf];
  lVar43 = param_1[0x10];
  lVar32 = param_1[0x14];
  puVar35 = puVar36;
  if (param_2 != 0) {
    puVar35 = (undefined8 *)0x0;
  }
  lVar24 = param_1[0x11];
  lVar8 = param_1[0x12];
  lVar41 = param_1[0x17];
  lVar9 = param_1[0x18];
  lVar37 = param_1[0x73];
  lVar3 = param_1[0x19];
  lVar10 = param_1[0x1a];
  lVar38 = param_1[0x1b];
  lVar4 = param_1[0x1c];
  plVar11 = (long *)param_1[0x1d];
  lVar33 = param_1[0x20];
  lVar5 = param_1[0x1e];
  lVar12 = param_1[0x1f];
  lVar6 = param_1[0x21];
  lVar13 = param_1[0x22];
  lVar39 = param_1[0x23];
  lVar34 = param_1[0x51];
  lVar7 = *param_1;
  lVar14 = param_1[1];
  uVar17 = *(undefined *)(param_1 + 0x49);
  uVar15 = *(undefined4 *)((long)param_1 + 0x394);
  uVar16 = *(undefined4 *)(param_1 + 0x41);
  uVar18 = *(undefined *)((long)param_1 + 0x1c9);
  if (*(char *)(param_1 + 0x39) == '\0') {
    plVar22 = (long *)FUN_00d2c950(param_3,param_1 + 3,0,puVar35);
  }
  else {
    local_74[0] = *(undefined *)((long)param_1 + 0x37c);
    plVar22 = (long *)FUN_00d2c950(param_3,param_1 + 3,local_74,puVar35);
  }
  if (plVar22 == (long *)0x0) goto LAB_00d2d3f8;
  plVar22[0xf] = lVar2;
  plVar22[0x10] = lVar43;
  plVar22[0x11] = lVar24;
  plVar22[0x12] = lVar8;
  *plVar22 = lVar7;
  plVar22[0xd] = lVar1;
  plVar22[0xe] = lVar25;
  plVar22[0x13] = lVar31;
  plVar22[0x14] = lVar32;
  plVar22[0x17] = lVar41;
  plVar22[0x18] = lVar9;
  plVar22[0x19] = lVar3;
  plVar22[0x1a] = lVar10;
  plVar22[0x1b] = lVar38;
  plVar22[0x1c] = lVar4;
  plVar22[0x1e] = lVar5;
  plVar22[0x1f] = lVar12;
  plVar22[0x20] = lVar33;
  plVar22[0x21] = lVar6;
  plVar22[0x22] = lVar13;
  plVar22[0x23] = lVar39;
  plVar22[0x51] = lVar34;
  if (lVar7 == lVar14) {
    plVar22[1] = lVar7;
  }
  else {
    plVar22[1] = (long)plVar22;
  }
  if (plVar11 != param_1) {
    plVar22[0x1d] = (long)plVar11;
  }
  plVar22[0x70] = (long)param_1;
  *(undefined *)(plVar22 + 0x49) = uVar17;
  *(undefined *)((long)plVar22 + 0x1c9) = uVar18;
  plVar22[0x73] = lVar37;
  *(undefined4 *)((long)plVar22 + 0x394) = uVar15;
  *(undefined4 *)(plVar22 + 0x41) = uVar16;
  if (param_2 == 0) {
    *(undefined *)(plVar22 + 0x72) = 1;
    XmlPrologStateInitExternalEntity(plVar22 + 0x3e);
    pcVar28 = FUN_00d2e098;
    goto LAB_00d2d3f0;
  }
  lVar43 = plVar22[0x54];
  puVar44 = (undefined8 *)puVar36[0xf];
  lVar25 = puVar36[0x11];
  lVar1 = lVar43 + 0xa0;
  lVar2 = lVar43 + 0x78;
  puVar35 = puVar44;
  do {
    do {
      if (puVar35 == puVar44 + lVar25) {
        lVar25 = lVar43 + 0x50;
        puVar44 = (undefined8 *)puVar36[10];
        lVar31 = puVar36[0xc];
        puVar35 = puVar44;
        goto LAB_00d2d450;
      }
      puVar30 = puVar35 + 1;
      ppcVar26 = (char **)*puVar35;
      puVar35 = puVar30;
    } while (ppcVar26 == (char **)0x0);
    pcVar42 = *ppcVar26;
    do {
      pcVar27 = *(char **)(lVar43 + 0xb8);
      if (pcVar27 == *(char **)(lVar43 + 0xb0)) {
        cVar20 = FUN_00d328e8(lVar1);
        if (cVar20 == '\0') goto LAB_00d2d3b4;
        pcVar27 = *(char **)(lVar43 + 0xb8);
      }
      cVar20 = *pcVar42;
      *(char **)(lVar43 + 0xb8) = pcVar27 + 1;
      *pcVar27 = cVar20;
      cVar20 = *pcVar42;
      pcVar42 = pcVar42 + 1;
    } while (cVar20 != '\0');
    lVar31 = *(long *)(lVar43 + 0xc0);
    *(undefined8 *)(lVar43 + 0xc0) = *(undefined8 *)(lVar43 + 0xb8);
  } while ((lVar31 != 0) && (lVar31 = FUN_00d31dd4(param_1,lVar2,lVar31,0x10), lVar31 != 0));
  goto LAB_00d2d3b4;
LAB_00d2d450:
  if (puVar35 != puVar44 + lVar31) {
    puVar30 = puVar35 + 1;
    ppcVar26 = (char **)*puVar35;
    puVar35 = puVar30;
    if (ppcVar26 != (char **)0x0) {
      puVar29 = *(undefined **)(lVar43 + 0xb8);
      if (puVar29 == *(undefined **)(lVar43 + 0xb0)) {
        cVar20 = FUN_00d328e8(lVar1);
        if (cVar20 == '\0') goto LAB_00d2d3b4;
        puVar29 = *(undefined **)(lVar43 + 0xb8);
      }
      *(undefined **)(lVar43 + 0xb8) = puVar29 + 1;
      *puVar29 = 0;
      pcVar42 = *ppcVar26;
      do {
        pcVar27 = *(char **)(lVar43 + 0xb8);
        if (pcVar27 == *(char **)(lVar43 + 0xb0)) {
          cVar20 = FUN_00d328e8(lVar1);
          if (cVar20 == '\0') goto LAB_00d2d3b4;
          pcVar27 = *(char **)(lVar43 + 0xb8);
        }
        cVar20 = *pcVar42;
        *(char **)(lVar43 + 0xb8) = pcVar27 + 1;
        *pcVar27 = cVar20;
        cVar20 = *pcVar42;
        pcVar42 = pcVar42 + 1;
      } while (cVar20 != '\0');
      lVar32 = *(long *)(lVar43 + 0xc0);
      *(undefined8 *)(lVar43 + 0xc0) = *(undefined8 *)(lVar43 + 0xb8);
      if ((lVar32 == 0) || (lVar32 = FUN_00d31dd4(param_1,lVar25,lVar32 + 1,0x18), lVar32 == 0))
      goto LAB_00d2d3b4;
      puVar30 = (undefined8 *)ppcVar26[1];
      *(undefined *)(lVar32 + 0x10) = *(undefined *)(ppcVar26 + 2);
      if (puVar30 != (undefined8 *)0x0) {
        *(undefined *)(lVar32 + 0x11) = *(undefined *)((long)ppcVar26 + 0x11);
        if (puVar30 == puVar36 + 0x26) {
          *(long *)(lVar32 + 8) = lVar43 + 0x130;
        }
        else {
          uVar23 = FUN_00d31dd4(param_1,lVar2,*puVar30,0);
          *(undefined8 *)(lVar32 + 8) = uVar23;
        }
      }
    }
    goto LAB_00d2d450;
  }
  puVar44 = (undefined8 *)puVar36[5];
  lVar31 = puVar36[7];
  puVar35 = puVar44;
LAB_00d2d55c:
  if (puVar35 != puVar44 + lVar31) {
    puVar30 = puVar35 + 1;
    ppcVar26 = (char **)*puVar35;
    puVar35 = puVar30;
    if (ppcVar26 != (char **)0x0) {
      pcVar42 = *ppcVar26;
      do {
        pcVar27 = *(char **)(lVar43 + 0xb8);
        if (pcVar27 == *(char **)(lVar43 + 0xb0)) {
          cVar20 = FUN_00d328e8(lVar1);
          if (cVar20 == '\0') goto LAB_00d2d3b4;
          pcVar27 = *(char **)(lVar43 + 0xb8);
        }
        cVar20 = *pcVar42;
        *(char **)(lVar43 + 0xb8) = pcVar27 + 1;
        *pcVar27 = cVar20;
        cVar20 = *pcVar42;
        pcVar42 = pcVar42 + 1;
      } while (cVar20 != '\0');
      lVar32 = *(long *)(lVar43 + 0xc0);
      *(undefined8 *)(lVar43 + 0xc0) = *(undefined8 *)(lVar43 + 0xb8);
      if ((lVar32 == 0) || (lVar32 = FUN_00d31dd4(param_1,lVar43 + 0x28,lVar32,0x28), lVar32 == 0))
      goto LAB_00d2d3b4;
      if (*(int *)(ppcVar26 + 3) != 0) {
        lVar24 = (*(code *)plVar22[3])((long)*(int *)(ppcVar26 + 3) * 0x18);
        *(long *)(lVar32 + 0x20) = lVar24;
        if (lVar24 == 0) goto LAB_00d2d3b4;
      }
      if ((undefined8 *)ppcVar26[2] != (undefined8 *)0x0) {
        uVar23 = FUN_00d31dd4(param_1,lVar25,*(undefined8 *)ppcVar26[2],0);
        *(undefined8 *)(lVar32 + 0x10) = uVar23;
      }
      iVar21 = *(int *)(ppcVar26 + 3);
      puVar30 = (undefined8 *)ppcVar26[1];
      *(int *)(lVar32 + 0x18) = iVar21;
      *(int *)(lVar32 + 0x1c) = iVar21;
      if (puVar30 != (undefined8 *)0x0) {
        uVar23 = FUN_00d31dd4(param_1,lVar2,*puVar30,0);
        iVar21 = *(int *)(lVar32 + 0x18);
        *(undefined8 *)(lVar32 + 8) = uVar23;
      }
      if (0 < iVar21) {
        uVar45 = 0;
        do {
          while( true ) {
            lVar41 = uVar45 * 0x18;
            uVar23 = FUN_00d31dd4(param_1,lVar25,**(undefined8 **)(ppcVar26[4] + lVar41),0);
            lVar24 = *(long *)(lVar32 + 0x20);
            puVar30 = (undefined8 *)(lVar24 + lVar41);
            cVar20 = ppcVar26[4][lVar41 + 8];
            pcVar42 = *(char **)(ppcVar26[4] + lVar41 + 0x10);
            *puVar30 = uVar23;
            *(char *)(puVar30 + 1) = cVar20;
            if (pcVar42 != (char *)0x0) break;
            *(undefined8 *)(lVar24 + uVar45 * 0x18 + 0x10) = 0;
            uVar45 = uVar45 + 1;
            if ((long)*(int *)(lVar32 + 0x18) <= (long)uVar45) goto LAB_00d2d55c;
          }
          do {
            pcVar27 = *(char **)(lVar43 + 0xb8);
            if (pcVar27 == *(char **)(lVar43 + 0xb0)) {
              cVar20 = FUN_00d328e8(lVar1);
              if (cVar20 == '\0') {
                *(undefined8 *)(*(long *)(lVar32 + 0x20) + (uVar45 & 0xffffffff) * 0x18 + 0x10) = 0;
                goto LAB_00d2d3b4;
              }
              pcVar27 = *(char **)(lVar43 + 0xb8);
            }
            cVar20 = *pcVar42;
            *(char **)(lVar43 + 0xb8) = pcVar27 + 1;
            *pcVar27 = cVar20;
            cVar20 = *pcVar42;
            pcVar42 = pcVar42 + 1;
          } while (cVar20 != '\0');
          lVar41 = *(long *)(lVar32 + 0x20);
          lVar24 = *(long *)(lVar43 + 0xc0);
          *(undefined8 *)(lVar43 + 0xc0) = *(undefined8 *)(lVar43 + 0xb8);
          *(long *)(lVar41 + uVar45 * 0x18 + 0x10) = lVar24;
          if (lVar24 == 0) goto LAB_00d2d3b4;
          uVar45 = uVar45 + 1;
        } while ((long)uVar45 < (long)*(int *)(lVar32 + 0x18));
      }
    }
    goto LAB_00d2d55c;
  }
  iVar21 = FUN_00d37e04(param_1,lVar43,lVar1,*puVar36,puVar36[2]);
  if ((iVar21 != 0) &&
     (iVar21 = FUN_00d37e04(param_1,lVar43 + 0x108,lVar1,puVar36[0x21],puVar36[0x23]), iVar21 != 0))
  {
    *(undefined2 *)(lVar43 + 0x102) = *(undefined2 *)((long)puVar36 + 0x102);
    *(undefined2 *)(lVar43 + 0x100) = *(undefined2 *)(puVar36 + 0x20);
    uVar17 = *(undefined *)(puVar36 + 0x28);
    uVar23 = puVar36[0x29];
    *(undefined8 *)(lVar43 + 0x150) = puVar36[0x2a];
    uVar15 = *(undefined4 *)((long)puVar36 + 0x15c);
    *(undefined *)(lVar43 + 0x140) = uVar17;
    uVar40 = puVar36[0x2c];
    *(undefined8 *)(lVar43 + 0x148) = uVar23;
    *(undefined4 *)(lVar43 + 0x15c) = uVar15;
    *(undefined8 *)(lVar43 + 0x160) = uVar40;
    cVar20 = FUN_00d2d7e8(plVar22,param_2);
    if (cVar20 != '\0') {
      pcVar28 = FUN_00d2df3c;
LAB_00d2d3f0:
      plVar22[0x42] = (long)pcVar28;
      goto LAB_00d2d3f8;
    }
  }
LAB_00d2d3b4:
  XML_ParserFree(plVar22);
  plVar22 = (long *)0x0;
LAB_00d2d3f8:
  if (*(long *)(lVar19 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar22;
}


