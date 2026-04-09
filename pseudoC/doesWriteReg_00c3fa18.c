// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doesWriteReg
// Entry Point: 00c3fa18
// Size: 328 bytes
// Signature: undefined __thiscall doesWriteReg(IR_Section * this, uint param_1)


/* IR_Section::doesWriteReg(unsigned int) */

undefined8 __thiscall IR_Section::doesWriteReg(IR_Section *this,uint param_1)

{
  IR_Section *this_00;
  IR_Section *this_01;
  ulong uVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  ulong uVar5;
  
  lVar2 = *(long *)(this + 0x20);
  if ((*(long *)(this + 0x28) - lVar2 >> 3) - 3U < 0xfffffffffffffffe) {
    uVar5 = 1;
    do {
      piVar4 = *(int **)(lVar2 + uVar5 * 8);
      if (*piVar4 == 4) {
        this_01 = (IR_Section *)
                  IR_InstructionSequence::getSection
                            ((IR_InstructionSequence *)this,
                             *(uint *)((long)piVar4 +
                                      ((ulong)((uint)piVar4[1] >> 0xe) & 0x3fffc) + 0xc));
LAB_00c3fa70:
        uVar1 = doesWriteReg(this_01,param_1);
        if ((uVar1 & 1) != 0) {
          return 1;
        }
      }
      else if (*piVar4 == 2) {
        this_00 = (IR_Section *)
                  IR_InstructionSequence::getSection
                            ((IR_InstructionSequence *)this,
                             *(uint *)((long)piVar4 +
                                      ((ulong)((uint)piVar4[1] >> 0xe) & 0x3fffc) + 0xc));
        this_01 = (IR_Section *)
                  IR_InstructionSequence::getSection
                            ((IR_InstructionSequence *)this,
                             *(uint *)((long)piVar4 +
                                      ((ulong)((uint)piVar4[1] >> 0xe) & 0x3fffc) + 0x10));
        if ((this_00 != (IR_Section *)0x0) &&
           (uVar1 = doesWriteReg(this_00,param_1), (uVar1 & 1) != 0)) {
          return 1;
        }
        if (this_01 != (IR_Section *)0x0) goto LAB_00c3fa70;
      }
      else if (0xffff < (uint)piVar4[1]) {
        uVar1 = (ulong)((uint)piVar4[1] >> 0x10);
        puVar3 = (uint *)(piVar4 + 2);
        do {
          if (*puVar3 == param_1) {
            return 1;
          }
          puVar3 = puVar3 + 1;
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
      lVar2 = *(long *)(this + 0x20);
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < (*(long *)(this + 0x28) - lVar2 >> 3) - 1U);
  }
  return 0;
}


