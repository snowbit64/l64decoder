// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseName
// Entry Point: 00eefb1c
// Size: 152 bytes
// Signature: undefined __cdecl parseName(char * param_1)


/* Luau::Parser::parseName(char const*) */

void Luau::Parser::parseName(char *param_1)

{
  long lVar1;
  char *in_x1;
  undefined8 *in_x8;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x28) == 0x117) {
    uVar5 = *(undefined8 *)(param_1 + 0x34);
    uVar4 = *(undefined8 *)(param_1 + 0x2c);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    nextLexeme();
    *in_x8 = uVar3;
    in_x8[2] = uVar5;
    in_x8[1] = uVar4;
  }
  else {
    reportNameError((Parser *)param_1,in_x1);
    uVar3 = *(undefined8 *)(param_1 + 0x2c);
    *in_x8 = *(undefined8 *)(param_1 + 0xd0);
    in_x8[1] = uVar3;
    in_x8[2] = uVar3;
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


