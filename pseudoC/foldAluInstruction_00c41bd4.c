// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: foldAluInstruction
// Entry Point: 00c41bd4
// Size: 2012 bytes
// Signature: undefined __cdecl foldAluInstruction(uint * param_1, vector * param_2, bool param_3, bool param_4)


/* IR_Section::foldAluInstruction(unsigned int*, std::__ndk1::vector<IR_GenValue,
   std::__ndk1::allocator<IR_GenValue> > const&, bool, bool) */

void IR_Section::foldAluInstruction(uint *param_1,vector *param_2,bool param_3,bool param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint in_w4;
  undefined (*in_x8) [16];
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  undefined8 *puVar13;
  int *piVar14;
  long lVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  char cVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined auVar25 [16];
  int local_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined7 local_d0;
  undefined uStack_c9;
  undefined7 uStack_c8;
  undefined uStack_c1;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  int local_98 [6];
  undefined8 local_80;
  undefined4 local_78;
  long local_68;
  
  plVar9 = (long *)(ulong)param_3;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar6 = *(uint *)param_2;
  uVar1 = *(uint *)(param_2 + 4);
  if (uVar6 == 0x6e) {
    uVar6 = *(uint *)(param_2 + ((ulong)(uVar1 >> 0xe) & 0x3fffc) + 8);
    if ((int)uVar6 < 0) {
      plVar9 = (long *)(*(long *)(*(long *)param_1 + 0x80) + ((ulong)uVar6 & 0x7fffffff) * 0x18);
      local_b0 = *plVar9;
      local_98[0] = -1;
      uStack_a8 = (uint)plVar9[1];
      uStack_a4 = (undefined4)((ulong)plVar9[1] >> 0x20);
      local_a0 = (undefined4)plVar9[2];
      uStack_9c = (undefined4)((ulong)plVar9[2] >> 0x20);
    }
    else {
      plVar9 = (long *)(*plVar9 + (ulong)uVar6 * 0x20);
      local_b0 = *plVar9;
      uStack_a8 = (uint)plVar9[1];
      uStack_a4 = (undefined4)((ulong)plVar9[1] >> 0x20);
      local_98[0] = (int)plVar9[3];
      local_98[1] = (int)((ulong)plVar9[3] >> 0x20);
      local_a0 = (undefined4)plVar9[2];
      uStack_9c = (undefined4)((ulong)plVar9[2] >> 0x20);
    }
    if (((int)local_b0 == 0) && ((in_w4 & 1) == 0)) {
      uVar21 = 0;
      *(undefined4 *)*in_x8 = 0;
    }
    else {
      auVar25 = IR_Interpreter::exec(0x6e,(IR_Const *)&local_b0);
      uVar21 = IR_TypeSet::getScalarType(*(IR_TypeSet **)(*(long *)param_1 + 0x38),9);
      *in_x8 = auVar25;
    }
LAB_00c41eb4:
    *(undefined8 *)in_x8[1] = uVar21;
LAB_00c422b4:
    *(undefined4 *)(in_x8[1] + 8) = 0xffffffff;
    goto LAB_00c422b8;
  }
  if (uVar6 == 0xd3) {
    uVar1 = uVar1 >> 0x10;
    uVar6 = *(uint *)(param_2 + (ulong)uVar1 * 4 + 8);
    if ((int)uVar6 < 0) {
      uVar21 = 0xffffffffffffffff;
      piVar14 = (int *)(*(long *)(*(long *)param_1 + 0x80) + ((ulong)uVar6 & 0x7fffffff) * 0x18);
      iVar12 = piVar14[1];
      cVar20 = *(char *)(piVar14 + 2);
      local_d0 = (undefined7)*(undefined8 *)((long)piVar14 + 9);
      uStack_c9 = (undefined)*(undefined8 *)(piVar14 + 4);
      uStack_c8 = (undefined7)((ulong)*(undefined8 *)(piVar14 + 4) >> 8);
      if (*piVar14 == 0) goto LAB_00c41dd4;
LAB_00c41c60:
      iVar12 = 3;
      if (cVar20 == '\0') {
        iVar12 = 4;
      }
      uVar8 = (ulong)*(uint *)(param_2 + (ulong)(iVar12 + uVar1) * 4);
      if ((int)*(uint *)(param_2 + (ulong)(iVar12 + uVar1) * 4) < 0) {
        puVar13 = (undefined8 *)(*(long *)(*(long *)param_1 + 0x80) + (uVar8 & 0x7fffffff) * 0x18);
LAB_00c4218c:
        uVar23 = puVar13[1];
        uVar21 = *puVar13;
        uVar10 = puVar13[2];
        goto LAB_00c42194;
      }
      puVar13 = (undefined8 *)*plVar9;
LAB_00c41c7c:
      plVar9 = puVar13 + uVar8 * 4;
    }
    else {
      piVar14 = (int *)(*plVar9 + (ulong)uVar6 * 0x20);
      iVar12 = piVar14[1];
      cVar20 = *(char *)(piVar14 + 2);
      local_d0 = (undefined7)*(undefined8 *)((long)piVar14 + 9);
      uStack_c9 = (undefined)*(undefined8 *)(piVar14 + 4);
      uStack_c8 = (undefined7)((ulong)*(undefined8 *)(piVar14 + 4) >> 8);
      uVar21 = *(undefined8 *)(piVar14 + 6);
      if (*piVar14 != 0) goto LAB_00c41c60;
LAB_00c41dd4:
      uVar6 = *(uint *)(param_2 + (ulong)(uVar1 + 3) * 4);
      uVar19 = (ulong)uVar6;
      uVar1 = *(uint *)(param_2 + (ulong)(uVar1 + 4) * 4);
      uVar8 = (ulong)uVar1;
      local_b0._0_4_ = 9;
      uStack_a8 = uStack_a8 & 0xffffff00;
      uVar4 = IR_Function::storeConst(*(IR_Function **)param_1,(IR_Const *)&local_b0);
      local_b0 = CONCAT44(local_b0._4_4_,9);
      uStack_a8 = CONCAT31(uStack_a8._1_3_,1);
      uVar5 = IR_Function::storeConst(*(IR_Function **)param_1,(IR_Const *)&local_b0);
      if (uVar6 != uVar1) {
        uVar4 = uVar4 | 0x80000000;
        if ((uVar6 == uVar4) && (uVar1 == (uVar5 | 0x80000000))) {
          if ((param_4) && (-1 < *(int *)(param_2 + 8))) {
            *(undefined8 *)param_2 = 0x1000100000025;
            *(undefined4 *)(param_2 + 0xc) =
                 *(undefined4 *)(param_2 + ((ulong)(*(uint *)(param_2 + 4) >> 0xe) & 0x3fffc) + 8);
          }
          goto LAB_00c422a8;
        }
        if ((uVar1 == uVar4) && (uVar6 == (uVar5 | 0x80000000))) {
          if ((param_4) && (-1 < *(int *)(param_2 + 8))) {
            *(undefined8 *)param_2 = 0x100010000001a;
            *(undefined4 *)(param_2 + 0xc) =
                 *(undefined4 *)(param_2 + ((ulong)(*(uint *)(param_2 + 4) >> 0xe) & 0x3fffc) + 8);
          }
          (*in_x8)[8] = cVar20;
          *(undefined4 *)*in_x8 = 0;
          *(int *)(*in_x8 + 4) = iVar12;
          *(ulong *)(*in_x8 + 9) = CONCAT17(uStack_c9,local_d0);
          *(undefined8 *)(in_x8[1] + 8) = uVar21;
          *(ulong *)in_x8[1] = CONCAT71(uStack_c8,uStack_c9);
          goto LAB_00c422b8;
        }
        if (uVar1 == uVar4) {
          if ((param_4) && (-1 < *(int *)(param_2 + 8))) {
            *(undefined8 *)param_2 = 0x10002000000a1;
            *(undefined8 *)(param_2 + 0xc) =
                 *(undefined8 *)(param_2 + ((ulong)(*(uint *)(param_2 + 4) >> 0xe) & 0x3fffc) + 8);
          }
          goto LAB_00c422a8;
        }
        if (-1 < (int)uVar6) {
LAB_00c422a4:
          if ((int)uVar1 < 0) {
            lVar11 = *(long *)(*(long *)param_1 + 0x80);
            iVar12 = *(int *)(lVar11 + (uVar8 & 0x7fffffff) * 0x18);
            if ((iVar12 == 0xe) || (iVar12 == 0)) {
              if ((param_4) && (-1 < *(int *)(param_2 + 8))) {
                *(uint *)(param_2 + 0xc) = uVar6;
                *(undefined8 *)param_2 = 0x100010000001a;
              }
              uVar8 = uVar19;
              if (-1 < (int)uVar6) goto LAB_00c41e2c;
              goto LAB_00c42380;
            }
          }
          goto LAB_00c422a8;
        }
        lVar11 = *(long *)(*(long *)param_1 + 0x80);
        iVar12 = *(int *)(lVar11 + (uVar19 & 0x7fffffff) * 0x18);
        if ((iVar12 != 0xe) && (iVar12 != 0)) goto LAB_00c422a4;
        if ((param_4) && (-1 < *(int *)(param_2 + 8))) {
          *(uint *)(param_2 + 0xc) = uVar1;
          *(undefined8 *)param_2 = 0x100010000001a;
        }
        if (-1 < (int)uVar1) {
          plVar9 = (long *)(*plVar9 + uVar8 * 0x20);
          goto LAB_00c41e34;
        }
LAB_00c42380:
        puVar13 = (undefined8 *)(lVar11 + (uVar8 & 0x7fffffff) * 0x18);
        uVar23 = puVar13[1];
        uVar21 = *puVar13;
        *(undefined8 *)in_x8[1] = puVar13[2];
        *(undefined8 *)(*in_x8 + 8) = uVar23;
        *(undefined8 *)*in_x8 = uVar21;
        goto LAB_00c422b4;
      }
      if ((int)uVar6 < 0) {
        puVar13 = (undefined8 *)(*(long *)(*(long *)param_1 + 0x80) + (uVar19 & 0x7fffffff) * 0x18);
        goto LAB_00c4218c;
      }
LAB_00c41e2c:
      plVar9 = (long *)(*plVar9 + uVar19 * 0x20);
    }
LAB_00c41e34:
    lVar11 = plVar9[1];
    lVar24 = plVar9[3];
    lVar15 = plVar9[2];
    lVar22 = *plVar9;
  }
  else {
    uVar8 = (ulong)uVar1 & 0xffff;
    lVar11 = *(long *)param_1;
    local_b0 = (ulong)local_b0._4_4_ << 0x20;
    local_a0 = 0;
    uStack_9c = 0;
    local_98[0] = -1;
    local_98[2] = 0;
    local_80 = 0;
    local_78 = 0xffffffff;
    if ((int)uVar8 != 0) {
      puVar13 = &local_b0;
      lVar15 = *plVar9;
      puVar16 = (uint *)(param_2 + (ulong)((uVar1 >> 0x10) + 2) * 4);
      do {
        uVar4 = *puVar16;
        if ((int)uVar4 < 0) {
          puVar18 = (undefined8 *)(*(long *)(lVar11 + 0x80) + ((ulong)uVar4 & 0x7fffffff) * 0x18);
          uStack_c8 = (undefined7)puVar18[1];
          uStack_c1 = (undefined)((ulong)puVar18[1] >> 0x38);
          local_d0 = (undefined7)*puVar18;
          uStack_c9 = (undefined)((ulong)*puVar18 >> 0x38);
          local_c0 = puVar18[2];
          uVar17 = 0xffffffff;
        }
        else {
          puVar18 = (undefined8 *)(lVar15 + (ulong)uVar4 * 0x20);
          uStack_c8 = (undefined7)puVar18[1];
          uStack_c1 = (undefined)((ulong)puVar18[1] >> 0x38);
          local_d0 = (undefined7)*puVar18;
          uStack_c9 = (undefined)((ulong)*puVar18 >> 0x38);
          local_c0 = puVar18[2];
          uVar17 = *(undefined4 *)(puVar18 + 3);
        }
        *(undefined4 *)(puVar13 + 3) = uVar17;
        puVar16 = puVar16 + 1;
        uVar8 = uVar8 - 1;
        puVar13[1] = CONCAT17(uStack_c1,uStack_c8);
        *puVar13 = CONCAT17(uStack_c9,local_d0);
        puVar13[2] = local_c0;
        puVar13 = puVar13 + 4;
      } while (uVar8 != 0);
    }
    uVar4 = *(uint *)(param_2 + 8);
    if ((uVar1 & 0xffff) != 1) {
      if ((uVar1 & 0xffff) != 2) goto LAB_00c422a8;
      if (((int)local_b0 != 0) && (local_98[2] != 0)) {
        auVar25 = IR_Interpreter::exec(uVar6,(IR_Const *)&local_b0,(IR_Const *)(local_98 + 2));
        goto LAB_00c41ecc;
      }
      uVar8 = IR_Interpreter::isIdempotent(uVar6,(IR_Const *)&local_b0,(IR_Const *)(local_98 + 2));
      if ((uVar8 & 1) != 0) {
        iVar12 = (int)local_b0;
        uVar6 = 2;
        if ((int)local_b0 != 0) {
          uVar6 = 3;
        }
        uVar6 = *(uint *)(param_2 + ((ulong)uVar6 + (ulong)*(ushort *)(param_2 + 6)) * 4);
        if (param_4) {
          *(uint *)(param_2 + 0xc) = uVar6;
          *(undefined8 *)param_2 = 0x100010000001a;
          if (-1 < (int)(*(uint *)(param_2 + 8) | uVar6)) {
            lVar11 = IR_RegisterSet::getRegisterType
                               ((IR_RegisterSet *)(*(long *)param_1 + 0x98),*(uint *)(param_2 + 8));
            lVar15 = IR_RegisterSet::getRegisterType
                               ((IR_RegisterSet *)(*(long *)param_1 + 0x98),uVar6);
            if (lVar11 != lVar15) {
              *(undefined4 *)param_2 = 0x12;
            }
          }
        }
        if (-1 < (int)(uVar6 | uVar4)) {
          piVar14 = (int *)IR_RegisterSet::getRegisterType
                                     ((IR_RegisterSet *)(*(long *)param_1 + 0x98),uVar4);
          iVar2 = *piVar14;
          piVar14 = (int *)IR_RegisterSet::getRegisterType
                                     ((IR_RegisterSet *)(*(long *)param_1 + 0x98),uVar6);
          if (iVar2 != *piVar14) goto LAB_00c422a8;
        }
        puVar13 = &local_b0;
        uVar8 = (ulong)(iVar12 != 0);
        goto LAB_00c41c7c;
      }
      local_e0 = 0;
      uVar8 = IR_Interpreter::isNullifying
                        (*(IR_OPCODE *)param_2,(IR_Const *)&local_b0,(IR_Const *)(local_98 + 2),
                         (IR_Const *)&local_e0);
      if ((uVar8 & 1) == 0) {
        uVar6 = *(uint *)(param_2 + (ulong)(*(uint *)(param_2 + 4) >> 0x10) * 4 + 8);
        if (((uVar6 == *(uint *)(param_2 + (ulong)((*(uint *)(param_2 + 4) >> 0x10) + 3) * 4)) &&
            (-1 < (int)(*(uint *)(param_2 + (ulong)((*(uint *)(param_2 + 4) >> 0x10) + 3) * 4) |
                       uVar6))) &&
           (uVar8 = IR_Interpreter::isNullifyingWithSameParams
                              (*(IR_OPCODE *)param_2,(IR_Const *)&local_e0), (uVar8 & 1) != 0)) {
          local_c0 = IR_RegisterSet::getRegisterType
                               ((IR_RegisterSet *)(*(long *)param_1 + 0x98),uVar4);
          *(undefined8 *)in_x8[1] = local_c0;
          uStack_c8 = (undefined7)uStack_d8;
          uStack_c1 = (undefined)((ulong)uStack_d8 >> 0x38);
          local_d0 = (undefined7)CONCAT44(uStack_dc,local_e0);
          uStack_c9 = (undefined)((uint)uStack_dc >> 0x18);
          *(undefined8 *)(*in_x8 + 8) = uStack_d8;
          *(ulong *)*in_x8 = CONCAT44(uStack_dc,local_e0);
          *(undefined4 *)(in_x8[1] + 8) = 0xffffffff;
          if ((-1 < (int)uVar4) && (local_e0 == 0)) {
            *(ulong *)(*in_x8 + 8) = CONCAT44(uStack_a4,uStack_a8);
            *(long *)*in_x8 = local_b0;
            *(ulong *)(in_x8[1] + 4) = CONCAT44(local_98[0],uStack_9c);
            *(ulong *)(*in_x8 + 0xc) = CONCAT44(local_a0,uStack_a4);
          }
          if ((param_4) && (-1 < *(int *)(param_2 + 8))) {
            *(undefined8 *)param_2 = 0x100010000001a;
            if (local_e0 == 0) {
              lVar11 = 3;
            }
            else {
              uVar6 = IR_Function::storeConst(*(IR_Function **)param_1,(IR_TConst *)&local_d0);
              uVar6 = uVar6 | 0x80000000;
              lVar11 = (ulong)*(ushort *)(param_2 + 6) + 2;
            }
            *(uint *)(param_2 + lVar11 * 4) = uVar6;
          }
          goto LAB_00c422b8;
        }
        goto LAB_00c422a8;
      }
      local_c0 = IR_RegisterSet::getRegisterType((IR_RegisterSet *)(*(long *)param_1 + 0x98),uVar4);
      uStack_c8 = (undefined7)uStack_d8;
      uStack_c1 = (undefined)((ulong)uStack_d8 >> 0x38);
      local_d0 = (undefined7)CONCAT44(uStack_dc,local_e0);
      uStack_c9 = (undefined)((uint)uStack_dc >> 0x18);
      if (param_4) {
        uVar17 = *(undefined4 *)(param_2 + 8);
        uVar6 = IR_Function::storeConst(*(IR_Function **)param_1,(IR_TConst *)&local_d0);
        *(undefined4 *)(param_2 + 8) = uVar17;
        *(uint *)(param_2 + 0xc) = uVar6 | 0x80000000;
        *(undefined8 *)param_2 = 0x100010000001a;
      }
      uVar23 = CONCAT17(uStack_c1,uStack_c8);
      uVar21 = CONCAT17(uStack_c9,local_d0);
      uVar10 = local_c0;
LAB_00c42194:
      *(undefined8 *)(*in_x8 + 8) = uVar23;
      *(undefined8 *)*in_x8 = uVar21;
      *(undefined8 *)in_x8[1] = uVar10;
      *(undefined4 *)(in_x8[1] + 8) = 0xffffffff;
      goto LAB_00c422b8;
    }
    if ((int)local_b0 != 0) {
      auVar25 = IR_Interpreter::exec(uVar6,(IR_Const *)&local_b0);
LAB_00c41ecc:
      if ((auVar25._0_4_ != 0xc) && (auVar25._0_4_ != 0)) {
        uVar21 = IR_RegisterSet::getRegisterType((IR_RegisterSet *)(*(long *)param_1 + 0x98),uVar4);
        *in_x8 = auVar25;
        goto LAB_00c41eb4;
      }
LAB_00c422a8:
      *(undefined4 *)*in_x8 = 0;
      *(undefined8 *)in_x8[1] = 0;
      goto LAB_00c422b4;
    }
    if (uVar6 != 0x1a) goto LAB_00c422a8;
    piVar14 = (int *)IR_RegisterSet::getRegisterType((IR_RegisterSet *)(lVar11 + 0x98),uVar4);
    piVar7 = (int *)IR_RegisterSet::getRegisterType
                              ((IR_RegisterSet *)(*(long *)param_1 + 0x98),
                               *(uint *)(param_2 +
                                        ((ulong)(*(uint *)(param_2 + 4) >> 0xe) & 0x3fffc) + 8));
    if ((piVar14 != piVar7) &&
       (((piVar14 == (int *)0x0 || (*piVar14 != 6)) || (**(int **)(piVar14 + 2) != 3))))
    goto LAB_00c422a8;
    lVar11 = CONCAT44(uStack_a4,uStack_a8);
    lVar24 = CONCAT44(local_98[1],local_98[0]);
    lVar15 = CONCAT44(uStack_9c,local_a0);
    lVar22 = local_b0;
  }
  *(long *)(*in_x8 + 8) = lVar11;
  *(long *)*in_x8 = lVar22;
  *(long *)(in_x8[1] + 8) = lVar24;
  *(long *)in_x8[1] = lVar15;
LAB_00c422b8:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


