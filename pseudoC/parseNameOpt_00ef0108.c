// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseNameOpt
// Entry Point: 00ef0108
// Size: 140 bytes
// Signature: undefined __cdecl parseNameOpt(char * param_1)


/* Luau::Parser::parseNameOpt(char const*) */

void Luau::Parser::parseNameOpt(char *param_1)

{
  int iVar1;
  long lVar2;
  char *in_x1;
  undefined8 *in_x8;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0x117) {
    reportNameError((Parser *)param_1,in_x1);
    *(undefined *)in_x8 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x34);
    uVar5 = *(undefined8 *)(param_1 + 0x2c);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    nextLexeme();
    *in_x8 = uVar4;
    in_x8[2] = uVar6;
    in_x8[1] = uVar5;
  }
  *(bool *)(in_x8 + 3) = iVar1 == 0x117;
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


