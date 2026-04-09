// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
// Entry Point: 0086c6b0
// Size: 932 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>(Node * param_1, Node * param_2, _func_bool_Node_ptr_Node_ptr * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<bool (*&)(ConditionalAnimationBlending::Node
   const&, ConditionalAnimationBlending::Node const&),
   ConditionalAnimationBlending::Node*>(ConditionalAnimationBlending::Node*,
   ConditionalAnimationBlending::Node*, bool (*&)(ConditionalAnimationBlending::Node const&,
   ConditionalAnimationBlending::Node const&)) */

bool std::__ndk1::
     __insertion_sort_incomplete<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
               (Node *param_1,Node *param_2,_func_bool_Node_ptr_Node_ptr *param_3)

{
  Node *pNVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  Node NVar5;
  Node NVar6;
  long lVar7;
  bool bVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  Node *pNVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  undefined3 local_c0;
  undefined5 uStack_bd;
  undefined3 uStack_b8;
  undefined4 uStack_b5;
  undefined uStack_b1;
  undefined8 local_b0;
  undefined5 local_a8;
  undefined3 uStack_a3;
  undefined5 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined6 local_78;
  undefined2 uStack_72;
  undefined6 uStack_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  uVar9 = ((long)param_2 - (long)param_1 >> 3) * 0x6db6db6db6db6db7;
  if (5 < uVar9) {
    __sort3<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
              (param_1,param_1 + 0x38,param_1 + 0x70,param_3);
    if (param_1 + 0xa8 != param_2) {
      lVar16 = 0;
      iVar17 = 0;
      puVar2 = (undefined8 *)(param_1 + 0xa8);
      puVar14 = (undefined8 *)(param_1 + 0x70);
      do {
        puVar10 = puVar2;
        uVar9 = (**(code **)param_3)(puVar10,puVar14);
        if ((uVar9 & 1) != 0) {
          local_b0 = puVar10[2];
          uVar12 = puVar10[1];
          puVar10[1] = 0;
          puVar10[2] = 0;
          local_98 = puVar10[5];
          local_a8 = (undefined5)puVar10[3];
          uStack_a3 = (undefined3)*(undefined8 *)((long)puVar10 + 0x1d);
          uStack_a0 = (undefined5)((ulong)*(undefined8 *)((long)puVar10 + 0x1d) >> 0x18);
          local_90 = *(undefined4 *)(puVar10 + 6);
          uStack_b8 = (undefined3)uVar12;
          uStack_b5 = (undefined4)((ulong)uVar12 >> 0x18);
          uStack_b1 = (undefined)((ulong)uVar12 >> 0x38);
          local_c0 = (undefined3)*puVar10;
          uStack_bd = (undefined5)((ulong)*puVar10 >> 0x18);
          *puVar10 = 0;
          pNVar15 = param_1 + lVar16;
          lVar18 = lVar16;
          while( true ) {
            uVar12 = *(undefined8 *)(pNVar15 + 0x70);
            *(undefined2 *)(pNVar15 + 0x70) = 0;
            *(undefined8 *)(pNVar15 + 0xb8) = *(undefined8 *)(pNVar15 + 0x80);
            *(undefined8 *)(pNVar15 + 0xb0) = *(undefined8 *)(pNVar15 + 0x78);
            *(undefined8 *)(pNVar15 + 0xa8) = uVar12;
            *(undefined8 *)(pNVar15 + 0xc0) = *(undefined8 *)(pNVar15 + 0x88);
            *(undefined8 *)(pNVar15 + 0xc5) = *(undefined8 *)(pNVar15 + 0x8d);
            *(undefined8 *)(pNVar15 + 0xd0) = *(undefined8 *)(pNVar15 + 0x98);
            *(undefined4 *)(pNVar15 + 0xd8) = *(undefined4 *)(pNVar15 + 0xa0);
            if (lVar18 == -0x70) break;
                    /* try { // try from 0086c97c to 0086c983 has its CatchHandler @ 0086ca54 */
            uVar9 = (**(code **)param_3)(&local_c0,param_1 + lVar18 + 0x38);
            if ((uVar9 & 1) == 0) {
              puVar2 = (undefined8 *)(param_1 + lVar18 + 0x70);
              NVar6 = *(Node *)puVar2;
              goto joined_r0x0086c9a8;
            }
            pNVar1 = pNVar15 + 0x70;
            lVar18 = lVar18 + -0x38;
            pNVar15 = param_1 + lVar18;
            if (((byte)*pNVar1 & 1) != 0) {
              operator_delete(*(void **)(pNVar15 + 0xb8));
            }
          }
          NVar6 = *param_1;
          puVar2 = (undefined8 *)param_1;
joined_r0x0086c9a8:
          if (((byte)NVar6 & 1) != 0) {
            operator_delete((void *)puVar2[2]);
          }
          iVar17 = iVar17 + 1;
          puVar2[2] = local_b0;
          puVar2[1] = CONCAT17(uStack_b1,CONCAT43(uStack_b5,uStack_b8));
          *puVar2 = CONCAT53(uStack_bd,local_c0);
          *(ulong *)(param_1 + lVar18 + 0x88) = CONCAT35(uStack_a3,local_a8);
          *(ulong *)(param_1 + lVar18 + 0x8d) = CONCAT53(uStack_a0,uStack_a3);
          *(undefined8 *)(param_1 + lVar18 + 0x98) = local_98;
          *(undefined4 *)(param_1 + lVar18 + 0xa0) = local_90;
          if (iVar17 == 8) {
            bVar8 = puVar10 + 7 == (undefined8 *)param_2;
            goto switchD_0086c724_caseD_0;
          }
        }
        lVar16 = lVar16 + 0x38;
        puVar2 = puVar10 + 7;
        puVar14 = puVar10;
      } while (puVar10 + 7 != (undefined8 *)param_2);
      bVar8 = true;
      goto switchD_0086c724_caseD_0;
    }
    goto LAB_0086ca00;
  }
  bVar8 = true;
  switch(uVar9) {
  case 2:
    uVar9 = (**(code **)param_3)(param_2 + -0x38,param_1);
    if ((uVar9 & 1) != 0) {
      NVar6 = *param_1;
      NVar5 = param_1[1];
      uVar12 = *(undefined8 *)(param_1 + 8);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      uVar13 = *(undefined8 *)(param_2 + -0x38);
      local_78 = (undefined6)*(undefined8 *)(param_1 + 2);
      uVar11 = *(undefined8 *)(param_2 + -0x28);
      uStack_72 = (undefined2)uVar12;
      uStack_70 = (undefined6)((ulong)uVar12 >> 0x10);
      uVar12 = *(undefined8 *)(param_1 + 0x1d);
      local_88 = (undefined5)*(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -0x30);
      *(undefined8 *)param_1 = uVar13;
      uVar13 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x10) = uVar11;
      uStack_b5 = *(undefined4 *)(param_1 + 0x30);
      *(undefined2 *)(param_2 + -0x38) = 0;
      uVar11 = *(undefined8 *)(param_2 + -0x20);
      uStack_83 = (undefined3)uVar12;
      uStack_80 = (undefined5)((ulong)uVar12 >> 0x18);
      *(undefined8 *)(param_1 + 0x1d) = *(undefined8 *)(param_2 + -0x1b);
      *(undefined8 *)(param_1 + 0x18) = uVar11;
      uVar4 = *(undefined4 *)(param_2 + -8);
      uStack_bd = (undefined5)uVar13;
      uStack_b8 = (undefined3)((ulong)uVar13 >> 0x28);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + -0x10);
      *(undefined4 *)(param_1 + 0x30) = uVar4;
      if (((byte)param_2[-0x38] & 1) != 0) {
        operator_delete(*(void **)(param_2 + -0x28));
      }
      param_2[-0x38] = NVar6;
      param_2[-0x37] = NVar5;
      uVar12 = *(undefined8 *)((ulong)&local_c0 | 3);
      *(undefined8 *)(param_2 + -0x28) = uVar3;
      *(ulong *)(param_2 + -0x36) = CONCAT26(uStack_72,local_78);
      *(ulong *)(param_2 + -0x30) = CONCAT62(uStack_70,uStack_72);
      bVar8 = true;
      *(undefined8 *)(param_2 + -0x10) = uVar12;
      *(ulong *)(param_2 + -0x20) = CONCAT35(uStack_83,local_88);
      uVar4 = *(undefined4 *)((undefined8 *)((ulong)&local_c0 | 3) + 1);
      *(ulong *)(param_2 + -0x1b) = CONCAT53(uStack_80,uStack_83);
      *(undefined4 *)(param_2 + -8) = uVar4;
      break;
    }
    goto LAB_0086ca00;
  case 3:
    __sort3<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
              (param_1,param_1 + 0x38,param_2 + -0x38,param_3);
    bVar8 = true;
    break;
  case 4:
    __sort4<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
              (param_1,param_1 + 0x38,param_1 + 0x70,param_2 + -0x38,param_3);
LAB_0086ca00:
    bVar8 = true;
    break;
  case 5:
    FUN_0086c000(param_1,param_1 + 0x38,param_1 + 0x70,param_1 + 0xa8,param_2 + -0x38,param_3);
    bVar8 = true;
  }
switchD_0086c724_caseD_0:
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar8;
}


