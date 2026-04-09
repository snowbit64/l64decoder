// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cloneTransformGroup
// Entry Point: 0074a45c
// Size: 1396 bytes
// Signature: undefined __cdecl cloneTransformGroup(TransformGroup * param_1, bool param_2, MeshSplitFileState * param_3)


/* CloneUtil::cloneTransformGroup(TransformGroup*, bool, MeshSplitFileState const*) */

undefined8
CloneUtil::cloneTransformGroup(TransformGroup *param_1,bool param_2,MeshSplitFileState *param_3)

{
  long lVar1;
  ulong uVar2;
  long **pplVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  LuauScriptSystem *this;
  RawTransformGroup **ppRVar10;
  long lVar11;
  ulong uVar12;
  long **pplVar13;
  long **pplVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  uint local_23c;
  TransformGroup **local_238;
  void *local_230;
  void *local_228;
  undefined8 local_220;
  long **local_218;
  long **local_210;
  undefined8 local_208;
  long **local_200;
  long *local_1f8;
  undefined8 local_1f0;
  long **local_1e8;
  long *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined2 local_1b4;
  undefined local_1b2;
  undefined4 local_1a8;
  undefined2 local_1a4;
  undefined local_1a2;
  undefined4 local_198;
  undefined2 local_194;
  undefined local_192;
  undefined4 local_188;
  undefined2 local_184;
  undefined local_182;
  undefined4 local_178;
  undefined2 local_174;
  undefined local_172;
  undefined4 local_168;
  undefined2 local_164;
  undefined local_162;
  undefined4 local_158;
  undefined2 local_154;
  undefined local_152;
  undefined4 local_148;
  undefined2 local_144;
  undefined local_142;
  undefined4 local_138;
  undefined2 local_134;
  undefined local_132;
  undefined4 local_128;
  undefined2 local_124;
  undefined local_122;
  undefined4 local_118;
  undefined2 local_114;
  undefined local_112;
  undefined4 local_108;
  undefined2 local_104;
  undefined local_102;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined local_f2;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined local_e2;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined local_d2;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined local_c2;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined local_b2;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined local_a2;
  undefined4 local_98;
  undefined2 local_94;
  undefined local_92;
  undefined4 local_88;
  undefined2 local_84;
  undefined local_82;
  undefined4 local_78;
  undefined2 local_74;
  undefined local_72;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_1e0 = (long *)0x0;
  local_1d8 = 0;
  local_1f0 = 0;
  local_218 = (long **)0x0;
  local_210 = (long **)0x0;
  local_1f8 = (long *)0x0;
  local_208 = 0;
  local_230 = (void *)0x0;
  local_228 = (void *)0x0;
  local_220 = 0;
                    /* try { // try from 0074a4c0 to 0074a4d7 has its CatchHandler @ 0074a9e4 */
  local_200 = &local_1f8;
  local_1e8 = &local_1e0;
  uVar6 = ScenegraphUtil::clone
                    (param_1,(map *)&local_1e8,(vector *)&local_230,(map *)&local_200,
                     (vector *)&local_218);
  pplVar13 = local_200;
  while (pplVar14 = local_1e8, pplVar13 != &local_1f8) {
    plVar17 = pplVar13[4];
    if ((*(byte *)(plVar17 + 0x32) & 1) != 0) {
      plVar18 = pplVar13[5];
      local_238 = (TransformGroup **)0x0;
      local_23c = 0;
                    /* try { // try from 0074a524 to 0074a533 has its CatchHandler @ 0074a9f4 */
      GsShape::getBindBones((GsShape *)plVar17,(RawTransformGroup ***)&local_238,&local_23c);
      if (local_23c != 0) {
        local_1d0 = (RawTransformGroup **)0x0;
        local_1c8 = (RawTransformGroup **)0x0;
        local_1c0 = 0;
                    /* try { // try from 0074a548 to 0074a603 has its CatchHandler @ 0074aa4c */
        findNodes(local_23c,local_238,(vector *)&local_1d0,(map *)&local_1e8);
        ppRVar10 = local_1d0;
        if (local_1c8 == local_1d0) {
          plVar15 = *(long **)(*local_238 + 0x20);
          ppRVar10 = local_1c8;
          if (plVar15 != (long *)0x0) {
            uVar7 = ScenegraphUtil::clone
                              (*local_238,(map *)&local_1e8,(vector *)&local_230,(map *)&local_200,
                               (vector *)&local_218);
            (**(code **)(*plVar15 + 0x18))(plVar15,uVar7,0xffffffff);
            findNodes(local_23c,local_238,(vector *)&local_1d0,(map *)&local_1e8);
            ppRVar10 = local_1d0;
          }
        }
        if ((ulong)local_23c == (long)local_1c8 - (long)ppRVar10 >> 3) {
          GsShape::setBindBones
                    ((GsShape *)plVar18,ppRVar10,
                     (uint)((ulong)((long)local_1c8 - (long)ppRVar10) >> 3),false);
        }
        else {
          GsShape::setShapeFlags((GsShape *)plVar18,*(uint *)(plVar18 + 0x32) & 0xfffffffc);
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar5 != 0)) {
                    /* try { // try from 0074a668 to 0074a66f has its CatchHandler @ 0074a9d0 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                            "Warning: Skinned shape cloning failed. Not all transforms have been cloned \'%s\'.\n"
                            ,plVar17[1]);
        }
        if (local_1d0 != (RawTransformGroup **)0x0) {
          local_1c8 = local_1d0;
          operator_delete(local_1d0);
        }
      }
    }
    pplVar14 = (long **)pplVar13[1];
    if ((long **)pplVar13[1] == (long **)0x0) {
      pplVar14 = pplVar13 + 2;
      bVar4 = (long **)**pplVar14 != pplVar13;
      pplVar13 = (long **)*pplVar14;
      if (bVar4) {
        do {
          plVar17 = *pplVar14;
          pplVar14 = (long **)(plVar17 + 2);
          pplVar13 = (long **)*pplVar14;
        } while (*pplVar13 != plVar17);
      }
    }
    else {
      do {
        pplVar13 = pplVar14;
        pplVar14 = (long **)*pplVar13;
      } while ((long **)*pplVar13 != (long **)0x0);
    }
  }
  while (pplVar14 != &local_1e0) {
    lVar11 = pplVar14[4][0x22];
    if (((lVar11 != 0) &&
        ((int)((ulong)(*(long *)(lVar11 + 0xb8) - (long)*(long ***)(lVar11 + 0xb0)) >> 3) != 0)) &&
       (**(long ***)(lVar11 + 0xb0) == pplVar14[4])) {
                    /* try { // try from 0074a6dc to 0074a6e3 has its CatchHandler @ 0074a9e8 */
      cloneAndBindCharacterSet((CharacterSet *)(lVar11 + -0x20),(map *)&local_1e8);
    }
    pplVar13 = (long **)pplVar14[1];
    if ((long **)pplVar14[1] == (long **)0x0) {
      pplVar13 = pplVar14 + 2;
      bVar4 = (long **)**pplVar13 != pplVar14;
      pplVar14 = (long **)*pplVar13;
      if (bVar4) {
        do {
          plVar17 = *pplVar13;
          pplVar13 = (long **)(plVar17 + 2);
          pplVar14 = (long **)*pplVar13;
        } while (*pplVar14 != plVar17);
      }
    }
    else {
      do {
        pplVar14 = pplVar13;
        pplVar13 = (long **)*pplVar14;
      } while ((long **)*pplVar14 != (long **)0x0);
    }
  }
  pplVar13 = local_218;
  pplVar14 = local_210;
  if ((param_2) && (uVar12 = (long)local_228 - (long)local_230, (int)(uVar12 >> 3) != 0)) {
    lVar11 = 0;
    while( true ) {
      lVar16 = *(long *)((long)local_230 + lVar11);
                    /* try { // try from 0074a770 to 0074a787 has its CatchHandler @ 0074a9f8 */
      lVar8 = UserAttributes::getAttribute((UserAttributes *)(lVar16 + 0x60),"onCreate");
                    /* try { // try from 0074a790 to 0074a797 has its CatchHandler @ 0074a9ec */
      if (((lVar8 != 0) && (iVar5 = UserAttribute::getType(), iVar5 == 4)) &&
         ((pcVar9 = (char *)UserAttribute::getScriptCallbackFunction(), pcVar9 != (char *)0x0 &&
          (*pcVar9 != '\0')))) {
        local_1b8 = 0;
        local_1b2 = 0;
        local_1b4 = 0;
        local_1a8 = 0;
        local_1a2 = 0;
        local_1a4 = 0;
        local_198 = 0;
        local_192 = 0;
        local_194 = 0;
        local_188 = 0;
        local_182 = 0;
        local_184 = 0;
        local_178 = 0;
        local_172 = 0;
        local_174 = 0;
        local_168 = 0;
        local_162 = 0;
        local_164 = 0;
        local_158 = 0;
        local_152 = 0;
        local_154 = 0;
        local_148 = 0;
        local_142 = 0;
        local_144 = 0;
        local_138 = 0;
        local_132 = 0;
        local_134 = 0;
        local_128 = 0;
        local_122 = 0;
        local_124 = 0;
        local_118 = 0;
        local_112 = 0;
        local_114 = 0;
        local_108 = 0;
        local_102 = 0;
        local_104 = 0;
        local_f8 = 0;
        local_f2 = 0;
        local_f4 = 0;
        local_e8 = 0;
        local_e2 = 0;
        local_e4 = 0;
        local_d8 = 0;
        local_d2 = 0;
        local_d4 = 0;
        local_c8 = 0;
        local_c2 = 0;
        local_c4 = 0;
        local_b8 = 0;
        local_b2 = 0;
        local_b4 = 0;
        local_a8 = 0;
        local_a2 = 0;
        local_a4 = 0;
        local_98 = 0;
        local_92 = 0;
        local_94 = 0;
        local_88 = 0;
        local_82 = 0;
        local_84 = 0;
        local_78 = 0;
        local_72 = 0;
        local_74 = 0;
        uVar2 = (ulong)local_1c8 >> 0x20;
        local_1c8 = (RawTransformGroup **)CONCAT44((uint)uVar2 & 0xff000000,1);
        local_1d0 = (RawTransformGroup **)CONCAT44(local_1d0._4_4_,*(undefined4 *)(lVar16 + 0x18));
                    /* try { // try from 0074a8b8 to 0074a8d7 has its CatchHandler @ 0074a9f0 */
        ScriptSystemManager::getInstance();
        this = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
        LuauScriptSystem::invokeScriptMethod
                  (this,pcVar9,(MethodInvocation *)&local_1d0,1,0,(void *)0x0);
      }
      pplVar13 = local_218;
      pplVar14 = local_210;
      if ((uVar12 >> 3 & 0xffffffff) * 8 + -8 == lVar11) break;
      lVar11 = lVar11 + 8;
    }
  }
  for (; pplVar3 = local_210, pplVar13 != local_210; pplVar13 = pplVar13 + 1) {
    plVar17 = *pplVar13;
                    /* try { // try from 0074a924 to 0074a93b has its CatchHandler @ 0074a9fc */
    local_210 = pplVar14;
    MeshSplitManager::addShape
              ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,
               (MeshSplitShape *)plVar17,1,param_3,(bool *)&local_1d0);
    if ((char)local_1d0 != '\0') {
      plVar18 = (long *)plVar17[4];
      if ((plVar18 == (long *)0x0) || ((*(byte *)(plVar18 + 2) >> 6 & 1) == 0)) {
        lVar11 = *plVar17;
      }
      else {
        lVar11 = *plVar18;
        plVar17 = plVar18;
      }
      (**(code **)(lVar11 + 8))(plVar17);
    }
    pplVar14 = local_210;
    local_210 = pplVar3;
  }
  local_210 = pplVar14;
  if (local_230 != (void *)0x0) {
    local_228 = local_230;
    operator_delete(local_230);
  }
  if (local_218 != (long **)0x0) {
    local_210 = local_218;
    operator_delete(local_218);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<GsShape*,GsShape*>,std::__ndk1::__map_value_compare<GsShape*,std::__ndk1::__value_type<GsShape*,GsShape*>,std::__ndk1::less<GsShape*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<GsShape*,GsShape*>>>
  ::destroy((__tree<std::__ndk1::__value_type<GsShape*,GsShape*>,std::__ndk1::__map_value_compare<GsShape*,std::__ndk1::__value_type<GsShape*,GsShape*>,std::__ndk1::less<GsShape*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<GsShape*,GsShape*>>>
             *)&local_200,(__tree_node *)local_1f8);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<TransformGroup*,TransformGroup*>,std::__ndk1::__map_value_compare<TransformGroup*,std::__ndk1::__value_type<TransformGroup*,TransformGroup*>,std::__ndk1::less<TransformGroup*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<TransformGroup*,TransformGroup*>>>
  ::destroy((__tree<std::__ndk1::__value_type<TransformGroup*,TransformGroup*>,std::__ndk1::__map_value_compare<TransformGroup*,std::__ndk1::__value_type<TransformGroup*,TransformGroup*>,std::__ndk1::less<TransformGroup*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<TransformGroup*,TransformGroup*>>>
             *)&local_1e8,(__tree_node *)local_1e0);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


