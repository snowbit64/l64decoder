// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: containsEarlyReloop
// Entry Point: 00c4c418
// Size: 196 bytes
// Signature: undefined __thiscall containsEarlyReloop(IR_Section * this, bool param_1)


/* IR_Section::containsEarlyReloop(bool) */

undefined8 __thiscall IR_Section::containsEarlyReloop(IR_Section *this,bool param_1)

{
  int iVar1;
  uint uVar2;
  IR_Section *this_00;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(this + 0x20);
  uVar2 = (int)((ulong)(*(long *)(this + 0x28) - lVar5) >> 3) - (uint)(*(int *)(this + 0x38) == 1);
  if (uVar2 == 0) {
    return 0;
  }
  lVar6 = 0;
  do {
    piVar4 = *(int **)(lVar5 + lVar6);
    iVar1 = *piVar4;
    if (iVar1 == 3) {
LAB_00c4c484:
      this_00 = (IR_Section *)
                IR_InstructionSequence::getSection
                          ((IR_InstructionSequence *)this,
                           *(uint *)((long)piVar4 + ((ulong)((uint)piVar4[1] >> 0xe) & 0x3fffc) + 8)
                          );
      uVar3 = containsEarlyReloop(this_00,param_1);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
    else if (iVar1 == 5) {
      if (param_1) goto LAB_00c4c484;
    }
    else if (iVar1 == 8) {
      return 1;
    }
    if ((ulong)uVar2 * 8 + -8 == lVar6) {
      return 0;
    }
    lVar5 = *(long *)(this + 0x20);
    lVar6 = lVar6 + 8;
  } while( true );
}


