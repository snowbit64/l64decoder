// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0086c000
// Entry Point: 0086c000
// Size: 1196 bytes
// Signature: undefined FUN_0086c000(void)


uint FUN_0086c000(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,code **param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined uVar3;
  undefined uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
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
  uVar6 = std::__ndk1::
          __sort4<bool(*&)(ConditionalAnimationBlending::Node_const&,ConditionalAnimationBlending::Node_const&),ConditionalAnimationBlending::Node*>
                    ((Node *)param_1,(Node *)param_2,(Node *)param_3,(Node *)param_4,
                     (_func_bool_Node_ptr_Node_ptr *)param_6);
  uVar7 = (**param_6)(param_5,param_4);
  if ((uVar7 & 1) != 0) {
    uVar3 = *(undefined *)param_4;
    uVar4 = *(undefined *)((long)param_4 + 1);
    uVar8 = param_4[1];
    uVar1 = param_4[2];
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    uVar11 = *(undefined8 *)((long)param_4 + 0x1d);
    uVar16 = *param_5;
    local_78 = (undefined6)*(undefined8 *)((long)param_4 + 2);
    uVar10 = param_5[2];
    uStack_72 = (undefined2)uVar8;
    uStack_70 = (undefined6)((ulong)uVar8 >> 0x10);
    puVar15 = param_4 + 3;
    uVar9 = *puVar15;
    param_4[1] = param_5[1];
    *param_4 = uVar16;
    local_8d = *(undefined4 *)(param_4 + 6);
    param_4[2] = uVar10;
    uVar8 = *(undefined8 *)((long)param_5 + 0x1d);
    puVar14 = param_4 + 5;
    local_95 = *puVar14;
    *(undefined2 *)param_5 = 0;
    *puVar15 = param_5[3];
    *(undefined8 *)((long)param_4 + 0x1d) = uVar8;
    local_88 = (undefined5)uVar9;
    uVar8 = param_5[5];
    uStack_83 = (undefined3)uVar11;
    uStack_80 = (undefined5)((ulong)uVar11 >> 0x18);
    *(undefined4 *)(param_4 + 6) = *(undefined4 *)(param_5 + 6);
    *puVar14 = uVar8;
    if ((*(byte *)param_5 & 1) != 0) {
      operator_delete((void *)param_5[2]);
    }
    *(undefined *)param_5 = uVar3;
    *(undefined *)((long)param_5 + 1) = uVar4;
    *(ulong *)((long)param_5 + 2) = CONCAT26(uStack_72,local_78);
    param_5[1] = CONCAT62(uStack_70,uStack_72);
    param_5[2] = uVar1;
    uVar8 = *(undefined8 *)((ulong)auStack_98 | 3);
    param_5[3] = CONCAT35(uStack_83,local_88);
    uVar2 = *(undefined4 *)((undefined8 *)((ulong)auStack_98 | 3) + 1);
    *(ulong *)((long)param_5 + 0x1d) = CONCAT53(uStack_80,uStack_83);
    param_5[5] = uVar8;
    *(undefined4 *)(param_5 + 6) = uVar2;
    uVar7 = (**param_6)(param_4,param_3);
    if ((uVar7 & 1) == 0) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar3 = *(undefined *)param_3;
      uVar4 = *(undefined *)((long)param_3 + 1);
      local_8d = *(undefined4 *)(param_3 + 6);
      uVar8 = param_3[1];
      uVar1 = param_3[2];
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      uVar10 = *param_4;
      local_78 = (undefined6)*(undefined8 *)((long)param_3 + 2);
      uVar9 = param_4[2];
      uStack_72 = (undefined2)uVar8;
      uStack_70 = (undefined6)((ulong)uVar8 >> 0x10);
      puVar13 = param_3 + 3;
      param_3[1] = param_4[1];
      *param_3 = uVar10;
      param_3[2] = uVar9;
      local_88 = (undefined5)*puVar13;
      uVar8 = *(undefined8 *)((long)param_4 + 0x1d);
      uStack_83 = (undefined3)*(undefined8 *)((long)param_3 + 0x1d);
      uStack_80 = (undefined5)((ulong)*(undefined8 *)((long)param_3 + 0x1d) >> 0x18);
      puVar12 = param_3 + 5;
      local_95 = *puVar12;
      *(undefined2 *)param_4 = 0;
      *puVar13 = *puVar15;
      *(undefined8 *)((long)param_3 + 0x1d) = uVar8;
      uVar8 = *puVar14;
      *(undefined4 *)(param_3 + 6) = *(undefined4 *)(param_4 + 6);
      *puVar12 = uVar8;
      if ((*(byte *)param_4 & 1) != 0) {
        operator_delete((void *)param_4[2]);
      }
      *(undefined *)param_4 = uVar3;
      *(undefined *)((long)param_4 + 1) = uVar4;
      param_4[2] = uVar1;
      *(undefined8 *)((long)param_4 + 2) = CONCAT26(uStack_72,local_78);
      param_4[1] = CONCAT62(uStack_70,uStack_72);
      uVar8 = *(undefined8 *)((ulong)auStack_98 | 3);
      *puVar15 = CONCAT35(uStack_83,local_88);
      uVar2 = *(undefined4 *)((undefined8 *)((ulong)auStack_98 | 3) + 1);
      *(ulong *)((long)param_4 + 0x1d) = CONCAT53(uStack_80,uStack_83);
      *puVar14 = uVar8;
      *(undefined4 *)(param_4 + 6) = uVar2;
      uVar7 = (**param_6)(param_3,param_2);
      if ((uVar7 & 1) == 0) {
        uVar6 = uVar6 + 2;
      }
      else {
        uVar3 = *(undefined *)param_2;
        uVar4 = *(undefined *)((long)param_2 + 1);
        local_8d = *(undefined4 *)(param_2 + 6);
        uVar8 = param_2[1];
        uVar1 = param_2[2];
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        uVar10 = *param_3;
        local_78 = (undefined6)*(undefined8 *)((long)param_2 + 2);
        uVar9 = param_3[2];
        uStack_72 = (undefined2)uVar8;
        uStack_70 = (undefined6)((ulong)uVar8 >> 0x10);
        puVar14 = param_2 + 3;
        param_2[1] = param_3[1];
        *param_2 = uVar10;
        param_2[2] = uVar9;
        local_88 = (undefined5)*puVar14;
        uVar8 = *(undefined8 *)((long)param_3 + 0x1d);
        uStack_83 = (undefined3)*(undefined8 *)((long)param_2 + 0x1d);
        uStack_80 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x1d) >> 0x18);
        puVar15 = param_2 + 5;
        local_95 = *puVar15;
        *(undefined2 *)param_3 = 0;
        *puVar14 = *puVar13;
        *(undefined8 *)((long)param_2 + 0x1d) = uVar8;
        uVar8 = *puVar12;
        *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_3 + 6);
        *puVar15 = uVar8;
        if ((*(byte *)param_3 & 1) != 0) {
          operator_delete((void *)param_3[2]);
        }
        *(undefined *)param_3 = uVar3;
        *(undefined *)((long)param_3 + 1) = uVar4;
        param_3[2] = uVar1;
        *(undefined8 *)((long)param_3 + 2) = CONCAT26(uStack_72,local_78);
        param_3[1] = CONCAT62(uStack_70,uStack_72);
        uVar8 = *(undefined8 *)((ulong)auStack_98 | 3);
        *puVar13 = CONCAT35(uStack_83,local_88);
        uVar2 = *(undefined4 *)((undefined8 *)((ulong)auStack_98 | 3) + 1);
        *(ulong *)((long)param_3 + 0x1d) = CONCAT53(uStack_80,uStack_83);
        *puVar12 = uVar8;
        *(undefined4 *)(param_3 + 6) = uVar2;
        uVar7 = (**param_6)(param_2,param_1);
        if ((uVar7 & 1) == 0) {
          uVar6 = uVar6 + 3;
        }
        else {
          uVar3 = *(undefined *)param_1;
          uVar4 = *(undefined *)((long)param_1 + 1);
          uVar8 = param_1[1];
          uVar1 = param_1[2];
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          uVar10 = *param_2;
          local_78 = (undefined6)*(undefined8 *)((long)param_1 + 2);
          uVar9 = param_2[2];
          uStack_72 = (undefined2)uVar8;
          uStack_70 = (undefined6)((ulong)uVar8 >> 0x10);
          uVar8 = *(undefined8 *)((long)param_1 + 0x1d);
          local_88 = (undefined5)param_1[3];
          param_1[1] = param_2[1];
          *param_1 = uVar10;
          local_8d = *(undefined4 *)(param_1 + 6);
          param_1[2] = uVar9;
          local_95 = param_1[5];
          *(undefined2 *)param_2 = 0;
          uVar9 = *(undefined8 *)((long)param_2 + 0x1d);
          uStack_83 = (undefined3)uVar8;
          uStack_80 = (undefined5)((ulong)uVar8 >> 0x18);
          param_1[3] = *puVar14;
          *(undefined8 *)((long)param_1 + 0x1d) = uVar9;
          uVar8 = *puVar15;
          *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
          param_1[5] = uVar8;
          if ((*(byte *)param_2 & 1) != 0) {
            operator_delete((void *)param_2[2]);
          }
          *(undefined *)((long)param_2 + 1) = uVar4;
          *(undefined *)param_2 = uVar3;
          param_2[2] = uVar1;
          *(undefined8 *)((long)param_2 + 2) = CONCAT26(uStack_72,local_78);
          param_2[1] = CONCAT62(uStack_70,uStack_72);
          uVar8 = *(undefined8 *)((ulong)auStack_98 | 3);
          uVar6 = uVar6 + 4;
          *puVar14 = CONCAT35(uStack_83,local_88);
          uVar2 = *(undefined4 *)((undefined8 *)((ulong)auStack_98 | 3) + 1);
          *(ulong *)((long)param_2 + 0x1d) = CONCAT53(uStack_80,uStack_83);
          *puVar15 = uVar8;
          *(undefined4 *)(param_2 + 6) = uVar2;
        }
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


