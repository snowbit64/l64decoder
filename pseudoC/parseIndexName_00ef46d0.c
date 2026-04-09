// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseIndexName
// Entry Point: 00ef46d0
// Size: 216 bytes
// Signature: undefined __cdecl parseIndexName(char * param_1, Position * param_2)


/* Luau::Parser::parseIndexName(char const*, Luau::Position const&) */

void Luau::Parser::parseIndexName(char *param_1,Position *param_2)

{
  long lVar1;
  int *in_x2;
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
    reportNameError((Parser *)param_1,(char *)param_2);
    if ((*(int *)(param_1 + 0x28) - 0x11fU < 0x15) && (*(int *)(param_1 + 0x2c) == *in_x2)) {
      uVar4 = *(undefined8 *)(param_1 + 0x34);
      uVar3 = *(undefined8 *)(param_1 + 0x2c);
      *in_x8 = *(undefined8 *)(param_1 + 0x40);
      in_x8[2] = uVar4;
      in_x8[1] = uVar3;
      nextLexeme();
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x2c);
      *in_x8 = *(undefined8 *)(param_1 + 0xd0);
      in_x8[1] = uVar3;
      in_x8[2] = uVar3;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


