// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
// Entry Point: 0086ae18
// Size: 2336 bytes
// Signature: void __cdecl __sort<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>(Node * param_1, Node * param_2, _func_bool_Node_ptr_Node_ptr * param_3)


/* void std::__ndk1::__sort<bool (*&)(ConditionalAnimationBlending::Node const&,
   ConditionalAnimationBlending::Node const&),
   ConditionalAnimationBlending::Node*>(ConditionalAnimationBlending::Node*,
   ConditionalAnimationBlending::Node*, bool (*&)(ConditionalAnimationBlending::Node const&,
   ConditionalAnimationBlending::Node const&)) */

void std::__ndk1::
     __sort<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
               (Node *param_1,Node *param_2,_func_bool_Node_ptr_Node_ptr *param_3)

{
  undefined4 uVar1;
  undefined uVar2;
  undefined uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 *local_c0;
  undefined auStack_98 [3];
  undefined8 local_95;
  undefined4 local_8d;
  undefined5 uStack_88;
  undefined3 local_83;
  undefined5 uStack_80;
  undefined6 uStack_78;
  undefined2 local_72;
  undefined6 uStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar11 = (undefined8 *)((ulong)auStack_98 | 3);
  local_c0 = (undefined8 *)param_2;
LAB_0086ae5c:
  puVar12 = local_c0 + -7;
  puVar14 = (undefined8 *)param_1;
LAB_0086ae80:
  param_1 = (Node *)puVar14;
  uVar9 = (long)local_c0 - (long)param_1;
  switch(((long)uVar9 >> 3) * 0x6db6db6db6db6db7) {
  case 0:
  case 1:
    goto switchD_0086b5ac_caseD_0;
  case 2:
    uVar9 = (**(code **)param_3)(puVar12,param_1);
    if ((uVar9 & 1) != 0) {
      uVar13 = *(undefined8 *)((long)param_1 + 0x10);
      *(undefined8 *)((long)param_1 + 0x10) = 0;
      uVar2 = *param_1;
      uVar3 = *(undefined *)((long)param_1 + 1);
      uStack_70 = (undefined6)((ulong)*(undefined8 *)((long)param_1 + 8) >> 0x10);
      uStack_78 = (undefined6)*(undefined8 *)((long)param_1 + 2);
      local_72 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 2) >> 0x30);
      *(undefined8 *)param_1 = 0;
      *(undefined8 *)((long)param_1 + 8) = 0;
      local_8d = *(undefined4 *)((long)param_1 + 0x30);
      uStack_80 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x1d) >> 0x18);
      local_95 = *(undefined8 *)((long)param_1 + 0x28);
      uStack_88 = (undefined5)*(undefined8 *)((long)param_1 + 0x18);
      local_83 = (undefined3)((ulong)*(undefined8 *)((long)param_1 + 0x18) >> 0x28);
      uVar21 = *puVar12;
      uVar10 = local_c0[-5];
      *(undefined8 *)((long)param_1 + 8) = local_c0[-6];
      *(undefined8 *)param_1 = uVar21;
      *(undefined8 *)((long)param_1 + 0x10) = uVar10;
      *(undefined2 *)(local_c0 + -7) = 0;
      uVar10 = local_c0[-4];
      *(undefined8 *)((long)param_1 + 0x1d) = *(undefined8 *)((long)local_c0 + -0x1b);
      *(undefined8 *)((long)param_1 + 0x18) = uVar10;
      uVar1 = *(undefined4 *)(local_c0 + -1);
      *(undefined8 *)((long)param_1 + 0x28) = local_c0[-2];
      *(undefined4 *)((long)param_1 + 0x30) = uVar1;
      if ((*(byte *)(local_c0 + -7) & 1) != 0) {
        operator_delete((void *)local_c0[-5]);
      }
      *(undefined *)(local_c0 + -7) = uVar2;
      *(undefined *)((long)local_c0 + -0x37) = uVar3;
      local_c0[-5] = uVar13;
      local_c0[-6] = CONCAT62(uStack_70,local_72);
      *(ulong *)((long)local_c0 + -0x36) = CONCAT26(local_72,uStack_78);
      *(ulong *)((long)local_c0 + -0x1b) = CONCAT53(uStack_80,local_83);
      local_c0[-4] = CONCAT35(local_83,uStack_88);
      uVar13 = *(undefined8 *)((ulong)auStack_98 | 3);
      *(undefined4 *)(local_c0 + -1) = *(undefined4 *)((undefined8 *)((ulong)auStack_98 | 3) + 1);
      local_c0[-2] = uVar13;
    }
    goto switchD_0086b5ac_caseD_0;
  case 3:
    __sort3<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
              (param_1,(Node *)((long)param_1 + 0x38),(Node *)puVar12,param_3);
    goto switchD_0086b5ac_caseD_0;
  case 4:
    __sort4<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
              (param_1,(Node *)((long)param_1 + 0x38),(Node *)((long)param_1 + 0x70),(Node *)puVar12
               ,param_3);
    goto switchD_0086b5ac_caseD_0;
  case 5:
    FUN_0086c000(param_1,(undefined8 *)((long)param_1 + 0x38),(undefined8 *)((long)param_1 + 0x70),
                 (undefined8 *)((long)param_1 + 0xa8),puVar12,param_3);
    goto switchD_0086b5ac_caseD_0;
  }
  if ((long)uVar9 < 0x188) {
    __insertion_sort_3<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
              (param_1,(Node *)local_c0,param_3);
    goto switchD_0086b5ac_caseD_0;
  }
  if (uVar9 < 0xda89) {
    puVar14 = (undefined8 *)((long)param_1 + (ulong)(((uint)uVar9 >> 4 & 0xfff) / 7) * 7 * 8);
    uVar8 = __sort3<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
                      (param_1,(Node *)puVar14,(Node *)puVar12,param_3);
  }
  else {
    puVar14 = (undefined8 *)((long)param_1 + (uVar9 / 0x70) * 7 * 8);
    uVar8 = FUN_0086c000(param_1,(undefined8 *)((long)param_1 + (uVar9 / 0xe0) * 7 * 8),puVar14,
                         puVar14 + (uVar9 / 0xe0) * 7,puVar12,param_3);
  }
  uVar9 = (**(code **)param_3)(param_1,puVar14);
  puVar18 = puVar12;
  if ((uVar9 & 1) == 0) {
    do {
      puVar16 = puVar18;
      puVar18 = puVar16 + -7;
      if (puVar18 == (undefined8 *)param_1) {
        puVar18 = (undefined8 *)((long)param_1 + 0x38);
        uVar9 = (**(code **)param_3)(param_1,puVar12);
        if ((uVar9 & 1) != 0) goto LAB_0086b458;
        if (puVar18 == puVar12) goto switchD_0086b5ac_caseD_0;
        lVar15 = 0;
        goto LAB_0086b330;
      }
      uVar9 = (**(code **)param_3)(puVar18,puVar14);
    } while ((uVar9 & 1) == 0);
    uVar13 = *(undefined8 *)((long)param_1 + 0x10);
    *(undefined8 *)((long)param_1 + 0x10) = 0;
    uVar2 = *param_1;
    uVar3 = *(undefined *)((long)param_1 + 1);
    uStack_70 = (undefined6)((ulong)*(undefined8 *)((long)param_1 + 8) >> 0x10);
    uStack_78 = (undefined6)*(undefined8 *)((long)param_1 + 2);
    local_72 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 2) >> 0x30);
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((long)param_1 + 8) = 0;
    uStack_80 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x1d) >> 0x18);
    uVar10 = *(undefined8 *)((long)param_1 + 0x28);
    uStack_88 = (undefined5)*(undefined8 *)((long)param_1 + 0x18);
    local_83 = (undefined3)((ulong)*(undefined8 *)((long)param_1 + 0x18) >> 0x28);
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)((long)param_1 + 0x30);
    *puVar11 = uVar10;
    uVar21 = puVar16[-6];
    uVar10 = *puVar18;
    *(undefined8 *)((long)param_1 + 0x10) = puVar16[-5];
    *(undefined8 *)((long)param_1 + 8) = uVar21;
    *(undefined8 *)param_1 = uVar10;
    *(undefined2 *)puVar18 = 0;
    uVar10 = puVar16[-4];
    *(undefined8 *)((long)param_1 + 0x1d) = *(undefined8 *)((long)puVar16 + -0x1b);
    *(undefined8 *)((long)param_1 + 0x18) = uVar10;
    uVar10 = puVar16[-2];
    *(undefined4 *)((long)param_1 + 0x30) = *(undefined4 *)(puVar16 + -1);
    *(undefined8 *)((long)param_1 + 0x28) = uVar10;
    if ((*(byte *)puVar18 & 1) != 0) {
      operator_delete((void *)puVar16[-5]);
    }
    *(undefined *)puVar18 = uVar2;
    *(undefined *)((long)puVar16 + -0x37) = uVar3;
    uVar8 = uVar8 + 1;
    puVar16[-6] = CONCAT62(uStack_70,local_72);
    puVar16[-5] = uVar13;
    *(ulong *)((long)puVar16 + -0x36) = CONCAT26(local_72,uStack_78);
    *(ulong *)((long)puVar16 + -0x1b) = CONCAT53(uStack_80,local_83);
    puVar16[-4] = CONCAT35(local_83,uStack_88);
    uVar13 = *puVar11;
    *(undefined4 *)(puVar16 + -1) = *(undefined4 *)(puVar11 + 1);
    puVar16[-2] = uVar13;
  }
  puVar16 = (undefined8 *)((long)param_1 + 0x38);
  if (puVar16 < puVar18) {
    while( true ) {
      puVar20 = puVar16 + -7;
      do {
        puVar17 = puVar20;
        puVar20 = puVar17 + 7;
        uVar9 = (**(code **)param_3)(puVar20,puVar14);
      } while ((uVar9 & 1) != 0);
      puVar16 = puVar17 + 0xe;
      do {
        puVar19 = puVar18;
        puVar18 = puVar19 + -7;
        uVar9 = (**(code **)param_3)(puVar18,puVar14);
      } while ((uVar9 & 1) == 0);
      if (puVar18 < puVar20) break;
      uVar2 = *(undefined *)puVar20;
      uVar3 = *(undefined *)((long)puVar17 + 0x39);
      uStack_70 = (undefined6)((ulong)puVar17[8] >> 0x10);
      uStack_78 = (undefined6)*(undefined8 *)((long)puVar17 + 0x3a);
      local_72 = (undefined2)((ulong)*(undefined8 *)((long)puVar17 + 0x3a) >> 0x30);
      uVar13 = puVar17[9];
      *puVar20 = 0;
      puVar17[8] = 0;
      puVar17[9] = 0;
      uStack_88 = (undefined5)puVar17[10];
      local_83 = (undefined3)*(undefined8 *)((long)puVar17 + 0x55);
      uStack_80 = (undefined5)((ulong)*(undefined8 *)((long)puVar17 + 0x55) >> 0x18);
      uVar10 = puVar17[0xc];
      *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar17 + 0xd);
      *puVar11 = uVar10;
      uVar21 = puVar19[-6];
      uVar10 = *puVar18;
      puVar17[9] = puVar19[-5];
      puVar17[8] = uVar21;
      *puVar20 = uVar10;
      *(undefined2 *)puVar18 = 0;
      uVar10 = puVar19[-4];
      *(undefined8 *)((long)puVar17 + 0x55) = *(undefined8 *)((long)puVar19 + -0x1b);
      puVar17[10] = uVar10;
      uVar10 = puVar19[-2];
      *(undefined4 *)(puVar17 + 0xd) = *(undefined4 *)(puVar19 + -1);
      puVar17[0xc] = uVar10;
      if ((*(byte *)puVar18 & 1) != 0) {
        operator_delete((void *)puVar19[-5]);
      }
      *(undefined *)puVar18 = uVar2;
      *(undefined *)((long)puVar19 + -0x37) = uVar3;
      puVar17 = puVar18;
      if (puVar20 != puVar14) {
        puVar17 = puVar14;
      }
      puVar19[-6] = CONCAT62(uStack_70,local_72);
      puVar19[-5] = uVar13;
      *(ulong *)((long)puVar19 + -0x36) = CONCAT26(local_72,uStack_78);
      *(ulong *)((long)puVar19 + -0x1b) = CONCAT53(uStack_80,local_83);
      puVar19[-4] = CONCAT35(local_83,uStack_88);
      uVar13 = *puVar11;
      uVar8 = uVar8 + 1;
      *(undefined4 *)(puVar19 + -1) = *(undefined4 *)(puVar11 + 1);
      puVar19[-2] = uVar13;
      puVar14 = puVar17;
    }
    puVar16 = puVar20;
    if (puVar20 != puVar14) goto LAB_0086b1a4;
  }
  else {
    puVar20 = puVar16;
    if (puVar16 != puVar14) {
LAB_0086b1a4:
      uVar9 = (**(code **)param_3)(puVar14,puVar20);
      puVar16 = puVar20;
      if ((uVar9 & 1) != 0) {
        uVar13 = puVar20[2];
        puVar20[2] = 0;
        uVar2 = *(undefined *)puVar20;
        uVar3 = *(undefined *)((long)puVar20 + 1);
        uStack_70 = (undefined6)((ulong)puVar20[1] >> 0x10);
        uStack_78 = (undefined6)*(undefined8 *)((long)puVar20 + 2);
        local_72 = (undefined2)((ulong)*(undefined8 *)((long)puVar20 + 2) >> 0x30);
        *puVar20 = 0;
        puVar20[1] = 0;
        uStack_80 = (undefined5)((ulong)*(undefined8 *)((long)puVar20 + 0x1d) >> 0x18);
        uVar10 = puVar20[5];
        uStack_88 = (undefined5)puVar20[3];
        local_83 = (undefined3)((ulong)puVar20[3] >> 0x28);
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar20 + 6);
        *puVar11 = uVar10;
        uVar21 = puVar14[1];
        uVar10 = *puVar14;
        puVar20[2] = puVar14[2];
        puVar20[1] = uVar21;
        *puVar20 = uVar10;
        *(undefined2 *)puVar14 = 0;
        uVar10 = puVar14[3];
        *(undefined8 *)((long)puVar20 + 0x1d) = *(undefined8 *)((long)puVar14 + 0x1d);
        puVar20[3] = uVar10;
        uVar10 = puVar14[5];
        *(undefined4 *)(puVar20 + 6) = *(undefined4 *)(puVar14 + 6);
        puVar20[5] = uVar10;
        if ((*(byte *)puVar14 & 1) != 0) {
          operator_delete((void *)puVar14[2]);
        }
        *(undefined *)puVar14 = uVar2;
        *(undefined *)((long)puVar14 + 1) = uVar3;
        uVar8 = uVar8 + 1;
        puVar14[1] = CONCAT62(uStack_70,local_72);
        puVar14[2] = uVar13;
        *(ulong *)((long)puVar14 + 2) = CONCAT26(local_72,uStack_78);
        uVar13 = *puVar11;
        uVar1 = *(undefined4 *)(puVar11 + 1);
        puVar14[3] = CONCAT35(local_83,uStack_88);
        *(ulong *)((long)puVar14 + 0x1d) = CONCAT53(uStack_80,local_83);
        puVar14[5] = uVar13;
        *(undefined4 *)(puVar14 + 6) = uVar1;
      }
    }
  }
  if (uVar8 == 0) {
    bVar6 = __insertion_sort_incomplete<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
                      (param_1,(Node *)puVar16,param_3);
    bVar7 = __insertion_sort_incomplete<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
                      ((Node *)(puVar16 + 7),(Node *)local_c0,param_3);
    if (bVar7) goto LAB_0086b58c;
    puVar14 = puVar16 + 7;
    if (bVar6) goto LAB_0086ae80;
  }
  if (((long)local_c0 - (long)puVar16 >> 3) * 0x6db6db6db6db6db7 <=
      ((long)puVar16 - (long)param_1 >> 3) * 0x6db6db6db6db6db7) {
    __sort<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
              ((Node *)(puVar16 + 7),(Node *)local_c0,param_3);
    local_c0 = puVar16;
    goto LAB_0086ae5c;
  }
  __sort<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
            (param_1,(Node *)puVar16,param_3);
  puVar14 = puVar16 + 7;
  goto LAB_0086ae80;
LAB_0086b330:
  uVar9 = (**(code **)param_3)(param_1,(long)param_1 + lVar15 + 0x38);
  if ((uVar9 & 1) != 0) goto LAB_0086b364;
  lVar5 = lVar15 + 0x70;
  lVar15 = lVar15 + 0x38;
  if ((undefined8 *)((long)param_1 + lVar5) == puVar12) goto switchD_0086b5ac_caseD_0;
  goto LAB_0086b330;
LAB_0086b364:
  uVar13 = *(undefined8 *)((long)param_1 + lVar15 + 0x3a);
  uVar2 = *(undefined *)((long)param_1 + lVar15 + 0x38);
  uVar3 = *(undefined *)((long)param_1 + lVar15 + 0x39);
  uStack_70 = (undefined6)((ulong)*(undefined8 *)((long)param_1 + lVar15 + 0x40) >> 0x10);
  uStack_78 = (undefined6)uVar13;
  local_72 = (undefined2)((ulong)uVar13 >> 0x30);
  uVar13 = *(undefined8 *)((long)param_1 + lVar15 + 0x48);
  *(undefined8 *)((long)param_1 + lVar15 + 0x38) = 0;
  *(undefined8 *)((long)param_1 + lVar15 + 0x40) = 0;
  uVar10 = *(undefined8 *)((long)param_1 + lVar15 + 0x55);
  *(undefined8 *)((long)param_1 + lVar15 + 0x48) = 0;
  uStack_88 = (undefined5)*(undefined8 *)((long)param_1 + lVar15 + 0x50);
  local_83 = (undefined3)uVar10;
  uStack_80 = (undefined5)((ulong)uVar10 >> 0x18);
  uVar10 = *(undefined8 *)((long)param_1 + lVar15 + 0x60);
  *(undefined4 *)(puVar11 + 1) = *(undefined4 *)((long)param_1 + lVar15 + 0x68);
  *puVar11 = uVar10;
  uVar21 = local_c0[-6];
  uVar10 = *puVar12;
  *(undefined8 *)((long)param_1 + lVar15 + 0x48) = local_c0[-5];
  *(undefined8 *)((long)param_1 + lVar15 + 0x40) = uVar21;
  *(undefined8 *)((long)param_1 + lVar15 + 0x38) = uVar10;
  *(undefined2 *)puVar12 = 0;
  uVar10 = local_c0[-4];
  *(undefined8 *)((long)param_1 + lVar15 + 0x55) = *(undefined8 *)((long)local_c0 + -0x1b);
  *(undefined8 *)((long)param_1 + lVar15 + 0x50) = uVar10;
  uVar10 = local_c0[-2];
  *(undefined4 *)((long)param_1 + lVar15 + 0x68) = *(undefined4 *)(local_c0 + -1);
  *(undefined8 *)((long)param_1 + lVar15 + 0x60) = uVar10;
  if ((*(byte *)puVar12 & 1) != 0) {
    operator_delete((void *)local_c0[-5]);
  }
  *(undefined *)(local_c0 + -7) = uVar2;
  *(undefined *)((long)local_c0 + -0x37) = uVar3;
  local_c0[-5] = uVar13;
  local_c0[-6] = CONCAT62(uStack_70,local_72);
  *(ulong *)((long)local_c0 + -0x36) = CONCAT26(local_72,uStack_78);
  *(ulong *)((long)local_c0 + -0x1b) = CONCAT53(uStack_80,local_83);
  local_c0[-4] = CONCAT35(local_83,uStack_88);
  puVar18 = (undefined8 *)((long)param_1 + lVar15 + 0x70);
  uVar13 = *puVar11;
  *(undefined4 *)(local_c0 + -1) = *(undefined4 *)(puVar11 + 1);
  local_c0[-2] = uVar13;
LAB_0086b458:
  puVar16 = puVar12;
  if (puVar18 == puVar12) goto switchD_0086b5ac_caseD_0;
  while( true ) {
    puVar14 = puVar18 + -7;
    do {
      puVar20 = puVar14;
      puVar14 = puVar20 + 7;
      uVar9 = (**(code **)param_3)(param_1,puVar14);
    } while ((uVar9 & 1) == 0);
    puVar18 = puVar20 + 0xe;
    do {
      puVar17 = puVar16;
      puVar16 = puVar17 + -7;
      uVar9 = (**(code **)param_3)(param_1,puVar16);
    } while ((uVar9 & 1) != 0);
    if (puVar16 <= puVar14) break;
    uVar2 = *(undefined *)puVar14;
    uVar3 = *(undefined *)((long)puVar20 + 0x39);
    uStack_70 = (undefined6)((ulong)puVar20[8] >> 0x10);
    uStack_78 = (undefined6)*(undefined8 *)((long)puVar20 + 0x3a);
    local_72 = (undefined2)((ulong)*(undefined8 *)((long)puVar20 + 0x3a) >> 0x30);
    uVar13 = puVar20[9];
    *puVar14 = 0;
    puVar20[8] = 0;
    puVar20[9] = 0;
    uStack_88 = (undefined5)puVar20[10];
    local_83 = (undefined3)*(undefined8 *)((long)puVar20 + 0x55);
    uStack_80 = (undefined5)((ulong)*(undefined8 *)((long)puVar20 + 0x55) >> 0x18);
    uVar10 = puVar20[0xc];
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar20 + 0xd);
    *puVar11 = uVar10;
    uVar21 = puVar17[-6];
    uVar10 = *puVar16;
    puVar20[9] = puVar17[-5];
    puVar20[8] = uVar21;
    *puVar14 = uVar10;
    *(undefined2 *)puVar16 = 0;
    uVar10 = puVar17[-4];
    *(undefined8 *)((long)puVar20 + 0x55) = *(undefined8 *)((long)puVar17 + -0x1b);
    puVar20[10] = uVar10;
    uVar10 = puVar17[-2];
    *(undefined4 *)(puVar20 + 0xd) = *(undefined4 *)(puVar17 + -1);
    puVar20[0xc] = uVar10;
    if ((*(byte *)puVar16 & 1) != 0) {
      operator_delete((void *)puVar17[-5]);
    }
    *(undefined *)puVar16 = uVar2;
    *(undefined *)((long)puVar17 + -0x37) = uVar3;
    puVar17[-6] = CONCAT62(uStack_70,local_72);
    puVar17[-5] = uVar13;
    *(ulong *)((long)puVar17 + -0x36) = CONCAT26(local_72,uStack_78);
    *(ulong *)((long)puVar17 + -0x1b) = CONCAT53(uStack_80,local_83);
    puVar17[-4] = CONCAT35(local_83,uStack_88);
    uVar13 = *puVar11;
    *(undefined4 *)(puVar17 + -1) = *(undefined4 *)(puVar11 + 1);
    puVar17[-2] = uVar13;
  }
  goto LAB_0086ae80;
LAB_0086b58c:
  local_c0 = puVar16;
  if (bVar6) {
switchD_0086b5ac_caseD_0:
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_0086ae5c;
}


