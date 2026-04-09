// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createConvexVolumeDecomposition
// Entry Point: 00b78a78
// Size: 2420 bytes
// Signature: undefined __cdecl createConvexVolumeDecomposition(Brep * param_1, vector * param_2, uint param_3)


/* BrepUtil::createConvexVolumeDecomposition(Brep*, std::__ndk1::vector<Brep*,
   std::__ndk1::allocator<Brep*> >&, unsigned int) */

undefined4 BrepUtil::createConvexVolumeDecomposition(Brep *param_1,vector *param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  Brep **ppBVar3;
  uint uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *__s;
  void *__s_00;
  float *__s_01;
  BrepTriangle *pBVar14;
  Brep *this;
  void *__dest;
  int iVar15;
  ulong uVar16;
  undefined8 *puVar17;
  float *pfVar18;
  uint uVar19;
  long lVar20;
  undefined4 *puVar21;
  void *__src;
  int iVar22;
  undefined8 uVar23;
  double *pdVar24;
  float *pfVar26;
  ulong uVar27;
  long lVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  undefined8 *puVar36;
  float fVar37;
  float fVar38;
  double dVar39;
  undefined8 uVar40;
  float fVar41;
  undefined4 uVar42;
  double dVar43;
  float fVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  double dVar47;
  double dVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  uint local_190;
  uint local_18c;
  uint *local_188;
  float *local_180;
  double local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  double local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  uint local_138;
  undefined8 local_134;
  undefined8 uStack_12c;
  uint local_124;
  undefined4 uStack_120;
  double local_118;
  undefined2 local_110;
  undefined4 local_10c;
  undefined local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  double *local_d8 [2];
  uint local_c8;
  long local_a0;
  double *pdVar25;
  
  lVar5 = tpidr_el0;
  local_a0 = *(long *)(lVar5 + 0x28);
  uVar12 = Brep::isClosed();
  if ((uVar12 & 1) == 0) {
    uVar42 = 0;
  }
  else {
    plVar13 = (long *)VHACD::CreateVHACD();
    puVar36 = *(undefined8 **)(param_1 + 0x2ef0);
    lVar35 = *(long *)(param_1 + 0x2f68);
    fVar49 = *(float *)(puVar36 + 1);
    fVar51 = *(float *)puVar36;
    fVar50 = *(float *)((long)puVar36 + 4);
    uVar34 = *(long *)(param_1 + 0x2f70) - lVar35;
    uVar12 = (ulong)(*(long *)(param_1 + 0x2ef8) - (long)puVar36) >> 4 & 0xffff;
    uVar16 = uVar34 >> 5;
    uVar11 = (uint)(*(long *)(param_1 + 0x2ef8) - (long)puVar36);
    if (uVar12 == 0) {
      __s = (undefined8 *)0x0;
    }
    else {
      __s = (undefined8 *)operator_new(uVar12 * 0xc);
      memset(__s,0,((ulong)((int)(uVar12 * 0xc) - 0xc) / 0xc) * 0xc + 0xc);
    }
    puVar17 = __s;
    fVar38 = fVar49;
    fVar44 = fVar49;
    fVar52 = fVar50;
    fVar41 = fVar50;
    fVar53 = fVar51;
    fVar37 = fVar51;
    if ((uVar11 >> 4 & 0xffff) != 0) {
      do {
        uVar23 = *puVar36;
        *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar36 + 1);
        *puVar17 = uVar23;
        fVar37 = *(float *)puVar36;
        fVar41 = *(float *)((long)puVar36 + 4);
        fVar44 = *(float *)(puVar36 + 1);
        puVar36 = puVar36 + 2;
        fVar9 = fVar37;
        if (fVar51 <= fVar37) {
          fVar9 = fVar51;
        }
        fVar51 = fVar9;
        fVar9 = fVar41;
        if (fVar50 <= fVar41) {
          fVar9 = fVar50;
        }
        fVar50 = fVar9;
        fVar9 = fVar44;
        if (fVar49 <= fVar44) {
          fVar9 = fVar49;
        }
        fVar49 = fVar9;
        if (fVar37 <= fVar53) {
          fVar37 = fVar53;
        }
        if (fVar41 <= fVar52) {
          fVar41 = fVar52;
        }
        if (fVar44 <= fVar38) {
          fVar44 = fVar38;
        }
        uVar12 = uVar12 - 1;
        puVar17 = (undefined8 *)((long)puVar17 + 0xc);
        fVar38 = fVar44;
        fVar52 = fVar41;
        fVar53 = fVar37;
      } while (uVar12 != 0);
    }
    iVar15 = (int)uVar16;
    if (iVar15 * 3 == 0) {
      __s_00 = (void *)0x0;
    }
    else {
      uVar12 = (ulong)(uint)(iVar15 * 3) << 2;
                    /* try { // try from 00b78bdc to 00b78be3 has its CatchHandler @ 00b79404 */
      __s_00 = operator_new(uVar12);
      memset(__s_00,0,uVar12);
    }
    if (iVar15 != 0) {
      uVar12 = 0;
      lVar20 = *(long *)(param_1 + 0x2f50);
      uVar29 = 3;
      do {
        uVar4 = uVar29 - 2;
        uVar19 = uVar29 - 1;
        uVar32 = (ulong)uVar29;
        uVar29 = uVar29 + 4;
        *(uint *)((long)__s_00 + (uVar12 & 0xffffffff) * 4) =
             (uint)*(ushort *)(lVar20 + (ulong)*(ushort *)(lVar35 + (ulong)uVar4 * 8) * 0xc);
        iVar22 = (int)uVar12;
        *(uint *)((long)__s_00 + (ulong)(iVar22 + 1) * 4) =
             (uint)*(ushort *)(lVar20 + (ulong)*(ushort *)(lVar35 + (ulong)uVar19 * 8) * 0xc);
        uVar12 = uVar12 + 3;
        *(uint *)((long)__s_00 + (ulong)(iVar22 + 2) * 4) =
             (uint)*(ushort *)(lVar20 + (ulong)*(ushort *)(lVar35 + uVar32 * 8) * 0xc);
      } while ((uVar34 >> 5 & 0xffffffff) + (uVar16 & 0xffffffff) * 2 != uVar12);
    }
    local_10c = 0;
    fVar38 = fVar41 - fVar50;
    if (fVar41 - fVar50 <= fVar37 - fVar51) {
      fVar38 = fVar37 - fVar51;
    }
    local_108 = 0;
    uStack_140 = 0;
    local_148 = 0;
    uStack_150 = 0;
    local_158 = 0;
    uStack_12c = 0x100000004;
    local_134 = 0x400000040;
    fVar51 = fVar44 - fVar49;
    if (fVar44 - fVar49 <= fVar38) {
      fVar51 = fVar38;
    }
    uVar42 = NEON_fmin(fVar51 / 20.0,0x3f800000);
    fVar50 = (float)NEON_fmadd(uVar42,0x3f000000,0x3f000000);
    uStack_168 = 0x3fa999999999999a;
    local_170 = 0x3fa999999999999a;
    local_118 = (double)(fVar50 * fVar50 * fVar50);
    local_178 = local_118 * 0.015;
    iVar22 = (int)(fVar51 / (fVar50 * 0.05));
    local_160 = local_118 * 0.001;
    uStack_120 = 0xc;
    local_118 = local_118 * 0.07000000000000001;
    local_138 = iVar22 * iVar22 * iVar22;
    if (63999999 < local_138) {
      local_138 = 64000000;
    }
    local_110 = 0x101;
                    /* try { // try from 00b78d78 to 00b78d8b has its CatchHandler @ 00b79418 */
    local_124 = param_3;
    uVar12 = (**(code **)(*plVar13 + 8))(plVar13,__s,uVar11 >> 4 & 0xffff,__s_00,uVar16,&local_178);
    if ((uVar12 & 1) == 0) {
      uVar42 = 0;
    }
    else {
                    /* try { // try from 00b78da0 to 00b78da3 has its CatchHandler @ 00b79400 */
      uVar11 = (**(code **)(*plVar13 + 0x18))();
      if (uVar11 != 0) {
        uVar29 = 0;
        do {
                    /* try { // try from 00b78de4 to 00b78def has its CatchHandler @ 00b79440 */
          (**(code **)(*plVar13 + 0x20))(plVar13,uVar29,local_d8);
          uVar4 = local_c8;
          uVar12 = (ulong)local_c8;
          if (local_c8 == 0) {
            __s_01 = (float *)0x0;
          }
          else {
                    /* try { // try from 00b78e00 to 00b78e07 has its CatchHandler @ 00b79438 */
            __s_01 = (float *)operator_new(uVar12 * 0xc);
            memset(__s_01,0,((uVar12 * 0xc - 0xc) / 0xc) * 0xc + 0xc);
            uVar19 = uVar4 * 3;
            if (uVar19 != 0) {
              uVar12 = (ulong)uVar19 - 1 & 0x1fffffffffffffff;
              pfVar18 = __s_01;
              pdVar24 = local_d8[0];
              if (6 < uVar12) {
                uVar12 = uVar12 + 1;
                uVar32 = uVar12 & 0x3ffffffffffffff8;
                puVar36 = (undefined8 *)(__s_01 + 4);
                pdVar24 = local_d8[0] + 4;
                uVar16 = uVar32;
                do {
                  dVar39 = pdVar24[-3];
                  dVar6 = pdVar24[-4];
                  uVar16 = uVar16 - 8;
                  dVar43 = pdVar24[1];
                  dVar7 = *pdVar24;
                  dVar48 = pdVar24[3];
                  dVar47 = pdVar24[2];
                  puVar36[-1] = CONCAT44((float)pdVar24[-1],(float)pdVar24[-2]);
                  puVar36[-2] = CONCAT44((float)dVar39,(float)dVar6);
                  puVar36[1] = CONCAT44((float)dVar48,(float)dVar47);
                  *puVar36 = CONCAT44((float)dVar43,(float)dVar7);
                  puVar36 = puVar36 + 4;
                  pdVar24 = pdVar24 + 8;
                } while (uVar16 != 0);
                pfVar18 = __s_01 + uVar32;
                pdVar24 = local_d8[0] + uVar32;
                if (uVar12 == uVar32) goto LAB_00b78ed0;
              }
              do {
                pdVar25 = pdVar24 + 1;
                *pfVar18 = (float)*pdVar24;
                pfVar18 = pfVar18 + 1;
                pdVar24 = pdVar25;
              } while (pdVar25 != local_d8[0] + uVar19);
            }
          }
LAB_00b78ed0:
          local_188 = (uint *)0x0;
          local_180 = (float *)0x0;
                    /* try { // try from 00b78ed8 to 00b78ef7 has its CatchHandler @ 00b79450 */
          ConvexHull3DUtil::createHull(__s_01,uVar4,&local_180,&local_18c,&local_188,&local_190);
          uVar19 = local_18c;
          uVar12 = (ulong)local_18c;
                    /* try { // try from 00b78f04 to 00b78f07 has its CatchHandler @ 00b7943c */
          puVar36 = (undefined8 *)operator_new__(uVar12 * 0xc);
          pfVar18 = local_180;
          uVar4 = local_190;
          if (uVar19 != 0) {
            if (uVar19 < 4) {
LAB_00b78f1c:
              uVar32 = 0;
            }
            else {
              uVar27 = uVar12 - 1;
              uVar32 = 0;
              uVar16 = (uVar27 & 0xffffffff) + (uVar27 & 0xffffffff) * 2;
              bVar10 = (uVar16 & 0xffffffff00000000) == 0;
              uVar30 = (uint)uVar16;
              if ((((uVar30 != 0xffffffff) && (bVar10)) && (uVar27 >> 0x20 == 0)) &&
                 ((uVar30 < 0xfffffffe && (bVar10)))) {
                if ((puVar36 < local_180 + uVar12 * 3) &&
                   (local_180 < (float *)((long)puVar36 + uVar12 * 0xc))) goto LAB_00b78f1c;
                uVar16 = 0;
                uVar32 = uVar12 & 0xfffffffc;
                puVar17 = puVar36;
                do {
                  uVar27 = uVar16 & 0xfffffffc;
                  uVar16 = uVar16 + 0xc;
                  puVar2 = (undefined8 *)(local_180 + uVar27);
                  uVar8 = puVar2[2];
                  uVar40 = puVar2[5];
                  uVar23 = puVar2[4];
                  uVar46 = puVar2[1];
                  uVar45 = *puVar2;
                  puVar17[3] = puVar2[3];
                  puVar17[2] = uVar8;
                  puVar17[5] = uVar40;
                  puVar17[4] = uVar23;
                  puVar17[1] = uVar46;
                  *puVar17 = uVar45;
                  puVar17 = puVar17 + 6;
                } while ((ulong)(uVar19 >> 2) * 0xc - uVar16 != 0);
                if (uVar32 == uVar12) goto LAB_00b78f60;
              }
            }
            uVar19 = (int)uVar32 * 3;
            lVar35 = uVar12 - uVar32;
            pfVar26 = (float *)((long)puVar36 + uVar32 * 0xc + 4);
            do {
              uVar30 = uVar19 + 1;
              uVar1 = uVar19 + 2;
              uVar12 = (ulong)uVar19;
              uVar19 = uVar19 + 3;
              lVar35 = lVar35 + -1;
              fVar51 = local_180[uVar30];
              fVar50 = local_180[uVar1];
              pfVar26[-1] = local_180[uVar12];
              *pfVar26 = fVar51;
              pfVar26[1] = fVar50;
              pfVar26 = pfVar26 + 3;
            } while (lVar35 != 0);
          }
LAB_00b78f60:
          uVar12 = (ulong)local_190;
                    /* try { // try from 00b78f6c to 00b7902f has its CatchHandler @ 00b79454 */
          pBVar14 = (BrepTriangle *)operator_new__(uVar12 * 0x14);
          if (uVar4 != 0) {
            uVar16 = 0;
            puVar21 = (undefined4 *)(pBVar14 + 0x10);
            do {
              iVar22 = (int)uVar16;
              local_100._0_4_ =
                   CONCAT22((short)local_188[iVar22 + 1],(short)local_188[uVar16 & 0xffffffff]);
              uVar16 = uVar16 + 3;
              uVar4 = local_188[iVar22 + 2];
              *(undefined2 *)(puVar21 + -1) = 0xffff;
              puVar21[-4] = (undefined4)local_100;
              *puVar21 = 0;
              *(undefined4 *)((long)puVar21 + -10) = 0xffffffff;
              *(undefined2 *)((long)puVar21 + -6) = 0xffff;
              *(short *)(puVar21 + -3) = (short)uVar4;
              puVar21 = puVar21 + 5;
            } while (uVar12 * 3 != uVar16);
          }
          if (pfVar18 != (float *)0x0) {
            operator_delete__(pfVar18);
          }
          if (local_188 != (uint *)0x0) {
            operator_delete__(local_188);
          }
          uVar4 = local_18c;
          if (local_18c < 0x10000) {
                    /* try { // try from 00b7905c to 00b79067 has its CatchHandler @ 00b79434 */
            this = (Brep *)operator_new(0x2fb8);
                    /* try { // try from 00b79070 to 00b7909b has its CatchHandler @ 00b79424 */
            Brep::Brep(this,(ushort)uVar4,(Vector3 *)puVar36,0,(BrepWedge *)0x0,local_190,pBVar14,
                       true,true,(Matrix4x4 *)0x0,(Matrix4x4 *)0x0,(uchar *)0x0);
            ppBVar3 = *(Brep ***)(param_2 + 8);
            if (ppBVar3 == *(Brep ***)(param_2 + 0x10)) {
              __src = *(void **)param_2;
              uVar16 = (long)ppBVar3 - (long)__src;
              uVar12 = ((long)uVar16 >> 3) + 1;
              if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 00b793d4 to 00b793e7 has its CatchHandler @ 00b79420 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar12 <= (ulong)((long)uVar16 >> 2)) {
                uVar12 = (long)uVar16 >> 2;
              }
              if (0x7ffffffffffffff7 < uVar16) {
                uVar12 = 0x1fffffffffffffff;
              }
              if (uVar12 == 0) {
                __dest = (void *)0x0;
              }
              else {
                if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                    /* try { // try from 00b791a8 to 00b791ab has its CatchHandler @ 00b79434 */
                __dest = operator_new(uVar12 << 3);
              }
              ppBVar3 = (Brep **)((long)__dest + ((long)uVar16 >> 3) * 8);
              *ppBVar3 = this;
              if (0 < (long)uVar16) {
                memcpy(__dest,__src,uVar16);
              }
              *(void **)param_2 = __dest;
              *(Brep ***)(param_2 + 8) = ppBVar3 + 1;
              *(void **)(param_2 + 0x10) = (void *)((long)__dest + uVar12 * 8);
              if (__src != (void *)0x0) {
                operator_delete(__src);
              }
            }
            else {
              *ppBVar3 = this;
              *(Brep ***)(param_2 + 8) = ppBVar3 + 1;
            }
            if (iVar15 != 0) {
              lVar35 = 0;
              uVar19 = 0;
              do {
                lVar33 = *(long *)(param_1 + 0x2f68);
                lVar28 = *(long *)(param_1 + 0x2f50);
                lVar31 = *(long *)(param_1 + 0x2ef0);
                lVar20 = lVar33 + lVar35;
                puVar17 = (undefined8 *)
                          (lVar31 + (ulong)*(ushort *)
                                            (lVar28 + (ulong)*(ushort *)(lVar20 + 8) * 0xc) * 0x10);
                local_100 = *puVar17;
                local_f8 = *(undefined4 *)(puVar17 + 1);
                puVar17 = (undefined8 *)
                          (lVar31 + (ulong)*(ushort *)
                                            (lVar28 + (ulong)*(ushort *)(lVar20 + 0x10) * 0xc) *
                                    0x10);
                local_f4 = *puVar17;
                local_ec = *(undefined4 *)(puVar17 + 1);
                puVar17 = (undefined8 *)
                          (lVar31 + (ulong)*(ushort *)
                                            (lVar28 + (ulong)*(ushort *)(lVar20 + 0x18) * 0xc) *
                                    0x10);
                local_e8 = *puVar17;
                local_e0 = *(undefined4 *)(puVar17 + 1);
                    /* try { // try from 00b792a4 to 00b792cf has its CatchHandler @ 00b79458 */
                uVar12 = ConvexHull3DUtil::intersectsHull
                                   ((float *)puVar36,local_18c,(float *)&local_100,3);
                if ((uVar12 & 1) != 0) {
                  Brep::setGroupId(param_1,uVar19,
                                   *(uint *)(lVar33 + lVar35 + 4) | 1 << (ulong)(uVar29 & 0x1f));
                }
                uVar19 = uVar19 + 1;
                lVar35 = lVar35 + 0x20;
              } while ((uVar34 >> 5 & 0xffffffff) << 5 != lVar35);
            }
            operator_delete__(pBVar14);
            operator_delete__(puVar36);
          }
          else {
            operator_delete__(pBVar14);
            operator_delete__(puVar36);
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar22 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar22 != 0)) {
                    /* try { // try from 00b79308 to 00b79313 has its CatchHandler @ 00b793ec */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
            LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                               "Error: Brep does not allow more then %u points\n",0xffff);
          }
          if (__s_01 != (float *)0x0) {
            operator_delete(__s_01);
          }
          if (uVar4 >> 0x10 != 0) {
            uVar42 = 0;
            if (__s_00 == (void *)0x0) goto LAB_00b79354;
            goto LAB_00b7934c;
          }
          uVar29 = uVar29 + 1;
        } while (uVar29 != uVar11);
      }
                    /* try { // try from 00b793b0 to 00b793b7 has its CatchHandler @ 00b79418 */
      (**(code **)(*plVar13 + 0x30))();
      uVar42 = 1;
    }
    if (__s_00 != (void *)0x0) {
LAB_00b7934c:
      operator_delete(__s_00);
    }
LAB_00b79354:
    if (__s != (undefined8 *)0x0) {
      operator_delete(__s);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_a0) {
    return uVar42;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


