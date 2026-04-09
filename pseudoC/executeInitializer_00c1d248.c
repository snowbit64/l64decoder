// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeInitializer
// Entry Point: 00c1d248
// Size: 1048 bytes
// Signature: undefined __cdecl executeInitializer(GsTSourceLoc param_1, SHC_String * param_2, SHC_String * param_3, SHC_Type * param_4, AST_TypedNode * * param_5, AST_SymbolNode * * param_6, GsTVariable * param_7, undefined param_8, undefined8 param_9)


/* GISLParserContext::executeInitializer(GsTSourceLoc, SHC_String const*, SHC_String const*,
   SHC_Type&, AST_TypedNode*&, AST_SymbolNode*&, GsTVariable*) */

void GISLParserContext::executeInitializer
               (GsTSourceLoc param_1,SHC_String *param_2,SHC_String *param_3,SHC_Type *param_4,
               AST_TypedNode **param_5,AST_SymbolNode **param_6,GsTVariable *param_7,byte param_8,
               undefined8 *param_9)

{
  AST_SymbolNode **ppAVar1;
  void *pvVar2;
  long lVar3;
  long **this;
  SHC_Type *pSVar4;
  SHC_Type *this_00;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  GsTSourceLoc GVar11;
  AST_TypedNode **ppAVar12;
  int iVar13;
  int *piVar14;
  byte *pbVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  AST_SymbolNode *pAVar20;
  AST_SymbolNode *pAVar21;
  AST_SymbolNode *pAVar22;
  AST_SymbolNode *pAVar23;
  AST_SymbolNode *pAVar24;
  AST_SymbolNode *pAVar25;
  byte local_98 [16];
  void *local_88;
  uint local_80 [2];
  SHC_String *local_78;
  SHC_String *pSStack_70;
  long local_68;
  
  this = (long **)(ulong)param_1;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  ppAVar12 = param_5;
  local_78 = param_2;
  pSStack_70 = param_3;
  if (param_9 == (undefined8 *)0x0) {
    uVar5 = reservedErrorCheck((GISLParserContext *)this,(GsTSourceLoc *)&local_78,
                               (SHC_String *)param_4);
    if ((uVar5 & 1) == 0) {
      if ((*(uint *)param_6[1] | *(uint *)((long)param_6[1] + 8)) == 0) {
        pSVar4 = *(SHC_Type **)(param_4 + 0x10);
        pcVar10 = "illegal use of type \'void\'";
        if (((byte)*param_4 & 1) == 0) {
          pSVar4 = param_4 + 1;
        }
      }
      else {
        param_9 = (undefined8 *)SHC_PoolAllocator::allocate((SHC_PoolAllocator *)this[0xb],0x98);
        param_9[1] = param_4;
        param_9[2] = param_5;
        param_9[4] = 0;
        *param_9 = &PTR__GsTSymbol_00fee830;
        pAVar23 = param_6[3];
        pAVar22 = param_6[2];
        pAVar21 = param_6[5];
        pAVar20 = param_6[4];
        pAVar25 = param_6[1];
        pAVar24 = *param_6;
        *(undefined2 *)(param_9 + 0xb) = 0;
        param_9[10] = pAVar21;
        param_9[9] = pAVar20;
        param_9[8] = pAVar23;
        param_9[7] = pAVar22;
        param_9[6] = pAVar25;
        param_9[5] = pAVar24;
        plVar7 = *this;
        iVar18 = *(int *)(plVar7 + 3);
        *(int *)(plVar7 + 3) = iVar18 + 1;
        *(int *)(param_9 + 3) = iVar18 + 1;
        uVar5 = GsTSymbolTableLevel::insert
                          (*(GsTSymbolTableLevel **)
                            (*plVar7 +
                            ((plVar7[1] - *plVar7) * 0x20000000 + -0x100000000 >> 0x20) * 8),
                           (GsTSymbol *)param_9);
        if ((uVar5 & 1) != 0) goto LAB_00c1d298;
        pbVar15 = (byte *)param_9[1];
        pcVar10 = "redefinition";
        pSVar4 = *(SHC_Type **)(pbVar15 + 0x10);
        if ((*pbVar15 & 1) == 0) {
          pSVar4 = (SHC_Type *)(pbVar15 + 1);
        }
      }
      error(param_1,(char *)param_2,(char *)param_3,pcVar10,pSVar4,&DAT_0050a39f);
    }
  }
  else {
LAB_00c1d298:
    GVar11 = (GsTSourceLoc)ppAVar12;
    pSVar4 = (SHC_Type *)(**(code **)(**(long **)param_7 + 0x30))();
    if ((pSVar4 != (SHC_Type *)0x0) && (*(int *)(pSVar4 + 0x48) == 0)) {
      this_00 = pSVar4;
      if ((*(int *)param_6[1] == 4) && (*(int *)((long)param_6[1] + 0x10) == 0)) {
        this_00 = (SHC_Type *)
                  SHC_Type::updateArraySize
                            ((SHC_Type *)(param_9 + 5),
                             (uint)((ulong)(*(long *)(pSVar4 + 0x58) - *(long *)(pSVar4 + 0x50)) >>
                                   3));
      }
      ppAVar1 = (AST_SymbolNode **)(param_9 + 5);
      uVar5 = getConstructorOp((GISLParserContext *)this_00,(SHC_Type *)ppAVar1);
      lVar6 = addConstructor((AST_Node *)this,pSVar4,(GsTOperator)ppAVar1,
                             (GsTFunction *)(uVar5 & 0xffffffff),GVar11);
      *(long *)param_7 = lVar6;
      if (lVar6 == 0) goto LAB_00c1d504;
      pAVar22 = (AST_SymbolNode *)param_9[7];
      pAVar21 = (AST_SymbolNode *)param_9[10];
      pAVar20 = (AST_SymbolNode *)param_9[9];
      pAVar24 = (AST_SymbolNode *)param_9[6];
      pAVar23 = *ppAVar1;
      param_6[3] = (AST_SymbolNode *)param_9[8];
      param_6[2] = pAVar22;
      param_6[5] = pAVar21;
      param_6[4] = pAVar20;
      param_6[1] = pAVar24;
      *param_6 = pAVar23;
    }
    lVar6 = GISLParserUtil::ir_add_conversion
                      (0x89,(SHC_Type *)param_6,*(AST_TypedNode **)param_7,(GISLParserContext *)this
                      );
    if (lVar6 != 0) {
      *(long *)param_7 = lVar6;
    }
    local_80[0] = *(uint *)(param_9 + 7);
    if ((local_80[0] & 0xfffffff4) == 0) {
      if ((local_80[0] >> 1 & 1) == 0) {
        plVar7 = *(long **)param_7;
      }
      else {
        plVar7 = *(long **)param_7;
        piVar17 = (int *)param_6[1];
        piVar14 = (int *)plVar7[4];
        if (piVar17 != piVar14) {
          if ((piVar17[2] - 3U < 2) && (piVar14[2] - 5U < 4)) {
            iVar18 = *piVar17;
            if (iVar18 == 0) {
              iVar18 = 1;
              iVar16 = 1;
            }
            else if (iVar18 == 1) {
              iVar18 = piVar17[5];
              iVar16 = 1;
            }
            else if (iVar18 == 2) {
              iVar18 = piVar17[4];
              iVar16 = piVar17[5];
            }
            else {
              iVar18 = 0;
              iVar16 = 0;
            }
            iVar19 = *piVar14;
            if (iVar19 == 0) {
              iVar19 = 1;
              iVar13 = 1;
            }
            else if (iVar19 == 1) {
              iVar19 = piVar14[5];
              iVar13 = 1;
            }
            else if (iVar19 == 2) {
              iVar19 = piVar14[4];
              iVar13 = piVar14[5];
            }
            else {
              iVar19 = 0;
              iVar13 = 0;
            }
            if (iVar16 * iVar18 == iVar13 * iVar19) goto LAB_00c1d5a8;
          }
          IR_QualFlags::getAsString(SUB81(local_80,0));
          pvVar2 = (void *)((ulong)local_98 | 1);
          if ((local_98[0] & 1) != 0) {
            pvVar2 = local_88;
          }
                    /* try { // try from 00c1d618 to 00c1d637 has its CatchHandler @ 00c1d660 */
          error(param_1,(char *)param_2,(char *)param_3," non-matching types for const initializer",
                pvVar2,&DAT_0050a39f);
          if ((local_98[0] & 1) != 0) {
            operator_delete(local_88);
          }
          uVar8 = 1;
          *(uint *)(param_9 + 7) = *(uint *)(param_9 + 7) & 0xfffffffd;
          goto LAB_00c1d508;
        }
      }
LAB_00c1d5a8:
      lVar6 = (**(code **)(*plVar7 + 0x28))();
      if (lVar6 != 0) {
        uVar8 = (**(code **)(**(long **)param_7 + 0x28))();
        param_9[4] = uVar8;
      }
      uVar9 = GISLParserUtil::ir_add_symbol
                        ((GISLParserUtil *)param_9,(GsTVariable *)param_2,(GsTSourceLoc)param_3,
                         (GISLParserContext *)this);
      uVar8 = 0;
      *(undefined8 *)(ulong)param_8 = uVar9;
      goto LAB_00c1d508;
    }
    IR_QualFlags::getAsString(SUB81(local_80,0));
    pvVar2 = (void *)((ulong)local_98 | 1);
    if ((local_98[0] & 1) != 0) {
      pvVar2 = local_88;
    }
                    /* try { // try from 00c1d378 to 00c1d397 has its CatchHandler @ 00c1d664 */
    error(param_1,(char *)param_2,(char *)param_3," cannot initialize this type of qualifier ",
          pvVar2,&DAT_0050a39f);
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
  }
LAB_00c1d504:
  uVar8 = 1;
LAB_00c1d508:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}


