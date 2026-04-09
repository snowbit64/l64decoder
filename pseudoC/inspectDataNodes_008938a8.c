// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inspectDataNodes
// Entry Point: 008938a8
// Size: 2952 bytes
// Signature: undefined __thiscall inspectDataNodes(PedestrianSystem * this, TransformGroup * param_1)


/* PedestrianSystem::inspectDataNodes(TransformGroup*) */

void __thiscall PedestrianSystem::inspectDataNodes(PedestrianSystem *this,TransformGroup *param_1)

{
  void **ppvVar1;
  UserAttributes *this_00;
  undefined2 *puVar2;
  long lVar3;
  BoundingBox *pBVar4;
  undefined4 uVar5;
  float fVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  size_t sVar11;
  void *__dest;
  BoundingBox *__dest_00;
  uint *__s;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  PedestrianSystem *pPVar17;
  ulong uVar18;
  long lVar19;
  float *pfVar20;
  undefined4 *puVar21;
  ulong uVar22;
  CubicSpline *this_01;
  long lVar23;
  void *__src;
  size_t sVar24;
  ushort uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  int iVar30;
  float fStack_c8;
  float fStack_c4;
  BoundingBox *local_c0;
  undefined4 *local_b8;
  undefined4 *local_b0;
  undefined8 local_a8;
  float local_a0 [2];
  undefined8 local_98;
  float local_90 [2];
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  ppvVar1 = (void **)(this + 0x258d0);
  lVar23 = *(long *)(param_1 + 0x28);
  uVar13 = *(long *)(param_1 + 0x30) - lVar23;
  if ((int)(uVar13 >> 3) != 0) {
    uVar22 = 0;
    do {
      lVar23 = *(long *)(lVar23 + uVar22 * 8);
      uVar12 = (uint)*(undefined8 *)(lVar23 + 0x10);
      if ((uVar12 >> 0xb & 1) == 0) {
        if ((uVar12 >> 5 & 1) != 0) {
          lVar19 = *(long *)(lVar23 + 0x28);
          uVar14 = *(long *)(lVar23 + 0x30) - lVar19;
          if (0 < (int)(uVar14 >> 3)) {
            uVar18 = 0;
LAB_00893964:
            lVar19 = *(long *)(lVar19 + uVar18 * 8);
            if ((((*(byte *)(lVar19 + 0x10) >> 5 & 1) != 0) &&
                (lVar9 = UserAttributes::getAttribute((UserAttributes *)(lVar19 + 0x60),"groupName")
                , lVar9 != 0)) && (iVar8 = UserAttribute::getType(), iVar8 == 3)) {
              pcVar10 = (char *)UserAttribute::getString();
              if (pcVar10 == (char *)0x0) {
                if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                   iVar8 != 0)) {
                    /* try { // try from 00893b84 to 00893b8f has its CatchHandler @ 00894444 */
                  LogManager::LogManager
                            ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                  __cxa_atexit(LogManager::~LogManager,
                               &LogManager::getInstance()::singletonLogManager,&PTR_LOOP_00fd8de0);
                  __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                }
                LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                   "Error (Pedestrian system): group name not provided for static position with id %u.\n"
                                   ,(ulong)*(uint *)(lVar23 + 0x18));
              }
              else {
                if (*(int *)(this + 0x258fc) != 0) {
                  uVar16 = 0;
                  pPVar17 = this + 0xf38;
                  do {
                    sVar11 = strlen(pcVar10);
                    sVar24 = (ulong)((byte)*pPVar17 >> 1);
                    if (((byte)*pPVar17 & 1) != 0) {
                      sVar24 = *(size_t *)(pPVar17 + 8);
                    }
                    /* try { // try from 008939f8 to 00893a0b has its CatchHandler @ 00894494 */
                    if (((sVar11 == sVar24) &&
                        (iVar8 = std::__ndk1::
                                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                 ::compare((ulong)pPVar17,0,(char *)0xffffffffffffffff,
                                           (ulong)pcVar10), iVar8 == 0)) &&
                       (pPVar17[0xd0] != (PedestrianSystem)0x0)) {
                      uVar16 = *(long *)(lVar19 + 0x30) - *(long *)(lVar19 + 0x28);
                      if ((int)(uVar16 >> 3) < 1) goto LAB_00893ae4;
                      lVar9 = 0;
                      goto LAB_00893a38;
                    }
                    uVar16 = uVar16 + 1;
                    pPVar17 = pPVar17 + 0xd8;
                  } while (uVar16 < *(uint *)(this + 0x258fc));
                }
                if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                   iVar8 != 0)) {
                    /* try { // try from 00893b3c to 00893b47 has its CatchHandler @ 00894448 */
                  LogManager::LogManager
                            ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                  __cxa_atexit(LogManager::~LogManager,
                               &LogManager::getInstance()::singletonLogManager,&PTR_LOOP_00fd8de0);
                  __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                }
                LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                   "Error (Pedestrian system): group name %s not found for static position with id %u.\n"
                                   ,pcVar10,(ulong)*(uint *)(lVar23 + 0x18));
              }
            }
            goto LAB_00893ae4;
          }
        }
      }
      else if ((*(long *)(lVar23 + 0x170) != 0) &&
              ((*(byte *)(*(long *)(lVar23 + 0x170) + 0x22) >> 6 & 1) != 0)) {
        lVar19 = SplineGeometry::getSpline();
        fVar27 = (float)Spline::getLength();
        if (*(int *)(lVar19 + 0x30) == 1) {
          uVar14 = (ulong)*(uint *)(this + 0x258f8);
          if (0x1d < *(uint *)(this + 0x258f8)) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar8 != 0)) {
                    /* try { // try from 008943f0 to 008943fb has its CatchHandler @ 00894430 */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
            LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                              "PedestrianSystem system supports up to %u splines, %u were found in a map.\n"
                              ,0x1e,(ulong)*(uint *)(this + 0x258f8));
            break;
          }
          this_00 = (UserAttributes *)(lVar23 + 0x60);
          *(long *)(this + uVar14 * 0x80 + 0x38) = lVar23;
          *(long *)(this + uVar14 * 0x80 + 0x48) = lVar19;
          *(ulong *)(this + uVar14 * 0x80 + 0x58) = CONCAT44(1.0 / fVar27,0.001 / fVar27);
          lVar19 = UserAttributes::getAttribute(this_00,"width");
          fVar27 = 0.0;
          if ((lVar19 != 0) && (iVar8 = UserAttribute::getType(), iVar8 == 2)) {
            fVar27 = (float)UserAttribute::getFloat();
          }
          *(float *)(this + uVar14 * 0x80 + 0x50) = fVar27;
          *(float *)(this + uVar14 * 0x80 + 0x54) = fVar27 * 0.5;
          fVar27 = (float)Spline::getLength();
          pfVar20 = (float *)(this + uVar14 * 0x80 + 0x60);
          *pfVar20 = fVar27;
          lVar19 = UserAttributes::getAttribute(this_00,"density");
          if ((lVar19 != 0) && (iVar8 = UserAttribute::getType(), iVar8 == 2)) {
            fVar27 = (float)UserAttribute::getFloat();
            *pfVar20 = fVar27 * *pfVar20;
          }
          lVar19 = UserAttributes::getAttribute(this_00,"groupName");
          if ((lVar19 != 0) && (iVar8 = UserAttribute::getType(), iVar8 == 3)) {
            pcVar10 = (char *)UserAttribute::getString();
            if (pcVar10 == (char *)0x0) {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar8 != 0)) {
                    /* try { // try from 00893f28 to 00893f33 has its CatchHandler @ 00894434 */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
              LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                 "Error (Pedestrian system): group name not provided for spline with id %u.\n"
                                 ,(ulong)*(uint *)(lVar23 + 0x18));
            }
            else {
              if (*(int *)(this + 0x258fc) != 0) {
                uVar18 = 0;
                pPVar17 = this + 0xf38;
                do {
                  sVar11 = strlen(pcVar10);
                  sVar24 = (ulong)((byte)*pPVar17 >> 1);
                  if (((byte)*pPVar17 & 1) != 0) {
                    sVar24 = *(size_t *)(pPVar17 + 8);
                  }
                    /* try { // try from 00893d68 to 00893d7b has its CatchHandler @ 00894490 */
                  if (((sVar11 == sVar24) &&
                      (iVar8 = std::__ndk1::
                               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               ::compare((ulong)pPVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar10)
                      , iVar8 == 0)) && (pPVar17[0xd0] == (PedestrianSystem)0x0)) {
                    *(PedestrianSystem **)(this + uVar14 * 0x80 + 0x40) = pPVar17;
                    goto LAB_00893e18;
                  }
                  uVar18 = uVar18 + 1;
                  pPVar17 = pPVar17 + 0xd8;
                } while (uVar18 < *(uint *)(this + 0x258fc));
              }
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar8 != 0)) {
                    /* try { // try from 00893ee0 to 00893eeb has its CatchHandler @ 00894438 */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
              LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                 "Error (Pedestrian system): group name %s not found for spline with id %u.\n"
                                 ,pcVar10,(ulong)*(uint *)(lVar23 + 0x18));
            }
          }
LAB_00893e18:
          lVar23 = UserAttributes::getAttribute(this_00,"oneDirectional");
          if ((lVar23 != 0) && (iVar8 = UserAttribute::getType(), iVar8 == 0)) {
            bVar7 = UserAttribute::getBool();
            this[uVar14 * 0x80 + 100] = (PedestrianSystem)(bVar7 & 1);
          }
          *(int *)(this + 0x258f8) = *(int *)(this + 0x258f8) + 1;
          PedestrianSpawnGrid::addSpline
                    ((PedestrianSpawnGrid *)(this + 0x25918),
                     (PedestrianSpline *)(this + uVar14 * 0x80 + 0x38));
        }
        else {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar8 != 0)) {
                    /* try { // try from 00893e98 to 00893ea3 has its CatchHandler @ 0089443c */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                            "Warning: Non cubic spline detected when loading Pedestrian System.\n");
        }
      }
LAB_00893e6c:
      uVar22 = uVar22 + 1;
      if (uVar22 == (uVar13 >> 3 & 0xffffffff)) break;
      lVar23 = *(long *)(param_1 + 0x28);
    } while( true );
  }
  local_c0 = (BoundingBox *)0x0;
  local_b8 = (undefined4 *)0x0;
  local_b0 = (undefined4 *)0x0;
  *(void **)(this + 0x258d8) = *ppvVar1;
  if (*(int *)(this + 0x258f8) == 0) {
    puVar21 = (undefined4 *)0x0;
  }
  else {
    puVar21 = (undefined4 *)0x0;
    uVar13 = 0;
    do {
      uVar25 = 0;
      this_01 = *(CubicSpline **)(this + uVar13 * 0x80 + 0x48);
      while( true ) {
                    /* try { // try from 00894008 to 0089400f has its CatchHandler @ 008944a4 */
        iVar8 = Spline::getNumOfCV();
        uVar12 = (uint)uVar25;
        if (iVar8 - 1U <= uVar12) break;
                    /* try { // try from 00894020 to 00894193 has its CatchHandler @ 008944a8 */
        CubicSpline::solveCoordExtremes
                  (this_01,(float *)&local_98,(float *)&local_a8,&fStack_c4,&fStack_c8,uVar12,0.0,
                   1.0,0);
        CubicSpline::solveCoordExtremes
                  (this_01,local_90,local_a0,&fStack_c4,&fStack_c8,uVar12,0.0,1.0,2);
        lVar23 = *(long *)(this + uVar13 * 0x80 + 0x38);
        RawTransformGroup::updateWorldTransformation();
        uVar26 = NEON_fmadd((float)local_98,*(undefined4 *)(lVar23 + 0xc0),
                            local_98._4_4_ * *(float *)(lVar23 + 0xd0));
        fVar27 = (float)NEON_fmadd(local_90[0],*(undefined4 *)(lVar23 + 0xe0),uVar26);
        lVar19 = *(long *)(this + uVar13 * 0x80 + 0x38);
        local_98 = CONCAT44((float)((ulong)*(undefined8 *)(lVar23 + 0xe8) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar23 + 200) >> 0x20) * local_98._4_4_ +
                            (float)((ulong)*(undefined8 *)(lVar23 + 0xb8) >> 0x20) * (float)local_98
                            + (float)((ulong)*(undefined8 *)(lVar23 + 0xd8) >> 0x20) * local_90[0],
                            (float)*(undefined8 *)(lVar23 + 0xe8) +
                            (float)*(undefined8 *)(lVar23 + 200) * local_98._4_4_ +
                            (float)*(undefined8 *)(lVar23 + 0xb8) * (float)local_98 +
                            (float)*(undefined8 *)(lVar23 + 0xd8) * local_90[0]);
        local_90[0] = *(float *)(lVar23 + 0xf0) + fVar27;
        RawTransformGroup::updateWorldTransformation();
        puVar2 = *(undefined2 **)(this + 0x258d8);
        uVar26 = NEON_fmadd((float)local_a8,*(undefined4 *)(lVar19 + 0xc0),
                            local_a8._4_4_ * *(float *)(lVar19 + 0xd0));
        fVar27 = (float)NEON_fmadd(local_a0[0],*(undefined4 *)(lVar19 + 0xe0),uVar26);
        local_a8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar19 + 0xe8) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar19 + 200) >> 0x20) * local_a8._4_4_ +
                            (float)((ulong)*(undefined8 *)(lVar19 + 0xb8) >> 0x20) * (float)local_a8
                            + (float)((ulong)*(undefined8 *)(lVar19 + 0xd8) >> 0x20) * local_a0[0],
                            (float)*(undefined8 *)(lVar19 + 0xe8) +
                            (float)*(undefined8 *)(lVar19 + 200) * local_a8._4_4_ +
                            (float)*(undefined8 *)(lVar19 + 0xb8) * (float)local_a8 +
                            (float)*(undefined8 *)(lVar19 + 0xd8) * local_a0[0]);
        local_a0[0] = *(float *)(lVar19 + 0xf0) + fVar27;
        if (puVar2 < *(undefined2 **)(this + 0x258e0)) {
          *puVar2 = (short)uVar13;
          puVar2[1] = uVar25;
          *(undefined2 **)(this + 0x258d8) = puVar2 + 2;
        }
        else {
          __src = *ppvVar1;
          sVar24 = (long)puVar2 - (long)__src;
          uVar22 = ((long)sVar24 >> 2) + 1;
          if (uVar22 >> 0x3e != 0) {
                    /* try { // try from 008943b8 to 008943bf has its CatchHandler @ 0089449c */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar14 = (long)*(undefined2 **)(this + 0x258e0) - (long)__src;
          uVar18 = (long)uVar14 >> 1;
          if (uVar22 <= uVar18) {
            uVar22 = uVar18;
          }
          if (0x7ffffffffffffffb < uVar14) {
            uVar22 = 0x3fffffffffffffff;
          }
          if (uVar22 == 0) {
            __dest = (void *)0x0;
          }
          else {
            if (uVar22 >> 0x3e != 0) {
                    /* try { // try from 008943d4 to 008943df has its CatchHandler @ 0089449c */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            __dest = operator_new(uVar22 << 2);
          }
          puVar2 = (undefined2 *)((long)__dest + ((long)sVar24 >> 2) * 4);
          *puVar2 = (short)uVar13;
          puVar2[1] = uVar25;
          if (0 < (long)sVar24) {
            memcpy(__dest,__src,sVar24);
          }
          *ppvVar1 = __dest;
          *(undefined2 **)(this + 0x258d8) = puVar2 + 2;
          *(void **)(this + 0x258e0) = (void *)((long)__dest + uVar22 * 4);
          if (__src != (void *)0x0) {
            operator_delete(__src);
          }
        }
        fVar6 = local_90[0];
        fVar27 = local_a0[0];
        pBVar4 = local_c0;
        uVar5 = (float)local_98;
        uVar26 = (float)local_a8;
        if (puVar21 < local_b0) {
          *puVar21 = (float)local_98;
          uVar25 = uVar25 + 1;
          puVar21[1] = local_90[0];
          puVar21[2] = (float)local_a8;
          puVar21[3] = local_a0[0];
          puVar21 = puVar21 + 4;
          local_b8 = puVar21;
        }
        else {
          sVar24 = (long)puVar21 - (long)local_c0;
          uVar22 = ((long)sVar24 >> 4) + 1;
          if (uVar22 >> 0x3c != 0) {
                    /* try { // try from 008943c0 to 008943d3 has its CatchHandler @ 008944a0 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar14 = (long)local_b0 - (long)local_c0 >> 3;
          if (uVar22 <= uVar14) {
            uVar22 = uVar14;
          }
          if (0x7fffffffffffffef < (ulong)((long)local_b0 - (long)local_c0)) {
            uVar22 = 0xfffffffffffffff;
          }
          if (uVar22 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00894244 to 00894247 has its CatchHandler @ 00894498 */
          __dest_00 = (BoundingBox *)operator_new(uVar22 << 4);
          puVar21 = (undefined4 *)(__dest_00 + ((long)sVar24 >> 4) * 0x10);
          *puVar21 = uVar5;
          puVar21[1] = fVar6;
          puVar21[2] = uVar26;
          puVar21[3] = fVar27;
          if (0 < (long)sVar24) {
            memcpy(__dest_00,pBVar4,sVar24);
          }
          puVar21 = puVar21 + 4;
          local_b0 = (undefined4 *)(__dest_00 + uVar22 * 0x10);
          local_c0 = __dest_00;
          local_b8 = puVar21;
          if (pBVar4 != (BoundingBox *)0x0) {
            operator_delete(pBVar4);
          }
          uVar25 = uVar25 + 1;
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(this + 0x258f8));
  }
  pBVar4 = local_c0;
  uVar22 = (long)puVar21 - (long)local_c0;
  uVar13 = (long)uVar22 >> 4 & 0xffffffff;
  uVar12 = (uint)((long)uVar22 >> 4);
  if (uVar13 == 0) {
    __s = (uint *)0x0;
  }
  else {
    uVar13 = uVar13 << 2;
                    /* try { // try from 008942b8 to 008942bf has its CatchHandler @ 00894460 */
    __s = (uint *)operator_new(uVar13);
    memset(__s,0,uVar13);
  }
  if (uVar12 != 0) {
    uVar13 = uVar22 >> 4 & 0xffffffff;
    if (uVar13 < 8) {
      uVar22 = 0;
    }
    else {
      uVar18 = uVar22 >> 4 & 7;
      uVar22 = uVar13 - uVar18;
      uVar29 = 0x300000002;
      uVar28 = 0x100000000;
      puVar15 = (undefined8 *)(__s + 4);
      uVar14 = uVar22;
      do {
        iVar8 = (int)((ulong)uVar28 >> 0x20);
        iVar30 = (int)((ulong)uVar29 >> 0x20);
        uVar14 = uVar14 - 8;
        puVar15[-1] = uVar29;
        puVar15[-2] = uVar28;
        puVar15[1] = CONCAT44(iVar30 + 4,(int)uVar29 + 4);
        *puVar15 = CONCAT44(iVar8 + 4,(int)uVar28 + 4);
        puVar15 = puVar15 + 4;
        uVar28 = CONCAT44(iVar8 + 8,(int)uVar28 + 8);
        uVar29 = CONCAT44(iVar30 + 8,(int)uVar29 + 8);
      } while (uVar14 != 0);
      if (uVar18 == 0) goto LAB_00894340;
    }
    do {
      __s[uVar22] = (uint)uVar22;
      uVar22 = uVar22 + 1;
    } while (uVar13 != uVar22);
  }
LAB_00894340:
                    /* try { // try from 0089434c to 00894363 has its CatchHandler @ 00894464 */
  RectangleTree::buildRectangleNodes((RectangleTree *)(this + 0x258c8),uVar12,__s,pBVar4);
  PedestrianSpawnGrid::finishGrid();
  if (__s != (uint *)0x0) {
    operator_delete(__s);
  }
  if (pBVar4 != (BoundingBox *)0x0) {
    operator_delete(pBVar4);
  }
  if (*(long *)(lVar3 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    *(PedestrianSystem **)(this + (ulong)uVar12 * 0x18 + 0x24380) = pPVar17;
    *(undefined8 *)(this + (ulong)uVar12 * 0x18 + 0x24378) =
         *(undefined8 *)(*(long *)(lVar19 + 0x28) + lVar9);
    *(uint *)(this + 0x2590c) = uVar12 + 1;
    PedestrianSpawnGrid::addStaticPosition
              ((PedestrianSpawnGrid *)(this + 0x25918),
               (PedestrianStaticPosition *)(this + (ulong)uVar12 * 0x18 + 0x24378));
    lVar9 = lVar9 + 8;
    if ((uVar16 >> 3 & 0xffffffff) * 8 - lVar9 == 0) break;
LAB_00893a38:
    uVar12 = *(uint *)(this + 0x2590c);
    if (99 < uVar12) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0))
      {
                    /* try { // try from 00893bcc to 00893bd7 has its CatchHandler @ 00894440 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "PedestrianSystem system supports up to %u static positions, %u were found in a map.\n"
                        ,100,(ulong)*(uint *)(this + 0x2590c));
      break;
    }
  }
LAB_00893ae4:
  uVar18 = uVar18 + 1;
  if (uVar18 == (uVar14 >> 3 & 0xffffffff)) goto LAB_00893e6c;
  lVar19 = *(long *)(lVar23 + 0x28);
  goto LAB_00893964;
}


