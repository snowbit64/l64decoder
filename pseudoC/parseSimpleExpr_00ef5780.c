// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseSimpleExpr
// Entry Point: 00ef5780
// Size: 700 bytes
// Signature: undefined parseSimpleExpr(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseSimpleExpr() */

AstExprConstantString * Luau::Parser::parseSimpleExpr(void)

{
  int iVar1;
  char cVar2;
  long lVar3;
  Parser *in_x0;
  AstExprConstantBool *this;
  AstExprConstantString *pAVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  puVar5 = &local_90;
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  iVar1 = *(int *)(in_x0 + 0x28);
  uStack_88 = *(undefined8 *)(in_x0 + 0x34);
  local_90 = *(undefined8 *)(in_x0 + 0x2c);
  switch(iVar1) {
  case 0x114:
  case 0x115:
switchD_00ef57d4_caseD_114:
    uStack_68 = *(undefined8 *)(in_x0 + 0x34);
    local_70 = *(undefined8 *)(in_x0 + 0x2c);
    parseCharArray();
    if ((char)local_50 != '\0') {
      this = (AstExprConstantBool *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x30);
      AstExprConstantString::AstExprConstantString
                ((AstExprConstantString *)this,(Location *)&local_70,(AstArray *)&local_60);
      break;
    }
    local_80 = 0;
    uStack_78 = 0;
    pcVar7 = "String literal contains malformed escape sequence";
    puVar5 = &local_70;
    puVar6 = &local_80;
    goto LAB_00ef5a04;
  case 0x116:
    pAVar4 = (AstExprConstantString *)parseNumber();
    goto LAB_00ef58a8;
  default:
    if (FFlag::LuauInterpolatedStringBaseSupport == '\0') {
      switch(iVar1) {
      case 0x106:
        goto switchD_00ef5844_caseD_106;
      case 0x107:
      case 0x108:
      case 0x109:
      case 0x10a:
      case 0x10b:
      case 0x10c:
      case 0x10d:
      case 0x10e:
      case 0x10f:
      case 0x110:
      case 0x111:
      case 0x112:
      case 0x113:
      case 0x114:
      case 0x115:
      case 0x116:
      case 0x117:
      case 0x118:
      case 0x119:
      case 0x11b:
      case 0x11c:
      case 0x11e:
      case 0x11f:
      case 0x120:
      case 0x121:
      case 0x122:
      case 0x123:
      case 0x124:
      case 0x125:
      case 0x126:
      case 0x127:
        goto switchD_00ef5844_caseD_107;
      case 0x11a:
        goto switchD_00ef5844_caseD_11a;
      case 0x11d:
        goto switchD_00ef5844_caseD_11d;
      case 0x128:
        goto switchD_00ef5844_caseD_128;
      default:
        goto switchD_00ef5844_caseD_23;
      }
    }
    switch(iVar1) {
    case 0x106:
      goto switchD_00ef5844_caseD_106;
    case 0x107:
    case 0x108:
    case 0x10a:
    case 0x10b:
    case 0x10d:
    case 0x10e:
    case 0x10f:
    case 0x110:
    case 0x111:
    case 0x112:
    case 0x113:
    case 0x114:
    case 0x115:
    case 0x116:
    case 0x117:
    case 0x118:
    case 0x119:
    case 0x11b:
    case 0x11c:
    case 0x11e:
    case 0x11f:
    case 0x120:
    case 0x121:
    case 0x122:
    case 0x123:
    case 0x124:
    case 0x125:
    case 0x126:
    case 0x127:
switchD_00ef5844_caseD_107:
      pAVar4 = (AstExprConstantString *)parsePrimaryExpr(in_x0,false);
      break;
    case 0x109:
      pAVar4 = (AstExprConstantString *)parseInterpString();
      break;
    case 0x10c:
      goto switchD_00ef57d4_caseD_114;
    case 0x11a:
switchD_00ef5844_caseD_11a:
      nextLexeme();
      pcVar7 = "Malformed string";
      goto LAB_00ef59fc;
    case 0x11d:
switchD_00ef5844_caseD_11d:
      nextLexeme();
      pcVar7 = "Double braces are not permitted within interpolated strings. Did you mean \'\\{\'?";
LAB_00ef59fc:
      uStack_58 = 0;
      local_60 = 0;
      puVar6 = &local_60;
LAB_00ef5a04:
      this = (AstExprConstantBool *)
             reportExprError((Location *)in_x0,(AstArray *)puVar5,(char *)puVar6,pcVar7);
      goto LAB_00ef5a10;
    case 0x128:
switchD_00ef5844_caseD_128:
      pAVar4 = (AstExprConstantString *)parseIfElseExpr();
      break;
    default:
switchD_00ef5844_caseD_23:
      if (iVar1 != 0x7b) goto switchD_00ef5844_caseD_107;
      pAVar4 = (AstExprConstantString *)parseTableConstructor();
    }
LAB_00ef58a8:
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return pAVar4;
    }
    goto LAB_00ef5a38;
  case 0x125:
    nextLexeme();
    this = (AstExprConstantBool *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x20);
    AstExprConstantBool::AstExprConstantBool(this,(Location *)&local_90,false);
    break;
  case 0x127:
    uStack_58 = *(undefined8 *)(in_x0 + 0x30);
    local_60 = *(undefined8 *)(in_x0 + 0x28);
    uStack_48 = *(undefined8 *)(in_x0 + 0x40);
    local_50 = *(undefined8 *)(in_x0 + 0x38);
    nextLexeme();
    local_70 = 0;
    this = (AstExprConstantBool *)
           parseFunctionBody(in_x0,false,(Lexeme *)&local_60,(AstName *)&local_70,(Name *)0x0);
    break;
  case 299:
    nextLexeme();
    this = (AstExprConstantBool *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x20);
    AstExprConstantNil::AstExprConstantNil((AstExprConstantNil *)this,(Location *)&local_90);
    break;
  case 0x131:
    nextLexeme();
    this = (AstExprConstantBool *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x20);
    AstExprConstantBool::AstExprConstantBool(this,(Location *)&local_90,true);
  }
LAB_00ef5a10:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return (AstExprConstantString *)this;
  }
LAB_00ef5a38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_00ef5844_caseD_106:
  cVar2 = *(char *)(*(long *)(in_x0 + 0xf8) + -8);
  nextLexeme();
  if (cVar2 == '\0') {
    pcVar7 = "Cannot use \'...\' outside of a vararg function";
    goto LAB_00ef59fc;
  }
  this = (AstExprConstantBool *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x20);
  AstExprVarargs::AstExprVarargs((AstExprVarargs *)this,(Location *)&local_90);
  goto LAB_00ef5a10;
}


