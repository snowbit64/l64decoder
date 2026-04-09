// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_add_conversion
// Entry Point: 00c10ed4
// Size: 1192 bytes
// Signature: undefined __cdecl ir_add_conversion(GsTOperator param_1, SHC_Type * param_2, AST_TypedNode * param_3, GISLParserContext * param_4)


/* GISLParserUtil::ir_add_conversion(GsTOperator, SHC_Type const&, AST_TypedNode*,
   GISLParserContext&) */

void GISLParserUtil::ir_add_conversion
               (GsTOperator param_1,SHC_Type *param_2,AST_TypedNode *param_3,
               GISLParserContext *param_4)

{
  int iVar1;
  long lVar2;
  TPrefixType TVar3;
  undefined8 *puVar4;
  long lVar5;
  AST_ConstantNode *pAVar6;
  GsTSourceLoc GVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  lVar2 = tpidr_el0;
  lVar11 = *(long *)(lVar2 + 0x28);
  if (param_3 != (AST_TypedNode *)0x0) {
    puVar13 = *(uint **)(param_3 + 0x20);
    uVar14 = *puVar13;
    if ((uVar14 | puVar13[2]) != 0 && 1 < uVar14 - 7) {
      puVar12 = *(uint **)(param_2 + 8);
      puVar4 = (undefined8 *)param_3;
      if (puVar12 == puVar13) goto LAB_00c10f3c;
      uVar8 = *puVar12;
      if (uVar8 == 3) goto LAB_00c10f38;
      puVar4 = (undefined8 *)0x0;
      if ((((uVar14 == 4) || (uVar14 == 3)) || (uVar8 == 4)) ||
         (((2 < (int)uVar8 || (2 < (int)uVar14)) ||
          (uVar14 = puVar12[2], puVar4 = (undefined8 *)param_3, uVar14 == puVar13[2]))))
      goto LAB_00c10f3c;
      uVar8 = param_1 - 0x58 >> 2 | param_1 << 0x1e;
      if (uVar8 < 7) {
        uVar14 = *(uint *)(&DAT_00528f18 + (long)(int)uVar8 * 4);
      }
      lVar5 = (**(code **)(*(long *)param_3 + 0x28))(param_3);
      if (lVar5 != 0) {
        pAVar6 = (AST_ConstantNode *)(**(code **)(*(long *)param_3 + 0x28))(param_3);
        puVar4 = (undefined8 *)ir_promote_constant(uVar14,pAVar6,param_4);
        goto LAB_00c10f3c;
      }
      switch(uVar14) {
      case 3:
        piVar10 = *(int **)(param_3 + 0x20);
        if (5 < piVar10[2] - 4U) {
switchD_00c1117c_caseD_8:
          TVar3 = (TPrefixType)*(undefined8 *)(param_4 + 8);
          GVar7 = 0x4ffd4c;
          goto LAB_00c111d0;
        }
        uVar15 = 0x16;
        switch(piVar10[2]) {
        case 5:
          uVar15 = 0x17;
          break;
        case 6:
          uVar15 = 0x18;
          break;
        case 7:
          uVar15 = 0x19;
          break;
        case 8:
          uVar15 = 0x1a;
          break;
        case 9:
          uVar15 = 0x15;
        }
        break;
      case 4:
        piVar10 = *(int **)(param_3 + 0x20);
        uVar15 = 0x1c;
        switch(piVar10[2]) {
        case 3:
          break;
        default:
          goto switchD_00c1117c_caseD_8;
        case 5:
          uVar15 = 0x1d;
          break;
        case 6:
          uVar15 = 0x1e;
          break;
        case 7:
          uVar15 = 0x1f;
          break;
        case 8:
          uVar15 = 0x20;
          break;
        case 9:
          uVar15 = 0x1b;
        }
        break;
      case 5:
        piVar10 = *(int **)(param_3 + 0x20);
        uVar15 = 0x24;
        switch(piVar10[2]) {
        case 3:
          uVar15 = 0x21;
          break;
        case 4:
          uVar15 = 0x22;
          break;
        default:
          goto switchD_00c1117c_caseD_8;
        case 6:
          break;
        case 7:
          uVar15 = 0x25;
          break;
        case 8:
          uVar15 = 0x26;
          break;
        case 9:
          uVar15 = 0x23;
        }
        break;
      case 6:
        piVar10 = *(int **)(param_3 + 0x20);
        uVar15 = 0x2a;
        switch(piVar10[2]) {
        case 3:
          uVar15 = 0x27;
          break;
        case 4:
          uVar15 = 0x28;
          break;
        case 5:
          break;
        default:
          goto switchD_00c1117c_caseD_8;
        case 7:
          uVar15 = 0x2b;
          break;
        case 8:
          uVar15 = 0x2c;
          break;
        case 9:
          uVar15 = 0x29;
        }
        break;
      case 7:
        piVar10 = *(int **)(param_3 + 0x20);
        uVar15 = 0x30;
        switch(piVar10[2]) {
        case 3:
          uVar15 = 0x2d;
          break;
        case 4:
          uVar15 = 0x2e;
          break;
        case 5:
          break;
        case 6:
          uVar15 = 0x31;
          break;
        default:
          goto switchD_00c1117c_caseD_8;
        case 8:
          uVar15 = 0x32;
          break;
        case 9:
          uVar15 = 0x2f;
        }
        break;
      case 8:
        piVar10 = *(int **)(param_3 + 0x20);
        uVar15 = 0x36;
        switch(piVar10[2]) {
        case 3:
          uVar15 = 0x33;
          break;
        case 4:
          uVar15 = 0x34;
          break;
        case 5:
          break;
        case 6:
          uVar15 = 0x37;
          break;
        case 7:
          uVar15 = 0x38;
          break;
        default:
          goto switchD_00c1117c_caseD_8;
        case 9:
          uVar15 = 0x35;
        }
        break;
      case 9:
        piVar10 = *(int **)(param_3 + 0x20);
        if (5 < piVar10[2] - 3U) goto switchD_00c1117c_caseD_8;
        uVar15 = 0xf;
        switch(piVar10[2]) {
        case 3:
          uVar15 = 0x13;
          break;
        case 4:
          uVar15 = 0x14;
          break;
        case 6:
          uVar15 = 0x10;
          break;
        case 7:
          uVar15 = 0x11;
          break;
        case 8:
          uVar15 = 0x12;
        }
        break;
      default:
        TVar3 = (TPrefixType)*(undefined8 *)(param_4 + 8);
        GVar7 = 0x4f816d;
LAB_00c111d0:
        GsTInfoSinkBase::message(TVar3,(char *)0x3,GVar7);
        puVar4 = (undefined8 *)0x0;
        goto LAB_00c10f3c;
      }
      iVar1 = *piVar10;
      if (iVar1 == 0) {
        uVar8 = 1;
        uVar9 = 1;
      }
      else if (iVar1 == 1) {
        uVar8 = piVar10[5];
        uVar9 = 1;
      }
      else if (iVar1 == 2) {
        uVar8 = piVar10[4];
        uVar9 = piVar10[5];
      }
      else {
        uVar8 = 0;
        uVar9 = 0;
      }
      GISLParserContext::createGenericMatrixType(param_4,uVar14,0,uVar8,uVar9,iVar1 == 2);
      puVar4 = (undefined8 *)
               SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_4 + 0x58),0x58);
      puVar4[2] = 0;
      *(undefined4 *)(puVar4 + 9) = uVar15;
      puVar4[10] = 0;
      *puVar4 = &PTR___cxa_pure_virtual_00fed450;
      puVar4[1] = 0;
      *puVar4 = &PTR_traverse_00fed858;
      puVar4[4] = uStack_70;
      puVar4[3] = local_78;
      puVar4[6] = uStack_60;
      puVar4[5] = local_68;
      puVar4[8] = uStack_50;
      puVar4[7] = local_58;
      uVar17 = *(undefined8 *)(param_3 + 0x10);
      uVar16 = *(undefined8 *)(param_3 + 8);
      puVar4[10] = param_3;
      puVar4[2] = uVar17;
      puVar4[1] = uVar16;
      goto LAB_00c10f3c;
    }
  }
LAB_00c10f38:
  puVar4 = (undefined8 *)0x0;
LAB_00c10f3c:
  if (*(long *)(lVar2 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar4);
  }
  return;
}


