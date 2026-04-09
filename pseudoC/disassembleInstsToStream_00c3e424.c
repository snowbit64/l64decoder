// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: disassembleInstsToStream
// Entry Point: 00c3e424
// Size: 208 bytes
// Signature: undefined __thiscall disassembleInstsToStream(IR_InstructionSequence * this, CodeStringStream * param_1, char * param_2)


/* IR_InstructionSequence::disassembleInstsToStream(CodeStringStream*, char const*) const */

void __thiscall
IR_InstructionSequence::disassembleInstsToStream
          (IR_InstructionSequence *this,CodeStringStream *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  char acStack_10058 [65535];
  undefined local_59;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(this + 0x20);
  if (*(long *)(this + 0x28) != lVar3) {
    uVar4 = 0;
    do {
      local_59 = 0;
      disassembleInst(this,*(uint **)(lVar3 + uVar4 * 8),acStack_10058,(vector *)0x0);
      CodeStringStream::writeLine((char *)param_1,"%s%s\n",param_2,acStack_10058);
      lVar3 = *(long *)(this + 0x20);
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < (ulong)(*(long *)(this + 0x28) - lVar3 >> 3));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


