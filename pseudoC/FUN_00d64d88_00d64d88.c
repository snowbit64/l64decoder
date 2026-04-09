// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d64d88
// Entry Point: 00d64d88
// Size: 416 bytes
// Signature: undefined FUN_00d64d88(void)


void FUN_00d64d88(long param_1,byte *param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  code **ppcVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  if ((param_3 != 0) && (*(char *)(param_1 + 0xc0) == '\0')) {
    do {
      iVar5 = *(int *)(param_1 + 0x20);
      uVar8 = ((ulong)*param_2 & 1) << ((ulong)(0x17 - iVar5) & 0x3f) | *(ulong *)(param_1 + 0x18);
      if (iVar5 < 7) {
        iVar5 = iVar5 + 1;
      }
      else {
        iVar2 = iVar5 + 9;
        do {
          iVar5 = iVar2;
          puVar6 = *(undefined **)(param_1 + 200);
          *(undefined **)(param_1 + 200) = puVar6 + 1;
          *puVar6 = (char)(uVar8 >> 0x10);
          lVar3 = *(long *)(param_1 + 0xd0) + -1;
          *(long *)(param_1 + 0xd0) = lVar3;
          if (lVar3 == 0) {
            puVar9 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
            cVar4 = (*(code *)puVar9[3])();
            if (cVar4 == '\0') {
              ppcVar7 = (code **)**(long **)(param_1 + 0xd8);
              *(undefined4 *)(ppcVar7 + 5) = 0x19;
              (**ppcVar7)();
              uVar1 = puVar9[1];
              *(undefined8 *)(param_1 + 200) = *puVar9;
              *(undefined8 *)(param_1 + 0xd0) = uVar1;
            }
            else {
              uVar1 = puVar9[1];
              *(undefined8 *)(param_1 + 200) = *puVar9;
              *(undefined8 *)(param_1 + 0xd0) = uVar1;
            }
          }
          if ((~(uint)uVar8 & 0xff0000) == 0) {
            puVar6 = *(undefined **)(param_1 + 200);
            *(undefined **)(param_1 + 200) = puVar6 + 1;
            *puVar6 = 0;
            lVar3 = *(long *)(param_1 + 0xd0) + -1;
            *(long *)(param_1 + 0xd0) = lVar3;
            if (lVar3 == 0) {
              puVar9 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
              cVar4 = (*(code *)puVar9[3])();
              if (cVar4 == '\0') {
                ppcVar7 = (code **)**(long **)(param_1 + 0xd8);
                *(undefined4 *)(ppcVar7 + 5) = 0x19;
                (**ppcVar7)();
              }
              uVar1 = puVar9[1];
              *(undefined8 *)(param_1 + 200) = *puVar9;
              *(undefined8 *)(param_1 + 0xd0) = uVar1;
            }
          }
          uVar8 = uVar8 << 8;
          iVar2 = iVar5 + -8;
        } while (0xf < iVar2);
        iVar5 = iVar5 + -0x10;
      }
      *(ulong *)(param_1 + 0x18) = uVar8;
      *(int *)(param_1 + 0x20) = iVar5;
      do {
        param_3 = param_3 + -1;
        if (param_3 == 0) {
          return;
        }
        param_2 = param_2 + 1;
      } while (*(char *)(param_1 + 0xc0) != '\0');
    } while( true );
  }
  return;
}


