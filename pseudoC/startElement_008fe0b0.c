// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startElement
// Entry Point: 008fe0b0
// Size: 2280 bytes
// Signature: undefined __cdecl startElement(void * param_1, char * param_2, char * * param_3)


/* I3DLoad::startElement(void*, char const*, char const**) */

void I3DLoad::startElement(void *param_1,char *param_2,char **param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  void *__dest;
  size_t sVar7;
  __tree_node_base **pp_Var8;
  undefined8 *puVar9;
  TransformGroup *this;
  char *pcVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  Node **ppNVar14;
  uint uVar15;
  long *plVar16;
  long *plVar17;
  void *pvVar18;
  char *__s;
  ulong uVar19;
  long **pplVar20;
  long **pplVar21;
  long **pplVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint local_388;
  uint local_384;
  ulong local_380;
  undefined4 local_378;
  __tree_end_node *local_370;
  float local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  __tree_end_node *local_350;
  float local_348 [2];
  ulong local_340;
  size_t sStack_338;
  void *local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined local_2d0;
  undefined8 local_2c8;
  long *local_188;
  byte local_a0;
  undefined8 local_98;
  size_t sStack_90;
  void *local_88;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  if (**(char **)((long)param_1 + 0x1c0) != '\0') {
    *(undefined *)((long)param_1 + 0x11) = 1;
    goto LAB_008fe260;
  }
  if (*(char *)((long)param_1 + 0x11) != '\0') goto LAB_008fe260;
  lVar23 = 0;
  uVar15 = *(uint *)(*(long *)((long)param_1 + 0x20) + -4);
  while( true ) {
    bVar2 = *(byte *)((ulong)uVar15 * 0x30 + 0xfde988 + lVar23);
    uVar19 = (ulong)bVar2;
    if ((bVar2 == 0x5d) || (0 < *(int *)((long)param_1 + 0x30))) goto LAB_008fe190;
    if ((*(char *)((long)param_1 + 0x70) != '\0') &&
       (uVar6 = ExpatUtil::getUIntAttr("referenceId",&local_384,param_3), (uVar6 & 1) != 0)) break;
    iVar5 = strcmp(param_2,*(char **)(s_nodeClasses + uVar19 * 0x30));
    if (iVar5 == 0) {
      if (*(code **)(s_nodeClasses + uVar19 * 0x30 + 0x10) != (code *)0x0) {
        (**(code **)(s_nodeClasses + uVar19 * 0x30 + 0x10))(param_1,param_2,param_3);
      }
      goto LAB_008fe194;
    }
    lVar23 = lVar23 + 1;
    if (lVar23 == 0xc) goto LAB_008fe190;
  }
  plVar16 = (long *)((long)param_1 + 0x90);
  plVar17 = (long *)*plVar16;
  *(undefined4 *)((long)param_1 + 0x30) = *(undefined4 *)((long)param_1 + 0x14);
  plVar11 = plVar16;
  if (plVar17 != (long *)0x0) goto LAB_008fe2bc;
LAB_008fe190:
  uVar19 = 0;
LAB_008fe194:
  uVar25 = (undefined4)uVar19;
  goto LAB_008fe198;
LAB_008fe2bc:
  do {
    if (*(uint *)(plVar17 + 4) >= local_384) {
      plVar11 = plVar17;
    }
    plVar17 = (long *)plVar17[*(uint *)(plVar17 + 4) < local_384];
  } while (plVar17 != (long *)0x0);
  if ((plVar11 != plVar16) && (*(uint *)(plVar11 + 4) <= local_384)) {
    if ((*(byte *)(plVar11 + 5) & 1) == 0) {
      __s = (char *)((long)plVar11 + 0x29);
    }
    else {
      __s = (char *)plVar11[7];
      if (__s == (char *)0x0) goto LAB_008fe2ec;
    }
    pplVar20 = *(long ***)((long)param_1 + 0x78);
    sVar7 = strlen(__s);
    if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar7 < 0x17) {
      pvVar18 = (void *)((ulong)&local_98 | 1);
      local_98 = CONCAT71(local_98._1_7_,(char)((int)sVar7 << 1));
      if (sVar7 != 0) goto LAB_008fe364;
    }
    else {
      uVar19 = sVar7 + 0x10 & 0xfffffffffffffff0;
      pvVar18 = operator_new(uVar19);
      local_98 = uVar19 | 1;
      sStack_90 = sVar7;
      local_88 = pvVar18;
LAB_008fe364:
      memcpy(pvVar18,__s,sVar7);
    }
    local_330 = local_88;
    sStack_338 = sStack_90;
    local_340 = local_98;
    *(undefined *)((long)pvVar18 + sVar7) = 0;
    local_98 = 0;
    sStack_90 = 0;
    local_88 = (void *)0x0;
    local_328 = 0;
    uStack_320 = 0;
                    /* try { // try from 008fe398 to 008fe3bf has its CatchHandler @ 008fe9e0 */
    pp_Var8 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<TransformGroup*,bool>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<TransformGroup*,bool>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<TransformGroup*,bool>>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<TransformGroup*,bool>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<TransformGroup*,bool>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<TransformGroup*,bool>>>>
                          *)pplVar20,&local_350,(basic_string *)&local_340);
    puVar24 = (undefined8 *)*pp_Var8;
    puVar9 = puVar24;
    if (puVar24 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)operator_new(0x48);
      pvVar18 = local_330;
      sVar7 = sStack_338;
      uVar19 = local_340;
      sStack_338 = 0;
      local_330 = (void *)0x0;
      local_340 = 0;
      puVar9[5] = sVar7;
      puVar9[4] = uVar19;
      puVar9[6] = pvVar18;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[8] = uStack_320;
      puVar9[7] = local_328;
      puVar9[2] = local_350;
      *pp_Var8 = (__tree_node_base *)puVar9;
      puVar13 = puVar9;
      if ((long *)**pplVar20 != (long *)0x0) {
        *pplVar20 = (long *)**pplVar20;
        puVar13 = (undefined8 *)*pp_Var8;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)pplVar20[1],(__tree_node_base *)puVar13);
      pplVar20[2] = (long *)((long)pplVar20[2] + 1);
    }
    if ((local_340 & 1) == 0) {
      if ((local_98 & 1) == 0) goto LAB_008fe438;
LAB_008fe474:
      operator_delete(local_88);
      if (puVar24 == (undefined8 *)0x0) goto LAB_008fe480;
LAB_008fe43c:
      if (*(char *)(puVar9 + 8) == '\0') {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0
           )) {
                    /* try { // try from 008fe8c0 to 008fe8cb has its CatchHandler @ 008fe9b0 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        lVar23 = (long)param_1 + 0x211;
        if ((*(byte *)((long)param_1 + 0x210) & 1) != 0) {
          lVar23 = *(long *)((long)param_1 + 0x220);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: Cyclical reference found \'%s\' while loading \'%s\'\n",__s,
                           lVar23);
        uVar25 = 0;
        goto LAB_008fe198;
      }
      if ((ScenegraphNode *)puVar9[7] == (ScenegraphNode *)0x0) goto LAB_008fe2ec;
      this = (TransformGroup *)
             CloneUtil::cloneScenegraphNode
                       ((ScenegraphNode *)puVar9[7],false,false,
                        *(MeshSplitFileState **)((long)param_1 + 0x1a8));
    }
    else {
      operator_delete(local_330);
      if ((local_98 & 1) != 0) goto LAB_008fe474;
LAB_008fe438:
      if (puVar24 != (undefined8 *)0x0) goto LAB_008fe43c;
LAB_008fe480:
      local_98 = local_98 & 0xffffffffffffff00;
      I3DLoad((I3DLoad *)&local_340,(bool *)&local_98);
      local_2c8 = *(undefined8 *)((long)param_1 + 0x78);
      local_2d0 = 1;
                    /* try { // try from 008fe4a4 to 008fe4f3 has its CatchHandler @ 008fe9cc */
      iVar5 = loadI3DFileAsync((I3DLoad *)&local_340,__s,1,false,false,false,
                               *(MeshSplitFileState **)((long)param_1 + 0x1a8),
                               (StreamQueueCallback *)0x0,(void *)0x0,(LOAD_PROGRESS *)0x0);
      if (iVar5 != 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0
           )) {
                    /* try { // try from 008fe90c to 008fe917 has its CatchHandler @ 008fe99c */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: Could not load i3d reference \'%s\'.\n",__s);
        *(undefined *)(puVar9 + 8) = 1;
LAB_008fe5cc:
        ~I3DLoad((I3DLoad *)&local_340);
        uVar25 = 0;
        goto LAB_008fe198;
      }
      *(undefined *)(puVar9 + 8) = 1;
      *(byte *)((long)param_1 + 0x2a0) = *(byte *)((long)param_1 + 0x2a0) | local_a0;
      if ((local_188 == (long *)0x0) || ((int)sStack_338 != 3)) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0
           )) {
                    /* try { // try from 008fe95c to 008fe967 has its CatchHandler @ 008fe998 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
                    /* try { // try from 008fe5b4 to 008fe5cb has its CatchHandler @ 008fe9c4 */
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: Could not load i3d reference \'%s\'.\n",__s);
        goto LAB_008fe5cc;
      }
      ppNVar14 = (Node **)local_188[5];
      uVar15 = (uint)((ulong)(local_188[6] - (long)ppNVar14) >> 3);
      if (uVar15 < 2) {
        if (uVar15 != 0) goto LAB_008fe5e0;
        pcVar10 = (char *)LogManager::getInstance();
        LogManager::warnf(pcVar10,"Warning: Empty reference i3d \'%s\'.\n",__s);
LAB_008fe614:
        this = (TransformGroup *)0x0;
      }
      else {
                    /* try { // try from 008fe588 to 008fe59b has its CatchHandler @ 008fe9c8 */
        pcVar10 = (char *)LogManager::getInstance();
        LogManager::warnf(pcVar10,
                          "Warning: Reference i3d \'%s\' has more than one root node. All but the first node are ignored.\n"
                          ,__s);
        ppNVar14 = (Node **)local_188[5];
LAB_008fe5e0:
        this = (TransformGroup *)*ppNVar14;
        if (((byte)((Node *)this)[0x10] >> 5 & 1) == 0) goto LAB_008fe614;
                    /* try { // try from 008fe5ec to 008fe613 has its CatchHandler @ 008fe9c8 */
        Node::unlink((Node *)this,false);
        puVar9[7] = this;
      }
      (**(code **)(*local_188 + 8))(local_188);
      ~I3DLoad((I3DLoad *)&local_340);
    }
    if (this != (TransformGroup *)0x0) {
      sStack_338 = sStack_338 & 0xffffffff00000000;
      local_340 = 0;
      sStack_90 = sStack_90 & 0xffffffff00000000;
      local_98 = 0;
      local_350 = (__tree_end_node *)0x3f8000003f800000;
      local_348[0] = 1.0;
      pcVar10 = (char *)ExpatUtil::getAttr("translation",param_3);
      if (pcVar10 != (char *)0x0) {
        pcVar10 = (char *)StringUtil::atof(pcVar10,(float *)&local_340);
        pcVar10 = (char *)StringUtil::atof(pcVar10,(float *)((ulong)&local_340 | 4));
        StringUtil::atof(pcVar10,(float *)&sStack_338);
      }
      pcVar10 = (char *)ExpatUtil::getAttr("rotation",param_3);
      if (pcVar10 != (char *)0x0) {
        pcVar10 = (char *)StringUtil::atof(pcVar10,(float *)&local_98);
        pcVar10 = (char *)StringUtil::atof(pcVar10,(float *)((ulong)&local_98 | 4));
        StringUtil::atof(pcVar10,(float *)&sStack_90);
      }
      pcVar10 = (char *)ExpatUtil::getAttr("scale",param_3);
      if (pcVar10 != (char *)0x0) {
        pcVar10 = (char *)StringUtil::atof(pcVar10,(float *)&local_350);
        pcVar10 = (char *)StringUtil::atof(pcVar10,(float *)((ulong)&local_350 | 4));
        StringUtil::atof(pcVar10,local_348);
      }
      pcVar10 = (char *)ExpatUtil::getAttr("visibility",param_3);
      if (pcVar10 == (char *)0x0) {
        bVar4 = true;
      }
      else {
        iVar5 = strcasecmp(pcVar10,"false");
        bVar4 = iVar5 != 0;
      }
      uVar25 = MathUtil::degreeToRadian((float)local_98);
      uVar26 = MathUtil::degreeToRadian(local_98._4_4_);
      local_358 = MathUtil::degreeToRadian((float)sStack_90);
      local_370 = local_350;
      local_368 = local_348[0];
      local_380 = local_340;
      local_378 = (int)sStack_338;
      local_360 = uVar25;
      uStack_35c = uVar26;
      TransformGroup::setTRSTransformation
                (this,(Vector3 *)&local_380,(Vector3 *)&local_360,(Vector3 *)&local_370);
      ScenegraphNode::setVisibility((ScenegraphNode *)this,bVar4);
      local_388 = 0;
      ExpatUtil::getUIntAttr("nodeId",&local_388,param_3);
      uVar15 = local_388;
      pplVar20 = (long **)((long)param_1 + 0x138);
      pplVar21 = *(long ***)((long)param_1 + 0x138);
      pplVar22 = pplVar20;
      while (pplVar21 != (long **)0x0) {
        while (pplVar22 = pplVar21, local_388 < *(uint *)(pplVar22 + 4)) {
          pplVar20 = pplVar22;
          pplVar21 = (long **)*pplVar22;
          if ((long **)*pplVar22 == (long **)0x0) goto LAB_008fe7f4;
        }
        if (local_388 <= *(uint *)(pplVar22 + 4)) break;
        pplVar20 = pplVar22 + 1;
        pplVar21 = (long **)*pplVar20;
      }
LAB_008fe7f4:
      if (*pplVar20 == (long *)0x0) {
        plVar11 = (long *)operator_new(0x30);
        *(uint *)(plVar11 + 4) = uVar15;
        plVar11[5] = (long)this;
        *plVar11 = 0;
        plVar11[1] = 0;
        plVar11[2] = (long)pplVar22;
        *pplVar20 = plVar11;
        if (**(long **)((long)param_1 + 0x130) != 0) {
          *(long *)((long)param_1 + 0x130) = **(long **)((long)param_1 + 0x130);
          plVar11 = *pplVar20;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)((long)param_1 + 0x138),(__tree_node_base *)plVar11);
        *(long *)((long)param_1 + 0x140) = *(long *)((long)param_1 + 0x140) + 1;
      }
      if (*(void **)(this + 0x100) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x100));
      }
      if (*__s == '\0') {
        uVar12 = 0;
      }
      else {
        uVar12 = StringUtil::createStrCpy(__s);
      }
      *(undefined8 *)(this + 0x100) = uVar12;
      plVar11 = *(long **)(*(long *)((long)param_1 + 0x280) + 0x60);
      (**(code **)(*plVar11 + 0x18))(plVar11,this,0xffffffff);
      uVar25 = 0;
      goto LAB_008fe198;
    }
  }
LAB_008fe2ec:
  uVar25 = 0;
LAB_008fe198:
  puVar1 = *(undefined4 **)((long)param_1 + 0x20);
  if (puVar1 == *(undefined4 **)((long)param_1 + 0x28)) {
    pvVar18 = *(void **)((long)param_1 + 0x18);
    uVar6 = (long)puVar1 - (long)pvVar18;
    uVar19 = ((long)uVar6 >> 2) + 1;
    if (uVar19 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar19 <= (ulong)((long)uVar6 >> 1)) {
      uVar19 = (long)uVar6 >> 1;
    }
    if (0x7ffffffffffffffb < uVar6) {
      uVar19 = 0x3fffffffffffffff;
    }
    if (uVar19 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar19 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar19 << 2);
    }
    puVar1 = (undefined4 *)((long)__dest + ((long)uVar6 >> 2) * 4);
    *puVar1 = uVar25;
    if (0 < (long)uVar6) {
      memcpy(__dest,pvVar18,uVar6);
    }
    *(void **)((long)param_1 + 0x18) = __dest;
    *(undefined4 **)((long)param_1 + 0x20) = puVar1 + 1;
    *(void **)((long)param_1 + 0x28) = (void *)((long)__dest + uVar19 * 4);
    if (pvVar18 != (void *)0x0) {
      operator_delete(pvVar18);
    }
  }
  else {
    *puVar1 = uVar25;
    *(undefined4 **)((long)param_1 + 0x20) = puVar1 + 1;
  }
LAB_008fe260:
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  if (*(long *)(lVar3 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


