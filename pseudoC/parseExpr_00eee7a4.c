// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseExpr
// Entry Point: 00eee7a4
// Size: 1172 bytes
// Signature: undefined __thiscall parseExpr(Parser * this, uint param_1)


/* Luau::Parser::parseExpr(unsigned int) */

AstExpr * __thiscall Luau::Parser::parseExpr(Parser *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  AstExprBinary *pAVar5;
  AstType *pAVar6;
  AstExpr *pAVar7;
  AstExprUnary *this_00;
  AstExprBinary *this_01;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  Op OVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  uVar4 = FInt::LuauRecursionLimit;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar2 = *(int *)(this + 0xbc);
  puVar8 = (undefined8 *)(this + 0x2c);
  uVar1 = iVar2 + 1;
  *(uint *)(this + 0xbc) = uVar1;
  if (uVar4 < uVar1) goto LAB_00eeec20;
  iVar9 = *(int *)(this + 0x28);
  uVar13 = *(undefined8 *)(this + 0x2c);
  if (iVar9 < 0x2d) {
    if (iVar9 == 0x21) {
      uStack_78 = *(undefined8 *)(this + 0x34);
      local_80 = *puVar8;
      report((Location *)this,(char *)&local_80,"Unexpected \'!\', did you mean \'not\'?");
LAB_00eee8c8:
      OVar11 = 0;
      goto LAB_00eee8cc;
    }
    if (iVar9 == 0x23) {
      OVar11 = 2;
      goto LAB_00eee8cc;
    }
LAB_00eee848:
    pAVar5 = (AstExprBinary *)parseSimpleExpr();
    iVar9 = *(int *)(this + 0x28);
    if ((*this != (Parser)0x0) && (iVar9 == 0x108)) {
      nextLexeme();
      pAVar6 = (AstType *)parseTypeAnnotation();
      uStack_78 = *(undefined8 *)(pAVar6 + 0x14);
      local_80 = uVar13;
      this_00 = (AstExprUnary *)Allocator::allocate(*(Allocator **)(this + 0x80),0x30);
      AstExprTypeAssertion::AstExprTypeAssertion
                ((AstExprTypeAssertion *)this_00,(Location *)&local_80,(AstExpr *)pAVar5,pAVar6);
      goto LAB_00eee90c;
    }
  }
  else {
    if (iVar9 == 300) goto LAB_00eee8c8;
    if (iVar9 != 0x2d) goto LAB_00eee848;
    OVar11 = 1;
LAB_00eee8cc:
    nextLexeme();
    pAVar7 = (AstExpr *)parseExpr(this,8);
    uStack_78 = *(undefined8 *)(pAVar7 + 0x14);
    local_80 = uVar13;
    this_00 = (AstExprUnary *)Allocator::allocate(*(Allocator **)(this + 0x80),0x28);
    AstExprUnary::AstExprUnary(this_00,(Location *)&local_80,OVar11,pAVar7);
LAB_00eee90c:
    iVar9 = *(int *)(this + 0x28);
    pAVar5 = (AstExprBinary *)this_00;
  }
  if (iVar9 - 0x25U < 0x3a) {
    uVar12 = 0;
    uVar10 = 1;
    switch(iVar9) {
    case 0x25:
      uVar10 = 1;
      uVar12 = 4;
      break;
    default:
      goto switchD_00eee938_caseD_26;
    case 0x2a:
      uVar10 = 1;
      uVar12 = 2;
      break;
    case 0x2b:
      break;
    case 0x2d:
      uVar12 = 1;
      uVar10 = 1;
      break;
    case 0x2f:
      uVar10 = 1;
      uVar12 = 3;
      break;
    case 0x3c:
      uVar10 = 1;
      uVar12 = 9;
      break;
    case 0x3e:
      uVar10 = 1;
      uVar12 = 0xb;
      break;
    case 0x5e:
      uVar10 = 1;
      uVar12 = 5;
    }
  }
  else {
    switch(iVar9) {
    case 0x101:
      uVar10 = 1;
      uVar12 = 8;
      break;
    case 0x102:
      uVar10 = 1;
      uVar12 = 10;
      break;
    case 0x103:
      uVar10 = 1;
      uVar12 = 0xc;
      break;
    case 0x104:
      uVar10 = 1;
      uVar12 = 7;
      break;
    case 0x105:
      uVar10 = 1;
      uVar12 = 6;
      break;
    default:
switchD_00eee938_caseD_26:
      uVar12 = checkBinaryConfusables(this,(BinaryOpPriority *)&DAT_0056f469,param_1);
      uVar10 = uVar12 >> 0x20 & 0xff;
      break;
    case 0x11f:
      uVar10 = 1;
      uVar12 = 0xd;
      break;
    case 0x12d:
      uVar10 = 1;
      uVar12 = 0xe;
    }
  }
  do {
    if (((int)uVar10 == 0) || ((byte)(&DAT_0056f469)[(uVar12 & 0xffffffff) * 2] <= param_1)) {
      *(int *)(this + 0xbc) = iVar2;
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return (AstExpr *)pAVar5;
      }
      goto LAB_00eeec34;
    }
    nextLexeme();
    pAVar7 = (AstExpr *)parseExpr(this,(uint)(byte)(&UNK_0056f46a)[(uVar12 & 0xffffffff) * 2]);
    uStack_78 = *(undefined8 *)(pAVar7 + 0x14);
    local_80 = uVar13;
    this_01 = (AstExprBinary *)Allocator::allocate(*(Allocator **)(this + 0x80),0x30);
    AstExprBinary::AstExprBinary(this_01,(Location *)&local_80,(Op)uVar12,(AstExpr *)pAVar5,pAVar7);
    iVar9 = *(int *)(this + 0x28);
    if (iVar9 - 0x25U < 0x3a) {
      uVar12 = 0;
      uVar10 = 1;
      switch(iVar9) {
      case 0x25:
        uVar10 = 1;
        uVar12 = 4;
        break;
      default:
        goto switchD_00eeeaf0_caseD_26;
      case 0x2a:
        uVar10 = 1;
        uVar12 = 2;
        break;
      case 0x2b:
        break;
      case 0x2d:
        uVar12 = 1;
        uVar10 = 1;
        break;
      case 0x2f:
        uVar10 = 1;
        uVar12 = 3;
        break;
      case 0x3c:
        uVar10 = 1;
        uVar12 = 9;
        break;
      case 0x3e:
        uVar10 = 1;
        uVar12 = 0xb;
        break;
      case 0x5e:
        uVar10 = 1;
        uVar12 = 5;
      }
    }
    else {
      switch(iVar9) {
      case 0x101:
        uVar10 = 1;
        uVar12 = 8;
        break;
      case 0x102:
        uVar10 = 1;
        uVar12 = 10;
        break;
      case 0x103:
        uVar10 = 1;
        uVar12 = 0xc;
        break;
      case 0x104:
        uVar10 = 1;
        uVar12 = 7;
        break;
      case 0x105:
        uVar10 = 1;
        uVar12 = 6;
        break;
      default:
switchD_00eeeaf0_caseD_26:
        uVar12 = checkBinaryConfusables(this,(BinaryOpPriority *)&DAT_0056f469,param_1);
        uVar10 = uVar12 >> 0x20 & 0xff;
        break;
      case 0x11f:
        uVar10 = 1;
        uVar12 = 0xd;
        break;
      case 0x12d:
        uVar10 = 1;
        uVar12 = 0xe;
      }
    }
    uVar1 = FInt::LuauRecursionLimit;
    iVar9 = *(int *)(this + 0xbc);
    *(uint *)(this + 0xbc) = iVar9 + 1U;
    pAVar5 = this_01;
  } while (iVar9 + 1U <= uVar1);
  puVar8 = (undefined8 *)
           ParseError::raise((Location *)puVar8,
                             "Exceeded allowed recursion depth; simplify your %s to make the code compile"
                             ,"expression");
LAB_00eeec20:
  ParseError::raise((Location *)puVar8,
                    "Exceeded allowed recursion depth; simplify your %s to make the code compile",
                    "expression");
LAB_00eeec34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


