// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startDynamic
// Entry Point: 00934240
// Size: 1328 bytes
// Signature: undefined __cdecl startDynamic(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startDynamic(void*, char const*, char const**) */

void I3DSceneGraphFactory::startDynamic(void *param_1,char *param_2,char **param_3)

{
  undefined8 *puVar1;
  long lVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  char *pcVar7;
  char *__nptr;
  long *plVar8;
  GsShape *this;
  void *__dest;
  size_t __n;
  GsMaterial *this_00;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  void *pvVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  ushort local_b8;
  undefined local_b6;
  void *local_a8;
  undefined8 local_a0;
  size_t local_98;
  void *local_90;
  byte *local_88;
  byte *local_80;
  undefined8 local_78;
  char **local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_70 = param_3;
  lVar6 = ExpatUtil::getAttr("name",param_3);
  pcVar7 = (char *)ExpatUtil::getAttr("dynamicId",param_3);
  if ((lVar6 == 0) || (pcVar7 == (char *)0x0)) goto LAB_009346dc;
  __nptr = (char *)ExpatUtil::getAttr("emitterShapeNodeId",param_3);
  plVar8 = (long *)I3DLoad::findDynamic((I3DLoad *)param_1,pcVar7);
  if (plVar8 == (long *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 0093471c to 00934727 has its CatchHandler @ 00934770 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: \'%s\' dynamic with id %s not found.\n",lVar6,pcVar7);
    goto LAB_009346dc;
  }
  this = (GsShape *)
         (**(code **)(*plVar8 + 0x38))(plVar8,lVar6,0,0,*(undefined4 *)((long)param_1 + 0x254));
  if (__nptr != (char *)0x0) {
    uVar16 = *(undefined8 *)(this + 0x170);
    iVar4 = atoi(__nptr);
    lVar17 = *(long *)((long)param_1 + 0x280);
    puVar1 = *(undefined8 **)(lVar17 + 0x20);
    if (puVar1 == *(undefined8 **)(lVar17 + 0x28)) {
      pvVar14 = *(void **)(lVar17 + 0x18);
      uVar10 = (long)puVar1 - (long)pvVar14;
      uVar15 = ((long)uVar10 >> 4) + 1;
      if (uVar15 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar15 <= (ulong)((long)uVar10 >> 3)) {
        uVar15 = (long)uVar10 >> 3;
      }
      if (0x7fffffffffffffef < uVar10) {
        uVar15 = 0xfffffffffffffff;
      }
      if (uVar15 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar15 * 0x10);
      puVar1 = (undefined8 *)((long)__dest + ((long)uVar10 >> 4) * 0x10);
      *(int *)(puVar1 + 1) = iVar4;
      *puVar1 = uVar16;
      if (0 < (long)uVar10) {
        memcpy(__dest,pvVar14,uVar10);
      }
      *(void **)(lVar17 + 0x18) = __dest;
      *(undefined8 **)(lVar17 + 0x20) = puVar1 + 2;
      *(void **)(lVar17 + 0x28) = (void *)((long)__dest + uVar15 * 0x10);
      if (pvVar14 != (void *)0x0) {
        operator_delete(pvVar14);
      }
    }
    else {
      *puVar1 = uVar16;
      *(int *)(puVar1 + 1) = iVar4;
      *(undefined8 **)(lVar17 + 0x20) = puVar1 + 2;
    }
  }
  readTransformGroup((I3DReader *)&local_70,(I3DLoad *)param_1,(TransformGroup *)this,false,false,
                     true,false);
  pcVar7 = (char *)ExpatUtil::getAttr("castsShadows",param_3);
  if (pcVar7 == (char *)0x0) {
    uVar5 = 0;
  }
  else {
    iVar4 = strcasecmp(pcVar7,"true");
    uVar5 = (uint)(iVar4 == 0) << 8;
  }
  pcVar7 = (char *)ExpatUtil::getAttr("receiveShadows",param_3);
  uVar13 = uVar5;
  if (pcVar7 != (char *)0x0) {
    iVar4 = strcasecmp(pcVar7,"true");
    uVar13 = uVar5 | 0x200;
    if (iVar4 != 0) {
      uVar13 = uVar5;
    }
  }
  GsShape::setShapeFlags(this,*(uint *)(this + 400) | uVar13);
  pcVar7 = (char *)ExpatUtil::getAttr("materialIds",param_3);
  if ((pcVar7 != (char *)0x0) && (*(short *)(this + 0x196) == 0)) {
    local_88 = (byte *)0x0;
    local_80 = (byte *)0x0;
    local_78 = 0;
    __n = strlen(pcVar7);
    if (0xffffffffffffffef < __n) {
                    /* try { // try from 00934758 to 0093475f has its CatchHandler @ 009347c4 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      pvVar14 = (void *)((ulong)&local_a0 | 1);
      local_a0 = CONCAT71(local_a0._1_7_,(char)((int)__n << 1));
      if (__n != 0) goto LAB_00934504;
    }
    else {
      uVar15 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 009344ec to 009344f3 has its CatchHandler @ 009347c4 */
      pvVar14 = operator_new(uVar15);
      local_a0 = uVar15 | 1;
      local_98 = __n;
      local_90 = pvVar14;
LAB_00934504:
      memcpy(pvVar14,pcVar7,__n);
    }
    *(undefined *)((long)pvVar14 + __n) = 0;
    local_b6 = 0;
    local_b8 = 0x2c02;
                    /* try { // try from 00934524 to 0093453b has its CatchHandler @ 0093479c */
    StringUtil::split((basic_string *)&local_a0,(basic_string *)&local_b8,(vector *)&local_88,true,
                      true);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    pbVar11 = local_80;
    if (local_80 != local_88) {
      uVar15 = 0;
      do {
        pbVar9 = local_88 + uVar15 * 0x18;
        pbVar11 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar11 = pbVar9 + 1;
        }
        uVar5 = atoi((char *)pbVar11);
                    /* try { // try from 009345c8 to 0093461b has its CatchHandler @ 009347c8 */
        this_00 = (GsMaterial *)I3DLoad::findMaterial((I3DLoad *)param_1,uVar5);
        if (this_00 == (GsMaterial *)0x0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar4 != 0)) {
                    /* try { // try from 00934630 to 00934637 has its CatchHandler @ 00934788 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                            "Warning: Material id %u not found in dynamic \'%s\'.\n",(ulong)uVar5,
                            lVar6);
        }
        else {
          GsMaterial::validateTextures(this_00,*(STREAM_QUEUE *)((long)param_1 + 0x254));
          GsShape::addMaterial(this,this_00);
        }
        uVar15 = (ulong)((int)uVar15 + 1);
        uVar10 = ((long)local_80 - (long)local_88 >> 3) * -0x5555555555555555;
        pbVar11 = local_88;
      } while (uVar15 <= uVar10 && uVar10 - uVar15 != 0);
    }
    pbVar9 = pbVar11;
    pbVar12 = local_80;
    if (pbVar11 != (byte *)0x0) {
      while (pbVar3 = pbVar12, pbVar3 != pbVar11) {
        pbVar12 = pbVar3 + -0x18;
        pbVar9 = local_88;
        if ((*pbVar12 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
          pbVar9 = local_88;
        }
      }
      local_80 = pbVar11;
      operator_delete(pbVar9);
    }
  }
  plVar8 = *(long **)(*(long *)((long)param_1 + 0x280) + 0x60);
  (**(code **)(*plVar8 + 0x18))(plVar8,this,0xffffffff);
  *(GsShape **)(*(long *)((long)param_1 + 0x280) + 0x60) = this;
LAB_009346dc:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


