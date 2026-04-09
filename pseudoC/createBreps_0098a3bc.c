// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createBreps
// Entry Point: 0098a3bc
// Size: 1452 bytes
// Signature: undefined __cdecl createBreps(char * param_1, IndexedTriangleSet * param_2, uint param_3, IndexedTriangleSet * * param_4, Brep * * param_5, vector * param_6)


/* MeshSplitUtil::createBreps(char const*, IndexedTriangleSet*, unsigned int, IndexedTriangleSet
   const**, Brep*&, std::__ndk1::vector<Brep*, std::__ndk1::allocator<Brep*> >&) */

void MeshSplitUtil::createBreps
               (char *param_1,IndexedTriangleSet *param_2,uint param_3,IndexedTriangleSet **param_4,
               Brep **param_5,vector *param_6)

{
  long lVar1;
  undefined8 *puVar2;
  long **pplVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long *this;
  long *plVar7;
  void *pvVar8;
  ulong uVar9;
  float *__s;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long **pplVar14;
  ulong uVar15;
  size_t __n;
  long lVar16;
  void *pvVar17;
  ulong uVar18;
  long lVar19;
  uint local_a8;
  uint local_a4;
  uint *local_a0;
  float *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar15 = (ulong)param_3;
  this = (long *)createGraphicsBrep(param_1,param_2);
  plVar7 = this;
  if (this != (long *)0x0) {
    if (param_3 == 0) {
      uVar15 = BrepUtil::createConvexVolumeDecomposition((Brep *)this,param_6,0x20);
      if ((uVar15 & 1) == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0
           )) {
                    /* try { // try from 0098a8e0 to 0098a8eb has its CatchHandler @ 0098a96c */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning: Failed to create physics for splittable mesh \'%s\'. Probably too complex.\n"
                          ,param_1);
        (**(code **)(*this + 8))(this);
        plVar7 = (long *)0x0;
        goto LAB_0098a844;
      }
    }
    else {
      if (0x20 < param_3) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0
           )) {
                    /* try { // try from 0098a898 to 0098a8a3 has its CatchHandler @ 0098a970 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning: Failed to create physics for splittable mesh \'%s\'. Too many defined meshes.\n"
                          ,param_1);
        (**(code **)(*this + 8))(this);
        plVar7 = (long *)0x0;
        goto LAB_0098a844;
      }
      pvVar17 = *(void **)param_6;
      if ((ulong)(*(long *)(param_6 + 0x10) - (long)pvVar17 >> 3) < uVar15) {
        __n = *(long *)(param_6 + 8) - (long)pvVar17;
        pvVar8 = operator_new(uVar15 * 8);
        if (0 < (long)__n) {
          memcpy(pvVar8,pvVar17,__n);
        }
        *(void **)param_6 = pvVar8;
        *(size_t *)(param_6 + 8) = (long)pvVar8 + __n;
        *(void **)(param_6 + 0x10) = (void *)((long)pvVar8 + uVar15 * 8);
        if (pvVar17 != (void *)0x0) {
          operator_delete(pvVar17);
        }
      }
      uVar18 = 0;
      do {
        uVar9 = IndexedTriangleSet::is16Bit();
        if ((uVar9 & 1) == 0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar6 != 0)) {
                    /* try { // try from 0098a928 to 0098a933 has its CatchHandler @ 0098a968 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                            "Warning: Failed to create physics %u for splittable mesh \'%s\'.\n",
                            uVar18 & 0xffffffff,param_1);
          (**(code **)(*this + 8))(this);
          pplVar14 = *(long ***)param_6;
          pplVar3 = *(long ***)(param_6 + 8);
          if (pplVar14 != pplVar3) {
            do {
              if (*pplVar14 != (long *)0x0) {
                (**(code **)(**pplVar14 + 8))();
              }
              pplVar14 = pplVar14 + 1;
            } while (pplVar14 != pplVar3);
            pplVar14 = *(long ***)param_6;
          }
          plVar7 = (long *)0x0;
          *(long ***)(param_6 + 8) = pplVar14;
          goto LAB_0098a844;
        }
        uVar5 = TriangleSet::getNumVertices();
        if (uVar5 * 3 == 0) {
          __s = (float *)0x0;
        }
        else {
          uVar9 = (ulong)(uVar5 * 3) << 2;
          __s = (float *)operator_new(uVar9);
          memset(__s,0,uVar9);
        }
                    /* try { // try from 0098a568 to 0098a573 has its CatchHandler @ 0098a98c */
        pvVar17 = (void *)TriangleSet::getPositions();
        memcpy(__s,pvVar17,(ulong)uVar5 * 0xc);
        local_a0 = (uint *)0x0;
        local_98 = (float *)0x0;
                    /* try { // try from 0098a584 to 0098a59f has its CatchHandler @ 0098a990 */
        ConvexHull3DUtil::createHull(__s,uVar5,&local_98,&local_a4,&local_a0,&local_a8);
        lVar19 = this[0x5ed];
        uVar9 = this[0x5ee] - lVar19;
        if ((int)(uVar9 >> 5) != 0) {
          lVar16 = 0;
          uVar5 = 0;
          while( true ) {
            lVar1 = lVar19 + lVar16;
            lVar12 = this[0x5ea];
            lVar13 = this[0x5de];
            puVar2 = (undefined8 *)
                     (lVar13 + (ulong)*(ushort *)(lVar12 + (ulong)*(ushort *)(lVar1 + 8) * 0xc) *
                               0x10);
            local_90 = *puVar2;
            local_88 = *(undefined4 *)(puVar2 + 1);
            puVar2 = (undefined8 *)
                     (lVar13 + (ulong)*(ushort *)(lVar12 + (ulong)*(ushort *)(lVar1 + 0x10) * 0xc) *
                               0x10);
            local_84 = *puVar2;
            local_7c = *(undefined4 *)(puVar2 + 1);
            puVar2 = (undefined8 *)
                     (lVar13 + (ulong)*(ushort *)(lVar12 + (ulong)*(ushort *)(lVar1 + 0x18) * 0xc) *
                               0x10);
            local_78 = *puVar2;
            local_70 = *(undefined4 *)(puVar2 + 1);
                    /* try { // try from 0098a644 to 0098a66b has its CatchHandler @ 0098a998 */
            uVar10 = ConvexHull3DUtil::intersectsHull(local_98,local_a4,(float *)&local_90,3);
            if ((uVar10 & 1) != 0) {
              Brep::setGroupId((Brep *)this,uVar5,
                               *(uint *)(lVar19 + lVar16 + 4) | 1 << (ulong)((uint)uVar18 & 0x1f));
            }
            if ((uVar9 >> 5 & 0xffffffff) * 0x20 + -0x20 == lVar16) break;
            lVar19 = this[0x5ed];
            uVar5 = uVar5 + 1;
            lVar16 = lVar16 + 0x20;
          }
        }
                    /* try { // try from 0098a690 to 0098a70b has its CatchHandler @ 0098a994 */
        uVar11 = BrepUtil::createBrep(local_98,local_a4,local_a0,local_a8,true,true);
        puVar2 = *(undefined8 **)(param_6 + 8);
        if (puVar2 == *(undefined8 **)(param_6 + 0x10)) {
          pvVar17 = *(void **)param_6;
          uVar10 = (long)puVar2 - (long)pvVar17;
          uVar9 = ((long)uVar10 >> 3) + 1;
          if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 0098a874 to 0098a887 has its CatchHandler @ 0098a988 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar9 <= (ulong)((long)uVar10 >> 2)) {
            uVar9 = (long)uVar10 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar10) {
            uVar9 = 0x1fffffffffffffff;
          }
          if (uVar9 == 0) {
            pvVar8 = (void *)0x0;
          }
          else {
            if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            pvVar8 = operator_new(uVar9 << 3);
          }
          puVar2 = (undefined8 *)((long)pvVar8 + ((long)uVar10 >> 3) * 8);
          *puVar2 = uVar11;
          if (0 < (long)uVar10) {
            memcpy(pvVar8,pvVar17,uVar10);
          }
          *(void **)param_6 = pvVar8;
          *(undefined8 **)(param_6 + 8) = puVar2 + 1;
          *(void **)(param_6 + 0x10) = (void *)((long)pvVar8 + uVar9 * 8);
          if (pvVar17 != (void *)0x0) {
            operator_delete(pvVar17);
          }
        }
        else {
          *puVar2 = uVar11;
          *(undefined8 **)(param_6 + 8) = puVar2 + 1;
        }
        if (local_98 != (float *)0x0) {
          operator_delete__(local_98);
        }
        if (local_a0 != (uint *)0x0) {
          operator_delete__(local_a0);
        }
        if (__s != (float *)0x0) {
          operator_delete(__s);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar15);
    }
    plVar7 = (long *)0x1;
    *param_5 = (Brep *)this;
  }
LAB_0098a844:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar7);
  }
  return;
}


