// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFileHash
// Entry Point: 00afb498
// Size: 1488 bytes
// Signature: undefined __thiscall getFileHash(FileHashManager * this, char * param_1, char * param_2, char * param_3, bool param_4)


/* WARNING: Removing unreachable block (ram,0x00afb71c) */
/* FileHashManager::getFileHash(char const*, char const*, char*, bool) */

undefined4 __thiscall
FileHashManager::getFileHash
          (FileHashManager *this,char *param_1,char *param_2,char *param_3,bool param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  __tree_node_base **pp_Var10;
  long lVar11;
  __tree_node_base **pp_Var12;
  __tree_node_base *p_Var13;
  char *pcVar14;
  ulong uVar15;
  undefined4 uVar16;
  __tree_node_base **this_00;
  __tree_node_base **pp_Var17;
  uint uVar18;
  undefined auVar19 [16];
  ulong local_5b0;
  ulong uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  ulong local_550;
  ulong uStack_548;
  MD5Hash aMStack_540 [16];
  undefined uStack_530;
  byte local_52f [71];
  ulong local_4e8;
  ulong uStack_4e0;
  undefined *local_4d8;
  undefined auStack_4d0 [72];
  ulong local_488;
  ulong uStack_480;
  undefined *local_478;
  uchar auStack_470 [1024];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar8 = StringUtil::iEndsWith(param_1,".dlc");
  if ((uVar8 & 1) == 0) {
    uVar18 = 1;
  }
  else {
    iVar6 = NativeFileUtil::getFileType(param_1,true);
    if (iVar6 == 1) {
      strlen(param_1);
      FUN_00afba98(auStack_470);
      param_1 = (char *)auStack_470;
    }
    uVar18 = (uint)(iVar6 != 1);
  }
  if (!param_4) {
    plVar9 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0,
                                      false);
    if ((plVar9 != (long *)0x0) && (uVar8 = (**(code **)(*plVar9 + 0x10))(), (uVar8 & 1) != 0)) {
      auVar19 = (**(code **)(*plVar9 + 0x20))(plVar9);
      if ((uVar18 == (auVar19._0_4_ & 1)) &&
         (uVar8 = loadFileHash(auVar19._0_8_,auVar19._8_8_,param_2,(File *)plVar9,
                               (FileHash *)aMStack_540), (uVar8 & 1) != 0)) {
        (**(code **)(*plVar9 + 8))(plVar9);
        lVar11 = 0;
        pcVar14 = param_3 + 1;
        do {
          pbVar1 = local_52f + lVar11;
          lVar11 = lVar11 + 1;
          cVar3 = "0123456789abcdef"[(ulong)*pbVar1 & 0xf];
          pcVar14[-1] = "0123456789abcdef"[*pbVar1 >> 4];
          *pcVar14 = cVar3;
          pcVar14 = pcVar14 + 2;
        } while (lVar11 != 0x10);
        uVar16 = 1;
        goto LAB_00afba30;
      }
    }
    uVar16 = 0;
    goto LAB_00afba30;
  }
  MD5Hash::MD5Hash(aMStack_540);
                    /* try { // try from 00afb530 to 00afb54b has its CatchHandler @ 00afba80 */
  uVar7 = __strlen_chk(param_1,0xffffffffffffffff);
  MD5Hash::add(aMStack_540,(uchar *)param_1,uVar7);
                    /* try { // try from 00afb54c to 00afb58b has its CatchHandler @ 00afba84 */
  uVar7 = __strlen_chk(&DAT_0050245a,5);
  MD5Hash::add(aMStack_540,";*?!",uVar7);
  uVar7 = __strlen_chk(param_2,0xffffffffffffffff);
  MD5Hash::add(aMStack_540,(uchar *)param_2,uVar7);
                    /* try { // try from 00afb58c to 00afb5a3 has its CatchHandler @ 00afba7c */
  MD5Hash::getMD5Hash(aMStack_540,(uchar *)&local_550);
  Mutex::enterCriticalSection();
  pp_Var10 = (__tree_node_base **)(this + 0x20);
  p_Var13 = *pp_Var10;
  this_00 = (__tree_node_base **)(this + 0x18);
  pp_Var17 = pp_Var10;
  if (p_Var13 == (__tree_node_base *)0x0) {
LAB_00afb830:
                    /* try { // try from 00afb830 to 00afb837 has its CatchHandler @ 00afba74 */
    Mutex::leaveCriticalSection();
                    /* try { // try from 00afb838 to 00afb84f has its CatchHandler @ 00afba70 */
    plVar9 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0,
                                      false);
    if (plVar9 == (long *)0x0) {
LAB_00afb9c0:
      uVar16 = 0;
    }
    else {
                    /* try { // try from 00afb860 to 00afb8a3 has its CatchHandler @ 00afba78 */
      uVar8 = (**(code **)(*plVar9 + 0x10))(plVar9);
      if ((uVar8 & 1) == 0) {
LAB_00afb920:
        uVar16 = 0;
      }
      else {
        auVar19 = (**(code **)(*plVar9 + 0x20))(plVar9);
        if ((uVar18 != (auVar19._0_4_ & 1)) ||
           (uVar8 = loadFileHash(auVar19._0_8_,auVar19._8_8_,param_2,(File *)plVar9,
                                 (FileHash *)&local_578), (uVar8 & 1) == 0)) goto LAB_00afb920;
        Mutex::enterCriticalSection();
        uStack_5a8 = uStack_548;
        local_5b0 = local_550;
        uStack_598 = uStack_570;
        uStack_5a0 = local_578;
        uStack_588 = uStack_560;
        local_590 = local_568;
        local_580 = local_558;
                    /* try { // try from 00afb8c0 to 00afb8cf has its CatchHandler @ 00afba68 */
        std::__ndk1::
        __tree<std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>,std::__ndk1::__map_value_compare<FileHashManager::FilenameHash,std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>,std::__ndk1::less<FileHashManager::FilenameHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>>>
        ::
        __emplace_unique_key_args<FileHashManager::FilenameHash,std::__ndk1::pair<FileHashManager::FilenameHash,FileHashManager::FileHash>>
                  ((__tree<std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>,std::__ndk1::__map_value_compare<FileHashManager::FilenameHash,std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>,std::__ndk1::less<FileHashManager::FilenameHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>>>
                    *)this_00,(FilenameHash *)&local_5b0,(pair *)&local_5b0);
                    /* try { // try from 00afb8d0 to 00afb8d7 has its CatchHandler @ 00afba78 */
        Mutex::leaveCriticalSection();
        lVar11 = 0;
        pcVar14 = param_3 + 1;
        do {
          bVar2 = *(byte *)((long)&local_568 + lVar11 + 1);
          lVar11 = lVar11 + 1;
          cVar3 = "0123456789abcdef"[(ulong)bVar2 & 0xf];
          pcVar14[-1] = "0123456789abcdef"[bVar2 >> 4];
          *pcVar14 = cVar3;
          pcVar14 = pcVar14 + 2;
        } while (lVar11 != 0x10);
        uVar16 = 1;
      }
      (**(code **)(*plVar9 + 8))(plVar9);
    }
  }
  else {
    do {
      uVar8 = (*(ulong *)(p_Var13 + 0x20) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(p_Var13 + 0x20) & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar8 = (local_550 & 0xff00ff00ff00ff00) >> 8 | (local_550 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      if (uVar15 == uVar8) {
        uVar8 = (*(ulong *)(p_Var13 + 0x28) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(p_Var13 + 0x28) & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar15 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar8 = (uStack_548 & 0xff00ff00ff00ff00) >> 8 | (uStack_548 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        if (uVar15 != uVar8) goto LAB_00afb5c0;
        uVar7 = 0;
      }
      else {
LAB_00afb5c0:
        uVar7 = 1;
        if (uVar15 < uVar8) {
          uVar7 = 0xffffffff;
        }
      }
      if (-1 < (int)uVar7) {
        pp_Var17 = (__tree_node_base **)p_Var13;
      }
      p_Var13 = *(__tree_node_base **)(p_Var13 + (ulong)(uVar7 >> 0x1f) * 8);
    } while (p_Var13 != (__tree_node_base *)0x0);
    if (pp_Var17 == pp_Var10) goto LAB_00afb830;
    uVar8 = (local_550 & 0xff00ff00ff00ff00) >> 8 | (local_550 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar15 = uVar8 >> 0x20 | uVar8 << 0x20;
    uVar8 = ((ulong)pp_Var17[4] & 0xff00ff00ff00ff00) >> 8 |
            ((ulong)pp_Var17[4] & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
    if (uVar15 == uVar8) {
      uVar8 = (uStack_548 & 0xff00ff00ff00ff00) >> 8 | (uStack_548 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar8 = ((ulong)pp_Var17[5] & 0xff00ff00ff00ff00) >> 8 |
              ((ulong)pp_Var17[5] & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      if (uVar15 != uVar8) goto LAB_00afb720;
    }
    else {
LAB_00afb720:
      iVar6 = 1;
      if (uVar15 < uVar8) {
        iVar6 = -1;
      }
      if (iVar6 < 0) goto LAB_00afb830;
    }
    if (*(__tree_node_base *)(pp_Var17 + 8) == (__tree_node_base)0x0) {
                    /* try { // try from 00afb788 to 00afb803 has its CatchHandler @ 00afba6c */
      plVar9 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0
                                        ,false);
      if (plVar9 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar9 + 0x10))(plVar9);
        if (((uVar8 & 1) != 0) &&
           (uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9), uVar18 == (uVar7 & 1))) {
          lVar11 = (**(code **)(*plVar9 + 0x48))(plVar9);
          if (((__tree_node_base *)lVar11 == pp_Var17[7]) &&
             (lVar11 = (**(code **)(*plVar9 + 0x58))(plVar9),
             (__tree_node_base *)lVar11 == pp_Var17[6])) {
            *(__tree_node_base *)(pp_Var17 + 8) = (__tree_node_base)0x1;
          }
          (**(code **)(*plVar9 + 8))(plVar9);
          if (*(__tree_node_base *)(pp_Var17 + 8) == (__tree_node_base)0x0) goto LAB_00afb830;
          goto LAB_00afb738;
        }
        (**(code **)(*plVar9 + 8))(plVar9);
      }
      pp_Var10 = (__tree_node_base **)pp_Var17[1];
      if ((__tree_node_base **)pp_Var17[1] == (__tree_node_base **)0x0) {
        pp_Var10 = pp_Var17 + 2;
        pp_Var12 = (__tree_node_base **)*pp_Var10;
        if ((__tree_node_base **)*pp_Var12 != pp_Var17) {
          do {
            p_Var13 = *pp_Var10;
            pp_Var10 = (__tree_node_base **)(p_Var13 + 0x10);
            pp_Var12 = (__tree_node_base **)*pp_Var10;
          } while (*pp_Var12 != p_Var13);
        }
      }
      else {
        do {
          pp_Var12 = pp_Var10;
          pp_Var10 = (__tree_node_base **)*pp_Var12;
        } while ((__tree_node_base **)*pp_Var12 != (__tree_node_base **)0x0);
      }
      if ((__tree_node_base **)*this_00 == pp_Var17) {
        *this_00 = (__tree_node_base *)pp_Var12;
      }
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x20),(__tree_node_base *)pp_Var17);
      operator_delete(pp_Var17);
                    /* try { // try from 00afb9b8 to 00afb9bf has its CatchHandler @ 00afba6c */
      Mutex::leaveCriticalSection();
      goto LAB_00afb9c0;
    }
LAB_00afb738:
    lVar11 = 0;
    pcVar14 = param_3 + 1;
    do {
      pcVar14[-1] = "0123456789abcdef"
                    [(byte)*(__tree_node_base *)((long)pp_Var17 + lVar11 + 0x41) >> 4];
      lVar5 = lVar11 + 0x41;
      lVar11 = lVar11 + 1;
      *pcVar14 = "0123456789abcdef"
                 [(ulong)(byte)*(__tree_node_base *)((long)pp_Var17 + lVar5) & 0xf];
      pcVar14 = pcVar14 + 2;
    } while (lVar11 != 0x10);
                    /* try { // try from 00afb778 to 00afb77f has its CatchHandler @ 00afba74 */
    Mutex::leaveCriticalSection();
    uVar16 = 1;
  }
  if (uStack_480 <= local_488) {
    local_488 = uStack_480;
  }
  if (local_478 == auStack_4d0) {
    for (; local_488 != 0; local_488 = local_488 - 1) {
      *(undefined4 *)(local_478 + local_488 * 4 + -4) = 0;
    }
  }
  if (uStack_4e0 <= local_4e8) {
    local_4e8 = uStack_4e0;
  }
  if (local_4d8 == &uStack_530) {
    for (; local_4e8 != 0; local_4e8 = local_4e8 - 1) {
      *(undefined4 *)(local_4d8 + local_4e8 * 4 + -4) = 0;
    }
  }
LAB_00afba30:
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


