// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addConstructor
// Entry Point: 00c1d680
// Size: 812 bytes
// Signature: undefined __cdecl addConstructor(AST_Node * param_1, SHC_Type * param_2, GsTOperator param_3, GsTFunction * param_4, GsTSourceLoc param_5)


/* GISLParserContext::addConstructor(AST_Node*, SHC_Type const*, GsTOperator, GsTFunction*,
   GsTSourceLoc) */

GISLParserUtil *
GISLParserContext::addConstructor
          (AST_Node *param_1,SHC_Type *param_2,GsTOperator param_3,GsTFunction *param_4,
          GsTSourceLoc param_5)

{
  uint uVar1;
  long lVar2;
  GISLParserUtil *pGVar3;
  GsTOperator GVar4;
  undefined8 *puVar5;
  SHC_Type *pSVar6;
  undefined uVar7;
  char *in_x5;
  char *pcVar8;
  char *in_x6;
  uint uVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  AST_Node *pAVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  puVar5 = (undefined8 *)(ulong)param_3;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_2 == (SHC_Type *)0x0) {
    pGVar3 = (GISLParserUtil *)0x0;
  }
  else {
    pAVar14 = (AST_Node *)((ulong)param_4 & 0xffffffff);
    pGVar3 = (GISLParserUtil *)(**(code **)(*(long *)param_2 + 0x30))(param_2);
    if ((pGVar3 == (GISLParserUtil *)0x0) || (*(int *)(pGVar3 + 0x48) != 0)) {
      if (*(int *)puVar5[1] == 4) {
        uVar7 = (undefined)*(undefined8 *)(param_2 + 8);
      }
      else {
        if ((int)param_4 == 0x86) {
          lVar10 = *(long *)(*(long *)((int *)puVar5[1] + 2) + 0x30);
          local_a0 = **(undefined8 **)(param_1 + 0x58);
          local_80 = 0;
          uStack_78 = 0;
          local_88 = 0;
          local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)(lVar10 + 0x18));
          uStack_98 = *(undefined8 *)(lVar10 + 0x10);
          pGVar3 = (GISLParserUtil *)
                   constructStruct(param_1,param_2,(int)&stack0xffffffffffffffa0 + -0x40,1,
                                   SUB81(*(undefined8 *)(param_2 + 8),0));
          goto LAB_00c1d974;
        }
        uVar7 = (undefined)*(undefined8 *)(param_2 + 8);
      }
      pGVar3 = (GISLParserUtil *)
               constructBuiltIn((SHC_Type *)param_1,param_3,pAVar14,(GsTSourceLoc)param_2,
                                (bool)uVar7);
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return pGVar3;
      }
      goto LAB_00c1d9a8;
    }
    piVar11 = (int *)puVar5[1];
    if (*piVar11 == 4) {
      uVar1 = piVar11[4];
      uVar9 = (uint)((ulong)(*(long *)(pGVar3 + 0x58) - *(long *)(pGVar3 + 0x50)) >> 3);
      if (uVar9 <= uVar1 && uVar1 != uVar9) {
        pcVar8 = "too few arguments to array constructor, expected %u got %u";
      }
      else {
        if (uVar9 <= uVar1) {
          uVar19 = puVar5[3];
          uVar18 = puVar5[2];
          uVar17 = puVar5[4];
          uVar21 = puVar5[1];
          uVar20 = *puVar5;
          *(undefined8 *)(pGVar3 + 0x40) = puVar5[5];
          *(undefined8 *)(pGVar3 + 0x38) = uVar17;
          *(undefined8 *)(pGVar3 + 0x30) = uVar19;
          *(undefined8 *)(pGVar3 + 0x28) = uVar18;
          *(undefined4 *)(pGVar3 + 0x48) = 0x87;
          *(undefined8 *)(pGVar3 + 0x20) = uVar21;
          *(undefined8 *)(pGVar3 + 0x18) = uVar20;
          goto LAB_00c1d974;
        }
        pcVar8 = "too many arguments to array constructor, expected %u got %u";
      }
      error((GsTSourceLoc)param_1,in_x5,in_x6,"","constructor",pcVar8);
      pGVar3 = (GISLParserUtil *)0x0;
      param_1[0x18] = (AST_Node)0x1;
    }
    else {
      lVar10 = *(long *)(pGVar3 + 0x50);
      uStack_98 = puVar5[1];
      local_a0 = *puVar5;
      local_88 = puVar5[3];
      local_90 = puVar5[2];
      uVar12 = *(long *)(pGVar3 + 0x58) - lVar10;
      uStack_78 = puVar5[5];
      local_80 = puVar5[4];
      if ((int)(uVar12 >> 3) != 0) {
        lVar15 = 0;
        lVar13 = 0x18;
        lVar16 = 0x10;
        do {
          pSVar6 = *(SHC_Type **)(lVar10 + lVar15 * 8);
          if (*piVar11 == 4) {
            uVar7 = (undefined)*(undefined8 *)(param_2 + 8);
            GVar4 = (GsTOperator)&local_a0;
LAB_00c1d8b4:
            lVar10 = constructBuiltIn((SHC_Type *)param_1,GVar4,pAVar14,(GsTSourceLoc)pSVar6,
                                      (bool)uVar7);
          }
          else {
            if ((int)param_4 != 0x86) {
              uVar7 = (undefined)*(undefined8 *)(param_2 + 8);
              GVar4 = param_3;
              goto LAB_00c1d8b4;
            }
            local_d0 = **(undefined8 **)(param_1 + 0x58);
            local_c0 = *(undefined4 *)(*(long *)(*(long *)(piVar11 + 2) + 0x30) + lVar13);
            local_b0 = 0;
            uStack_a8 = 0;
            local_b8 = 0;
            local_c8 = *(undefined8 *)(*(long *)(*(long *)(piVar11 + 2) + 0x30) + lVar16);
            lVar10 = constructStruct(param_1,pSVar6,(int)&local_d0,(int)lVar15 + 1,
                                     SUB81(*(undefined8 *)(param_2 + 8),0));
          }
          if (lVar10 != 0) {
            *(long *)(*(long *)(pGVar3 + 0x50) + lVar15 * 8) = lVar10;
          }
          if ((uVar12 >> 3 & 0xffffffff) - 1 == lVar15) break;
          lVar10 = *(long *)(pGVar3 + 0x50);
          lVar13 = lVar13 + 0x38;
          piVar11 = (int *)puVar5[1];
          lVar16 = lVar16 + 0x38;
          lVar15 = lVar15 + 1;
        } while( true );
      }
      pGVar3 = (GISLParserUtil *)
               GISLParserUtil::ir_set_aggregate_op
                         (pGVar3,pAVar14,(GsTOperator)in_x5,(GsTSourceLoc)in_x6,
                          (GISLParserContext *)param_1);
      uVar17 = *puVar5;
      uVar19 = puVar5[3];
      uVar18 = puVar5[2];
      uVar21 = puVar5[5];
      uVar20 = puVar5[4];
      *(undefined8 *)(pGVar3 + 0x20) = puVar5[1];
      *(undefined8 *)(pGVar3 + 0x18) = uVar17;
      *(undefined8 *)(pGVar3 + 0x30) = uVar19;
      *(undefined8 *)(pGVar3 + 0x28) = uVar18;
      *(undefined8 *)(pGVar3 + 0x40) = uVar21;
      *(undefined8 *)(pGVar3 + 0x38) = uVar20;
    }
  }
LAB_00c1d974:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return pGVar3;
  }
LAB_00c1d9a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


