// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reduce_LOOP
// Entry Point: 00c477c0
// Size: 2836 bytes
// Signature: undefined __thiscall reduce_LOOP(IR_Section * this, uint param_1)


/* IR_Section::reduce_LOOP(unsigned int) */

uint __thiscall IR_Section::reduce_LOOP(IR_Section *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  size_t sVar13;
  long lVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  IR_Section *this_00;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  uint *puVar26;
  int iVar27;
  long lVar28;
  uint *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  ulong uVar32;
  uint *__s;
  uint *puVar33;
  int iVar34;
  uint *puVar35;
  uint *puVar36;
  ulong uVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  uint local_98;
  undefined8 *local_90;
  undefined8 *local_80;
  undefined4 local_78 [2];
  undefined local_70;
  long local_68;
  
  lVar14 = tpidr_el0;
  local_68 = *(long *)(lVar14 + 0x28);
  puVar38 = *(undefined8 **)(*(long *)(this + 0x20) + (ulong)param_1 * 8);
  uVar10 = *(ushort *)((long)puVar38 + 6);
  lVar24 = (ulong)uVar10 + 2;
  puVar26 = (uint *)((long)puVar38 + lVar24 * 4);
  puVar39 = (undefined8 *)(puVar26 + 2);
  uVar18 = *puVar26;
  uVar6 = puVar26[1];
  this_00 = (IR_Section *)IR_InstructionSequence::getSection((IR_InstructionSequence *)this,uVar6);
  uVar16 = *(uint *)((long)puVar38 + 4);
  puVar26 = **(uint ***)(this_00 + 0x20);
  puVar35 = *(uint **)(*(long *)(this_00 + 0x28) + -8);
  uVar17 = uVar16 >> 0x10;
  uVar19 = (ulong)uVar17;
  puVar2 = (undefined8 *)(puVar26 + 2);
  uVar11 = *(ushort *)((long)puVar35 + 6);
  lVar3 = (ulong)uVar11 + 2;
  uVar12 = ((uVar16 & 0xffff) - uVar17) - 2;
  uVar37 = (ulong)uVar12;
  uVar7 = puVar35[lVar3];
  if (uVar16 < 0x10000) {
    __s = (uint *)0x0;
    puVar33 = (uint *)0x0;
  }
  else {
    __s = (uint *)operator_new(uVar19 << 4);
    uVar23 = uVar19 - 1 & 0xfffffffffffffff;
    memset(__s,0,uVar23 * 0x10 + 0x10);
    uVar16 = uVar17;
    if (uVar17 < 2) {
      uVar16 = 1;
    }
    uVar21 = (ulong)uVar16;
    if (uVar16 < 8) {
      uVar25 = 0;
LAB_00c478bc:
      lVar22 = uVar21 - uVar25;
      lVar28 = (long)puVar38 + uVar25 * 4 + 0x10;
      puVar36 = puVar35 + lVar3 + uVar25;
      puVar33 = __s + uVar25 * 4 + 2;
      puVar29 = puVar26 + uVar25 + 2;
      do {
        puVar36 = puVar36 + 1;
        lVar22 = lVar22 + -1;
        puVar33[-2] = *(uint *)(lVar28 + (ulong)uVar10 * 4);
        puVar33[-1] = *puVar29;
        *puVar33 = *puVar36;
        puVar1 = (uint *)(lVar28 + -8);
        lVar28 = lVar28 + 4;
        puVar33[1] = *puVar1;
        puVar33 = puVar33 + 4;
        puVar29 = puVar29 + 1;
      } while (lVar22 != 0);
    }
    else {
      puVar20 = (undefined8 *)(__s + uVar21 * 4);
      uVar25 = 0;
      if ((((__s < (uint *)((long)puVar38 + uVar21 * 4 + 8) && puVar38 + 1 < puVar20) ||
           (__s < (uint *)((long)puVar38 + (lVar24 + uVar21) * 4 + 8) && puVar39 < puVar20)) ||
          (__s < puVar26 + uVar21 + 2 && puVar2 < puVar20)) ||
         (__s < puVar35 + lVar3 + uVar21 + 1 && puVar35 + lVar3 + 1 < puVar20)) goto LAB_00c478bc;
      uVar25 = uVar21 & 0xfff8;
      puVar20 = (undefined8 *)(puVar35 + (ulong)uVar11 + 7);
      puVar31 = (undefined8 *)(puVar26 + 6);
      puVar33 = __s + 0x10;
      uVar32 = uVar25;
      puVar4 = puVar38;
      do {
        puVar30 = puVar4 + 4;
        puVar5 = (undefined8 *)((long)puVar30 + lVar24 * 4 + -8);
        uVar32 = uVar32 - 8;
        uVar43 = puVar31[-1];
        uVar42 = puVar31[-2];
        uVar51 = puVar31[1];
        uVar50 = *puVar31;
        puVar31 = puVar31 + 4;
        uVar41 = puVar5[-1];
        uVar40 = puVar5[-2];
        uVar49 = puVar5[1];
        uVar48 = *puVar5;
        uVar45 = puVar20[-1];
        uVar44 = puVar20[-2];
        uVar53 = puVar20[1];
        uVar52 = *puVar20;
        puVar20 = puVar20 + 4;
        uVar55 = *puVar30;
        uVar54 = puVar4[3];
        uVar47 = puVar4[2];
        uVar46 = puVar4[1];
        *puVar33 = (uint)uVar48;
        puVar33[1] = (uint)uVar50;
        puVar33[2] = (uint)uVar52;
        puVar33[3] = (uint)uVar54;
        puVar33[4] = (uint)((ulong)uVar48 >> 0x20);
        puVar33[5] = (uint)((ulong)uVar50 >> 0x20);
        puVar33[6] = (uint)((ulong)uVar52 >> 0x20);
        puVar33[7] = (uint)((ulong)uVar54 >> 0x20);
        puVar33[8] = (uint)uVar49;
        puVar33[9] = (uint)uVar51;
        puVar33[10] = (uint)uVar53;
        puVar33[0xb] = (uint)uVar55;
        puVar33[0xc] = (uint)((ulong)uVar49 >> 0x20);
        puVar33[0xd] = (uint)((ulong)uVar51 >> 0x20);
        puVar33[0xe] = (uint)((ulong)uVar53 >> 0x20);
        puVar33[0xf] = (uint)((ulong)uVar55 >> 0x20);
        puVar33[-0x10] = (uint)uVar40;
        puVar33[-0xf] = (uint)uVar42;
        puVar33[-0xe] = (uint)uVar44;
        puVar33[-0xd] = (uint)uVar46;
        puVar33[-0xc] = (uint)((ulong)uVar40 >> 0x20);
        puVar33[-0xb] = (uint)((ulong)uVar42 >> 0x20);
        puVar33[-10] = (uint)((ulong)uVar44 >> 0x20);
        puVar33[-9] = (uint)((ulong)uVar46 >> 0x20);
        puVar33[-8] = (uint)uVar41;
        puVar33[-7] = (uint)uVar43;
        puVar33[-6] = (uint)uVar45;
        puVar33[-5] = (uint)uVar47;
        puVar33[-4] = (uint)((ulong)uVar41 >> 0x20);
        puVar33[-3] = (uint)((ulong)uVar43 >> 0x20);
        puVar33[-2] = (uint)((ulong)uVar45 >> 0x20);
        puVar33[-1] = (uint)((ulong)uVar47 >> 0x20);
        puVar33 = puVar33 + 0x20;
        puVar4 = puVar30;
      } while (uVar32 != 0);
      if (uVar25 != uVar21) goto LAB_00c478bc;
    }
    puVar33 = __s + uVar23 * 4 + 4;
  }
  local_90 = (undefined8 *)0x0;
  local_80 = (undefined8 *)0x0;
  if (uVar12 != 0) {
                    /* try { // try from 00c47948 to 00c4794f has its CatchHandler @ 00c482d4 */
    local_90 = (undefined8 *)operator_new(uVar37 * 0x10);
    local_80 = local_90 + uVar37 * 2;
    memset(local_90,0,uVar37 * 0x10);
    uVar23 = 0;
    if (((7 < uVar12) && (!CARRY4(uVar17,(uint)(uVar37 - 1)))) && (uVar37 - 1 >> 0x20 == 0)) {
      uVar23 = 0;
      lVar24 = lVar24 + uVar19 + -2;
      if (((undefined8 *)((long)puVar38 + (lVar24 + uVar37) * 4 + 0x10) <= local_90 ||
           local_90 + uVar37 * 2 <= (undefined8 *)((long)puVar38 + lVar24 * 4 + 0x10)) &&
         (puVar26 + uVar19 + uVar37 + 2 <= local_90 || local_90 + uVar37 * 2 <= puVar26 + uVar19 + 2
         )) {
        uVar23 = uVar37 & 0xfffffff8;
        puVar20 = local_90 + 8;
        uVar21 = uVar23;
        do {
          uVar21 = uVar21 - 8;
          lVar24 = uVar19 * 4;
          uVar19 = (ulong)((int)uVar19 + 8);
          puVar31 = (undefined8 *)((long)puVar39 + lVar24);
          puVar4 = (undefined8 *)((long)puVar2 + lVar24);
          uVar41 = puVar31[1];
          uVar40 = *puVar31;
          uVar45 = puVar31[3];
          uVar44 = puVar31[2];
          uVar43 = puVar4[1];
          uVar42 = *puVar4;
          uVar47 = puVar4[3];
          uVar46 = puVar4[2];
          *(uint *)(puVar20 + -8) = (uint)uVar40;
          *(uint *)((long)puVar20 + -0x3c) = (uint)uVar42;
          *(uint *)(puVar20 + -7) = 0;
          *(uint *)((long)puVar20 + -0x34) = 0;
          *(uint *)(puVar20 + -6) = (uint)((ulong)uVar40 >> 0x20);
          *(uint *)((long)puVar20 + -0x2c) = (uint)((ulong)uVar42 >> 0x20);
          *(uint *)(puVar20 + -5) = 0;
          *(uint *)((long)puVar20 + -0x24) = 0;
          *(uint *)(puVar20 + -4) = (uint)uVar41;
          *(uint *)((long)puVar20 + -0x1c) = (uint)uVar43;
          *(uint *)(puVar20 + -3) = 0;
          *(uint *)((long)puVar20 + -0x14) = 0;
          *(uint *)(puVar20 + -2) = (uint)((ulong)uVar41 >> 0x20);
          *(uint *)((long)puVar20 + -0xc) = (uint)((ulong)uVar43 >> 0x20);
          *(uint *)(puVar20 + -1) = 0;
          *(uint *)((long)puVar20 + -4) = 0;
          *(uint *)puVar20 = (uint)uVar44;
          *(uint *)((long)puVar20 + 4) = (uint)uVar46;
          *(uint *)(puVar20 + 1) = 0;
          *(uint *)((long)puVar20 + 0xc) = 0;
          *(uint *)(puVar20 + 2) = (uint)((ulong)uVar44 >> 0x20);
          *(uint *)((long)puVar20 + 0x14) = (uint)((ulong)uVar46 >> 0x20);
          *(uint *)(puVar20 + 3) = 0;
          *(uint *)((long)puVar20 + 0x1c) = 0;
          *(uint *)(puVar20 + 4) = (uint)uVar45;
          *(uint *)((long)puVar20 + 0x24) = (uint)uVar47;
          *(uint *)(puVar20 + 5) = 0;
          *(uint *)((long)puVar20 + 0x2c) = 0;
          *(uint *)(puVar20 + 6) = (uint)((ulong)uVar45 >> 0x20);
          *(uint *)((long)puVar20 + 0x34) = (uint)((ulong)uVar47 >> 0x20);
          *(uint *)(puVar20 + 7) = 0;
          *(uint *)((long)puVar20 + 0x3c) = 0;
          puVar20 = puVar20 + 0x10;
        } while (uVar21 != 0);
        if (uVar23 == uVar37) goto LAB_00c479c4;
      }
    }
    uVar17 = uVar17 + (int)uVar23;
    lVar24 = uVar37 - uVar23;
    puVar36 = (uint *)((long)local_90 + uVar23 * 0x10 + 4);
    do {
      uVar19 = (ulong)uVar17;
      uVar17 = uVar17 + 1;
      lVar24 = lVar24 + -1;
      puVar36[-1] = *(uint *)((long)puVar39 + uVar19 * 4);
      uVar16 = *(uint *)((long)puVar2 + uVar19 * 4);
      puVar36[1] = 0;
      puVar36[2] = 0;
      *puVar36 = uVar16;
      puVar36 = puVar36 + 4;
    } while (lVar24 != 0);
  }
LAB_00c479c4:
  lVar24 = (long)puVar33 - (long)__s;
  bVar15 = true;
  if (lVar24 == 0) {
    local_98 = 0;
    uVar19 = 0;
  }
  else {
    uVar37 = 0;
    local_98 = 0;
    uVar17 = 0;
    uVar19 = lVar24 >> 4;
    puVar39 = local_80;
    do {
      puVar2 = (undefined8 *)(__s + uVar37 * 4);
      uVar16 = *(uint *)puVar2;
      puVar31 = puVar2 + 1;
      uVar12 = *(uint *)puVar31;
      puVar20 = local_90;
      if (((int)uVar16 < 0) && (uVar12 == uVar16)) {
        uVar12 = __s[uVar37 * 4 + 3];
        if (-1 < (int)uVar12) {
                    /* try { // try from 00c47a24 to 00c47bcf has its CatchHandler @ 00c482f8 */
          replaceRegWithField(this,uVar12,uVar16);
          uVar16 = *(uint *)puVar31;
          if (lVar24 != 0) {
            uVar23 = 0;
            uVar12 = __s[uVar37 * 4 + 3];
            do {
              puVar36 = __s + uVar23 * 4;
              if (*puVar36 == uVar12) {
                *puVar36 = uVar16;
              }
              if (puVar36[3] == uVar12) {
                puVar36[3] = uVar16;
              }
              uVar23 = (ulong)((int)uVar23 + 1);
            } while (uVar23 < uVar19);
          }
        }
        uVar12 = __s[uVar37 * 4 + 1];
        if ((-1 < (int)uVar12) && (replaceRegWithField(this_00,uVar12,uVar16), lVar24 != 0)) {
          uVar23 = 0;
          uVar16 = __s[uVar37 * 4 + 1];
          uVar12 = *(uint *)puVar31;
          do {
            if (__s[uVar23 * 4 + 1] == uVar16) {
              __s[uVar23 * 4 + 1] = uVar12;
            }
            if (__s[uVar23 * 4 + 2] == uVar16) {
              __s[uVar23 * 4 + 2] = uVar12;
            }
            uVar23 = (ulong)((int)uVar23 + 1);
          } while (uVar23 < uVar19);
        }
LAB_00c47cf0:
        local_90 = puVar20;
        sVar13 = (long)puVar33 - (long)(puVar2 + 2);
        if (sVar13 != 0) {
          memmove(puVar2,puVar2 + 2,sVar13);
        }
        puVar33 = (uint *)((long)puVar2 + sVar13);
        uVar17 = uVar17 - 1;
        local_98 = 1;
      }
      else {
        puVar36 = (uint *)((long)puVar2 + 4);
        uVar8 = *puVar36;
        if (uVar8 == uVar12) {
          if (-1 < (int)__s[uVar37 * 4 + 3]) {
            replaceRegWithField(this,__s[uVar37 * 4 + 3],uVar16);
          }
          if (puVar39 == local_80) {
            uVar37 = (long)puVar39 - (long)local_90;
            uVar19 = ((long)uVar37 >> 4) + 1;
            if (uVar19 >> 0x3c != 0) {
                    /* try { // try from 00c482bc to 00c482cf has its CatchHandler @ 00c482ec */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar19 <= (ulong)((long)uVar37 >> 3)) {
              uVar19 = (long)uVar37 >> 3;
            }
            if (0x7fffffffffffffef < uVar37) {
              uVar19 = 0xfffffffffffffff;
            }
            if (uVar19 == 0) {
              puVar20 = (undefined8 *)0x0;
            }
            else {
              if (uVar19 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
              puVar20 = (undefined8 *)operator_new(uVar19 << 4);
            }
            puVar39 = puVar20 + ((long)uVar37 >> 4) * 2;
            uVar40 = *puVar2;
            puVar39[1] = puVar2[1];
            *puVar39 = uVar40;
            if (0 < (long)uVar37) {
              memcpy(puVar20,local_90,uVar37);
            }
            puVar39 = puVar39 + 2;
            local_80 = puVar20 + uVar19 * 2;
            if (local_90 != (undefined8 *)0x0) {
              operator_delete(local_90);
            }
          }
          else {
            uVar40 = *puVar2;
            puVar39[1] = puVar2[1];
            *puVar39 = uVar40;
            puVar39 = puVar39 + 2;
          }
          goto LAB_00c47cf0;
        }
        puVar29 = __s + uVar37 * 4 + 3;
        uVar9 = *puVar29;
        if (((int)uVar8 < 0) && ((int)uVar9 < 0)) goto LAB_00c47cf0;
        if (((int)uVar12 < 0) && ((int)uVar8 < 0)) {
          if ((((int)uVar18 < 0) &&
              (*(int *)(*(long *)(*(long *)this + 0x80) + ((ulong)uVar18 & 0x7fffffff) * 0x18) == 9)
              ) && (*(char *)(*(long *)(*(long *)this + 0x80) + ((ulong)uVar18 & 0x7fffffff) * 0x18
                             + 8) == '\x01')) {
            if ((-1 < (int)uVar9) && (replaceRegWithField(this,uVar9,uVar12), lVar24 != 0)) {
              uVar37 = 0;
              uVar16 = *puVar29;
              uVar12 = *(uint *)puVar31;
              do {
                puVar36 = __s + uVar37 * 4;
                if (*puVar36 == uVar16) {
                  *puVar36 = uVar12;
                }
                if (puVar36[3] == uVar16) {
                  puVar36[3] = uVar12;
                }
                uVar37 = (ulong)((int)uVar37 + 1);
              } while (uVar37 < uVar19);
            }
            goto LAB_00c47cf0;
          }
        }
        else if (((-1 < (int)uVar8) && (uVar16 == uVar18)) && (uVar12 == uVar7)) {
          local_78[0] = 9;
          local_70 = 1;
                    /* try { // try from 00c47c40 to 00c47c5b has its CatchHandler @ 00c482e4 */
          uVar16 = IR_Function::storeConst(*(IR_Function **)this,(IR_Const *)local_78);
          uVar16 = uVar16 | 0x80000000;
          replaceRegWithField(this_00,*puVar36,uVar16);
          if (lVar24 != 0) {
            uVar37 = 0;
            uVar12 = *puVar36;
            do {
              if (__s[uVar37 * 4 + 1] == uVar12) {
                __s[uVar37 * 4 + 1] = uVar16;
              }
              if (__s[uVar37 * 4 + 2] == uVar12) {
                __s[uVar37 * 4 + 2] = uVar16;
              }
              uVar37 = (ulong)((int)uVar37 + 1);
            } while (uVar37 < uVar19);
          }
          if (-1 < (int)*puVar29) {
            local_70 = 0;
            local_78[0] = 9;
                    /* try { // try from 00c47d4c to 00c47d67 has its CatchHandler @ 00c482e0 */
            uVar16 = IR_Function::storeConst(*(IR_Function **)this,(IR_Const *)local_78);
            uVar16 = uVar16 | 0x80000000;
            replaceRegWithField(this,*puVar29,uVar16);
            if (lVar24 != 0) {
              uVar37 = 0;
              uVar12 = *puVar29;
              do {
                puVar36 = __s + uVar37 * 4;
                if (*puVar36 == uVar12) {
                  *puVar36 = uVar16;
                }
                if (puVar36[3] == uVar12) {
                  puVar36[3] = uVar16;
                }
                uVar37 = (ulong)((int)uVar37 + 1);
              } while (uVar37 < uVar19);
            }
          }
          goto LAB_00c47cf0;
        }
      }
      uVar17 = uVar17 + 1;
      uVar37 = (ulong)uVar17;
      lVar24 = (long)puVar33 - (long)__s;
      uVar19 = lVar24 >> 4;
    } while (uVar37 < uVar19);
    bVar15 = lVar24 == 0;
    local_80 = puVar39;
  }
  if (local_80 == local_90) {
    uVar37 = 0;
  }
  else {
    uVar23 = 0;
    uVar17 = 0;
    do {
      puVar39 = local_90 + uVar23 * 2;
      uVar16 = *(uint *)((long)puVar39 + 4);
      if ((int)*(uint *)puVar39 < 0) {
                    /* try { // try from 00c47e2c to 00c47e33 has its CatchHandler @ 00c482f0 */
        if ((-1 < (int)uVar16) && (replaceRegWithField(this_00,uVar16,*(uint *)puVar39), !bVar15)) {
          uVar37 = 0;
          uVar16 = *(uint *)((long)puVar39 + 4);
          uVar12 = *(uint *)puVar39;
          do {
            if (__s[uVar37 * 4 + 1] == uVar16) {
              __s[uVar37 * 4 + 1] = uVar12;
            }
            if (__s[uVar37 * 4 + 2] == uVar16) {
              __s[uVar37 * 4 + 2] = uVar12;
            }
            uVar37 = (ulong)((int)uVar37 + 1);
          } while (uVar37 < uVar19);
        }
LAB_00c47e38:
        sVar13 = (long)local_80 - (long)(puVar39 + 2);
        if (sVar13 != 0) {
          memmove(puVar39,puVar39 + 2,sVar13);
        }
        local_80 = (undefined8 *)((long)puVar39 + sVar13);
        uVar17 = uVar17 - 1;
        local_98 = 1;
      }
      else if ((int)uVar16 < 0) goto LAB_00c47e38;
      uVar17 = uVar17 + 1;
      uVar23 = (ulong)uVar17;
      uVar37 = (long)local_80 - (long)local_90 >> 4;
    } while (uVar23 < uVar37);
  }
  if (local_98 != 0) {
    iVar34 = (int)uVar19;
    iVar27 = (int)uVar37 + iVar34;
    *(uint *)((long)puVar38 + 4) = iVar27 + 2U | iVar34 << 0x10;
    puVar26[1] = iVar27 * 0x10000;
    puVar35[1] = iVar34 + 1;
    if (iVar34 != 0) {
      uVar23 = 0;
      puVar33 = __s + 2;
      do {
        iVar27 = (int)uVar23;
        uVar23 = uVar23 + 1;
        *(uint *)((long)puVar38 + (ulong)(iVar27 + (uint)*(ushort *)((long)puVar38 + 6) + 4) * 4) =
             puVar33[-2];
        puVar26[iVar27 + 2] = puVar33[-1];
        puVar35[iVar27 + (uint)*(ushort *)((long)puVar35 + 6) + 3] = *puVar33;
        puVar36 = puVar33 + 1;
        puVar33 = puVar33 + 4;
        *(uint *)((long)puVar38 + (ulong)(iVar27 + 2) * 4) = *puVar36;
      } while ((uVar19 & 0xffffffff) != uVar23);
    }
    if ((int)uVar37 != 0) {
      uVar37 = uVar37 & 0xffffffff;
      uVar17 = iVar34 + 2;
      puVar33 = (uint *)((long)local_90 + 4);
      do {
        uVar37 = uVar37 - 1;
        *(uint *)((long)puVar38 + (ulong)(uVar17 + *(ushort *)((long)puVar38 + 6) + 2) * 4) =
             puVar33[-1];
        puVar26[uVar17] = *puVar33;
        uVar17 = uVar17 + 1;
        puVar33 = puVar33 + 4;
      } while (uVar37 != 0);
    }
    uVar17 = *(uint *)((long)puVar38 + 4) >> 0x10;
    *(uint *)((long)puVar38 + (ulong)uVar17 * 4 + 8) = uVar18;
    *(uint *)((long)puVar38 + (ulong)(uVar17 + 3) * 4) = uVar6;
    *(uint *)((long)puVar35 + ((ulong)(puVar35[1] >> 0xe) & 0x3fffc) + 8) = uVar7;
                    /* try { // try from 00c47fa8 to 00c47fef has its CatchHandler @ 00c482e8 */
    uVar17 = IR_InstructionSequence::getInstLength((uint *)puVar38);
    IR_InstructionSequence::check((IR_InstructionSequence *)this,(uint *)puVar38,uVar17);
    uVar17 = IR_InstructionSequence::getInstLength(puVar26);
    IR_InstructionSequence::check((IR_InstructionSequence *)this,puVar26,uVar17);
    uVar17 = IR_InstructionSequence::getInstLength(puVar35);
    IR_InstructionSequence::check((IR_InstructionSequence *)this,puVar35,uVar17);
  }
  lVar24 = *(long *)(this_00 + 0x20);
  if (*(long *)(this_00 + 0x28) == lVar24) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
    uVar19 = 0;
    uVar37 = 1;
    do {
      uVar18 = (int)uVar37 - 1;
      iVar27 = **(int **)(lVar24 + uVar19 * 8);
      if (iVar27 == 4) {
                    /* try { // try from 00c4800c to 00c48053 has its CatchHandler @ 00c482f4 */
        uVar18 = reduce_LOOP(this_00,uVar18);
LAB_00c48014:
        uVar17 = uVar17 | uVar18;
      }
      else if (iVar27 == 2) {
        uVar18 = reduce_COND(this_00,uVar18);
        goto LAB_00c48014;
      }
      lVar24 = *(long *)(this_00 + 0x20);
      bVar15 = uVar37 < (ulong)(*(long *)(this_00 + 0x28) - lVar24 >> 3);
      uVar19 = uVar37;
      uVar37 = (ulong)((int)uVar37 + 1);
    } while (bVar15);
  }
  if (local_90 != (undefined8 *)0x0) {
    operator_delete(local_90);
  }
  if (__s != (uint *)0x0) {
    operator_delete(__s);
  }
  if (*(long *)(lVar14 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_98 | uVar17 & 1;
}


