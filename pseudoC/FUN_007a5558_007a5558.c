// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a5558
// Entry Point: 007a5558
// Size: 392 bytes
// Signature: undefined FUN_007a5558(void)


void FUN_007a5558(undefined8 param_1,int *param_2)

{
  long *plVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  long **pplVar5;
  undefined8 uVar6;
  int iVar7;
  long **pplVar8;
  long **pplVar9;
  long *plVar10;
  
  *(undefined8 *)(param_2 + 0x40) = 0;
  param_2[0x42] = 0;
  pplVar5 = (long **)UserAttributes::getAttributeMap();
  pplVar5 = (long **)*pplVar5;
  if (0 < *param_2) {
    iVar4 = 0;
    pplVar8 = pplVar5;
    do {
      pplVar9 = (long **)pplVar8[1];
      if ((long **)pplVar8[1] == (long **)0x0) {
        pplVar9 = pplVar8 + 2;
        pplVar5 = (long **)*pplVar9;
        if ((long **)*pplVar5 != pplVar8) {
          do {
            plVar10 = *pplVar9;
            pplVar9 = (long **)(plVar10 + 2);
            pplVar5 = (long **)*pplVar9;
          } while (*pplVar5 != plVar10);
        }
      }
      else {
        do {
          pplVar5 = pplVar9;
          pplVar9 = (long **)*pplVar5;
        } while (*pplVar5 != (long *)0x0);
      }
      iVar4 = iVar4 + 1;
      pplVar8 = pplVar5;
    } while (iVar4 != *param_2);
  }
  plVar1 = pplVar5[7];
  plVar10 = (long *)((long)pplVar5 + 0x21);
  if ((*(byte *)(pplVar5 + 4) & 1) != 0) {
    plVar10 = pplVar5[6];
  }
  *(long **)(param_2 + 0x44) = plVar10;
  param_2[0x46] = 6;
  *(ushort *)(param_2 + 0x47) = *(ushort *)(param_2 + 0x47) & 0xfffe;
  if (plVar1 == (long *)0x0) {
    return;
  }
  uVar3 = UserAttribute::getType();
  switch(uVar3) {
  case 0:
    bVar2 = UserAttribute::getBool();
    param_2[0x42] = 3;
    *(byte *)(param_2 + 0x40) = bVar2 & 1;
    return;
  case 1:
    iVar4 = UserAttribute::getInt();
    break;
  case 2:
    iVar4 = UserAttribute::getFloat();
    iVar7 = 4;
    param_2[0x40] = iVar4;
    goto LAB_007a56cc;
  case 3:
    uVar6 = UserAttribute::getString();
    goto LAB_007a56a0;
  case 4:
    uVar6 = UserAttribute::getScriptCallbackFunction();
LAB_007a56a0:
    *(undefined8 *)(param_2 + 0x40) = uVar6;
    param_2[0x42] = 6;
    *(ushort *)(param_2 + 0x43) = *(ushort *)(param_2 + 0x43) & 0xfffe;
    return;
  case 5:
    iVar4 = UserAttribute::getNodeId();
    break;
  default:
    goto switchD_007a564c_caseD_6;
  }
  iVar7 = 1;
  param_2[0x40] = iVar4;
LAB_007a56cc:
  param_2[0x42] = iVar7;
switchD_007a564c_caseD_6:
  return;
}


