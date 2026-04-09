// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bindTransforms
// Entry Point: 00747f94
// Size: 1888 bytes
// Signature: undefined __thiscall bindTransforms(CharacterSet * this, TransformGroup * * param_1, uint param_2)


/* CharacterSet::bindTransforms(TransformGroup**, unsigned int) */

void __thiscall
CharacterSet::bindTransforms(CharacterSet *this,TransformGroup **param_1,uint param_2)

{
  long lVar1;
  TransformGroup **ppTVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  int iVar6;
  void *__dest;
  void *pvVar7;
  ulong uVar8;
  Logger *pLVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  TransformGroup *pTVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  ulong uVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  float fVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  float fVar49;
  undefined4 uVar50;
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 *puVar24;
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  lVar10 = *(long *)(this + 0x40);
  if (param_2 != 0) {
    lVar1 = *(long *)(lVar10 + 0x10);
    lVar10 = *(long *)(lVar10 + 0x18);
    uVar25 = 0;
    do {
      pTVar20 = param_1[uVar25];
      if ((pTVar20 == (TransformGroup *)0x0) || (((byte)pTVar20[0x10] >> 5 & 1) == 0)) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0
           )) {
                    /* try { // try from 00748660 to 00748667 has its CatchHandler @ 0074870c */
          pLVar9 = (Logger *)operator_new(0x38);
                    /* try { // try from 0074866c to 0074866f has its CatchHandler @ 007486fc */
          Logger::Logger(pLVar9);
          LogManager::getInstance()::singletonLogManager = pLVar9;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning: CharacterSet binding failed: %s.\n",
                          *(undefined8 *)(param_1[uVar25 & 0xffffffff] + 8));
        goto LAB_007485fc;
      }
      ppTVar2 = *(TransformGroup ***)(this + 0xd8);
      if (ppTVar2 == *(TransformGroup ***)(this + 0xe0)) {
        pvVar7 = *(void **)(this + 0xd0);
        uVar14 = (long)ppTVar2 - (long)pvVar7;
        uVar8 = ((long)uVar14 >> 3) + 1;
        if (uVar8 >> 0x3d != 0) goto LAB_0074864c;
        if (uVar8 <= (ulong)((long)uVar14 >> 2)) {
          uVar8 = (long)uVar14 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar14) {
          uVar8 = 0x1fffffffffffffff;
        }
        if (uVar8 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if (uVar8 >> 0x3d != 0) goto LAB_0074863c;
          __dest = operator_new(uVar8 << 3);
        }
        ppTVar2 = (TransformGroup **)((long)__dest + ((long)uVar14 >> 3) * 8);
        *ppTVar2 = pTVar20;
        if (0 < (long)uVar14) {
          memcpy(__dest,pvVar7,uVar14);
        }
        *(void **)(this + 0xd0) = __dest;
        *(TransformGroup ***)(this + 0xd8) = ppTVar2 + 1;
        *(void **)(this + 0xe0) = (void *)((long)__dest + uVar8 * 8);
        if (pvVar7 != (void *)0x0) {
          operator_delete(pvVar7);
        }
      }
      else {
        *ppTVar2 = pTVar20;
        *(TransformGroup ***)(this + 0xd8) = ppTVar2 + 1;
      }
      if (lVar10 == lVar1) {
        lVar19 = *(long *)(this + 0x40);
        if (((byte)pTVar20[0x41] >> 3 & 1) != 0) {
          TransformGroup::updateEulerFromMatrix();
        }
        FUN_007204e4(lVar19 + 0x10,pTVar20 + 0x130);
        if (((byte)pTVar20[0x41] >> 3 & 1) != 0) {
          TransformGroup::updateEulerFromMatrix();
        }
        uStack_b8 = 0x3f80000000000000;
        local_c0 = 0;
        sincosf(*(float *)(pTVar20 + 0x144),&fStack_104,&local_108);
        fVar42 = local_108;
        fVar28 = -fStack_104;
        fVar45 = fStack_104 * -0.0;
        uVar46 = NEON_fmadd(fStack_104,0,local_108);
        fVar35 = (float)NEON_fnmsub(local_108,0,fStack_104);
        fVar49 = fStack_104 + local_108 * 0.0;
        uVar44 = NEON_fmadd(fStack_104,0,local_108 * 0.0);
        fVar26 = (float)NEON_fmadd(local_108,0,fVar45);
        fVar29 = local_108 + fVar45;
        sincosf(*(float *)(pTVar20 + 0x140),&fStack_10c,&local_110);
        fVar36 = fStack_10c * -0.0;
        fVar30 = local_110 * 0.0;
        uVar43 = NEON_fmadd(uVar46,local_110,fVar36);
        uVar41 = NEON_fmadd(fVar49,local_110,fVar36);
        local_e4 = NEON_fmadd(uVar44,local_110,fVar36);
        uVar47 = NEON_fmadd(uVar46,fStack_10c,fVar30);
        uVar48 = NEON_fmadd(fVar49,fStack_10c,fVar30);
        uVar46 = NEON_fmadd(uVar44,fStack_10c,local_110);
        uVar50 = NEON_fnmsub(uVar44,local_110,fStack_10c);
        uVar44 = NEON_fmadd(uVar44,fStack_10c,fVar30);
        sincosf(*(float *)(pTVar20 + 0x13c),&fStack_114,&local_118);
        fVar30 = (float)NEON_fnmadd(fVar42,0,-fVar45);
        fVar42 = (float)NEON_fnmadd(fVar42,0,-fVar28);
        local_e0 = NEON_fmadd(uVar47,fStack_114,fVar35 * local_118);
        uStack_dc = NEON_fmadd(uVar48,fStack_114,fVar29 * local_118);
        local_d8 = NEON_fmadd(uVar46,fStack_114,fVar26 * local_118);
        uStack_c4 = NEON_fmadd(uVar44,local_118,fStack_114 * fVar30);
        uStack_d4 = NEON_fmadd(uVar44,fStack_114,fVar26 * local_118);
        local_d0 = NEON_fmadd(uVar47,local_118,fStack_114 * fVar42);
        uStack_cc = NEON_fmadd(uVar48,local_118,fStack_114 * -fVar29);
        local_c8 = NEON_fmadd(uVar46,local_118,fStack_114 * fVar30);
        local_f0 = uVar43;
        uStack_ec = uVar41;
        local_e8 = uVar50;
        GsQuaternion::set((GsQuaternion *)&local_100,(Matrix4x4 *)&local_f0);
        lVar19 = *(long *)(this + 0x40);
        puVar23 = *(undefined8 **)(lVar19 + 0x30);
        if (puVar23 == *(undefined8 **)(lVar19 + 0x38)) {
          puVar22 = *(undefined8 **)(lVar19 + 0x28);
          uVar14 = (long)puVar23 - (long)puVar22;
          lVar15 = (long)uVar14 >> 4;
          uVar8 = lVar15 + 1;
          if (uVar8 >> 0x3c != 0) goto LAB_0074864c;
          if (uVar8 <= (ulong)((long)uVar14 >> 3)) {
            uVar8 = (long)uVar14 >> 3;
          }
          if (0x7fffffffffffffef < uVar14) {
            uVar8 = 0xfffffffffffffff;
          }
          if (uVar8 >> 0x3c != 0) {
LAB_0074863c:
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar7 = operator_new(uVar8 * 0x10);
          puVar12 = (undefined8 *)((long)pvVar7 + lVar15 * 0x10);
          puVar13 = puVar12 + 2;
          puVar12[1] = uStack_f8;
          *puVar12 = local_100;
          if ((long)puVar23 - (long)puVar22 != 0) {
            uVar16 = ((long)puVar23 - (long)puVar22) - 0x10;
            puVar11 = puVar12;
            if (0x2f < uVar16) {
              uVar14 = uVar14 & 0xfffffffffffffff0;
              uVar17 = (long)puVar23 + (-0x10 - (long)puVar22) & 0xfffffffffffffff0;
              lVar18 = uVar14 - uVar17;
              if ((((puVar23 + -1 <= (undefined8 *)((long)pvVar7 + lVar18 + -0xc) ||
                     (long)pvVar7 + (uVar14 - 8) <=
                     (long)(undefined4 *)((long)puVar23 - 0xcU) - uVar17) &&
                   ((undefined4 *)((long)puVar23 - 4U) <= (undefined4 *)((long)pvVar7 + lVar18 + -8)
                    || (long)pvVar7 + (uVar14 - 4) <= (long)(puVar23 + -1) - uVar17)) &&
                  (puVar23 <= (undefined8 *)((long)pvVar7 + lVar18 + -4) ||
                   (long)pvVar7 + uVar14 <= (long)(undefined4 *)((long)puVar23 - 4U) - uVar17)) &&
                 ((undefined4 *)((long)puVar23 - 0xcU) <=
                  (undefined4 *)((long)pvVar7 + lVar18 + -0x10) ||
                  (long)pvVar7 + (uVar14 - 0xc) <= (long)puVar23 + (-0x10 - uVar17))) {
                uVar14 = (uVar16 >> 4) + 1;
                uVar17 = uVar14 & 0x1ffffffffffffffc;
                puVar12 = puVar12 + uVar17 * -2;
                uVar16 = uVar17;
                puVar5 = (undefined4 *)((long)pvVar7 + lVar15 * 0x10);
                puVar11 = puVar23;
                do {
                  uVar46 = *(undefined4 *)((long)puVar11 - 0x3c);
                  uVar31 = *(undefined4 *)(puVar11 + -7);
                  uVar37 = *(undefined4 *)((long)puVar11 - 0x34);
                  uVar41 = *(undefined4 *)(puVar11 + -6);
                  uVar47 = *(undefined4 *)((long)puVar11 - 0x2c);
                  uVar32 = *(undefined4 *)(puVar11 + -5);
                  uVar38 = *(undefined4 *)((long)puVar11 - 0x24);
                  uVar43 = *(undefined4 *)(puVar11 + -4);
                  uVar48 = *(undefined4 *)((long)puVar11 - 0x1c);
                  uVar33 = *(undefined4 *)(puVar11 + -3);
                  uVar39 = *(undefined4 *)((long)puVar11 - 0x14);
                  uVar44 = *(undefined4 *)(puVar11 + -2);
                  uVar50 = *(undefined4 *)((long)puVar11 - 0xc);
                  uVar34 = *(undefined4 *)(puVar11 + -1);
                  uVar40 = *(undefined4 *)((long)puVar11 - 4);
                  uVar16 = uVar16 - 4;
                  puVar5[-0x10] = *(undefined4 *)(puVar11 + -8);
                  puVar5[-0xf] = uVar46;
                  puVar5[-0xe] = uVar31;
                  puVar5[-0xd] = uVar37;
                  puVar5[-0xc] = uVar41;
                  puVar5[-0xb] = uVar47;
                  puVar5[-10] = uVar32;
                  puVar5[-9] = uVar38;
                  puVar5[-8] = uVar43;
                  puVar5[-7] = uVar48;
                  puVar5[-6] = uVar33;
                  puVar5[-5] = uVar39;
                  puVar5[-4] = uVar44;
                  puVar5[-3] = uVar50;
                  puVar5[-2] = uVar34;
                  puVar5[-1] = uVar40;
                  puVar5 = puVar5 + -0x10;
                  puVar11 = puVar11 + -8;
                } while (uVar16 != 0);
                puVar11 = puVar12;
                puVar23 = puVar23 + uVar17 * -2;
                if (uVar14 == uVar17) goto LAB_00748320;
              }
            }
            do {
              puVar24 = puVar23 + -2;
              uVar27 = *puVar24;
              puVar12 = puVar11 + -2;
              puVar11[-1] = puVar23[-1];
              *puVar12 = uVar27;
              puVar11 = puVar12;
              puVar23 = puVar24;
            } while (puVar24 != puVar22);
          }
LAB_00748320:
          *(undefined8 **)(lVar19 + 0x28) = puVar12;
          *(undefined8 **)(lVar19 + 0x30) = puVar13;
          *(void **)(lVar19 + 0x38) = (void *)((long)pvVar7 + uVar8 * 0x10);
          if (puVar22 != (undefined8 *)0x0) {
            operator_delete(puVar22);
          }
        }
        else {
          puVar23[1] = uStack_f8;
          *puVar23 = local_100;
          *(undefined8 **)(lVar19 + 0x30) = puVar23 + 2;
        }
        lVar19 = *(long *)(this + 0x40);
        if (((byte)pTVar20[0x41] >> 3 & 1) != 0) {
          TransformGroup::updateEulerFromMatrix();
        }
        FUN_007204e4(lVar19 + 0x40,pTVar20 + 0x148);
        lVar19 = *(long *)(this + 0x40);
        uVar3 = *(uint *)(pTVar20 + 0x40);
        uVar8 = *(ulong *)(lVar19 + 0x60);
        if (uVar8 == *(long *)(lVar19 + 0x68) * 0x40) {
          if ((long)(uVar8 + 1) < 0) {
LAB_0074864c:
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar8 < 0x3fffffffffffffff) {
            uVar14 = *(long *)(lVar19 + 0x68) << 7;
            uVar8 = uVar8 + 0x40 & 0xffffffffffffffc0;
            if (uVar8 <= uVar14) {
              uVar8 = uVar14;
            }
          }
          else {
            uVar8 = 0x7fffffffffffffff;
          }
          std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::reserve
                    ((vector<bool,std::__ndk1::allocator<bool>> *)(lVar19 + 0x58),uVar8);
          uVar8 = *(ulong *)(lVar19 + 0x60);
        }
        lVar15 = *(long *)(lVar19 + 0x58);
        uVar16 = uVar8 >> 6;
        uVar14 = 1L << (uVar8 & 0x3f);
        *(ulong *)(lVar19 + 0x60) = uVar8 + 1;
        if ((uVar3 & 1) == 0) {
          uVar14 = *(ulong *)(lVar15 + uVar16 * 8) & (uVar14 ^ 0xffffffffffffffff);
        }
        else {
          uVar14 = *(ulong *)(lVar15 + uVar16 * 8) | uVar14;
        }
        *(ulong *)(lVar15 + uVar16 * 8) = uVar14;
        plVar21 = *(long **)(pTVar20 + 0x110);
      }
      else {
        plVar21 = *(long **)(pTVar20 + 0x110);
      }
      if ((plVar21 != (long *)0x0) && (iVar6 = FUN_00f27700(0xffffffff,plVar21 + 1), iVar6 < 2)) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
      FUN_00f276d0(1,this + 0x28);
      uVar25 = uVar25 + 1;
      *(CharacterSet **)(pTVar20 + 0x110) = this + 0x20;
    } while (uVar25 != param_2);
    lVar10 = *(long *)(this + 0x40);
  }
  if (*(long *)(lVar10 + 0x78) != *(long *)(lVar10 + 0x70)) {
    uVar25 = 0;
    do {
      lVar10 = *(long *)(this + 0xd0);
      lVar1 = *(long *)(this + 0xd8);
      uVar8 = Clip::getNumOfTransforms();
      if ((uVar8 & 0xffffffff) < (ulong)(lVar1 - lVar10 >> 3)) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0
           )) {
                    /* try { // try from 007486b0 to 007486b7 has its CatchHandler @ 007486f8 */
          pLVar9 = (Logger *)operator_new(0x38);
                    /* try { // try from 007486bc to 007486bf has its CatchHandler @ 007486f4 */
          Logger::Logger(pLVar9);
          LogManager::getInstance()::singletonLogManager = pLVar9;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning: CharacterSet clip failure. All clips must contain the same number of transformations.\n"
                         );
        goto LAB_007485fc;
      }
      uVar25 = (ulong)((int)uVar25 + 1);
    } while (uVar25 < (ulong)(*(long *)(*(long *)(this + 0x40) + 0x78) -
                              *(long *)(*(long *)(this + 0x40) + 0x70) >> 3));
  }
  *(undefined2 *)(this + 0x50) = 0x101;
LAB_007485fc:
  if (*(long *)(lVar4 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


