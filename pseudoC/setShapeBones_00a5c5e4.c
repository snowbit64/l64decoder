// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setShapeBones
// Entry Point: 00a5c5e4
// Size: 1040 bytes
// Signature: undefined __cdecl setShapeBones(GsShape * param_1, TransformGroup * param_2, TransformGroup * param_3, bool param_4, bool param_5)


/* ScenegraphUtil::setShapeBones(GsShape*, TransformGroup*, TransformGroup*, bool, bool) */

undefined4
ScenegraphUtil::setShapeBones
          (GsShape *param_1,TransformGroup *param_2,TransformGroup *param_3,bool param_4,
          bool param_5)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  long lVar3;
  undefined8 ****ppppuVar4;
  int iVar5;
  RawTransformGroup **ppRVar6;
  TransformGroup *pTVar7;
  undefined8 ****ppppuVar8;
  TransformGroup **ppTVar9;
  undefined8 ***pppuVar10;
  ulong uVar11;
  undefined8 ***pppuVar12;
  undefined8 ****ppppuVar13;
  undefined4 uVar14;
  uint uVar15;
  ulong uVar16;
  RawTransformGroup **ppRVar17;
  size_t __n;
  uint uVar18;
  RawTransformGroup **local_a8;
  RawTransformGroup **local_98;
  undefined8 ****local_90;
  undefined8 ****local_88;
  undefined8 uStack_80;
  TransformGroup **local_78;
  uint local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  GsShape::getBindBones(param_1,(RawTransformGroup ***)&local_78,&local_6c);
  if (local_6c != 0) {
    pTVar7 = param_2;
    if (param_3 != (TransformGroup *)0x0) {
LAB_00a5c640:
      local_88 = (undefined8 ****)0x0;
      uStack_80 = 0;
                    /* try { // try from 00a5c650 to 00a5c65b has its CatchHandler @ 00a5ca28 */
      local_90 = &local_88;
      mapTree(param_3,pTVar7,(map *)&local_90);
      uVar16 = (ulong)local_6c;
      local_a8 = (RawTransformGroup **)0x0;
      if (local_6c == 0) {
        uVar15 = 0;
      }
      else {
                    /* try { // try from 00a5c674 to 00a5c677 has its CatchHandler @ 00a5ca30 */
        local_a8 = (RawTransformGroup **)operator_new(uVar16 << 3);
        uVar18 = 0;
        local_98 = local_a8 + uVar16;
        ppRVar6 = local_a8;
        do {
          if (local_88 == (undefined8 ****)0x0) {
LAB_00a5c808:
            if (param_5) {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar5 != 0)) {
                    /* try { // try from 00a5c928 to 00a5c933 has its CatchHandler @ 00a5ca10 */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
                    /* try { // try from 00a5c834 to 00a5c847 has its CatchHandler @ 00a5ca24 */
              LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                 "Error: setShapeBones for shape \'%s\' failed. Could not find new bone \'%s\'.\n"
                                 ,*(undefined8 *)(param_1 + 8),*(undefined8 *)(local_78[uVar18] + 8)
                                );
            }
            uVar14 = 0;
            if (local_a8 == (RawTransformGroup **)0x0) goto LAB_00a5c8c4;
            goto LAB_00a5c8bc;
          }
          pppuVar10 = (undefined8 ***)local_78[uVar18];
          ppppuVar2 = &local_88;
          ppppuVar4 = local_88;
          do {
            ppppuVar13 = ppppuVar4;
            ppppuVar8 = ppppuVar2;
            pppuVar12 = ppppuVar13[4];
            ppppuVar2 = ppppuVar8;
            if (pppuVar12 >= pppuVar10) {
              ppppuVar2 = ppppuVar13;
            }
            ppppuVar4 = (undefined8 ****)ppppuVar13[pppuVar12 < pppuVar10];
          } while ((undefined8 ****)ppppuVar13[pppuVar12 < pppuVar10] != (undefined8 ****)0x0);
          if ((undefined8 *****)ppppuVar2 == &local_88) goto LAB_00a5c808;
          if (pppuVar10 <= pppuVar12) {
            ppppuVar8 = ppppuVar13;
          }
          if (pppuVar10 < ppppuVar8[4]) goto LAB_00a5c808;
          pppuVar10 = ppppuVar2[5];
          if (ppRVar6 < local_98) {
            ppRVar17 = ppRVar6 + 1;
            *ppRVar6 = (RawTransformGroup *)pppuVar10;
            ppRVar6 = local_a8;
          }
          else {
            __n = (long)ppRVar6 - (long)local_a8;
            uVar1 = ((long)__n >> 3) + 1;
            if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 00a5c904 to 00a5c917 has its CatchHandler @ 00a5ca38 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar11 = (long)local_98 - (long)local_a8 >> 2;
            if (uVar1 <= uVar11) {
              uVar1 = uVar11;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)local_98 - (long)local_a8)) {
              uVar1 = 0x1fffffffffffffff;
            }
            if (uVar1 == 0) {
              ppRVar6 = (RawTransformGroup **)0x0;
            }
            else {
              if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00a5c74c to 00a5c74f has its CatchHandler @ 00a5ca34 */
              ppRVar6 = (RawTransformGroup **)operator_new(uVar1 << 3);
            }
            ppRVar17 = ppRVar6 + ((long)__n >> 3) + 1;
            ppRVar6[(long)__n >> 3] = (RawTransformGroup *)pppuVar10;
            if (0 < (long)__n) {
              memcpy(ppRVar6,local_a8,__n);
            }
            local_98 = ppRVar6 + uVar1;
            if (local_a8 != (RawTransformGroup **)0x0) {
              operator_delete(local_a8);
              uVar16 = (ulong)local_6c;
            }
          }
          local_a8 = ppRVar6;
          uVar18 = uVar18 + 1;
          uVar15 = (uint)uVar16;
          ppRVar6 = ppRVar17;
        } while (uVar18 < uVar15);
      }
                    /* try { // try from 00a5c8a0 to 00a5c8af has its CatchHandler @ 00a5ca30 */
      GsShape::setBindBones(param_1,local_a8,uVar15,param_4);
      uVar14 = 1;
      if (local_a8 != (RawTransformGroup **)0x0) {
LAB_00a5c8bc:
        operator_delete(local_a8);
      }
LAB_00a5c8c4:
      std::__ndk1::
      __tree<std::__ndk1::__value_type<TransformGroup*,TransformGroup*>,std::__ndk1::__map_value_compare<TransformGroup*,std::__ndk1::__value_type<TransformGroup*,TransformGroup*>,std::__ndk1::less<TransformGroup*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<TransformGroup*,TransformGroup*>>>
      ::destroy((__tree<std::__ndk1::__value_type<TransformGroup*,TransformGroup*>,std::__ndk1::__map_value_compare<TransformGroup*,std::__ndk1::__value_type<TransformGroup*,TransformGroup*>,std::__ndk1::less<TransformGroup*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<TransformGroup*,TransformGroup*>>>
                 *)&local_90,(__tree_node *)local_88);
      goto LAB_00a5c8d0;
    }
    param_3 = (TransformGroup *)findLowestCommonRootNode(local_6c,local_78);
    ppTVar9 = local_78;
    if (param_3 == (TransformGroup *)0x0) {
      if (param_5) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0
           )) {
                    /* try { // try from 00a5c9b8 to 00a5c9c3 has its CatchHandler @ 00a5c9f4 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: setShapeBones for shape \'%s\' failed. Could not find bone hierachy root.\n"
                           ,*(undefined8 *)(param_1 + 8));
      }
    }
    else {
      do {
        if (*ppTVar9 == param_3) goto LAB_00a5c640;
        pTVar7 = *(TransformGroup **)(pTVar7 + 0x20);
      } while ((pTVar7 != (TransformGroup *)0x0) &&
              (ppTVar9 = (TransformGroup **)(*ppTVar9 + 0x20), ((byte)pTVar7[0x10] >> 5 & 1) != 0));
      if (param_5) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0
           )) {
                    /* try { // try from 00a5c970 to 00a5c97b has its CatchHandler @ 00a5c9f8 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: setShapeBones for shape \'%s\' failed. Hierarchy root not available for new bones \'%s\'.\n"
                           ,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8));
      }
    }
  }
  uVar14 = 0;
LAB_00a5c8d0:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}


