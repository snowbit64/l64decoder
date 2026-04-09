// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseTypeOrPackAnnotation
// Entry Point: 00ef40d8
// Size: 284 bytes
// Signature: undefined parseTypeOrPackAnnotation(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseTypeOrPackAnnotation() */

void Luau::Parser::parseTypeOrPackAnnotation(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  Parser *in_x0;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined local_88 [16];
  long *local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  uVar4 = FInt::LuauRecursionLimit;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  iVar2 = *(int *)(in_x0 + 0xbc);
  uVar1 = iVar2 + 1;
  *(uint *)(in_x0 + 0xbc) = uVar1;
  if (uVar4 < uVar1) {
    uVar5 = ParseError::raise((Location *)(in_x0 + 0x2c),
                              "Exceeded allowed recursion depth; simplify your %s to make the code compile"
                              ,"type annotation");
    goto LAB_00ef41f0;
  }
  plVar6 = (long *)(in_x0 + 0x250);
  local_68 = 0;
  uStack_58 = *(undefined8 *)(in_x0 + 0x34);
  local_60 = *(undefined8 *)(in_x0 + 0x2c);
  lVar7 = *(long *)(in_x0 + 600) - *(long *)(in_x0 + 0x250) >> 3;
  local_78 = plVar6;
  lStack_70 = lVar7;
                    /* try { // try from 00ef4144 to 00ef41bf has its CatchHandler @ 00ef41f4 */
  local_88 = parseSimpleTypeAnnotation(in_x0,true);
  if (local_88._8_8_ == 0) {
    TempVector<Luau::AstType*>::push_back
              ((TempVector<Luau::AstType*> *)&local_78,(AstType **)local_88);
    *(int *)(in_x0 + 0xbc) = iVar2;
    uVar5 = parseTypeAnnotation(in_x0,(TempVector *)&local_78,(Location *)&local_60);
    lVar7 = *local_78 + lStack_70 * 8;
    plVar6 = local_78;
    if (lVar7 != local_78[1]) goto LAB_00ef4170;
  }
  else {
    uVar5 = 0;
    lVar7 = *plVar6 + lVar7 * 8;
    if (lVar7 != *(long *)(in_x0 + 600)) {
LAB_00ef4170:
      plVar6[1] = lVar7;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_00ef41f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


