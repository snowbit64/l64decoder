// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort3<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
// Entry Point: 0086b738
// Size: 1320 bytes
// Signature: uint __cdecl __sort3<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>(Node * param_1, Node * param_2, Node * param_3, _func_bool_Node_ptr_Node_ptr * param_4)


/* unsigned int std::__ndk1::__sort3<bool (*&)(ConditionalAnimationBlending::Node const&,
   ConditionalAnimationBlending::Node const&),
   ConditionalAnimationBlending::Node*>(ConditionalAnimationBlending::Node*,
   ConditionalAnimationBlending::Node*, ConditionalAnimationBlending::Node*, bool
   (*&)(ConditionalAnimationBlending::Node const&, ConditionalAnimationBlending::Node const&)) */

uint std::__ndk1::
     __sort3<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
               (Node *param_1,Node *param_2,Node *param_3,_func_bool_Node_ptr_Node_ptr *param_4)

{
  undefined4 uVar1;
  Node NVar2;
  Node NVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined auStack_98 [3];
  undefined8 local_95;
  undefined4 local_8d;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined6 local_78;
  undefined2 uStack_72;
  undefined6 uStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar6 = (**(code **)param_4)(param_2,param_1);
  uVar7 = (**(code **)param_4)(param_3,param_2);
  if ((uVar6 & 1) == 0) {
    if ((uVar7 & 1) == 0) {
      uVar5 = 0;
      goto LAB_0086bc2c;
    }
    NVar2 = *param_2;
    NVar3 = param_2[1];
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar11 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    uVar10 = *(undefined8 *)(param_2 + 0x1d);
    uVar14 = *(undefined8 *)param_3;
    local_78 = (undefined6)*(undefined8 *)(param_2 + 2);
    uVar9 = *(undefined8 *)(param_3 + 0x10);
    uStack_72 = (undefined2)uVar8;
    uStack_70 = (undefined6)((ulong)uVar8 >> 0x10);
    puVar12 = (undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)param_2 = uVar14;
    local_8d = *(undefined4 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x10) = uVar9;
    uVar8 = *(undefined8 *)(param_3 + 0x1d);
    local_88 = (undefined5)*puVar12;
    puVar13 = (undefined8 *)(param_2 + 0x28);
    local_95 = *puVar13;
    *(undefined2 *)param_3 = 0;
    *puVar12 = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)(param_2 + 0x1d) = uVar8;
    uStack_83 = (undefined3)uVar10;
    uStack_80 = (undefined5)((ulong)uVar10 >> 0x18);
    uVar8 = *(undefined8 *)(param_3 + 0x28);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
    *puVar13 = uVar8;
    if (((byte)*param_3 & 1) != 0) {
      operator_delete(*(void **)(param_3 + 0x10));
    }
    *param_3 = NVar2;
    param_3[1] = NVar3;
    *(ulong *)(param_3 + 2) = CONCAT26(uStack_72,local_78);
    *(ulong *)(param_3 + 8) = CONCAT62(uStack_70,uStack_72);
    *(undefined8 *)(param_3 + 0x10) = uVar11;
    uVar8 = *(undefined8 *)((ulong)auStack_98 | 3);
    *(ulong *)(param_3 + 0x18) = CONCAT35(uStack_83,local_88);
    uVar1 = *(undefined4 *)((undefined8 *)((ulong)auStack_98 | 3) + 1);
    *(ulong *)(param_3 + 0x1d) = CONCAT53(uStack_80,uStack_83);
    *(undefined8 *)(param_3 + 0x28) = uVar8;
    *(undefined4 *)(param_3 + 0x30) = uVar1;
    uVar6 = (**(code **)param_4)(param_2,param_1);
    if ((uVar6 & 1) != 0) {
      NVar2 = *param_1;
      NVar3 = param_1[1];
      uVar8 = *(undefined8 *)(param_1 + 8);
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      uVar10 = *(undefined8 *)param_2;
      local_78 = (undefined6)*(undefined8 *)(param_1 + 2);
      uVar9 = *(undefined8 *)(param_2 + 0x10);
      uStack_72 = (undefined2)uVar8;
      uStack_70 = (undefined6)((ulong)uVar8 >> 0x10);
      uVar8 = *(undefined8 *)(param_1 + 0x1d);
      local_88 = (undefined5)*(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)param_1 = uVar10;
      local_8d = *(undefined4 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x10) = uVar9;
      local_95 = *(undefined8 *)(param_1 + 0x28);
      *(undefined2 *)param_2 = 0;
      uVar9 = *(undefined8 *)(param_2 + 0x1d);
      uStack_83 = (undefined3)uVar8;
      uStack_80 = (undefined5)((ulong)uVar8 >> 0x18);
      *(undefined8 *)(param_1 + 0x18) = *puVar12;
      *(undefined8 *)(param_1 + 0x1d) = uVar9;
      uVar8 = *puVar13;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x28) = uVar8;
      if (((byte)*param_2 & 1) != 0) {
        operator_delete(*(void **)(param_2 + 0x10));
      }
      *param_2 = NVar2;
      param_2[1] = NVar3;
      *(undefined8 *)(param_2 + 0x10) = uVar11;
      uVar5 = 2;
      *(ulong *)(param_2 + 2) = CONCAT26(uStack_72,local_78);
      *(ulong *)(param_2 + 8) = CONCAT62(uStack_70,uStack_72);
      uVar8 = *(undefined8 *)((ulong)auStack_98 | 3);
      *puVar12 = CONCAT35(uStack_83,local_88);
      uVar1 = *(undefined4 *)((undefined8 *)((ulong)auStack_98 | 3) + 1);
      *(ulong *)(param_2 + 0x1d) = CONCAT53(uStack_80,uStack_83);
      *puVar13 = uVar8;
      *(undefined4 *)(param_2 + 0x30) = uVar1;
      goto LAB_0086bc2c;
    }
  }
  else {
    if ((uVar7 & 1) != 0) {
      NVar2 = *param_1;
      NVar3 = param_1[1];
      uVar8 = *(undefined8 *)(param_1 + 8);
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      uVar14 = *(undefined8 *)param_3;
      local_78 = (undefined6)*(undefined8 *)(param_1 + 2);
      uVar9 = *(undefined8 *)(param_3 + 0x10);
      uStack_72 = (undefined2)uVar8;
      uStack_70 = (undefined6)((ulong)uVar8 >> 0x10);
      uVar10 = *(undefined8 *)(param_1 + 0x1d);
      local_88 = (undefined5)*(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_1 = uVar14;
      local_8d = *(undefined4 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x10) = uVar9;
      local_95 = *(undefined8 *)(param_1 + 0x28);
      uVar8 = *(undefined8 *)(param_3 + 0x1d);
      *(undefined2 *)param_3 = 0;
      uStack_83 = (undefined3)uVar10;
      uStack_80 = (undefined5)((ulong)uVar10 >> 0x18);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_3 + 0x18);
      *(undefined8 *)(param_1 + 0x1d) = uVar8;
      uVar8 = *(undefined8 *)(param_3 + 0x28);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_3 + 0x30);
      *(undefined8 *)(param_1 + 0x28) = uVar8;
      if (((byte)*param_3 & 1) != 0) {
        operator_delete(*(void **)(param_3 + 0x10));
      }
      *param_3 = NVar2;
      param_3[1] = NVar3;
      uVar5 = 1;
      *(ulong *)(param_3 + 2) = CONCAT26(uStack_72,local_78);
      *(ulong *)(param_3 + 8) = CONCAT62(uStack_70,uStack_72);
      *(undefined8 *)(param_3 + 0x10) = uVar11;
      uVar8 = *(undefined8 *)((ulong)auStack_98 | 3);
      *(ulong *)(param_3 + 0x18) = CONCAT35(uStack_83,local_88);
      uVar1 = *(undefined4 *)((undefined8 *)((ulong)auStack_98 | 3) + 1);
      *(ulong *)(param_3 + 0x1d) = CONCAT53(uStack_80,uStack_83);
      *(undefined8 *)(param_3 + 0x28) = uVar8;
      *(undefined4 *)(param_3 + 0x30) = uVar1;
      goto LAB_0086bc2c;
    }
    NVar2 = *param_1;
    NVar3 = param_1[1];
    uVar8 = *(undefined8 *)(param_1 + 8);
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar14 = *(undefined8 *)param_2;
    local_78 = (undefined6)*(undefined8 *)(param_1 + 2);
    uVar9 = *(undefined8 *)(param_2 + 0x10);
    uStack_72 = (undefined2)uVar8;
    uStack_70 = (undefined6)((ulong)uVar8 >> 0x10);
    uVar10 = *(undefined8 *)(param_1 + 0x1d);
    local_88 = (undefined5)*(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)param_1 = uVar14;
    local_8d = *(undefined4 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x10) = uVar9;
    local_95 = *(undefined8 *)(param_1 + 0x28);
    puVar12 = (undefined8 *)(param_2 + 0x18);
    uVar8 = *(undefined8 *)(param_2 + 0x1d);
    *(undefined2 *)param_2 = 0;
    uStack_83 = (undefined3)uVar10;
    uStack_80 = (undefined5)((ulong)uVar10 >> 0x18);
    *(undefined8 *)(param_1 + 0x18) = *puVar12;
    *(undefined8 *)(param_1 + 0x1d) = uVar8;
    puVar13 = (undefined8 *)(param_2 + 0x28);
    uVar8 = *puVar13;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar8;
    if (((byte)*param_2 & 1) != 0) {
      operator_delete(*(void **)(param_2 + 0x10));
    }
    *param_2 = NVar2;
    param_2[1] = NVar3;
    *(ulong *)(param_2 + 2) = CONCAT26(uStack_72,local_78);
    *(ulong *)(param_2 + 8) = CONCAT62(uStack_70,uStack_72);
    *(undefined8 *)(param_2 + 0x10) = uVar11;
    uVar8 = *(undefined8 *)((ulong)auStack_98 | 3);
    *puVar12 = CONCAT35(uStack_83,local_88);
    uVar1 = *(undefined4 *)((undefined8 *)((ulong)auStack_98 | 3) + 1);
    *(ulong *)(param_2 + 0x1d) = CONCAT53(uStack_80,uStack_83);
    *puVar13 = uVar8;
    *(undefined4 *)(param_2 + 0x30) = uVar1;
    uVar6 = (**(code **)param_4)(param_3,param_2);
    if ((uVar6 & 1) != 0) {
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar11 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      NVar2 = *param_2;
      local_78 = (undefined6)*(undefined8 *)(param_2 + 2);
      NVar3 = param_2[1];
      *(undefined8 *)param_2 = 0;
      uVar9 = *(undefined8 *)param_3;
      uStack_72 = (undefined2)uVar8;
      uStack_70 = (undefined6)((ulong)uVar8 >> 0x10);
      uVar8 = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_2 = uVar9;
      *(undefined8 *)(param_2 + 0x10) = uVar8;
      uVar8 = *(undefined8 *)(param_3 + 0x1d);
      local_88 = (undefined5)*puVar12;
      local_95 = *puVar13;
      uStack_83 = (undefined3)*(undefined8 *)(param_2 + 0x1d);
      uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_2 + 0x1d) >> 0x18);
      local_8d = *(undefined4 *)(param_2 + 0x30);
      *(undefined2 *)param_3 = 0;
      *puVar12 = *(undefined8 *)(param_3 + 0x18);
      *(undefined8 *)(param_2 + 0x1d) = uVar8;
      uVar8 = *(undefined8 *)(param_3 + 0x28);
      *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
      *puVar13 = uVar8;
      if (((byte)*param_3 & 1) != 0) {
        operator_delete(*(void **)(param_3 + 0x10));
      }
      uVar5 = 2;
      *param_3 = NVar2;
      param_3[1] = NVar3;
      *(ulong *)(param_3 + 2) = CONCAT26(uStack_72,local_78);
      *(ulong *)(param_3 + 8) = CONCAT62(uStack_70,uStack_72);
      *(undefined8 *)(param_3 + 0x10) = uVar11;
      uVar8 = *(undefined8 *)((ulong)auStack_98 | 3);
      *(ulong *)(param_3 + 0x18) = CONCAT35(uStack_83,local_88);
      uVar1 = *(undefined4 *)((undefined8 *)((ulong)auStack_98 | 3) + 1);
      *(ulong *)(param_3 + 0x1d) = CONCAT53(uStack_80,uStack_83);
      *(undefined8 *)(param_3 + 0x28) = uVar8;
      *(undefined4 *)(param_3 + 0x30) = uVar1;
      goto LAB_0086bc2c;
    }
  }
  uVar5 = 1;
LAB_0086bc2c:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


