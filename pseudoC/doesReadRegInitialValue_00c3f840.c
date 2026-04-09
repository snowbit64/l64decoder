// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doesReadRegInitialValue
// Entry Point: 00c3f840
// Size: 472 bytes
// Signature: undefined __thiscall doesReadRegInitialValue(IR_Section * this, uint param_1)


/* IR_Section::doesReadRegInitialValue(unsigned int) */

undefined8 __thiscall IR_Section::doesReadRegInitialValue(IR_Section *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  IR_Section *pIVar4;
  IR_Section *this_00;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  int *piVar8;
  ulong uVar9;
  
  lVar6 = *(long *)(this + 0x20);
  if ((*(long *)(this + 0x28) - lVar6 >> 3) - 3U < 0xfffffffffffffffe) {
    uVar9 = 1;
    do {
      piVar8 = *(int **)(lVar6 + uVar9 * 8);
      if (*piVar8 == 4) {
        pIVar4 = (IR_Section *)
                 IR_InstructionSequence::getSection
                           ((IR_InstructionSequence *)this,
                            *(uint *)((long)piVar8 +
                                     ((ulong)((uint)piVar8[1] >> 0xe) & 0x3fffc) + 0xc));
        uVar5 = doesReadRegInitialValue(pIVar4,param_1);
        if ((uVar5 & 1) != 0) {
          return 1;
        }
        uVar5 = doesWriteReg(pIVar4,param_1);
        if ((uVar5 & 1) != 0) {
          return 0;
        }
      }
      else if (*piVar8 == 2) {
        pIVar4 = (IR_Section *)
                 IR_InstructionSequence::getSection
                           ((IR_InstructionSequence *)this,
                            *(uint *)((long)piVar8 +
                                     ((ulong)((uint)piVar8[1] >> 0xe) & 0x3fffc) + 0xc));
        this_00 = (IR_Section *)
                  IR_InstructionSequence::getSection
                            ((IR_InstructionSequence *)this,
                             *(uint *)((long)piVar8 +
                                      ((ulong)((uint)piVar8[1] >> 0xe) & 0x3fffc) + 0x10));
        if (pIVar4 == (IR_Section *)0x0) {
LAB_00c3f9c0:
          if (this_00 == (IR_Section *)0x0) goto LAB_00c3f87c;
          bVar3 = 0;
        }
        else {
          uVar5 = doesReadRegInitialValue(pIVar4,param_1);
          if ((uVar5 & 1) != 0) {
            return 1;
          }
          uVar5 = doesWriteReg(pIVar4,param_1);
          if ((uVar5 & 1) == 0) goto LAB_00c3f9c0;
          if (this_00 == (IR_Section *)0x0) {
            return 0;
          }
          bVar3 = 1;
        }
        uVar5 = doesReadRegInitialValue(this_00,param_1);
        if ((uVar5 & 1) != 0) {
          return 1;
        }
        uVar5 = doesWriteReg(this_00,param_1);
        if (((uVar5 & 1) != 0) && ((bool)(pIVar4 == (IR_Section *)0x0 | bVar3))) {
          return 0;
        }
      }
      else {
        uVar2 = piVar8[1];
        uVar5 = (ulong)uVar2 & 0xffff;
        uVar1 = uVar2 >> 0x10;
        if ((int)uVar5 != 0) {
          puVar7 = (uint *)(piVar8 + (ulong)uVar1 + 2);
          do {
            if (*puVar7 == param_1) {
              return 1;
            }
            puVar7 = puVar7 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        if (0xffff < uVar2) {
          puVar7 = (uint *)(piVar8 + 2);
          if (uVar1 < 2) {
            uVar1 = 1;
          }
          uVar5 = (ulong)uVar1;
          do {
            if (*puVar7 == param_1) {
              return 0;
            }
            puVar7 = puVar7 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
LAB_00c3f87c:
      lVar6 = *(long *)(this + 0x20);
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (uVar9 < (*(long *)(this + 0x28) - lVar6 >> 3) - 1U);
  }
  return 0;
}


