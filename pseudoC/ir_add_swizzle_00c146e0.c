// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_add_swizzle
// Entry Point: 00c146e0
// Size: 980 bytes
// Signature: undefined __thiscall ir_add_swizzle(GISLParserUtil * this, VectorFields * param_1, GsTSourceLoc param_2, GISLParserContext * param_3)


/* WARNING: Removing unreachable block (ram,0x00c148a8) */
/* GISLParserUtil::ir_add_swizzle(GISLParserUtil::VectorFields&, GsTSourceLoc, GISLParserContext&)
    */

undefined8 * __thiscall
GISLParserUtil::ir_add_swizzle
          (GISLParserUtil *this,VectorFields *param_1,GsTSourceLoc param_2,
          GISLParserContext *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  IR_TypeSet *this_00;
  undefined4 uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint uStack_84;
  
  uVar8 = (ulong)param_2;
  lVar2 = tpidr_el0;
  lVar10 = *(long *)(lVar2 + 0x28);
  puVar4 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_3 + 0x58),0x88);
  uVar11 = *(undefined8 *)(param_3 + 0x58);
  *(undefined4 *)(puVar4 + 9) = 1;
  puVar4[4] = 0;
  puVar4[3] = 0;
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[5] = (ulong)uStack_84 << 0x20;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[10] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0xd] = uVar11;
  puVar4[0xe] = 0;
  puVar4[2] = uVar8;
  *puVar4 = &PTR_traverse_00fed8e8;
  puVar4[1] = param_1;
  if (*(int *)(this + 0x10) != 0) {
    uVar22 = 0;
    do {
      this_00 = **(IR_TypeSet ***)(param_3 + 0x58);
      piVar5 = (int *)IR_TypeSet::getScalarType(this_00,6);
      puVar6 = (undefined8 *)
               SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_3 + 0x58),0x68);
      uVar11 = *(undefined8 *)(param_3 + 0x58);
      puVar6[2] = 0;
      puVar6[3] = this_00;
      puVar6[4] = piVar5;
      puVar6[8] = 0;
      puVar6[7] = 0;
      *(undefined4 *)(puVar6 + 5) = 2;
      *puVar6 = &PTR_traverse_00fed718;
      puVar6[1] = 0;
      *(undefined8 *)((long)puVar6 + 0x34) = 0;
      *(undefined8 *)((long)puVar6 + 0x2c) = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar6[0xb] = 0;
      puVar6[0xc] = uVar11;
      if (piVar5[2] == 0) {
LAB_00c14864:
        puVar6[1] = param_1;
        puVar6[2] = uVar8;
        puVar12 = (undefined8 *)0x0;
        uVar20 = *(undefined4 *)(this + uVar22 * 4);
LAB_00c14874:
        if ((undefined8 *)puVar6[0xb] == puVar12) {
          puVar7 = (undefined8 *)SHC_PoolAllocator::allocate((SHC_PoolAllocator *)puVar6[0xc],8);
          *puVar7 = 0;
          puVar17 = (undefined8 *)puVar6[9];
          puVar16 = (undefined8 *)puVar6[10];
          puVar12 = puVar7;
          if ((long)puVar16 - (long)puVar17 != 0) {
            uVar18 = ((long)puVar16 - (long)puVar17) - 8;
            if (0x17 < uVar18) {
              uVar13 = (long)puVar16 + (-8 - (long)puVar17) & 0xfffffffffffffff8;
              if ((puVar16 <= (undefined8 *)((long)puVar7 + (-8 - uVar13))) ||
                 (puVar7 <= (undefined8 *)((long)puVar16 + (-8 - uVar13)))) {
                puVar19 = puVar7 + -2;
                uVar18 = (uVar18 >> 3) + 1;
                uVar15 = uVar18 & 0x3ffffffffffffffc;
                puVar12 = puVar16 + -2;
                uVar13 = uVar15;
                do {
                  puVar3 = puVar12 + -1;
                  uVar24 = puVar12[-2];
                  uVar23 = puVar12[1];
                  uVar11 = *puVar12;
                  puVar12 = puVar12 + -4;
                  uVar13 = uVar13 - 4;
                  puVar19[-1] = *puVar3;
                  puVar19[-2] = uVar24;
                  puVar19[1] = uVar23;
                  *puVar19 = uVar11;
                  puVar19 = puVar19 + -4;
                } while (uVar13 != 0);
                puVar12 = puVar7 + -uVar15;
                puVar16 = puVar16 + -uVar15;
                if (uVar18 == uVar15) goto LAB_00c149c0;
              }
            }
            do {
              puVar16 = puVar16 + -1;
              puVar12 = puVar12 + -1;
              *puVar12 = *puVar16;
            } while (puVar16 != puVar17);
          }
LAB_00c149c0:
          puVar6[9] = puVar12;
          puVar6[10] = puVar7 + 1;
          puVar6[0xb] = puVar7 + 1;
        }
        else {
          *puVar12 = 0;
          puVar6[10] = puVar12 + 1;
          puVar12 = (undefined8 *)puVar6[9];
        }
      }
      else {
        iVar1 = *piVar5;
        if (iVar1 == 0) {
          uVar9 = 1;
        }
        else if (iVar1 == 1) {
          uVar9 = piVar5[5];
        }
        else {
          if (iVar1 != 2) goto LAB_00c14864;
          uVar9 = piVar5[5] * piVar5[4];
        }
        if (uVar9 == 0) goto LAB_00c14864;
                    /* try { // try from 00c148fc to 00c14903 has its CatchHandler @ 00c14ab4 */
        std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
        __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>> *)
                 (puVar6 + 9),(ulong)uVar9);
        puVar6[1] = param_1;
        puVar6[2] = uVar8;
        puVar12 = (undefined8 *)puVar6[9];
        uVar20 = *(undefined4 *)(this + uVar22 * 4);
        if ((undefined8 *)puVar6[10] == puVar12) goto LAB_00c14874;
      }
      *(undefined4 *)puVar12 = 6;
      *(undefined4 *)((long)puVar12 + 4) = uVar20;
      puVar12 = (undefined8 *)puVar4[0xb];
      if (puVar12 < (undefined8 *)puVar4[0xc]) {
        *puVar12 = puVar6;
        puVar4[0xb] = puVar12 + 1;
      }
      else {
        lVar14 = puVar4[10];
        lVar21 = (long)puVar12 - lVar14 >> 3;
        uVar18 = lVar21 + 1;
        if (uVar18 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar13 = (long)(undefined8 *)puVar4[0xc] - lVar14;
        uVar15 = (long)uVar13 >> 2;
        if (uVar18 <= uVar15) {
          uVar18 = uVar15;
        }
        if (0x7ffffffffffffff7 < uVar13) {
          uVar18 = 0x1fffffffffffffff;
        }
        if (uVar18 == 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = SHC_PoolAllocator::allocate((SHC_PoolAllocator *)puVar4[0xd],uVar18 << 3);
        }
        puVar12 = (undefined8 *)(lVar14 + lVar21 * 8);
        *puVar12 = puVar6;
        puVar6 = (undefined8 *)puVar4[10];
        puVar17 = (undefined8 *)puVar4[0xb];
        puVar16 = puVar12;
        while (puVar17 != puVar6) {
          puVar17 = puVar17 + -1;
          puVar16 = puVar16 + -1;
          *puVar16 = *puVar17;
        }
        puVar4[10] = puVar16;
        puVar4[0xb] = puVar12 + 1;
        puVar4[0xc] = lVar14 + uVar18 * 8;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < *(uint *)(this + 0x10));
  }
  if (*(long *)(lVar2 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}


