// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
// Entry Point: 0086bc60
// Size: 928 bytes
// Signature: uint __cdecl __sort4<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>(Node * param_1, Node * param_2, Node * param_3, Node * param_4, _func_bool_Node_ptr_Node_ptr * param_5)


/* unsigned int std::__ndk1::__sort4<bool (*&)(ConditionalAnimationBlending::Node const&,
   ConditionalAnimationBlending::Node const&),
   ConditionalAnimationBlending::Node*>(ConditionalAnimationBlending::Node*,
   ConditionalAnimationBlending::Node*, ConditionalAnimationBlending::Node*,
   ConditionalAnimationBlending::Node*, bool (*&)(ConditionalAnimationBlending::Node const&,
   ConditionalAnimationBlending::Node const&)) */

uint std::__ndk1::
     __sort4<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
               (Node *param_1,Node *param_2,Node *param_3,Node *param_4,
               _func_bool_Node_ptr_Node_ptr *param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  Node NVar3;
  Node NVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
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
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar6 = __sort3<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
                    (param_1,param_2,param_3,param_5);
  uVar7 = (**(code **)param_5)(param_4,param_3);
  if ((uVar7 & 1) != 0) {
    NVar3 = *param_3;
    NVar4 = param_3[1];
    uVar10 = *(undefined8 *)(param_3 + 0x1d);
    uVar8 = *(undefined8 *)(param_3 + 8);
    uVar1 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    local_8d = *(undefined4 *)(param_3 + 0x30);
    uVar15 = *(undefined8 *)param_4;
    local_78 = (undefined6)*(undefined8 *)(param_3 + 2);
    uVar9 = *(undefined8 *)(param_4 + 0x10);
    uStack_72 = (undefined2)uVar8;
    uStack_70 = (undefined6)((ulong)uVar8 >> 0x10);
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)param_3 = uVar15;
    *(undefined8 *)(param_3 + 0x10) = uVar9;
    uVar8 = *(undefined8 *)(param_4 + 0x1d);
    puVar13 = (undefined8 *)(param_3 + 0x18);
    uVar9 = *puVar13;
    puVar14 = (undefined8 *)(param_3 + 0x28);
    local_95 = *puVar14;
    *(undefined2 *)param_4 = 0;
    *puVar13 = *(undefined8 *)(param_4 + 0x18);
    *(undefined8 *)(param_3 + 0x1d) = uVar8;
    local_88 = (undefined5)uVar9;
    uVar8 = *(undefined8 *)(param_4 + 0x28);
    uStack_83 = (undefined3)uVar10;
    uStack_80 = (undefined5)((ulong)uVar10 >> 0x18);
    *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_4 + 0x30);
    *puVar14 = uVar8;
    if (((byte)*param_4 & 1) != 0) {
      operator_delete(*(void **)(param_4 + 0x10));
    }
    *param_4 = NVar3;
    param_4[1] = NVar4;
    *(ulong *)(param_4 + 2) = CONCAT26(uStack_72,local_78);
    *(ulong *)(param_4 + 8) = CONCAT62(uStack_70,uStack_72);
    *(undefined8 *)(param_4 + 0x10) = uVar1;
    uVar8 = *(undefined8 *)((ulong)auStack_98 | 3);
    *(ulong *)(param_4 + 0x18) = CONCAT35(uStack_83,local_88);
    uVar2 = *(undefined4 *)((undefined8 *)((ulong)auStack_98 | 3) + 1);
    *(ulong *)(param_4 + 0x1d) = CONCAT53(uStack_80,uStack_83);
    *(undefined8 *)(param_4 + 0x28) = uVar8;
    *(undefined4 *)(param_4 + 0x30) = uVar2;
    uVar7 = (**(code **)param_5)(param_3,param_2);
    if ((uVar7 & 1) == 0) {
      uVar6 = uVar6 + 1;
    }
    else {
      NVar3 = *param_2;
      NVar4 = param_2[1];
      uVar10 = *(undefined8 *)(param_2 + 0x1d);
      local_8d = *(undefined4 *)(param_2 + 0x30);
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar1 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)param_2 = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      uVar15 = *(undefined8 *)param_3;
      local_78 = (undefined6)*(undefined8 *)(param_2 + 2);
      uVar9 = *(undefined8 *)(param_3 + 0x10);
      uStack_72 = (undefined2)uVar8;
      uStack_70 = (undefined6)((ulong)uVar8 >> 0x10);
      puVar11 = (undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_2 = uVar15;
      *(undefined8 *)(param_2 + 0x10) = uVar9;
      uVar8 = *(undefined8 *)(param_3 + 0x1d);
      local_88 = (undefined5)*puVar11;
      puVar12 = (undefined8 *)(param_2 + 0x28);
      local_95 = *puVar12;
      *(undefined2 *)param_3 = 0;
      *puVar11 = *puVar13;
      *(undefined8 *)(param_2 + 0x1d) = uVar8;
      uStack_83 = (undefined3)uVar10;
      uStack_80 = (undefined5)((ulong)uVar10 >> 0x18);
      uVar8 = *puVar14;
      *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
      *puVar12 = uVar8;
      if (((byte)*param_3 & 1) != 0) {
        operator_delete(*(void **)(param_3 + 0x10));
      }
      *param_3 = NVar3;
      param_3[1] = NVar4;
      *(undefined8 *)(param_3 + 0x10) = uVar1;
      *(ulong *)(param_3 + 2) = CONCAT26(uStack_72,local_78);
      *(ulong *)(param_3 + 8) = CONCAT62(uStack_70,uStack_72);
      uVar8 = *(undefined8 *)((ulong)auStack_98 | 3);
      *puVar13 = CONCAT35(uStack_83,local_88);
      uVar2 = *(undefined4 *)((undefined8 *)((ulong)auStack_98 | 3) + 1);
      *(ulong *)(param_3 + 0x1d) = CONCAT53(uStack_80,uStack_83);
      *puVar14 = uVar8;
      *(undefined4 *)(param_3 + 0x30) = uVar2;
      uVar7 = (**(code **)param_5)(param_2,param_1);
      if ((uVar7 & 1) == 0) {
        uVar6 = uVar6 + 2;
      }
      else {
        NVar3 = *param_1;
        NVar4 = param_1[1];
        uVar8 = *(undefined8 *)(param_1 + 8);
        uVar1 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)param_1 = 0;
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        uVar10 = *(undefined8 *)param_2;
        local_78 = (undefined6)*(undefined8 *)(param_1 + 2);
        uVar9 = *(undefined8 *)(param_2 + 0x10);
        uStack_72 = (undefined2)uVar8;
        uStack_70 = (undefined6)((ulong)uVar8 >> 0x10);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)param_1 = uVar10;
        *(undefined8 *)(param_1 + 0x10) = uVar9;
        local_95 = *(undefined8 *)(param_1 + 0x28);
        local_88 = (undefined5)*(undefined8 *)(param_1 + 0x18);
        uVar8 = *(undefined8 *)(param_2 + 0x1d);
        uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
        uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
        local_8d = *(undefined4 *)(param_1 + 0x30);
        *(undefined2 *)param_2 = 0;
        *(undefined8 *)(param_1 + 0x18) = *puVar11;
        *(undefined8 *)(param_1 + 0x1d) = uVar8;
        uVar8 = *puVar12;
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
        *(undefined8 *)(param_1 + 0x28) = uVar8;
        if (((byte)*param_2 & 1) != 0) {
          operator_delete(*(void **)(param_2 + 0x10));
        }
        uVar6 = uVar6 + 3;
        *param_2 = NVar3;
        param_2[1] = NVar4;
        *(undefined8 *)(param_2 + 0x10) = uVar1;
        *(ulong *)(param_2 + 2) = CONCAT26(uStack_72,local_78);
        *(ulong *)(param_2 + 8) = CONCAT62(uStack_70,uStack_72);
        uVar8 = *(undefined8 *)((ulong)auStack_98 | 3);
        *puVar11 = CONCAT35(uStack_83,local_88);
        uVar2 = *(undefined4 *)((undefined8 *)((ulong)auStack_98 | 3) + 1);
        *(ulong *)(param_2 + 0x1d) = CONCAT53(uStack_80,uStack_83);
        *puVar12 = uVar8;
        *(undefined4 *)(param_2 + 0x30) = uVar2;
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


