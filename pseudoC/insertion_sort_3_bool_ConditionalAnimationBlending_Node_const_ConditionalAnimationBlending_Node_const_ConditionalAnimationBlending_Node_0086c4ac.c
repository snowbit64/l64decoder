// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_3<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
// Entry Point: 0086c4ac
// Size: 488 bytes
// Signature: void __cdecl __insertion_sort_3<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>(Node * param_1, Node * param_2, _func_bool_Node_ptr_Node_ptr * param_3)


/* void std::__ndk1::__insertion_sort_3<bool (*&)(ConditionalAnimationBlending::Node const&,
   ConditionalAnimationBlending::Node const&),
   ConditionalAnimationBlending::Node*>(ConditionalAnimationBlending::Node*,
   ConditionalAnimationBlending::Node*, bool (*&)(ConditionalAnimationBlending::Node const&,
   ConditionalAnimationBlending::Node const&)) */

void std::__ndk1::
     __insertion_sort_3<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
               (Node *param_1,Node *param_2,_func_bool_Node_ptr_Node_ptr *param_3)

{
  Node *pNVar1;
  undefined8 *puVar2;
  Node NVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  Node *pNVar10;
  undefined8 uVar11;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  __sort3<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
            (param_1,param_1 + 0x38,param_1 + 0x70,param_3);
  if (param_1 + 0xa8 != param_2) {
    lVar9 = 0;
    puVar2 = (undefined8 *)(param_1 + 0xa8);
    puVar7 = (undefined8 *)(param_1 + 0x70);
    do {
      puVar6 = puVar2;
      uVar5 = (**(code **)param_3)(puVar6,puVar7);
      if ((uVar5 & 1) != 0) {
        local_90 = puVar6[2];
        uStack_98 = puVar6[1];
        local_a0 = *puVar6;
        puVar6[1] = 0;
        puVar6[2] = 0;
        local_78 = puVar6[5];
        local_88 = (undefined5)puVar6[3];
        uStack_83 = (undefined3)*(undefined8 *)((long)puVar6 + 0x1d);
        uStack_80 = (undefined5)((ulong)*(undefined8 *)((long)puVar6 + 0x1d) >> 0x18);
        local_70 = *(undefined4 *)(puVar6 + 6);
        *puVar6 = 0;
        pNVar10 = param_1 + lVar9;
        lVar8 = lVar9;
        while( true ) {
          uVar11 = *(undefined8 *)(pNVar10 + 0x70);
          *(undefined2 *)(pNVar10 + 0x70) = 0;
          *(undefined8 *)(pNVar10 + 0xb8) = *(undefined8 *)(pNVar10 + 0x80);
          *(undefined8 *)(pNVar10 + 0xb0) = *(undefined8 *)(pNVar10 + 0x78);
          *(undefined8 *)(pNVar10 + 0xa8) = uVar11;
          *(undefined8 *)(pNVar10 + 0xc0) = *(undefined8 *)(pNVar10 + 0x88);
          *(undefined8 *)(pNVar10 + 0xc5) = *(undefined8 *)(pNVar10 + 0x8d);
          *(undefined8 *)(pNVar10 + 0xd0) = *(undefined8 *)(pNVar10 + 0x98);
          *(undefined4 *)(pNVar10 + 0xd8) = *(undefined4 *)(pNVar10 + 0xa0);
          if (lVar8 == -0x70) break;
                    /* try { // try from 0086c610 to 0086c617 has its CatchHandler @ 0086c694 */
          uVar5 = (**(code **)param_3)(&local_a0,param_1 + lVar8 + 0x38);
          if ((uVar5 & 1) == 0) {
            puVar2 = (undefined8 *)(param_1 + lVar8 + 0x70);
            NVar3 = *(Node *)puVar2;
            goto joined_r0x0086c63c;
          }
          pNVar1 = pNVar10 + 0x70;
          lVar8 = lVar8 + -0x38;
          pNVar10 = param_1 + lVar8;
          if (((byte)*pNVar1 & 1) != 0) {
            operator_delete(*(void **)(pNVar10 + 0xb8));
          }
        }
        NVar3 = *param_1;
        puVar2 = (undefined8 *)param_1;
joined_r0x0086c63c:
        if (((byte)NVar3 & 1) != 0) {
          operator_delete((void *)puVar2[2]);
        }
        puVar2[2] = local_90;
        puVar2[1] = uStack_98;
        *puVar2 = local_a0;
        *(ulong *)(param_1 + lVar8 + 0x88) = CONCAT35(uStack_83,local_88);
        *(ulong *)(param_1 + lVar8 + 0x8d) = CONCAT53(uStack_80,uStack_83);
        *(undefined8 *)(param_1 + lVar8 + 0x98) = local_78;
        *(undefined4 *)(param_1 + lVar8 + 0xa0) = local_70;
      }
      lVar9 = lVar9 + 0x38;
      puVar2 = puVar6 + 7;
      puVar7 = puVar6;
    } while (puVar6 + 7 != (undefined8 *)param_2);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


