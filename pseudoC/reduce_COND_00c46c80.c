// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reduce_COND
// Entry Point: 00c46c80
// Size: 2176 bytes
// Signature: undefined __thiscall reduce_COND(IR_Section * this, uint param_1)


/* IR_Section::reduce_COND(unsigned int) */

uint __thiscall IR_Section::reduce_COND(IR_Section *this,uint param_1)

{
  size_t sVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  IR_Section *this_00;
  IR_Section *this_01;
  undefined4 uVar7;
  ulong uVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint *puVar18;
  ulong uVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  long lVar23;
  uint *puVar24;
  void *pvVar25;
  long lVar26;
  uint *puVar27;
  long local_d0;
  undefined4 local_c8;
  uint local_c4;
  undefined4 local_c0;
  uint local_bc;
  undefined8 local_b8;
  uint *local_b0;
  uint *local_a8;
  undefined8 local_a0;
  void *local_98;
  void *local_90;
  undefined8 local_88;
  undefined4 local_80 [4];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  puVar20 = *(uint **)(*(long *)(this + 0x20) + (ulong)param_1 * 8);
  uVar8 = (ulong)(puVar20[1] >> 0xe) & 0x3fffc;
  uVar5 = *(uint *)((long)puVar20 + uVar8 + 8);
  uVar17 = *(uint *)((long)puVar20 + uVar8 + 0xc);
  uVar6 = *(uint *)((long)puVar20 + uVar8 + 0x10);
  this_00 = (IR_Section *)IR_InstructionSequence::getSection((IR_InstructionSequence *)this,uVar17);
  if (this_00 == (IR_Section *)0x0) {
    puVar22 = (uint *)0x0;
    puVar21 = (uint *)0x0;
  }
  else {
    puVar22 = **(uint ***)(this_00 + 0x20);
    puVar21 = *(uint **)(*(long *)(this_00 + 0x28) + -8);
  }
  this_01 = (IR_Section *)IR_InstructionSequence::getSection((IR_InstructionSequence *)this,uVar6);
  if (this_01 == (IR_Section *)0x0) {
    puVar13 = (uint *)0x0;
    puVar11 = (uint *)0x0;
  }
  else {
    puVar13 = **(uint ***)(this_01 + 0x20);
    puVar11 = *(uint **)(*(long *)(this_01 + 0x28) + -8);
  }
  puVar24 = (uint *)0x0;
  if (puVar22 != (uint *)0x0) {
    puVar24 = puVar22 + 2;
  }
  puVar18 = (uint *)0x0;
  if (puVar13 != (uint *)0x0) {
    puVar18 = puVar13 + 2;
  }
  if (puVar21 == (uint *)0x0) {
    local_d0 = 0;
  }
  else {
    local_d0 = (long)puVar21 + ((ulong)(puVar21[1] >> 0xe) & 0x3fffc) + 8;
  }
  if (puVar11 == (uint *)0x0) {
    lVar23 = 0;
  }
  else {
    lVar23 = (long)puVar11 + ((ulong)(puVar11[1] >> 0xe) & 0x3fffc) + 8;
  }
  uVar4 = puVar20[1];
  local_98 = (void *)0x0;
  local_90 = (void *)0x0;
  local_88 = 0;
  uVar12 = uVar4 >> 0x10;
  local_b0 = (uint *)0x0;
  local_a8 = (uint *)0x0;
  local_a0 = 0;
  if (0xffff < uVar4) {
    lVar26 = 0;
    uVar3 = uVar12;
    if (uVar12 < 2) {
      uVar3 = 1;
    }
    do {
      local_c8 = *(undefined4 *)((long)puVar20 + lVar26 + uVar8 + 0x14);
      if (this_00 == (IR_Section *)0x0) {
        local_c4 = 0;
        local_c0 = 0;
        if (this_01 == (IR_Section *)0x0) goto LAB_00c46e14;
LAB_00c46df4:
        local_bc = *(uint *)((long)puVar18 + lVar26);
        uVar7 = *(undefined4 *)(lVar23 + lVar26);
      }
      else {
        local_c4 = *(uint *)((long)puVar24 + lVar26);
        local_c0 = *(undefined4 *)(local_d0 + lVar26);
        if (this_01 != (IR_Section *)0x0) goto LAB_00c46df4;
LAB_00c46e14:
        uVar7 = 0;
        local_bc = 0;
      }
      local_b8 = CONCAT44(*(undefined4 *)((long)puVar20 + lVar26 + 8),uVar7);
                    /* try { // try from 00c46e2c to 00c46e37 has its CatchHandler @ 00c47510 */
      FUN_00c47554(&local_98,&local_c8);
      lVar26 = lVar26 + 4;
    } while ((ulong)uVar3 * 4 - lVar26 != 0);
  }
  uVar4 = ((uVar4 & 0xffff) - uVar12) - 3;
  uVar19 = (ulong)uVar4;
  if (uVar4 != 0) {
    do {
      local_c8 = *(undefined4 *)((long)puVar20 + (ulong)uVar12 * 4 + uVar8 + 0x14);
      if (this_00 == (IR_Section *)0x0) {
        local_80[0] = 0;
                    /* try { // try from 00c46e88 to 00c46ec3 has its CatchHandler @ 00c47518 */
        local_c4 = IR_Function::storeConst(*(IR_Function **)this,(IR_Const *)local_80);
        local_c4 = local_c4 | 0x80000000;
        if (this_01 == (IR_Section *)0x0) goto LAB_00c46e9c;
LAB_00c46e78:
        local_bc = puVar18[uVar12];
      }
      else {
        local_c4 = puVar24[uVar12];
        if (this_01 != (IR_Section *)0x0) goto LAB_00c46e78;
LAB_00c46e9c:
        local_80[0] = 0;
        local_bc = IR_Function::storeConst(*(IR_Function **)this,(IR_Const *)local_80);
        local_bc = local_bc | 0x80000000;
      }
      local_c0 = 0;
      local_b8 = 0;
      FUN_00c47554(&local_b0,&local_c8);
      uVar12 = uVar12 + 1;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  if (local_90 == local_98) {
    local_d0._0_4_ = 0;
    pvVar25 = local_90;
  }
  else {
    uVar8 = 0;
    uVar12 = 0;
    local_d0._0_4_ = 0;
    do {
      pvVar25 = local_98;
      puVar24 = (uint *)((long)local_98 + uVar8 * 0x18);
      if ((int)puVar24[5] < 0) {
        FUN_00c47554(&local_b0,puVar24);
        pvVar25 = (void *)((long)local_98 + uVar8 * 0x18);
        sVar1 = (long)local_90 - (long)(void *)((long)pvVar25 + 0x18);
        if (sVar1 != 0) {
          memmove(pvVar25,(void *)((long)pvVar25 + 0x18),sVar1);
        }
        local_90 = (void *)((long)pvVar25 + sVar1);
        uVar12 = uVar12 - 1;
        local_d0._0_4_ = 1;
      }
      else {
        puVar27 = (uint *)((long)local_98 + uVar8 * 0x18 + 4);
        puVar18 = (uint *)((long)local_98 + uVar8 * 0x18 + 0xc);
        if (((int)*puVar27 < 0) && ((int)*puVar18 < 0)) {
          uVar4 = *puVar24;
          local_c8 = 0;
                    /* try { // try from 00c46f5c to 00c46fa3 has its CatchHandler @ 00c47514 */
          uVar3 = IR_Function::storeConst(*(IR_Function **)this,(IR_Const *)&local_c8);
          if (uVar4 != (uVar3 | 0x80000000)) {
            local_c8 = 0;
            uVar4 = IR_Function::storeConst(*(IR_Function **)this,(IR_Const *)&local_c8);
            local_d0._0_4_ = 1;
            *puVar24 = uVar4 | 0x80000000;
          }
        }
        if ((int)*puVar24 < 0) {
          if ((this_00 != (IR_Section *)0x0) && (-1 < (int)*puVar27)) {
                    /* try { // try from 00c46fec to 00c4708b has its CatchHandler @ 00c47514 */
            replaceRegWithField(this_00,*puVar27,*puVar24);
            puVar9 = (uint *)((long)pvVar25 + uVar8 * 0x18 + 8);
            if (*puVar9 == *puVar27) {
              *puVar9 = *puVar24;
            }
            local_c8 = 0;
            uVar4 = IR_Function::storeConst(*(IR_Function **)this,(IR_Const *)&local_c8);
            local_d0._0_4_ = 1;
            *puVar27 = uVar4 | 0x80000000;
          }
          if ((this_01 != (IR_Section *)0x0) && (-1 < (int)*puVar18)) {
            replaceRegWithField(this_01,*puVar18,*puVar24);
            puVar27 = (uint *)((long)pvVar25 + uVar8 * 0x18 + 0x10);
            if (*puVar27 == *puVar18) {
              *puVar27 = *puVar24;
            }
            local_c8 = 0;
            uVar4 = IR_Function::storeConst(*(IR_Function **)this,(IR_Const *)&local_c8);
            local_d0._0_4_ = 1;
            *puVar18 = uVar4 | 0x80000000;
          }
        }
      }
      uVar12 = uVar12 + 1;
      uVar8 = (ulong)uVar12;
      uVar19 = ((long)local_90 - (long)local_98 >> 3) * -0x5555555555555555;
      pvVar25 = local_98;
    } while (uVar8 <= uVar19 && uVar19 - uVar8 != 0);
  }
  if (local_a8 == local_b0) {
    uVar8 = 0;
    puVar24 = local_a8;
  }
  else {
    uVar19 = 0;
    uVar12 = 0;
    puVar18 = local_a8;
    puVar24 = local_b0;
    do {
      puVar27 = puVar24 + uVar19 * 6;
      if ((int)*puVar27 < 0) {
        if ((this_00 != (IR_Section *)0x0) && (-1 < (int)puVar24[uVar19 * 6 + 1])) {
                    /* try { // try from 00c47184 to 00c471a7 has its CatchHandler @ 00c47500 */
          replaceRegWithField(this_00,puVar24[uVar19 * 6 + 1],*puVar27);
        }
        if ((this_01 != (IR_Section *)0x0) && (-1 < (int)puVar24[uVar19 * 6 + 3])) {
          replaceRegWithField(this_01,puVar24[uVar19 * 6 + 3],*puVar27);
        }
        puVar27 = local_b0 + uVar19 * 6;
        puVar24 = puVar27 + 6;
        sVar1 = (long)local_a8 - (long)puVar24;
joined_r0x00c471bc:
        if (sVar1 != 0) {
          memmove(puVar27,puVar24,sVar1);
        }
        puVar18 = (uint *)((long)puVar27 + sVar1);
        uVar12 = uVar12 - 1;
        local_d0._0_4_ = 1;
        puVar24 = local_b0;
        local_a8 = puVar18;
      }
      else if ((this_01 == (IR_Section *)0x0 || (int)puVar24[uVar19 * 6 + 3] < 0) &&
              (this_00 == (IR_Section *)0x0 || (int)puVar24[uVar19 * 6 + 1] < 0)) {
        puVar24 = puVar27 + 6;
        sVar1 = (long)puVar18 - (long)puVar24;
        goto joined_r0x00c471bc;
      }
      uVar12 = uVar12 + 1;
      uVar19 = (ulong)uVar12;
      uVar8 = ((long)puVar18 - (long)puVar24 >> 3) * -0x5555555555555555;
      pvVar25 = local_98;
    } while (uVar19 <= uVar8 && uVar8 - uVar19 != 0);
  }
  uVar19 = ((long)local_90 - (long)pvVar25 >> 3) * -0x5555555555555555;
  iVar10 = (int)uVar8;
  uVar12 = (uint)uVar19;
  puVar20[1] = uVar12 + iVar10 + 3 | uVar12 << 0x10;
  if (this_00 != (IR_Section *)0x0) {
    puVar22[1] = (uVar12 + iVar10) * 0x10000;
    puVar21[1] = uVar12;
  }
  if (this_01 != (IR_Section *)0x0) {
    puVar13[1] = (uVar12 + iVar10) * 0x10000;
    puVar11[1] = uVar12;
  }
  if (uVar12 != 0) {
    puVar18 = (uint *)((long)pvVar25 + 0xc);
    uVar15 = 2;
    do {
      iVar14 = (int)uVar15;
      puVar20[iVar14 + (uint)*(ushort *)((long)puVar20 + 6) + 3] = puVar18[-3];
      if (this_00 != (IR_Section *)0x0) {
        puVar22[uVar15 & 0xffffffff] = puVar18[-2];
        puVar21[iVar14 + (uint)*(ushort *)((long)puVar21 + 6)] = puVar18[-1];
      }
      if (this_01 != (IR_Section *)0x0) {
        puVar13[uVar15 & 0xffffffff] = *puVar18;
        puVar11[iVar14 + (uint)*(ushort *)((long)puVar11 + 6)] = puVar18[1];
      }
      uVar16 = uVar15 & 0xffffffff;
      puVar27 = puVar18 + 2;
      uVar15 = uVar15 + 1;
      puVar18 = puVar18 + 6;
      puVar20[uVar16] = *puVar27;
    } while (uVar15 - (uVar19 & 0xffffffff) != 2);
  }
  if (iVar10 != 0) {
    uVar8 = uVar8 & 0xffffffff;
    uVar12 = uVar12 + 2;
    do {
      puVar20[uVar12 + *(ushort *)((long)puVar20 + 6) + 3] = *puVar24;
      if (this_00 != (IR_Section *)0x0) {
        puVar22[uVar12] = puVar24[1];
      }
      if (this_01 != (IR_Section *)0x0) {
        puVar13[uVar12] = puVar24[3];
      }
      puVar24 = puVar24 + 6;
      uVar12 = uVar12 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar12 = puVar20[1] >> 0x10;
  puVar20[(ulong)uVar12 + 2] = uVar5;
  puVar20[uVar12 + 4] = uVar6;
  puVar20[uVar12 + 3] = uVar17;
                    /* try { // try from 00c47334 to 00c473b3 has its CatchHandler @ 00c47504 */
  uVar5 = IR_InstructionSequence::getInstLength(puVar20);
  IR_InstructionSequence::check((IR_InstructionSequence *)this,puVar20,uVar5);
  if (this_00 != (IR_Section *)0x0) {
    uVar5 = IR_InstructionSequence::getInstLength(puVar22);
    IR_InstructionSequence::check((IR_InstructionSequence *)this,puVar22,uVar5);
    uVar5 = IR_InstructionSequence::getInstLength(puVar21);
    IR_InstructionSequence::check((IR_InstructionSequence *)this,puVar21,uVar5);
  }
  if (this_01 != (IR_Section *)0x0) {
    uVar5 = IR_InstructionSequence::getInstLength(puVar13);
    IR_InstructionSequence::check((IR_InstructionSequence *)this,puVar13,uVar5);
    uVar5 = IR_InstructionSequence::getInstLength(puVar11);
    IR_InstructionSequence::check((IR_InstructionSequence *)this,puVar11,uVar5);
  }
  if (this_00 != (IR_Section *)0x0) {
    lVar23 = *(long *)(this_00 + 0x20);
    if (*(long *)(this_00 + 0x28) == lVar23) {
      uVar5 = 0;
    }
    else {
      uVar8 = 0;
      uVar5 = 0;
      uVar17 = 0;
      do {
        iVar10 = **(int **)(lVar23 + uVar8 * 8);
        if (iVar10 == 4) {
                    /* try { // try from 00c473d4 to 00c4741f has its CatchHandler @ 00c4750c */
          uVar6 = reduce_LOOP(this_00,uVar17);
LAB_00c473e0:
          uVar5 = uVar5 | uVar6;
        }
        else if (iVar10 == 2) {
          uVar6 = reduce_COND(this_00,uVar17);
          goto LAB_00c473e0;
        }
        lVar23 = *(long *)(this_00 + 0x20);
        uVar17 = uVar17 + 1;
        uVar8 = (ulong)uVar17;
      } while (uVar8 < (ulong)(*(long *)(this_00 + 0x28) - lVar23 >> 3));
    }
    local_d0._0_4_ = (uint)local_d0 | uVar5;
  }
  if (this_01 != (IR_Section *)0x0) {
    lVar23 = *(long *)(this_01 + 0x20);
    if (*(long *)(this_01 + 0x28) == lVar23) {
      uVar5 = 0;
    }
    else {
      uVar8 = 0;
      uVar5 = 0;
      uVar17 = 0;
      do {
        iVar10 = **(int **)(lVar23 + uVar8 * 8);
        if (iVar10 == 4) {
                    /* try { // try from 00c4744c to 00c47497 has its CatchHandler @ 00c47508 */
          uVar6 = reduce_LOOP(this_01,uVar17);
LAB_00c47458:
          uVar5 = uVar5 | uVar6;
        }
        else if (iVar10 == 2) {
          uVar6 = reduce_COND(this_01,uVar17);
          goto LAB_00c47458;
        }
        lVar23 = *(long *)(this_01 + 0x20);
        uVar17 = uVar17 + 1;
        uVar8 = (ulong)uVar17;
      } while (uVar8 < (ulong)(*(long *)(this_01 + 0x28) - lVar23 >> 3));
    }
    local_d0._0_4_ = (uint)local_d0 | uVar5;
  }
  if (local_b0 != (uint *)0x0) {
    local_a8 = local_b0;
    operator_delete(local_b0);
  }
  if (local_98 != (void *)0x0) {
    local_90 = local_98;
    operator_delete(local_98);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return (uint)local_d0 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


