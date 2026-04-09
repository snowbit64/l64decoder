// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: promote
// Entry Point: 00c16638
// Size: 2996 bytes
// Signature: undefined __thiscall promote(AST_BinaryNode * this, GISLParserContext * param_1)


/* AST_BinaryNode::promote(GISLParserContext&) */

void __thiscall AST_BinaryNode::promote(AST_BinaryNode *this,GISLParserContext *param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  GsTBasicType GVar8;
  uint uVar9;
  long lVar10;
  uint *puVar11;
  int *piVar12;
  int *piVar13;
  long lVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  IR_TypeSet *this_00;
  uint uVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (*(int *)(this + 0x48) == 0x89) {
    lVar10 = *(long *)(this + 0x50);
    if (*(IR_Type **)(lVar10 + 0x20) == *(IR_Type **)(*(long *)(this + 0x58) + 0x20)) {
      uVar21 = *(undefined8 *)(lVar10 + 0x38);
      uVar6 = 1;
      uVar23 = *(undefined8 *)(lVar10 + 0x30);
      uVar22 = *(undefined8 *)(lVar10 + 0x28);
      uVar25 = *(undefined8 *)(lVar10 + 0x20);
      uVar24 = *(undefined8 *)(lVar10 + 0x18);
      *(undefined8 *)(this + 0x40) = *(undefined8 *)(lVar10 + 0x40);
      *(undefined8 *)(this + 0x38) = uVar21;
      *(undefined8 *)(this + 0x30) = uVar23;
      *(undefined8 *)(this + 0x28) = uVar22;
      *(undefined8 *)(this + 0x20) = uVar25;
      *(undefined8 *)(this + 0x18) = uVar24;
      goto switchD_00c16db0_caseD_45;
    }
    uVar5 = IR_Type::compatibleWithMOV
                      (*(IR_Type **)(lVar10 + 0x20),*(IR_Type **)(*(long *)(this + 0x58) + 0x20));
    if ((uVar5 & 1) != 0) {
      lVar10 = *(long *)(this + 0x50);
      uVar6 = 1;
      uVar21 = *(undefined8 *)(lVar10 + 0x18);
      uVar23 = *(undefined8 *)(lVar10 + 0x30);
      uVar22 = *(undefined8 *)(lVar10 + 0x28);
      uVar25 = *(undefined8 *)(lVar10 + 0x40);
      uVar24 = *(undefined8 *)(lVar10 + 0x38);
      *(undefined8 *)(this + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      *(undefined8 *)(this + 0x18) = uVar21;
      *(undefined8 *)(this + 0x30) = uVar23;
      *(undefined8 *)(this + 0x28) = uVar22;
      *(undefined8 *)(this + 0x40) = uVar25;
      *(undefined8 *)(this + 0x38) = uVar24;
      goto switchD_00c16db0_caseD_45;
    }
  }
  lVar10 = *(long *)(this + 0x50);
  if (2 < **(int **)(lVar10 + 0x20)) goto LAB_00c16fb0;
  lVar14 = *(long *)(this + 0x58);
  if ((2 < **(int **)(lVar14 + 0x20)) ||
     ((GVar8 = (*(int **)(lVar10 + 0x20))[2], GVar8 - 5 < 4 &&
      ((*(int **)(lVar14 + 0x20))[2] - 3U < 2)))) goto LAB_00c16fb0;
  uVar6 = *(undefined8 *)(lVar10 + 0x38);
  uVar22 = *(undefined8 *)(lVar10 + 0x30);
  uVar21 = *(undefined8 *)(lVar10 + 0x28);
  uVar24 = *(undefined8 *)(lVar10 + 0x20);
  uVar23 = *(undefined8 *)(lVar10 + 0x18);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(lVar10 + 0x40);
  *(undefined8 *)(this + 0x38) = uVar6;
  *(undefined8 *)(this + 0x30) = uVar22;
  *(undefined8 *)(this + 0x28) = uVar21;
  *(undefined8 *)(this + 0x20) = uVar24;
  *(undefined8 *)(this + 0x18) = uVar23;
  puVar15 = *(uint **)(lVar10 + 0x20);
  uVar9 = *puVar15;
  if (uVar9 == 0) {
    puVar11 = *(uint **)(lVar14 + 0x20);
    uVar19 = *puVar11;
    if (uVar19 == 0) {
      switch(*(uint *)(this + 0x48)) {
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x42:
        if ((puVar15[2] - 5 < 4) && (puVar11[2] - 5 < 4)) goto LAB_00c16fa8;
        break;
      case 0x43:
      case 0x44:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
switchD_00c1683c_caseD_43:
        this_00 = **(IR_TypeSet ***)(param_1 + 0x58);
        uStack_94 = 0;
        uStack_90 = 0;
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_8c = 0;
        uStack_88 = 0;
        uVar6 = IR_TypeSet::getScalarType(this_00,9);
        *(undefined4 *)(this + 0x28) = 0;
        *(IR_TypeSet **)(this + 0x18) = this_00;
        *(undefined8 *)(this + 0x20) = uVar6;
        *(ulong *)(this + 0x34) = CONCAT44(uStack_8c,uStack_90);
        *(ulong *)(this + 0x2c) = CONCAT44(uStack_94,local_98);
        *(ulong *)(this + 0x40) = CONCAT44(uStack_80,uStack_84);
        *(ulong *)(this + 0x38) = CONCAT44(uStack_88,uStack_8c);
        goto LAB_00c16fa8;
      default:
        uVar9 = puVar15[2];
        uVar19 = puVar11[2];
LAB_00c16fa0:
        if (uVar9 == uVar19) goto LAB_00c16fa8;
        break;
      case 0x4c:
      case 0x4d:
      case 0x4e:
        if ((puVar15[2] == 9) && (puVar11[2] == 9)) goto switchD_00c1683c_caseD_43;
        break;
      case 0x8f:
      case 0x90:
      case 0x91:
      case 0x92:
      case 0x93:
        uVar9 = puVar15[2];
        if ((uVar9 - 5 < 4) && (uVar19 = puVar11[2], uVar19 - 5 < 4)) goto LAB_00c16fa0;
      }
      goto LAB_00c16fb0;
    }
    uVar16 = (uint)(&GISLParserUtil::s_operatorFlags)[*(uint *)(this + 0x48)] >> 2 & 1;
    if (uVar19 == 1) {
      uVar19 = puVar11[5];
      uVar20 = 1;
LAB_00c16a38:
      uVar18 = 1;
      goto LAB_00c16a44;
    }
    if (uVar19 == 2) {
      uVar19 = puVar11[4];
      uVar20 = puVar11[5];
      uVar18 = 1;
      goto LAB_00c16a44;
    }
    uVar19 = 0;
    uVar20 = 0;
    uVar6 = 0;
    if (((uint)(&GISLParserUtil::s_operatorFlags)[*(uint *)(this + 0x48)] >> 2 & 1) != 0)
    goto switchD_00c16db0_caseD_45;
LAB_00c16a70:
    uVar4 = GISLParserContext::getConstructorOp(param_1,(SHC_Type *)(lVar14 + 0x18));
    puVar7 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_1 + 0x58),0x88)
    ;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    uStack_88 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[4] = 0;
    puVar7[3] = 0;
    *(undefined4 *)(puVar7 + 9) = uVar4;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[6] = 0;
    puVar7[5] = (ulong)uStack_84 << 0x20;
    puVar7[10] = 0;
    puVar7[0xd] = uVar6;
    puVar7[0xe] = 0;
    *puVar7 = &PTR_traverse_00fed8e8;
    puVar7[8] = 0;
    puVar7[7] = 0;
    puVar7[0xf] = 0;
    puVar7[0x10] = 0;
    uVar6 = *(undefined8 *)(*(long *)(this + 0x50) + 8);
    puVar7[2] = *(undefined8 *)(*(long *)(this + 0x50) + 0x10);
    puVar7[1] = uVar6;
    piVar12 = *(int **)(*(long *)(this + 0x58) + 0x20);
    iVar1 = *piVar12;
    if (iVar1 == 0) {
      uVar9 = 1;
      uVar16 = 1;
    }
    else if (iVar1 == 1) {
      uVar9 = piVar12[5];
      uVar16 = 1;
    }
    else if (iVar1 == 2) {
      uVar9 = piVar12[4];
      uVar16 = piVar12[5];
    }
    else {
      uVar9 = 0;
      uVar16 = 0;
    }
    GISLParserContext::createGenericMatrixType
              (param_1,(*(int **)(*(long *)(this + 0x50) + 0x20))[2],0,uVar9,uVar16,
               **(int **)(*(long *)(this + 0x50) + 0x20) == 2);
    puVar7[4] = CONCAT44(uStack_8c,uStack_90);
    puVar7[3] = CONCAT44(uStack_94,local_98);
    puVar7[6] = CONCAT44(uStack_7c,uStack_80);
    puVar7[5] = CONCAT44(uStack_84,uStack_88);
    puVar7[8] = uStack_70;
    puVar7[7] = local_78;
    local_98 = (undefined4)*(undefined8 *)(this + 0x50);
    uStack_94 = (undefined4)((ulong)*(undefined8 *)(this + 0x50) >> 0x20);
    FUN_00c171ec(puVar7 + 10,&local_98);
    *(undefined8 **)(this + 0x50) = puVar7;
    piVar12 = *(int **)(*(long *)(this + 0x58) + 0x20);
    iVar1 = *piVar12;
    if (iVar1 == 0) {
      uVar9 = 1;
      uVar16 = 1;
    }
    else if (iVar1 == 1) {
      uVar9 = piVar12[5];
      uVar16 = 1;
    }
    else if (iVar1 == 2) {
      uVar9 = piVar12[4];
      uVar16 = piVar12[5];
    }
    else {
      uVar9 = 0;
      uVar16 = 0;
    }
    GISLParserContext::createGenericMatrixType
              (param_1,((int *)puVar7[4])[2],0,uVar9,uVar16,*(int *)puVar7[4] == 2);
    *(ulong *)(this + 0x20) = CONCAT44(uStack_8c,uStack_90);
    *(ulong *)(this + 0x18) = CONCAT44(uStack_94,local_98);
    *(ulong *)(this + 0x30) = CONCAT44(uStack_7c,uStack_80);
    *(ulong *)(this + 0x28) = CONCAT44(uStack_84,uStack_88);
    *(undefined8 *)(this + 0x40) = uStack_70;
    *(undefined8 *)(this + 0x38) = local_78;
LAB_00c16d88:
    uVar6 = 0;
    switch(*(undefined4 *)(this + 0x48)) {
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x8a:
    case 0x8b:
    case 0x8c:
    case 0x8d:
    case 0x8e:
    case 0x8f:
    case 0x90:
    case 0x91:
    case 0x92:
    case 0x93:
      goto switchD_00c16db0_caseD_39;
    case 0x43:
    case 0x44:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
      iVar1 = **(int **)(*(long *)(this + 0x50) + 0x20);
      if (iVar1 == 1) {
        piVar12 = *(int **)(*(long *)(this + 0x58) + 0x20);
        if (*piVar12 == 2) goto LAB_00c16fb0;
      }
      else if (iVar1 == 2) {
        piVar12 = *(int **)(*(long *)(this + 0x58) + 0x20);
        if (*piVar12 == 1) goto LAB_00c16fb0;
      }
      else {
        piVar12 = *(int **)(*(long *)(this + 0x58) + 0x20);
      }
      if ((*(int **)(*(long *)(this + 0x50) + 0x20))[2] != piVar12[2]) goto LAB_00c16fb0;
      GVar8 = 9;
      bVar3 = false;
      goto LAB_00c16ef0;
    default:
      goto switchD_00c16db0_caseD_45;
    case 0x89:
      goto switchD_00c16db0_caseD_89;
    }
  }
  if (uVar9 != 4) {
    puVar11 = *(uint **)(lVar14 + 0x20);
    uVar19 = *puVar11;
    uVar16 = (uint)(&GISLParserUtil::s_operatorFlags)[*(uint *)(this + 0x48)] >> 2 & 1;
    if (uVar19 == 0) {
      if (uVar9 == 1) {
LAB_00c16964:
        uVar19 = puVar15[5];
LAB_00c16968:
        uVar20 = 1;
      }
      else {
LAB_00c16868:
        if (uVar9 != 2) {
LAB_00c16a14:
          uVar20 = 0;
          uVar19 = 0;
          goto LAB_00c16a1c;
        }
        uVar19 = puVar15[4];
        uVar20 = puVar15[5];
LAB_00c16a60:
        uVar9 = puVar15[5];
LAB_00c16a64:
        if (uVar20 < uVar9) {
LAB_00c16a6c:
          if (uVar16 == 0) goto LAB_00c16a70;
          goto LAB_00c16fb0;
        }
      }
LAB_00c16b28:
      uVar9 = *puVar11;
      if (uVar9 == 0) {
        uVar16 = 1;
      }
      else if (uVar9 == 1) {
        uVar16 = puVar11[5];
      }
      else {
        if (uVar9 != 2) goto LAB_00c16d88;
        uVar16 = puVar11[4];
      }
      if (uVar16 <= uVar19) {
        if (uVar9 < 2) {
          uVar9 = 1;
        }
        else {
          if (uVar9 != 2) goto LAB_00c16d88;
          uVar9 = puVar11[5];
        }
        if (uVar9 <= uVar20) goto LAB_00c16d88;
      }
      uVar4 = GISLParserContext::getConstructorOp(param_1,(SHC_Type *)(lVar10 + 0x18));
      puVar7 = (undefined8 *)
               SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_1 + 0x58),0x88);
      local_98 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      uStack_88 = 0;
      local_78 = 0;
      uStack_70 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[4] = 0;
      puVar7[3] = 0;
      *(undefined4 *)(puVar7 + 9) = uVar4;
      puVar7[0xb] = 0;
      puVar7[0xc] = 0;
      puVar7[6] = 0;
      puVar7[5] = (ulong)uStack_84 << 0x20;
      puVar7[10] = 0;
      puVar7[0xd] = uVar6;
      puVar7[0xe] = 0;
      *puVar7 = &PTR_traverse_00fed8e8;
      puVar7[8] = 0;
      puVar7[7] = 0;
      puVar7[0xf] = 0;
      puVar7[0x10] = 0;
      uVar6 = *(undefined8 *)(*(long *)(this + 0x58) + 8);
      puVar7[2] = *(undefined8 *)(*(long *)(this + 0x58) + 0x10);
      puVar7[1] = uVar6;
      piVar12 = *(int **)(*(long *)(this + 0x50) + 0x20);
      iVar1 = *piVar12;
      if (iVar1 == 0) {
        uVar9 = 1;
        uVar16 = 1;
      }
      else if (iVar1 == 1) {
        uVar9 = piVar12[5];
        uVar16 = 1;
      }
      else if (iVar1 == 2) {
        uVar9 = piVar12[4];
        uVar16 = piVar12[5];
      }
      else {
        uVar9 = 0;
        uVar16 = 0;
      }
      GISLParserContext::createGenericMatrixType
                (param_1,(*(int **)(*(long *)(this + 0x58) + 0x20))[2],0,uVar9,uVar16,
                 **(int **)(*(long *)(this + 0x58) + 0x20) == 2);
      puVar7[4] = CONCAT44(uStack_8c,uStack_90);
      puVar7[3] = CONCAT44(uStack_94,local_98);
      puVar7[6] = CONCAT44(uStack_7c,uStack_80);
      puVar7[5] = CONCAT44(uStack_84,uStack_88);
      puVar7[8] = uStack_70;
      puVar7[7] = local_78;
      local_98 = (undefined4)*(undefined8 *)(this + 0x58);
      uStack_94 = (undefined4)((ulong)*(undefined8 *)(this + 0x58) >> 0x20);
      FUN_00c171ec(puVar7 + 10,&local_98);
      *(undefined8 **)(this + 0x58) = puVar7;
      goto LAB_00c16d88;
    }
    if (uVar9 == 1) {
      uVar20 = puVar15[5];
    }
    else if (uVar9 == 2) {
      uVar20 = puVar15[4];
    }
    else {
      uVar20 = 0;
    }
    if (uVar19 == 1) {
      uVar18 = puVar11[5];
    }
    else if (uVar19 == 2) {
      uVar18 = puVar11[4];
    }
    else {
      uVar18 = 0;
    }
    if (uVar20 <= uVar18) {
      if (uVar9 < 2) {
        uVar20 = 1;
      }
      else if (uVar9 == 2) {
        uVar20 = puVar15[5];
      }
      else {
        uVar20 = 0;
      }
      uVar18 = uVar19;
      if (uVar19 != 1) {
        if (uVar19 == 2) {
          uVar18 = puVar11[5];
        }
        else {
          uVar18 = 0;
        }
      }
      if (uVar20 <= uVar18) {
        if (uVar9 != 0) {
          if (uVar9 != 1) goto LAB_00c16868;
          goto LAB_00c16964;
        }
        uVar19 = 1;
        goto LAB_00c16968;
      }
    }
    if (uVar9 == 0) {
      uVar20 = 1;
    }
    else if (uVar9 == 1) {
      uVar20 = puVar15[5];
    }
    else if (uVar9 == 2) {
      uVar20 = puVar15[4];
    }
    else {
      uVar20 = 0;
    }
    if (uVar19 == 1) {
      uVar18 = puVar11[5];
    }
    else if (uVar19 == 2) {
      uVar18 = puVar11[4];
    }
    else {
      uVar18 = 0;
    }
    if (uVar18 <= uVar20) {
      if (uVar9 < 2) {
        uVar20 = 1;
      }
      else if (uVar9 == 2) {
        uVar20 = puVar15[5];
      }
      else {
        uVar20 = 0;
      }
      if (uVar19 < 2) {
        uVar18 = 1;
      }
      else if (uVar19 == 2) {
        uVar18 = puVar11[5];
      }
      else {
        uVar18 = 0;
      }
      if (uVar18 <= uVar20) {
        if (uVar19 == 0) {
          uVar20 = 1;
          uVar19 = 1;
        }
        else if (uVar19 == 1) {
          uVar19 = puVar11[5];
          uVar20 = 1;
        }
        else {
          if (uVar19 != 2) goto LAB_00c16a14;
          uVar19 = puVar11[4];
          uVar20 = puVar11[5];
        }
LAB_00c16a1c:
        if (uVar9 == 0) goto LAB_00c16a38;
        if (uVar9 == 1) {
          uVar18 = puVar15[5];
LAB_00c16a44:
          if (uVar18 <= uVar19) goto LAB_00c16a4c;
          goto LAB_00c16a6c;
        }
        if (uVar9 == 2) {
          uVar18 = puVar15[4];
          goto LAB_00c16a44;
        }
LAB_00c16a4c:
        if (uVar9 < 2) {
          uVar9 = 1;
          goto LAB_00c16a64;
        }
        if (uVar9 == 2) goto LAB_00c16a60;
        goto LAB_00c16b28;
      }
    }
    goto LAB_00c16fb0;
  }
  if (*(int *)(this + 0x48) - 0x43U < 2) goto switchD_00c1683c_caseD_43;
  if (*(int *)(this + 0x48) != 0x89) goto LAB_00c16fb0;
LAB_00c16fa8:
  uVar6 = 1;
switchD_00c16db0_caseD_45:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
switchD_00c16db0_caseD_89:
  puVar15 = *(uint **)(*(long *)(this + 0x50) + 0x20);
  uVar9 = *puVar15;
  if (uVar9 == 0) {
    uVar16 = 1;
  }
  else if (uVar9 == 1) {
    uVar16 = puVar15[5];
  }
  else if (uVar9 == 2) {
    uVar16 = puVar15[4];
  }
  else {
    uVar16 = 0;
  }
  puVar11 = *(uint **)(*(long *)(this + 0x58) + 0x20);
  uVar18 = *puVar11;
  if (uVar18 == 0) {
    uVar17 = 1;
  }
  else if (uVar18 == 1) {
    uVar17 = puVar11[5];
  }
  else if (uVar18 == 2) {
    uVar17 = puVar11[4];
  }
  else {
    uVar17 = 0;
  }
  if (uVar16 == uVar17) {
    if (uVar9 < 2) {
      uVar9 = 1;
    }
    else if (uVar9 == 2) {
      uVar9 = puVar15[5];
    }
    else {
      uVar9 = 0;
    }
    if (uVar18 < 2) {
      uVar16 = 1;
    }
    else if (uVar18 == 2) {
      uVar16 = puVar11[5];
    }
    else {
      uVar16 = 0;
    }
    if (uVar9 == uVar16) goto switchD_00c16db0_caseD_39;
  }
  uVar4 = GISLParserContext::getConstructorOp(param_1,(SHC_Type *)(*(long *)(this + 0x50) + 0x18));
  puVar7 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_1 + 0x58),0x88);
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  uStack_88 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[4] = 0;
  puVar7[3] = 0;
  *(undefined4 *)(puVar7 + 9) = uVar4;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[6] = 0;
  puVar7[5] = (ulong)uStack_84 << 0x20;
  puVar7[10] = 0;
  puVar7[0xd] = uVar6;
  puVar7[0xe] = 0;
  *puVar7 = &PTR_traverse_00fed8e8;
  puVar7[8] = 0;
  puVar7[7] = 0;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0;
  uVar6 = *(undefined8 *)(*(long *)(this + 0x58) + 8);
  puVar7[2] = *(undefined8 *)(*(long *)(this + 0x58) + 0x10);
  puVar7[1] = uVar6;
  piVar12 = *(int **)(*(long *)(this + 0x50) + 0x20);
  iVar1 = *piVar12;
  if (iVar1 == 0) {
    uVar9 = 1;
    uVar19 = 1;
  }
  else if (iVar1 == 1) {
    uVar9 = piVar12[5];
    uVar19 = 1;
  }
  else if (iVar1 == 2) {
    uVar9 = piVar12[4];
    uVar19 = piVar12[5];
  }
  else {
    uVar9 = 0;
    uVar19 = 0;
  }
  GISLParserContext::createGenericMatrixType
            (param_1,piVar12[2],*(uint *)(*(long *)(this + 0x58) + 0x28) & 2,uVar9,uVar19,iVar1 == 2
            );
  puVar7[4] = CONCAT44(uStack_8c,uStack_90);
  puVar7[3] = CONCAT44(uStack_94,local_98);
  puVar7[6] = CONCAT44(uStack_7c,uStack_80);
  puVar7[5] = CONCAT44(uStack_84,uStack_88);
  puVar7[8] = uStack_70;
  puVar7[7] = local_78;
  local_98 = (undefined4)*(undefined8 *)(this + 0x58);
  uStack_94 = (undefined4)((ulong)*(undefined8 *)(this + 0x58) >> 0x20);
  FUN_00c171ec(puVar7 + 10,&local_98);
  *(undefined8 **)(this + 0x58) = puVar7;
  piVar12 = (int *)puVar7[4];
  iVar1 = *piVar12;
  if (iVar1 == 0) {
    uVar20 = 1;
    uVar19 = 1;
  }
  else if (iVar1 == 1) {
    uVar19 = piVar12[5];
    uVar20 = 1;
  }
  else if (iVar1 == 2) {
    uVar19 = piVar12[4];
    uVar20 = piVar12[5];
  }
  else {
    uVar20 = 0;
    uVar19 = 0;
  }
switchD_00c16db0_caseD_39:
  piVar12 = *(int **)(*(long *)(this + 0x50) + 0x20);
  iVar1 = *piVar12;
  if (iVar1 == 1) {
    piVar13 = *(int **)(*(long *)(this + 0x58) + 0x20);
    if ((*piVar13 == 2) || (piVar12[2] != piVar13[2])) goto LAB_00c16fb0;
LAB_00c16e7c:
    bVar3 = *piVar13 == 2;
LAB_00c16ef0:
    GISLParserContext::createGenericMatrixType(param_1,GVar8,0,uVar19,uVar20,bVar3);
    *(ulong *)(this + 0x20) = CONCAT44(uStack_8c,uStack_90);
    *(ulong *)(this + 0x18) = CONCAT44(uStack_94,local_98);
    *(ulong *)(this + 0x30) = CONCAT44(uStack_7c,uStack_80);
    *(ulong *)(this + 0x28) = CONCAT44(uStack_84,uStack_88);
    *(undefined8 *)(this + 0x40) = uStack_70;
    *(undefined8 *)(this + 0x38) = local_78;
    if ((((uint)(&GISLParserUtil::s_operatorFlags)[*(uint *)(this + 0x48)] >> 2 & 1) == 0) ||
       (*(long *)(this + 0x20) == *(long *)(*(long *)(this + 0x50) + 0x20))) goto LAB_00c16fa8;
  }
  else if (iVar1 == 2) {
    if ((**(int **)(*(long *)(this + 0x58) + 0x20) != 1) &&
       (piVar12[2] == (*(int **)(*(long *)(this + 0x58) + 0x20))[2])) {
LAB_00c16e40:
      bVar3 = true;
      goto LAB_00c16ef0;
    }
  }
  else {
    piVar13 = *(int **)(*(long *)(this + 0x58) + 0x20);
    if (piVar12[2] == piVar13[2]) {
      if (iVar1 != 2) goto LAB_00c16e7c;
      goto LAB_00c16e40;
    }
  }
LAB_00c16fb0:
  uVar6 = 0;
  goto switchD_00c16db0_caseD_45;
}


