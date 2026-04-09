// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadSharedI3D
// Entry Point: 009068c8
// Size: 1384 bytes
// Signature: undefined __thiscall loadSharedI3D(I3DManager * this, char * param_1, bool param_2, bool param_3, MeshSplitFileState * param_4, bool param_5, TransformGroup * * param_6, FailedReason * param_7)


/* I3DManager::loadSharedI3D(char const*, bool, bool, MeshSplitFileState const*, bool,
   TransformGroup*&, IStreamingCallback::FailedReason&) */

uint __thiscall
I3DManager::loadSharedI3D
          (I3DManager *this,char *param_1,bool param_2,bool param_3,MeshSplitFileState *param_4,
          bool param_5,TransformGroup **param_6,FailedReason *param_7)

{
  long lVar1;
  __tree_iterator _Var2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  I3DStreamingManager *this_00;
  __tree_node_base **pp_Var6;
  TransformGroup *pTVar7;
  undefined8 *puVar8;
  ScenegraphNode *pSVar9;
  long *plVar10;
  ScenegraphNode **ppSVar11;
  long **pplVar12;
  undefined8 *puVar13;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  char *pcVar17;
  ulong uVar18;
  void *pvVar19;
  int local_90;
  bool abStack_8c [4];
  undefined8 local_88;
  size_t sStack_80;
  void *local_78;
  __tree_end_node *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  sVar5 = strlen(param_1);
  if (0xffffffffffffffef < sVar5) goto LAB_00906dac;
  pplVar16 = (long **)(this + 0x30);
  if (sVar5 < 0x17) {
    pvVar19 = (void *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar5 << 1));
    if (sVar5 != 0) goto LAB_009069b0;
  }
  else {
    uVar18 = sVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar19 = operator_new(uVar18);
    local_88 = uVar18 | 1;
    sStack_80 = sVar5;
    local_78 = pvVar19;
LAB_009069b0:
    memcpy(pvVar19,param_1,sVar5);
  }
  *(undefined *)((long)pvVar19 + sVar5) = 0;
                    /* try { // try from 009069c4 to 009069cf has its CatchHandler @ 00906e70 */
  _Var2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>>>
                      *)pplVar16,(basic_string *)&local_88);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (this + 0x38 == (I3DManager *)(ulong)_Var2) {
    ppSVar11 = (ScenegraphNode **)operator_new(0x30);
    *ppSVar11 = (ScenegraphNode *)0x0;
    *(undefined *)(ppSVar11 + 1) = 0;
    *(undefined4 *)((long)ppSVar11 + 0x2c) = 0;
    *(undefined8 *)((long)ppSVar11 + 0x14) = 0;
    *(undefined8 *)((long)ppSVar11 + 0xc) = 0;
    *(undefined8 *)((long)ppSVar11 + 0x24) = 0;
    *(undefined8 *)((long)ppSVar11 + 0x1c) = 0;
                    /* try { // try from 00906a3c to 00906a4b has its CatchHandler @ 00906e50 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(ppSVar11 + 3));
    pSVar9 = (ScenegraphNode *)
             I3DLoadUtil::loadI3DFile
                       (param_1,false,false,(MeshSplitFileState *)0x0,param_5,abStack_8c,false,
                        (FailedReason *)&local_90);
    *ppSVar11 = pSVar9;
    if (local_90 == 0) {
      *param_7 = 0;
    }
    else {
      if (local_90 == 1) {
        *param_7 = 2;
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0
           )) {
                    /* try { // try from 00906dc4 to 00906dcf has its CatchHandler @ 00906e34 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          pcVar17 = "Error: i3d file \'%s\' not found.\n";
LAB_00906e00:
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        else {
          pcVar17 = "Error: i3d file \'%s\' not found.\n";
        }
      }
      else {
        *param_7 = 3;
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0
           )) {
                    /* try { // try from 00906dec to 00906df7 has its CatchHandler @ 00906e30 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          pcVar17 = "Error: Failed to load i3d file \'%s\'.\n";
          goto LAB_00906e00;
        }
        pcVar17 = "Error: Failed to load i3d file \'%s\'.\n";
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar17,param_1);
      if (*param_7 != 0) {
        if ((*(byte *)(ppSVar11 + 3) & 1) != 0) {
          operator_delete(ppSVar11[5]);
        }
        operator_delete(ppSVar11);
        uVar3 = 0;
        *param_6 = (TransformGroup *)0x0;
        goto LAB_00906d78;
      }
    }
    *(undefined4 *)((long)ppSVar11 + 0x14) = 0;
    *(undefined *)(ppSVar11 + 1) = 1;
    *(undefined8 *)((long)ppSVar11 + 0xc) = 0x100000000;
    sVar5 = strlen(param_1);
    if (0xffffffffffffffef < sVar5) {
LAB_00906dac:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar5 < 0x17) {
      pvVar19 = (void *)((ulong)&local_88 | 1);
      local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar5 << 1));
      if (sVar5 != 0) goto LAB_00906bec;
    }
    else {
      uVar18 = sVar5 + 0x10 & 0xfffffffffffffff0;
      pvVar19 = operator_new(uVar18);
      local_88 = uVar18 | 1;
      sStack_80 = sVar5;
      local_78 = pvVar19;
LAB_00906bec:
      memcpy(pvVar19,param_1,sVar5);
    }
    *(undefined *)((long)pvVar19 + sVar5) = 0;
                    /* try { // try from 00906c00 to 00906c27 has its CatchHandler @ 00906e4c */
    pp_Var6 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>>>
                          *)pplVar16,&local_70,(basic_string *)&local_88);
    puVar13 = (undefined8 *)*pp_Var6;
    if (puVar13 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)operator_new(0x40);
      pvVar19 = local_78;
      sVar5 = sStack_80;
      uVar18 = local_88;
      *puVar13 = 0;
      puVar13[1] = 0;
      local_88 = 0;
      sStack_80 = 0;
      local_78 = (void *)0x0;
      puVar13[6] = pvVar19;
      puVar13[7] = 0;
      puVar13[5] = sVar5;
      puVar13[4] = uVar18;
      puVar13[2] = local_70;
      *pp_Var6 = (__tree_node_base *)puVar13;
      puVar8 = puVar13;
      if ((long *)**pplVar16 != (long *)0x0) {
        *pplVar16 = (long *)**pplVar16;
        puVar8 = (undefined8 *)*pp_Var6;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x38),(__tree_node_base *)puVar8);
      *(long *)(this + 0x40) = *(long *)(this + 0x40) + 1;
    }
    puVar13[7] = ppSVar11;
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
  }
  else {
    ppSVar11 = *(ScenegraphNode ***)((I3DManager *)(ulong)_Var2 + 0x38);
    *(int *)(ppSVar11 + 2) = *(int *)(ppSVar11 + 2) + 1;
    if (*(char *)(ppSVar11 + 1) == '\0') {
      this_00 = (I3DStreamingManager *)I3DStreamingManager::getInstance();
      I3DStreamingManager::waitI3DLoadTask(this_00,*(uint *)((long)ppSVar11 + 0x14));
      pSVar9 = *ppSVar11;
    }
    else {
      pSVar9 = *ppSVar11;
    }
    if (pSVar9 == (ScenegraphNode *)0x0) {
      *param_7 = *(FailedReason *)((long)ppSVar11 + 0xc);
      *param_6 = (TransformGroup *)0x0;
      unrefSharedI3D(this,(SharedI3D *)ppSVar11);
      uVar3 = 0;
      goto LAB_00906d78;
    }
  }
  pTVar7 = (TransformGroup *)CloneUtil::cloneScenegraphNode(*ppSVar11,param_2,param_3,param_4);
  *param_6 = pTVar7;
  *param_7 = 0;
  I3DStreamingManager::getInstance();
  uVar3 = I3DStreamingManager::getNextRequestId();
  pplVar12 = (long **)(this + 0x20);
  pplVar14 = (long **)*pplVar12;
  pplVar16 = pplVar12;
  if (pplVar14 == (long **)0x0) {
LAB_00906d14:
    plVar10 = *pplVar12;
    pplVar15 = pplVar12;
  }
  else {
    pplVar12 = (long **)(this + 0x20);
    do {
      while (pplVar15 = pplVar14, pplVar16 = pplVar15, *(uint *)(pplVar15 + 4) <= uVar3) {
        if (uVar3 <= *(uint *)(pplVar15 + 4)) goto LAB_00906d14;
        pplVar12 = pplVar15 + 1;
        pplVar14 = (long **)*pplVar12;
        if ((long **)*pplVar12 == (long **)0x0) goto LAB_00906d14;
      }
      pplVar12 = pplVar15;
      pplVar14 = (long **)*pplVar15;
    } while ((long **)*pplVar15 != (long **)0x0);
    plVar10 = *pplVar15;
  }
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)operator_new(0x30);
    *(uint *)(plVar10 + 4) = uVar3;
    plVar10[5] = (long)ppSVar11;
    *plVar10 = 0;
    plVar10[1] = 0;
    plVar10[2] = (long)pplVar16;
    *pplVar15 = plVar10;
    if (**(long **)(this + 0x18) != 0) {
      *(long *)(this + 0x18) = **(long **)(this + 0x18);
      plVar10 = *pplVar15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x20),(__tree_node_base *)plVar10);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
LAB_00906d78:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


