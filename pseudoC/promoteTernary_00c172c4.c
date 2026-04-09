// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: promoteTernary
// Entry Point: 00c172c4
// Size: 1052 bytes
// Signature: undefined __thiscall promoteTernary(AST_SelectionNode * this, GISLParserContext * param_1)


/* AST_SelectionNode::promoteTernary(GISLParserContext&) */

void __thiscall
AST_SelectionNode::promoteTernary(AST_SelectionNode *this,GISLParserContext *param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  long local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  uint uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar4 = (**(code **)(**(long **)(this + 0x50) + 0x18))();
  lVar5 = (**(code **)(**(long **)(this + 0x58) + 0x18))();
  if (lVar4 != 0 && lVar5 != 0) {
    puVar12 = *(uint **)(*(long *)(this + 0x48) + 0x20);
    uVar13 = *puVar12;
    if ((int)uVar13 < 3) {
      puVar10 = *(uint **)(lVar4 + 0x20);
      uVar9 = *puVar10;
      if ((int)uVar9 < 3) {
        puVar7 = *(uint **)(lVar5 + 0x20);
        uVar1 = *puVar7;
        if (((int)uVar1 < 3) && (puVar10[2] == puVar7[2])) {
          if (uVar13 == 2) {
LAB_00c173fc:
            uVar13 = puVar12[5];
            if (uVar13 != 0xffffffff) {
              puVar12 = puVar12 + 4;
LAB_00c1740c:
              uVar14 = *puVar12;
              if (uVar9 == 0) {
                uVar11 = 1;
              }
              else if (uVar9 == 2) {
                uVar11 = puVar10[4];
              }
              else if (uVar9 == 1) {
                uVar11 = puVar10[5];
              }
              else {
                uVar11 = 0;
              }
              if (uVar11 == uVar14) {
                if (uVar9 < 2) {
                  uVar9 = 1;
                }
                else if (uVar9 == 2) {
                  uVar9 = puVar10[5];
                }
                else {
                  uVar9 = 0;
                }
                if (uVar9 == uVar13) goto LAB_00c17470;
              }
              goto LAB_00c174d0;
            }
          }
          else {
            if (uVar13 == 1) {
LAB_00c17384:
              puVar12 = puVar12 + 5;
              uVar13 = 1;
              goto LAB_00c1740c;
            }
            puVar12 = puVar10;
            if (uVar9 == 2) goto LAB_00c173fc;
            if (uVar9 != 1) {
              puVar12 = puVar7;
              if (uVar1 == 2) goto LAB_00c173fc;
              if (uVar1 == 1) goto LAB_00c17384;
              goto LAB_00c17600;
            }
            uVar14 = puVar10[5];
            uVar13 = 1;
LAB_00c17470:
            if (uVar1 == 0) {
              uVar9 = 1;
            }
            else if (uVar1 == 1) {
              uVar9 = puVar7[5];
            }
            else if (uVar1 == 2) {
              uVar9 = puVar7[4];
            }
            else {
              uVar9 = 0;
            }
            if (uVar9 == uVar14) {
              if (uVar1 < 2) {
                uVar9 = 1;
              }
              else if (uVar1 == 2) {
                uVar9 = puVar7[5];
              }
              else {
                uVar9 = 0;
              }
              if (uVar9 == uVar13) goto LAB_00c17600;
            }
LAB_00c174d0:
            GISLParserContext::createGenericMatrixType
                      (param_1,puVar10[2],0,uVar14,uVar13,uVar13 != 1);
            *(undefined8 *)(this + 0x20) = uStack_90;
            *(long *)(this + 0x18) = local_98;
            *(undefined8 *)(this + 0x30) = uStack_80;
            *(ulong *)(this + 0x28) = CONCAT44(uStack_84,local_88);
            *(undefined8 *)(this + 0x40) = uStack_70;
            *(undefined8 *)(this + 0x38) = local_78;
            uVar3 = GISLParserContext::getConstructorOp(param_1,(SHC_Type *)(this + 0x18));
            if (**(int **)(lVar4 + 0x20) == 0) {
              puVar6 = (undefined8 *)
                       SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_1 + 0x58),0x88);
              local_98 = 0;
              uStack_90 = 0;
              uVar8 = *(undefined8 *)(param_1 + 0x58);
              local_88 = 0;
              local_78 = 0;
              uStack_70 = 0;
              uStack_80 = 0;
              puVar6[1] = 0;
              puVar6[2] = 0;
              puVar6[4] = 0;
              puVar6[3] = 0;
              *(undefined4 *)(puVar6 + 9) = uVar3;
              puVar6[0xb] = 0;
              puVar6[0xc] = 0;
              puVar6[6] = 0;
              puVar6[5] = (ulong)uStack_84 << 0x20;
              puVar6[10] = 0;
              puVar6[0xd] = uVar8;
              puVar6[0xe] = 0;
              *puVar6 = &PTR_traverse_00fed8e8;
              puVar6[8] = 0;
              puVar6[7] = 0;
              puVar6[0xf] = 0;
              puVar6[0x10] = 0;
              uVar8 = *(undefined8 *)(lVar4 + 8);
              puVar6[2] = *(undefined8 *)(lVar4 + 0x10);
              puVar6[1] = uVar8;
              GISLParserContext::createGenericMatrixType
                        (param_1,*(GsTBasicType *)(*(long *)(lVar4 + 0x20) + 8),
                         *(uint *)(lVar4 + 0x28) & 2,uVar14,uVar13,uVar13 != 1);
              puVar6[4] = uStack_90;
              puVar6[3] = local_98;
              puVar6[6] = uStack_80;
              puVar6[5] = CONCAT44(uStack_84,local_88);
              puVar6[8] = uStack_70;
              puVar6[7] = local_78;
              local_98 = lVar4;
              FUN_00c171ec(puVar6 + 10,&local_98);
              *(undefined8 **)(this + 0x50) = puVar6;
            }
            if (**(int **)(lVar5 + 0x20) == 0) {
              puVar6 = (undefined8 *)
                       SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_1 + 0x58),0x88);
              local_98 = 0;
              uStack_90 = 0;
              uVar8 = *(undefined8 *)(param_1 + 0x58);
              local_88 = 0;
              local_78 = 0;
              uStack_70 = 0;
              uStack_80 = 0;
              puVar6[1] = 0;
              puVar6[2] = 0;
              puVar6[4] = 0;
              puVar6[3] = 0;
              *(undefined4 *)(puVar6 + 9) = uVar3;
              puVar6[0xb] = 0;
              puVar6[0xc] = 0;
              puVar6[6] = 0;
              puVar6[5] = (ulong)uStack_84 << 0x20;
              puVar6[10] = 0;
              puVar6[0xd] = uVar8;
              puVar6[0xe] = 0;
              *puVar6 = &PTR_traverse_00fed8e8;
              puVar6[8] = 0;
              puVar6[7] = 0;
              puVar6[0xf] = 0;
              puVar6[0x10] = 0;
              uVar8 = *(undefined8 *)(lVar5 + 8);
              puVar6[2] = *(undefined8 *)(lVar5 + 0x10);
              puVar6[1] = uVar8;
              GISLParserContext::createGenericMatrixType
                        (param_1,*(GsTBasicType *)(*(long *)(lVar5 + 0x20) + 8),
                         *(uint *)(lVar5 + 0x28) & 2,uVar14,uVar13,uVar13 != 1);
              puVar6[4] = uStack_90;
              puVar6[3] = local_98;
              puVar6[6] = uStack_80;
              puVar6[5] = CONCAT44(uStack_84,local_88);
              puVar6[8] = uStack_70;
              puVar6[7] = local_78;
              local_98 = lVar5;
              FUN_00c171ec(puVar6 + 10,&local_98);
              uVar8 = 1;
              *(undefined8 **)(this + 0x58) = puVar6;
              goto LAB_00c17390;
            }
          }
LAB_00c17600:
          uVar8 = 1;
          goto LAB_00c17390;
        }
      }
    }
  }
  uVar8 = 0;
LAB_00c17390:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


