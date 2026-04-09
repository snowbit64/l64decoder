// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseSimpleTypeAnnotation
// Entry Point: 00ef3bb8
// Size: 1280 bytes
// Signature: undefined __thiscall parseSimpleTypeAnnotation(Parser * this, bool param_1)


/* Luau::Parser::parseSimpleTypeAnnotation(bool) */

AstTypeSingletonString * __thiscall
Luau::Parser::parseSimpleTypeAnnotation(Parser *this,bool param_1)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  AstTypeSingletonString *this_00;
  AstExpr *pAVar5;
  char cVar6;
  uint *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined auVar12 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  char local_60;
  undefined7 uStack_5f;
  long local_58;
  
  uVar1 = FInt::LuauRecursionLimit;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar4 = *(int *)(this + 0xbc);
  *(uint *)(this + 0xbc) = iVar4 + 1U;
  if (uVar1 < iVar4 + 1U) {
    ParseError::raise((Location *)(this + 0x2c),
                      "Exceeded allowed recursion depth; simplify your %s to make the code compile",
                      "type annotation");
    goto LAB_00ef40b4;
  }
  puVar7 = (uint *)(this + 0x28);
  uVar1 = *puVar7;
  uStack_78 = *(undefined8 *)(this + 0x34);
  local_80 = *(undefined8 *)(this + 0x2c);
  if ((int)uVar1 < 0x109) {
    if ((uVar1 == 0x28) || (uVar1 == 0x3c)) {
      this_00 = (AstTypeSingletonString *)parseFunctionTypeAnnotation(this,param_1);
    }
    else {
      if (uVar1 != 0x7b) goto switchD_00ef3c3c_caseD_10a;
      this_00 = (AstTypeSingletonString *)parseTableTypeAnnotation();
    }
    goto LAB_00ef3e30;
  }
  switch(uVar1) {
  case 0x109:
  case 0x10c:
    parseInterpString();
    pcVar8 = "Interpolated string literals cannot be used as types";
    goto LAB_00ef3e14;
  default:
switchD_00ef3c3c_caseD_10a:
    if ((char)FFlag::LuauTypeAnnotationLocationChange == '\0') {
      local_90 = *(undefined8 *)(this + 0x50);
      uStack_88 = *(undefined8 *)(this + 0x2c);
      local_a0 = 0;
      uStack_98 = 0;
      Lexeme::toString();
      uVar11 = (ulong)&local_70 | 1;
      if ((local_70 & 1) != 0) {
        uVar11 = CONCAT71(uStack_5f,local_60);
      }
                    /* try { // try from 00ef3f14 to 00ef3f2f has its CatchHandler @ 00ef40b8 */
      this_00 = (AstTypeSingletonString *)
                reportTypeAnnotationError
                          ((Location *)this,(AstArray *)&local_90,SUB81(&local_a0,0),(char *)0x1,
                           "Expected type, got %s",uVar11);
    }
    else {
      local_a0 = *(undefined8 *)(this + 0x50);
      uStack_98 = uStack_78;
      local_90 = local_a0;
      uStack_88 = local_80;
      Lexeme::toString();
      uVar11 = (ulong)&local_70 | 1;
      if ((local_70 & 1) != 0) {
        uVar11 = CONCAT71(uStack_5f,local_60);
      }
                    /* try { // try from 00ef3ea4 to 00ef3ebb has its CatchHandler @ 00ef40bc */
      this_00 = (AstTypeSingletonString *)
                reportMissingTypeAnnotationError
                          ((Location *)this,(Location *)&local_a0,(char *)&local_90,
                           "Expected type, got %s",uVar11);
    }
    if ((local_70 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_5f,local_60));
    }
    break;
  case 0x114:
  case 0x115:
    parseCharArray();
    if (local_60 != '\0') {
      uStack_88 = CONCAT44(uStack_64,uStack_68);
      local_90 = CONCAT44(uStack_6c,local_70);
      this_00 = (AstTypeSingletonString *)Allocator::allocate(*(Allocator **)(this + 0x80),0x30);
      AstTypeSingletonString::AstTypeSingletonString
                (this_00,(Location *)&local_80,(AstArray *)&local_90);
      break;
    }
    pcVar8 = "String literal contains malformed escape sequence";
    cVar6 = (char)&local_90;
    local_90 = 0;
    uStack_88 = 0;
    goto LAB_00ef3e24;
  case 0x117:
    pcVar8 = *(char **)(this + 0x40);
    nextLexeme();
    uVar1 = *(uint *)(this + 0x28);
    if (uVar1 == 0x106) {
      report((Location *)this,(char *)(this + 0x2c),
             "Unexpected \'...\' after type name; type pack is not allowed in this context");
      nextLexeme();
LAB_00ef3f80:
      uVar1 = *puVar7;
joined_r0x00ef4004:
      uVar11 = 0;
      uVar9 = 0;
      pcVar3 = (char *)0x0;
    }
    else {
      if (uVar1 != 0x2e) {
        if (pcVar8 != (char *)0x0) {
          iVar4 = strcmp(pcVar8,"typeof");
          if (iVar4 == 0) {
            uVar9 = *(undefined8 *)(this + 0x2c);
            expectAndConsume(this,'(',"typeof type");
            pAVar5 = (AstExpr *)parseExpr(this,0);
            uVar10 = *(undefined8 *)(this + 0x34);
            uStack_6c = (undefined4)uVar9;
            uStack_68 = (undefined4)((ulong)uVar9 >> 0x20);
            local_70 = uVar1;
            expectMatchAndConsume(this,')',(MatchLexeme *)&local_70,false);
            local_70 = (uint)local_80;
            uStack_6c = (undefined4)((ulong)local_80 >> 0x20);
            uStack_68 = (undefined4)uVar10;
            uStack_64 = (undefined4)((ulong)uVar10 >> 0x20);
            this_00 = (AstTypeSingletonString *)
                      Allocator::allocate(*(Allocator **)(this + 0x80),0x28);
            AstTypeTypeof::AstTypeTypeof((AstTypeTypeof *)this_00,(Location *)&local_70,pAVar5);
            break;
          }
          goto LAB_00ef3f80;
        }
        goto joined_r0x00ef4004;
      }
      uVar9 = *(undefined8 *)(this + 0x2c);
      nextLexeme();
      uVar11 = (ulong)pcVar8 >> 8;
      pcVar3 = pcVar8;
      if ((*(int *)(this + 0x28) == 0x117) ||
         ((reportNameError(this,"field name"), *(int *)(this + 0x28) - 0x11fU < 0x15 &&
          (*(int *)(this + 0x2c) == (int)uVar9)))) {
        pcVar8 = *(char **)(this + 0x40);
        nextLexeme();
        uVar9 = 1;
        uVar1 = *puVar7;
      }
      else {
        pcVar8 = *(char **)(this + 0xd0);
        uVar9 = 1;
        uVar1 = *puVar7;
      }
    }
    uStack_64 = 0;
    uStack_68 = 0;
    uStack_6c = 0;
    local_70 = 0;
    if (uVar1 == 0x3c) {
      uStack_64 = 0;
      uStack_68 = 0;
      uStack_6c = 0;
      local_70 = 0;
      auVar12 = parseTypeParams();
      local_70 = auVar12._0_4_;
      uStack_6c = auVar12._4_4_;
      uStack_68 = auVar12._8_4_;
      uStack_64 = auVar12._12_4_;
    }
    uStack_88 = *(undefined8 *)(this + 0x50);
    local_90 = local_80;
    this_00 = (AstTypeSingletonString *)Allocator::allocate(*(Allocator **)(this + 0x80),0x48);
    AstTypeReference::AstTypeReference
              ((AstTypeReference *)this_00,&local_90,(ulong)pcVar3 & 0xff | uVar11 << 8,uVar9,pcVar8
               ,uVar1 == 0x3c,&local_70);
    break;
  case 0x11a:
    nextLexeme();
    pcVar8 = "Malformed string";
    goto LAB_00ef3e14;
  case 0x125:
    nextLexeme();
    this_00 = (AstTypeSingletonString *)Allocator::allocate(*(Allocator **)(this + 0x80),0x20);
    AstTypeSingletonBool::AstTypeSingletonBool
              ((AstTypeSingletonBool *)this_00,(Location *)&local_80,false);
    break;
  case 0x127:
    nextLexeme();
    pcVar8 = 
    "Using \'function\' as a type annotation is not supported, consider replacing with a function type annotation e.g. \'(...any) -> ...any\'"
    ;
LAB_00ef3e14:
    uStack_64 = 0;
    uStack_68 = 0;
    uStack_6c = 0;
    local_70 = 0;
    cVar6 = (char)&stack0xffffffffffffffb0 + -0x20;
LAB_00ef3e24:
    this_00 = (AstTypeSingletonString *)
              reportTypeAnnotationError
                        ((Location *)this,(AstArray *)&local_80,(bool)cVar6,(char *)0x0,pcVar8);
    break;
  case 299:
    nextLexeme();
    this_00 = (AstTypeSingletonString *)Allocator::allocate(*(Allocator **)(this + 0x80),0x48);
    local_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    AstTypeReference::AstTypeReference
              ((AstTypeReference *)this_00,&local_80,0,0,*(undefined8 *)(this + 0xd8),0,&local_70);
    break;
  case 0x131:
    nextLexeme();
    this_00 = (AstTypeSingletonString *)Allocator::allocate(*(Allocator **)(this + 0x80),0x20);
    AstTypeSingletonBool::AstTypeSingletonBool
              ((AstTypeSingletonBool *)this_00,(Location *)&local_80,true);
  }
LAB_00ef3e30:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return this_00;
  }
LAB_00ef40b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


