// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseTypeAnnotation
// Entry Point: 00ef24e4
// Size: 1124 bytes
// Signature: undefined __thiscall parseTypeAnnotation(Parser * this, TempVector * param_1, Location * param_2)


/* Luau::Parser::parseTypeAnnotation(Luau::TempVector<Luau::AstType*>&, Luau::Location const&) */

AstTypeUnion * __thiscall
Luau::Parser::parseTypeAnnotation(Parser *this,TempVector *param_1,Location *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  AstTypeReference *pAVar7;
  AstType *pAVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  AstTypeUnion *this_00;
  Allocator *pAVar15;
  long lVar16;
  Location *unaff_x21;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined auVar22 [16];
  ulong local_90;
  ulong uStack_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined local_68 [16];
  long local_58;
  
  uVar6 = FInt::LuauRecursionLimit;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(this + 0xbc);
  *(uint *)(this + 0xbc) = iVar1 + 1U;
  if (iVar1 + 1U <= uVar6) {
    bVar5 = false;
    bVar4 = false;
    local_78 = *(undefined8 *)param_2;
    do {
      while( true ) {
        while (iVar1 = *(int *)(this + 0x28), iVar1 == 0x106) {
          report((Location *)this,(char *)(this + 0x2c),"Unexpected \'...\' after type annotation");
          nextLexeme();
        }
        if (iVar1 != 0x26) break;
        nextLexeme();
        auVar22 = parseSimpleTypeAnnotation(this,false);
        local_68 = auVar22;
        TempVector<Luau::AstType*>::push_back
                  ((TempVector<Luau::AstType*> *)param_1,(AstType **)local_68);
        bVar4 = true;
      }
      if (iVar1 == 0x3f) {
        uStack_88 = *(ulong *)(this + 0x34);
        local_90 = *(ulong *)(this + 0x2c);
        nextLexeme();
        pAVar7 = (AstTypeReference *)Allocator::allocate(*(Allocator **)(this + 0x80),0x48);
        local_68._0_8_ = (AstType *)0x0;
        local_68._8_8_ = 0;
        AstTypeReference::AstTypeReference
                  (pAVar7,&local_90,0,0,*(undefined8 *)(this + 0xd8),0,local_68);
        auVar22._8_8_ = local_68._8_8_;
        auVar22._0_8_ = pAVar7;
      }
      else {
        if (iVar1 != 0x7c) goto LAB_00ef2634;
        nextLexeme();
        auVar22 = parseSimpleTypeAnnotation(this,false);
      }
      local_68 = auVar22;
      TempVector<Luau::AstType*>::push_back
                ((TempVector<Luau::AstType*> *)param_1,(AstType **)local_68);
      bVar5 = true;
    } while( true );
  }
  ParseError::raise((Location *)(this + 0x2c),
                    "Exceeded allowed recursion depth; simplify your %s to make the code compile",
                    "type annotation");
LAB_00ef2934:
  ParseError::raise(unaff_x21,"Composite type was not an intersection or union.");
  goto LAB_00ef2944;
LAB_00ef2634:
  uVar18 = *(ulong *)(param_1 + 0x10);
  if (uVar18 == 1) {
    this_00 = *(AstTypeUnion **)(**(long **)param_1 + *(long *)(param_1 + 8) * 8);
  }
  else if ((bool)(bVar5 & bVar4)) {
    local_68._0_8_ = *(undefined8 *)param_2;
    local_68._8_8_ = *(undefined8 *)(*(long *)((*(long **)param_1)[1] + -8) + 0x14);
    if (uVar18 == 0) {
      local_90 = 0;
    }
    else {
      lVar16 = *(long *)(param_1 + 8);
      lVar17 = **(long **)param_1;
      local_90 = Allocator::allocate(*(Allocator **)(this + 0x80),uVar18 << 3);
      if ((uVar18 < 4) ||
         ((local_90 < lVar17 + (uVar18 + lVar16) * 8 &&
          ((ulong)(lVar17 + lVar16 * 8) < local_90 + uVar18 * 8)))) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar18 & 0xfffffffffffffffc;
        puVar11 = (undefined8 *)(local_90 + 0x10);
        puVar13 = (undefined8 *)(lVar17 + lVar16 * 8 + 0x10);
        uVar14 = uVar9;
        do {
          puVar3 = puVar13 + -1;
          uVar19 = puVar13[-2];
          uVar21 = puVar13[1];
          uVar20 = *puVar13;
          puVar13 = puVar13 + 4;
          uVar14 = uVar14 - 4;
          puVar11[-1] = *puVar3;
          puVar11[-2] = uVar19;
          puVar11[1] = uVar21;
          *puVar11 = uVar20;
          puVar11 = puVar11 + 4;
        } while (uVar14 != 0);
        if (uVar18 == uVar9) goto LAB_00ef27d0;
      }
      lVar12 = uVar18 - uVar9;
      puVar11 = (undefined8 *)(local_90 + uVar9 * 8);
      puVar13 = (undefined8 *)(lVar17 + (uVar9 + lVar16) * 8);
      do {
        lVar12 = lVar12 + -1;
        *puVar11 = *puVar13;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      } while (lVar12 != 0);
    }
LAB_00ef27d0:
    uStack_88 = uVar18;
    this_00 = (AstTypeUnion *)
              reportTypeAnnotationError
                        ((Location *)this,(AstArray *)local_68,SUB81(&local_90,0),(char *)0x0,
                         "Mixing union and intersection types is not allowed; consider wrapping in parentheses."
                        );
  }
  else {
    plVar10 = *(long **)param_1;
    local_70 = *(undefined8 *)(*(long *)(plVar10[1] + -8) + 0x14);
    if (bVar5) {
      pAVar15 = *(Allocator **)(this + 0x80);
      if (uVar18 == 0) {
        pAVar8 = (AstType *)0x0;
      }
      else {
        lVar16 = *(long *)(param_1 + 8);
        lVar17 = *plVar10;
        pAVar8 = (AstType *)Allocator::allocate(pAVar15,uVar18 << 3);
        if ((uVar18 < 4) ||
           ((pAVar8 < (AstType *)(lVar17 + (uVar18 + lVar16) * 8) &&
            ((AstType *)(lVar17 + lVar16 * 8) < pAVar8 + uVar18 * 8)))) {
          uVar9 = 0;
        }
        else {
          uVar9 = uVar18 & 0xfffffffffffffffc;
          puVar11 = (undefined8 *)(pAVar8 + 0x10);
          puVar13 = (undefined8 *)(lVar17 + lVar16 * 8 + 0x10);
          uVar14 = uVar9;
          do {
            puVar3 = puVar13 + -1;
            uVar19 = puVar13[-2];
            uVar21 = puVar13[1];
            uVar20 = *puVar13;
            puVar13 = puVar13 + 4;
            uVar14 = uVar14 - 4;
            puVar11[-1] = *puVar3;
            puVar11[-2] = uVar19;
            puVar11[1] = uVar21;
            *puVar11 = uVar20;
            puVar11 = puVar11 + 4;
          } while (uVar14 != 0);
          if (uVar18 == uVar9) goto LAB_00ef27fc;
        }
        lVar12 = uVar18 - uVar9;
        puVar11 = (undefined8 *)(pAVar8 + uVar9 * 8);
        puVar13 = (undefined8 *)(lVar17 + (uVar9 + lVar16) * 8);
        do {
          lVar12 = lVar12 + -1;
          *puVar11 = *puVar13;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        } while (lVar12 != 0);
      }
LAB_00ef27fc:
      local_68._0_8_ = pAVar8;
      local_68._8_8_ = uVar18;
      this_00 = (AstTypeUnion *)Allocator::allocate(pAVar15,0x30);
      AstTypeUnion::AstTypeUnion(this_00,(Location *)&local_78,(AstArray *)local_68);
    }
    else {
      unaff_x21 = param_2;
      if (!bVar4) goto LAB_00ef2934;
      pAVar15 = *(Allocator **)(this + 0x80);
      if (uVar18 == 0) {
        pAVar8 = (AstType *)0x0;
      }
      else {
        lVar16 = *(long *)(param_1 + 8);
        lVar17 = *plVar10;
        pAVar8 = (AstType *)Allocator::allocate(pAVar15,uVar18 << 3);
        if ((uVar18 < 4) ||
           ((pAVar8 < (AstType *)(lVar17 + (uVar18 + lVar16) * 8) &&
            ((AstType *)(lVar17 + lVar16 * 8) < pAVar8 + uVar18 * 8)))) {
          uVar9 = 0;
        }
        else {
          uVar9 = uVar18 & 0xfffffffffffffffc;
          puVar11 = (undefined8 *)(pAVar8 + 0x10);
          puVar13 = (undefined8 *)(lVar17 + lVar16 * 8 + 0x10);
          uVar14 = uVar9;
          do {
            puVar3 = puVar13 + -1;
            uVar19 = puVar13[-2];
            uVar21 = puVar13[1];
            uVar20 = *puVar13;
            puVar13 = puVar13 + 4;
            uVar14 = uVar14 - 4;
            puVar11[-1] = *puVar3;
            puVar11[-2] = uVar19;
            puVar11[1] = uVar21;
            *puVar11 = uVar20;
            puVar11 = puVar11 + 4;
          } while (uVar14 != 0);
          if (uVar18 == uVar9) goto LAB_00ef2824;
        }
        lVar12 = uVar18 - uVar9;
        puVar11 = (undefined8 *)(pAVar8 + uVar9 * 8);
        puVar13 = (undefined8 *)(lVar17 + (uVar9 + lVar16) * 8);
        do {
          lVar12 = lVar12 + -1;
          *puVar11 = *puVar13;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        } while (lVar12 != 0);
      }
LAB_00ef2824:
      local_68._0_8_ = pAVar8;
      local_68._8_8_ = uVar18;
      this_00 = (AstTypeUnion *)Allocator::allocate(pAVar15,0x30);
      AstTypeIntersection::AstTypeIntersection
                ((AstTypeIntersection *)this_00,(Location *)&local_78,(AstArray *)local_68);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return this_00;
  }
LAB_00ef2944:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


