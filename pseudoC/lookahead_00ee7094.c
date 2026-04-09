// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lookahead
// Entry Point: 00ee7094
// Size: 156 bytes
// Signature: undefined lookahead(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Lexer::lookahead() */

void Luau::Lexer::lookahead(void)

{
  undefined4 uVar1;
  long lVar2;
  Lexer *in_x0;
  undefined8 *puVar3;
  undefined8 *in_x8;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  uVar6 = *(undefined8 *)(in_x0 + 0x28);
  uVar5 = *(undefined8 *)(in_x0 + 0x20);
  uVar8 = *(undefined8 *)(in_x0 + 0x38);
  uVar7 = *(undefined8 *)(in_x0 + 0x30);
  uVar11 = *(undefined8 *)(in_x0 + 0x48);
  uVar9 = *(undefined8 *)(in_x0 + 0x40);
  uVar15 = *(undefined8 *)(in_x0 + 0x10);
  uVar1 = *(undefined4 *)(in_x0 + 0x18);
  puVar3 = (undefined8 *)next(in_x0,(bool)in_x0[0x58],true);
  uVar12 = puVar3[1];
  uVar10 = *puVar3;
  uVar14 = puVar3[3];
  uVar13 = puVar3[2];
  *(undefined8 *)(in_x0 + 0x10) = uVar15;
  *(undefined8 *)(in_x0 + 0x28) = uVar6;
  *(undefined8 *)(in_x0 + 0x20) = uVar5;
  *(undefined8 *)(in_x0 + 0x38) = uVar8;
  *(undefined8 *)(in_x0 + 0x30) = uVar7;
  *(undefined4 *)(in_x0 + 0x18) = uVar1;
  in_x8[1] = uVar12;
  *in_x8 = uVar10;
  in_x8[3] = uVar14;
  in_x8[2] = uVar13;
  *(undefined8 *)(in_x0 + 0x48) = uVar11;
  *(undefined8 *)(in_x0 + 0x40) = uVar9;
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


