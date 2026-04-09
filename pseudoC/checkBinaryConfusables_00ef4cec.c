// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkBinaryConfusables
// Entry Point: 00ef4cec
// Size: 584 bytes
// Signature: undefined __thiscall checkBinaryConfusables(Parser * this, BinaryOpPriority * param_1, uint param_2)


/* Luau::Parser::checkBinaryConfusables(Luau::Parser::BinaryOpPriority const*, unsigned int) */

ulong __thiscall
Luau::Parser::checkBinaryConfusables(Parser *this,BinaryOpPriority *param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  int local_64;
  int local_60;
  undefined8 local_5c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(this + 0x28);
  if (((iVar1 == 0x21) || (iVar1 == 0x7c)) || (iVar1 == 0x26)) {
    uVar5 = *(undefined8 *)(this + 0x2c);
    Lexer::lookahead();
    iVar1 = *(int *)(this + 0x28);
    if ((iVar1 == 0x26) && (local_68 == 0x26)) {
      if (*(int *)(this + 0x38) == local_60) {
        if ((*(int *)(this + 0x34) == local_64) && (param_2 < (byte)param_1[0x1a])) {
          nextLexeme();
          uStack_70 = local_5c;
          local_78 = uVar5;
          report((Location *)this,(char *)&local_78,"Unexpected \'&&\', did you mean \'and\'?");
          uVar3 = 0x100000000;
          uVar4 = 0xd;
          if (*(long *)(lVar2 + 0x28) != local_48) goto LAB_00ef4f30;
          goto LAB_00ef4efc;
        }
        goto LAB_00ef4eec;
      }
    }
    else if ((iVar1 == 0x7c) && (local_68 == 0x7c)) {
      if (*(int *)(this + 0x38) == local_60) {
        if ((*(int *)(this + 0x34) == local_64) && (param_2 < (byte)param_1[0x1c])) {
          nextLexeme();
          uStack_70 = local_5c;
          local_78 = uVar5;
          report((Location *)this,(char *)&local_78,"Unexpected \'||\', did you mean \'or\'?");
          uVar3 = 0x100000000;
          uVar4 = 0xe;
          if (*(long *)(lVar2 + 0x28) == local_48) goto LAB_00ef4efc;
          goto LAB_00ef4f30;
        }
        goto LAB_00ef4eec;
      }
    }
    else if (iVar1 == 0x21) {
      if (local_68 == 0x3d) {
        if (*(int *)(this + 0x38) != local_60) goto LAB_00ef4f1c;
        if ((*(int *)(this + 0x34) == local_64) && (param_2 < (byte)param_1[0xe])) {
          nextLexeme();
          uStack_70 = local_5c;
          local_78 = uVar5;
          report((Location *)this,(char *)&local_78,"Unexpected \'!=\', did you mean \'~=\'?");
          uVar3 = 0x100000000;
          uVar4 = 7;
          if (*(long *)(lVar2 + 0x28) == local_48) goto LAB_00ef4efc;
          goto LAB_00ef4f30;
        }
      }
      goto LAB_00ef4eec;
    }
LAB_00ef4f1c:
    uVar3 = 0;
    uVar4 = uVar3;
    if (*(long *)(lVar2 + 0x28) == local_48) goto LAB_00ef4efc;
  }
  else {
LAB_00ef4eec:
    uVar3 = 0;
    uVar4 = 0;
    if (*(long *)(lVar2 + 0x28) == local_48) {
LAB_00ef4efc:
      return uVar4 | uVar3;
    }
  }
LAB_00ef4f30:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


