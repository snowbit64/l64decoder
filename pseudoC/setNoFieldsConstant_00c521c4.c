// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setNoFieldsConstant
// Entry Point: 00c521c4
// Size: 208 bytes
// Signature: undefined setNoFieldsConstant(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Struct::setNoFieldsConstant() */

void IR_Struct::setNoFieldsConstant(void)

{
  uint uVar1;
  uint uVar2;
  long in_x0;
  undefined4 *puVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  lVar8 = *(long *)(in_x0 + 0x30);
  lVar7 = *(long *)(in_x0 + 0x38);
  if (lVar7 != lVar8) {
    uVar6 = 0;
    do {
      puVar5 = *(uint **)(lVar8 + uVar6 * 0x38 + 0x10);
      uVar1 = *puVar5;
      uVar2 = puVar5[2] - 3;
      if (uVar1 < 3 && uVar2 < 6 || uVar1 < 3 && uVar2 == 6) {
        puVar9 = (undefined8 *)(lVar8 + uVar6 * 0x38 + 0x28);
        puVar3 = (undefined4 *)*puVar9;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)operator_new(0x10);
          *puVar3 = 0;
          *puVar9 = puVar3;
        }
        else {
          *puVar3 = 0;
        }
      }
      else if (uVar1 == 3) {
        setNoFieldsConstant();
        lVar8 = *(long *)(in_x0 + 0x30);
        lVar7 = *(long *)(in_x0 + 0x38);
      }
      uVar6 = (ulong)((int)uVar6 + 1);
      uVar4 = (lVar7 - lVar8 >> 3) * 0x6db6db6db6db6db7;
    } while (uVar6 <= uVar4 && uVar4 - uVar6 != 0);
  }
  return;
}


