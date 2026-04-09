// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: shiftInput
// Entry Point: 00b8f7e4
// Size: 388 bytes
// Signature: undefined __thiscall shiftInput(Preprocessor * this, uint param_1)


/* Preprocessor::shiftInput(unsigned int) */

void __thiscall Preprocessor::shiftInput(Preprocessor *this,uint param_1)

{
  byte bVar1;
  char **ppcVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  
  ppcVar2 = *(char ***)(this + 0x38);
  if (param_1 != 0) {
    pcVar8 = *ppcVar2;
    uVar4 = (ulong)param_1;
    uVar6 = uVar4;
    pcVar9 = pcVar8;
    do {
      if (*pcVar9 == '\n') {
        *(int *)(ppcVar2 + 8) = *(int *)(ppcVar2 + 8) + 1;
      }
      pcVar9 = pcVar9 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    uVar5 = *(uint *)((long)ppcVar2 + 0x14);
    *(undefined *)((long)ppcVar2 + 0x1c) = 0;
    *(undefined4 *)((long)ppcVar2 + 0x44) = *(undefined4 *)(ppcVar2 + 8);
    *(undefined4 *)(ppcVar2 + 9) = 0;
    if (param_1 < uVar5) {
      *(bool *)((long)ppcVar2 + 0x1c) = pcVar8[param_1 - 1] == '\n';
      if (ppcVar2[4] == (char *)0x0) {
        pcVar8 = pcVar8 + param_1;
        *ppcVar2 = pcVar8;
      }
      else {
        pcVar8 = pcVar8 + uVar4;
        if (uVar5 - param_1 < 0x65) {
          *ppcVar2[1] = *pcVar8;
          ppcVar2 = *(char ***)(this + 0x38);
          uVar5 = *(uint *)((long)ppcVar2 + 0x14);
          if (uVar4 + 1 < (ulong)uVar5) {
            lVar7 = 1;
            do {
              ppcVar2[1][lVar7] = (*ppcVar2)[lVar7 + uVar4];
              lVar7 = lVar7 + 1;
              ppcVar2 = *(char ***)(this + 0x38);
              uVar5 = *(uint *)((long)ppcVar2 + 0x14);
            } while (uVar4 + lVar7 < (ulong)uVar5);
          }
          pcVar8 = ppcVar2[1];
          iVar3 = *(int *)(ppcVar2 + 2);
        }
        else {
          iVar3 = *(int *)(ppcVar2 + 3) - param_1;
        }
        *ppcVar2 = pcVar8;
        *(int *)(ppcVar2 + 3) = iVar3;
      }
      *(uint *)((long)ppcVar2 + 0x14) = uVar5 - param_1;
      *(bool *)((long)ppcVar2 + 0x4c) = *pcVar8 == '\0';
      if (uVar5 - param_1 != 0) goto LAB_00b8f93c;
    }
    else {
      *(undefined4 *)((long)ppcVar2 + 0x14) = 0;
    }
    if ((long *)ppcVar2[4] == (long *)0x0) {
      bVar1 = 1;
    }
    else {
      bVar1 = (**(code **)(*(long *)ppcVar2[4] + 0x50))();
      ppcVar2 = *(char ***)(this + 0x38);
      bVar1 = bVar1 & 1;
    }
    *(byte *)((long)ppcVar2 + 0x4c) = bVar1;
  }
LAB_00b8f93c:
  pcVar8 = (char *)((long)ppcVar2 + 0x29);
  if ((*(byte *)(ppcVar2 + 5) & 1) != 0) {
    pcVar8 = ppcVar2[7];
  }
  OutputContext::setLine((OutputContext *)ppcVar2[0xf],pcVar8,*(uint *)(ppcVar2 + 8),0xffffffff);
  return;
}


