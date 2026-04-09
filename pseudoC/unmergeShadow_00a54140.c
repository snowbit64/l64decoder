// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unmergeShadow
// Entry Point: 00a54140
// Size: 212 bytes
// Signature: undefined unmergeShadow(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LightSource::unmergeShadow() */

void LightSource::unmergeShadow(void)

{
  ulong uVar1;
  long in_x0;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long **pplVar8;
  
  pplVar8 = *(long ***)(in_x0 + 0x158);
  if (pplVar8 == (long **)0x0) {
    return;
  }
  plVar2 = *pplVar8;
  uVar3 = (long)pplVar8[1] - (long)plVar2;
  iVar5 = (int)((long)uVar3 >> 3);
  if (iVar5 != 0) {
    if (*plVar2 == in_x0) {
      uVar4 = 0;
    }
    else {
      uVar1 = 1;
      do {
        uVar4 = uVar1;
        if ((uVar3 >> 3 & 0xffffffff) == uVar4) goto LAB_00a541c4;
        uVar1 = uVar4 + 1;
      } while (plVar2[uVar4] != in_x0);
    }
    plVar2[uVar4] = plVar2[iVar5 - 1];
    pplVar8[1] = pplVar8[1] + -1;
    pplVar8 = *(long ***)(in_x0 + 0x158);
    plVar2 = *pplVar8;
    uVar3 = (long)pplVar8[1] - (long)plVar2;
  }
LAB_00a541c4:
  uVar6 = (uint)(uVar3 >> 3);
  if (1 < uVar6) goto LAB_00a54204;
  if (uVar6 == 0) {
    if (plVar2 != (long *)0x0) goto LAB_00a541f4;
  }
  else {
    uVar3 = uVar3 >> 3 & 0xffffffff;
    plVar7 = plVar2;
    do {
      uVar3 = uVar3 - 1;
      *(undefined8 *)(*plVar7 + 0x158) = 0;
      plVar7 = plVar7 + 1;
    } while (uVar3 != 0);
LAB_00a541f4:
    pplVar8[1] = plVar2;
    operator_delete(plVar2);
  }
  operator_delete(pplVar8);
LAB_00a54204:
  *(undefined8 *)(in_x0 + 0x158) = 0;
  return;
}


