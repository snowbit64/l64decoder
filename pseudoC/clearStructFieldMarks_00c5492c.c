// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearStructFieldMarks
// Entry Point: 00c5492c
// Size: 196 bytes
// Signature: undefined clearStructFieldMarks(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_TypeSet::clearStructFieldMarks() */

void IR_TypeSet::clearStructFieldMarks(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar3 = *(long *)(in_x0 + 0xda0);
  lVar2 = *(long *)(in_x0 + 0xda8) - lVar3;
  if (lVar2 != 0) {
    uVar4 = 0;
    do {
      lVar5 = *(long *)(*(long *)(lVar3 + uVar4 * 0x10) + 8);
      lVar1 = *(long *)(lVar5 + 0x30);
      uVar8 = (*(long *)(lVar5 + 0x38) - lVar1 >> 3) * 0xb6db6db7;
      if ((int)uVar8 != 0) {
        uVar7 = uVar8 & 0xffffffff;
        if (uVar7 < 2) {
          lVar9 = 0;
        }
        else {
          puVar6 = (undefined4 *)(lVar1 + 0x58);
          lVar9 = uVar7 - (uVar8 & 1);
          lVar5 = lVar9;
          do {
            puVar6[-0xe] = 0;
            lVar5 = lVar5 + -2;
            *puVar6 = 0;
            puVar6[-10] = 0;
            puVar6[4] = 0;
            puVar6 = puVar6 + 0x1c;
          } while (lVar5 != 0);
          if ((uVar8 & 1) == 0) goto LAB_00c5495c;
        }
        lVar5 = uVar7 - lVar9;
        puVar6 = (undefined4 *)(lVar1 + lVar9 * 0x38 + 0x30);
        do {
          lVar5 = lVar5 + -1;
          puVar6[-4] = 0;
          *puVar6 = 0;
          puVar6 = puVar6 + 0xe;
        } while (lVar5 != 0);
      }
LAB_00c5495c:
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (ulong)(lVar2 >> 4));
  }
  return;
}


