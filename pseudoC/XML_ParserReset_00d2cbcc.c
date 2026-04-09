// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_ParserReset
// Entry Point: 00d2cbcc
// Size: 972 bytes
// Signature: undefined XML_ParserReset(void)


undefined8 XML_ParserReset(long param_1,undefined8 param_2)

{
  long **pplVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long **pplVar5;
  code *pcVar6;
  long **pplVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x380) != 0) {
    return 0;
  }
  if (*(long **)(param_1 + 0x2b0) != (long *)0x0) {
    pplVar1 = (long **)*(long **)(param_1 + 0x2b0);
    pplVar5 = (long **)*(long *)(param_1 + 0x2b8);
    do {
      pplVar7 = pplVar1;
      pplVar1 = (long **)*pplVar7;
      *pplVar7 = (long *)pplVar5;
      if (pplVar7[10] != (long *)0x0) {
        lVar8 = (long)pplVar7[10];
        lVar3 = *(long *)(param_1 + 0x2c8);
        do {
          lVar2 = lVar8;
          lVar8 = *(long *)(lVar2 + 8);
          *(long *)(lVar2 + 8) = lVar3;
          lVar3 = lVar2;
        } while (lVar8 != 0);
        *(long *)(param_1 + 0x2c8) = lVar2;
      }
      pplVar7[10] = (long *)0x0;
      pplVar5 = pplVar7;
    } while (pplVar1 != (long **)0x0);
    *(long ***)(param_1 + 0x2b8) = pplVar7;
  }
  if (*(long *)(param_1 + 0x238) != 0) {
    lVar8 = *(long *)(param_1 + 0x238);
    lVar3 = *(long *)(param_1 + 0x240);
    do {
      lVar2 = lVar8;
      lVar8 = *(long *)(lVar2 + 0x10);
      *(long *)(lVar2 + 0x10) = lVar3;
      lVar3 = lVar2;
    } while (lVar8 != 0);
    *(long *)(param_1 + 0x240) = lVar2;
  }
  if (*(long *)(param_1 + 0x2c0) != 0) {
    lVar8 = *(long *)(param_1 + 0x2c0);
    lVar3 = *(long *)(param_1 + 0x2c8);
    do {
      lVar2 = lVar8;
      lVar8 = *(long *)(lVar2 + 8);
      *(long *)(lVar2 + 8) = lVar3;
      lVar3 = lVar2;
    } while (lVar8 != 0);
    *(long *)(param_1 + 0x2c8) = lVar2;
  }
  (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x1d0));
  if (*(code **)(param_1 + 0x1e8) != (code *)0x0) {
    (**(code **)(param_1 + 0x1e8))(*(undefined8 *)(param_1 + 0x1d8));
  }
  pplVar1 = *(long ***)(param_1 + 0x310);
  if (*(long ***)(param_1 + 0x318) == (long **)0x0) {
LAB_00d2cce8:
    *(long ***)(param_1 + 0x318) = pplVar1;
  }
  else {
    pplVar5 = *(long ***)(param_1 + 0x318);
    pplVar7 = pplVar1;
    if (pplVar1 != (long **)0x0) {
      do {
        pplVar1 = pplVar7;
        pplVar7 = (long **)*pplVar1;
        *pplVar1 = (long *)pplVar5;
        pplVar5 = pplVar1;
      } while (pplVar7 != (long **)0x0);
      goto LAB_00d2cce8;
    }
  }
  *(undefined8 *)(param_1 + 0x310) = 0;
  pplVar1 = *(long ***)(param_1 + 0x340);
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  if (*(long ***)(param_1 + 0x348) == (long **)0x0) {
LAB_00d2cd28:
    *(long ***)(param_1 + 0x348) = pplVar1;
  }
  else {
    pplVar5 = *(long ***)(param_1 + 0x348);
    pplVar7 = pplVar1;
    if (pplVar1 != (long **)0x0) {
      do {
        pplVar1 = pplVar7;
        pplVar7 = (long **)*pplVar1;
        *pplVar1 = (long *)pplVar5;
        pplVar5 = pplVar1;
      } while (pplVar7 != (long **)0x0);
      goto LAB_00d2cd28;
    }
  }
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x1c0));
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  FUN_00d2cf98(param_1,param_2);
  plVar9 = *(long **)(param_1 + 0x2a0);
  plVar10 = (long *)plVar9[5];
  for (lVar8 = plVar9[7] << 3; plVar11 = plVar10, lVar8 != 0; lVar8 = lVar8 + -8) {
    while( true ) {
      plVar10 = plVar11 + 1;
      lVar3 = *plVar11;
      if ((lVar3 == 0) || (*(int *)(lVar3 + 0x1c) == 0)) break;
      (**(code **)(param_1 + 0x28))(*(undefined8 *)(lVar3 + 0x20));
      lVar8 = lVar8 + -8;
      plVar11 = plVar10;
      if (lVar8 == 0) goto LAB_00d2cd9c;
    }
  }
LAB_00d2cd9c:
  if (plVar9[2] != 0) {
    uVar12 = 0;
    do {
      lVar8 = uVar12 * 8;
      (**(code **)(plVar9[4] + 0x10))(*(undefined8 *)(*plVar9 + lVar8));
      uVar4 = plVar9[2];
      uVar12 = uVar12 + 1;
      *(undefined8 *)(*plVar9 + lVar8) = 0;
    } while (uVar12 < uVar4);
  }
  plVar9[3] = 0;
  *(undefined *)((long)plVar9 + 0x103) = 0;
  if (plVar9[0x23] != 0) {
    uVar12 = 0;
    do {
      lVar8 = uVar12 * 8;
      (**(code **)(plVar9[0x25] + 0x10))(*(undefined8 *)(plVar9[0x21] + lVar8));
      uVar4 = plVar9[0x23];
      uVar12 = uVar12 + 1;
      *(undefined8 *)(plVar9[0x21] + lVar8) = 0;
    } while (uVar12 < uVar4);
  }
  plVar9[0x24] = 0;
  if (plVar9[7] != 0) {
    uVar12 = 0;
    do {
      lVar8 = uVar12 * 8;
      (**(code **)(plVar9[9] + 0x10))(*(undefined8 *)(plVar9[5] + lVar8));
      uVar4 = plVar9[7];
      uVar12 = uVar12 + 1;
      *(undefined8 *)(plVar9[5] + lVar8) = 0;
    } while (uVar12 < uVar4);
  }
  plVar9[8] = 0;
  if (plVar9[0xc] != 0) {
    uVar12 = 0;
    do {
      lVar8 = uVar12 * 8;
      (**(code **)(plVar9[0xe] + 0x10))(*(undefined8 *)(plVar9[10] + lVar8));
      uVar4 = plVar9[0xc];
      uVar12 = uVar12 + 1;
      *(undefined8 *)(plVar9[10] + lVar8) = 0;
    } while (uVar12 < uVar4);
  }
  plVar9[0xd] = 0;
  if (plVar9[0x11] != 0) {
    uVar12 = 0;
    do {
      lVar8 = uVar12 * 8;
      (**(code **)(plVar9[0x13] + 0x10))(*(undefined8 *)(plVar9[0xf] + lVar8));
      uVar4 = plVar9[0x11];
      uVar12 = uVar12 + 1;
      *(undefined8 *)(plVar9[0xf] + lVar8) = 0;
    } while (uVar12 < uVar4);
  }
  pplVar1 = (long **)plVar9[0x14];
  plVar9[0x12] = 0;
  if ((long **)plVar9[0x15] == (long **)0x0) {
LAB_00d2cf08:
    plVar9[0x15] = (long)pplVar1;
  }
  else {
    pplVar5 = (long **)plVar9[0x15];
    pplVar7 = pplVar1;
    if (pplVar1 != (long **)0x0) {
      do {
        pplVar1 = pplVar7;
        pplVar7 = (long **)*pplVar1;
        *pplVar1 = (long *)pplVar5;
        pplVar5 = pplVar1;
      } while (pplVar7 != (long **)0x0);
      goto LAB_00d2cf08;
    }
  }
  pplVar1 = (long **)plVar9[0x1a];
  plVar9[0x14] = 0;
  plVar9[0x17] = 0;
  plVar9[0x18] = 0;
  plVar9[0x16] = 0;
  if ((long **)plVar9[0x1b] != (long **)0x0) {
    pplVar5 = (long **)plVar9[0x1b];
    pplVar7 = pplVar1;
    if (pplVar1 == (long **)0x0) goto LAB_00d2cf44;
    do {
      pplVar1 = pplVar7;
      pplVar7 = (long **)*pplVar1;
      *pplVar1 = (long *)pplVar5;
      pplVar5 = pplVar1;
    } while (pplVar7 != (long **)0x0);
  }
  plVar9[0x1b] = (long)pplVar1;
LAB_00d2cf44:
  plVar9[0x1d] = 0;
  plVar9[0x1e] = 0;
  plVar9[0x1c] = 0;
  plVar9[0x26] = 0;
  plVar9[0x27] = 0;
  *(undefined *)(plVar9 + 0x28) = 0;
  pcVar6 = *(code **)(param_1 + 0x28);
  plVar9[0x1a] = 0;
  (*pcVar6)(plVar9[0x2c]);
  pcVar6 = *(code **)(param_1 + 0x28);
  plVar9[0x2c] = 0;
  (*pcVar6)(plVar9[0x29]);
  plVar9[0x29] = 0;
  plVar9[0x2a] = 0;
  plVar9[0x2b] = 0;
  *(undefined *)((long)plVar9 + 0x102) = 0;
  *(undefined2 *)(plVar9 + 0x20) = 1;
  return 1;
}


