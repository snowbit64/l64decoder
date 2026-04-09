// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resolveConflict
// Entry Point: 00b4e27c
// Size: 1240 bytes
// Signature: undefined __cdecl resolveConflict(uint param_1, RESOLVE_POLICY param_2, _func_void_void_ptr_ErrorCode_char_ptr * param_3, void * param_4)


/* GenericSaveGameUtil::resolveConflict(unsigned int, SaveGameUtilBase::RESOLVE_POLICY, void
   (*)(void*, SaveGameUtilBase::ErrorCode, char const*), void*) */

void GenericSaveGameUtil::resolveConflict
               (uint param_1,RESOLVE_POLICY param_2,_func_void_void_ptr_ErrorCode_char_ptr *param_3,
               void *param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  char **ppcVar5;
  ulong uVar6;
  uint uVar7;
  ErrorCode EVar8;
  undefined4 local_49c;
  void *local_498;
  char *local_490;
  char *local_488 [64];
  undefined8 local_288;
  undefined8 local_280;
  char local_278;
  char local_277;
  char local_276;
  char local_275;
  char local_274;
  char local_273;
  char local_272;
  char cStack_271;
  char cStack_270;
  char cStack_26f;
  char cStack_26e;
  char cStack_26d;
  char cStack_26c;
  char cStack_26b;
  undefined auStack_268 [512];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (s_state == 0) {
    CloudDeviceManager::getInstance();
    plVar4 = (long *)CloudDeviceManager::getCloudDevice();
    if (plVar4 == (long *)0x0) {
      if (param_3 == (_func_void_void_ptr_ErrorCode_char_ptr *)0x0) goto LAB_00b4e720;
      EVar8 = 0xd;
      goto LAB_00b4e2cc;
    }
    FUN_00b4d19c(auStack_268,0x200,0x200,"%s_%u",CLOUD_FILE_NAME,param_1);
    uVar7 = param_1;
    if (param_2 == 2) {
      iVar3 = (**(code **)(*plVar4 + 0x68))
                        (plVar4,s_pCloudSession,auStack_268,&local_490,&local_498,&local_49c);
      if (iVar3 == 3) {
        EVar8 = 0xe;
      }
      else if (iVar3 == 2) {
        EVar8 = 0xc;
      }
      else if (iVar3 == 0) {
        uVar7 = 1;
        local_288 = 0;
        local_280 = 0;
        cStack_270 = '\0';
        cStack_26f = '\0';
        cStack_26e = '\0';
        cStack_26d = '\0';
        cStack_26c = '\0';
        cStack_26b = '\0';
        local_278 = '\0';
        local_277 = '\0';
        local_276 = '\0';
        local_275 = '\0';
        local_274 = '\0';
        local_273 = '\0';
        local_272 = '\0';
        cStack_271 = '\0';
        if (DAT_0211c588 - s_saveGames == 0) {
LAB_00b4e5d0:
          FUN_00b4d19c(local_488,0x200,0x200,"%s_%u",CLOUD_FILE_NAME,uVar7);
          iVar3 = (**(code **)(*plVar4 + 0x50))
                            (plVar4,s_pCloudSession,local_488,local_498,local_49c,local_490);
          if (iVar3 == 0) {
            setSaveGameData(uVar7,local_490,(char *)0x0,false);
            EVar8 = 0;
            param_2 = 1;
          }
          else {
            param_2 = 2;
            EVar8 = 0xd;
          }
        }
        else {
          uVar6 = 0;
          do {
            lVar1 = uVar6 * 8;
            uVar6 = (ulong)((int)uVar6 + 1);
            *(undefined *)((long)&local_288 + (ulong)(**(int **)(s_saveGames + lVar1) - 1)) = 1;
          } while (uVar6 < (ulong)(DAT_0211c588 - s_saveGames >> 3));
          if ((char)local_288 == '\0') {
            uVar7 = 1;
            goto LAB_00b4e5d0;
          }
          if (local_288._1_1_ == '\0') {
            uVar7 = 2;
            goto LAB_00b4e5d0;
          }
          if (local_288._2_1_ == '\0') {
            uVar7 = 3;
            goto LAB_00b4e5d0;
          }
          if (local_288._3_1_ == '\0') {
            uVar7 = 4;
            goto LAB_00b4e5d0;
          }
          if (local_288._4_1_ == '\0') {
            uVar7 = 5;
            goto LAB_00b4e5d0;
          }
          if (local_288._5_1_ == '\0') {
            uVar7 = 6;
            goto LAB_00b4e5d0;
          }
          if (local_288._6_1_ == '\0') {
            uVar7 = 7;
            goto LAB_00b4e5d0;
          }
          if (local_288._7_1_ == '\0') {
            uVar7 = 8;
            goto LAB_00b4e5d0;
          }
          if ((char)local_280 == '\0') {
            uVar7 = 9;
            goto LAB_00b4e5d0;
          }
          if (local_280._1_1_ == '\0') {
            uVar7 = 10;
            goto LAB_00b4e5d0;
          }
          if (local_280._2_1_ == '\0') {
            uVar7 = 0xb;
            goto LAB_00b4e5d0;
          }
          if (local_280._3_1_ == '\0') {
            uVar7 = 0xc;
            goto LAB_00b4e5d0;
          }
          if (local_280._4_1_ == '\0') {
            uVar7 = 0xd;
            goto LAB_00b4e5d0;
          }
          if (local_280._5_1_ == '\0') {
            uVar7 = 0xe;
            goto LAB_00b4e5d0;
          }
          if (local_280._6_1_ == '\0') {
            uVar7 = 0xf;
            goto LAB_00b4e5d0;
          }
          if (local_280._7_1_ == '\0') {
            uVar7 = 0x10;
            goto LAB_00b4e5d0;
          }
          if (local_278 == '\0') {
            uVar7 = 0x11;
            goto LAB_00b4e5d0;
          }
          if (local_277 == '\0') {
            uVar7 = 0x12;
            goto LAB_00b4e5d0;
          }
          if (local_276 == '\0') {
            uVar7 = 0x13;
            goto LAB_00b4e5d0;
          }
          if (local_275 == '\0') {
            uVar7 = 0x14;
            goto LAB_00b4e5d0;
          }
          if (local_274 == '\0') {
            uVar7 = 0x15;
            goto LAB_00b4e5d0;
          }
          if (local_273 == '\0') {
            uVar7 = 0x16;
            goto LAB_00b4e5d0;
          }
          if (local_272 == '\0') {
            uVar7 = 0x17;
            goto LAB_00b4e5d0;
          }
          if (cStack_271 == '\0') {
            uVar7 = 0x18;
            goto LAB_00b4e5d0;
          }
          if (cStack_270 == '\0') {
            uVar7 = 0x19;
            goto LAB_00b4e5d0;
          }
          if (cStack_26f == '\0') {
            uVar7 = 0x1a;
            goto LAB_00b4e5d0;
          }
          if (cStack_26e == '\0') {
            uVar7 = 0x1b;
            goto LAB_00b4e5d0;
          }
          if (cStack_26d == '\0') {
            uVar7 = 0x1c;
            goto LAB_00b4e5d0;
          }
          if (cStack_26c == '\0') {
            uVar7 = 0x1d;
            goto LAB_00b4e5d0;
          }
          if (cStack_26b == '\0') {
            uVar7 = 0x1e;
            goto LAB_00b4e5d0;
          }
          param_2 = 2;
          EVar8 = 0xd;
          uVar7 = param_1;
        }
        if (local_498 != (void *)0x0) {
          operator_delete__(local_498);
        }
        if (local_490 != (char *)0x0) {
          operator_delete__(local_490);
        }
        if (EVar8 == 0) goto LAB_00b4e658;
      }
      else {
        EVar8 = 0xd;
      }
    }
    else {
LAB_00b4e658:
      if (param_2 == 0) {
        iVar3 = (**(code **)(*plVar4 + 0x58))(plVar4,s_pCloudSession,auStack_268);
        if (iVar3 != 0) {
LAB_00b4e6d4:
          EVar8 = 0xd;
          goto LAB_00b4e6f0;
        }
        setConflictedMetaData(param_1,(char *)0x0,false);
      }
      else if (param_2 == 1) {
        iVar3 = (**(code **)(*plVar4 + 0x60))(plVar4,s_pCloudSession,auStack_268,local_488);
        if (iVar3 != 0) goto LAB_00b4e6d4;
        setSaveGameData(param_1,local_488[0],(char *)0x0,false);
        if (local_488[0] != (char *)0x0) {
          operator_delete__(local_488[0]);
        }
      }
      EVar8 = 0;
    }
LAB_00b4e6f0:
    FUN_00b4d19c(local_488,0x10,0x10,&DAT_004cf2ba,uVar7);
    if (param_3 == (_func_void_void_ptr_ErrorCode_char_ptr *)0x0) goto LAB_00b4e720;
    ppcVar5 = local_488;
  }
  else {
    if (param_3 == (_func_void_void_ptr_ErrorCode_char_ptr *)0x0) goto LAB_00b4e720;
    EVar8 = 0xb;
LAB_00b4e2cc:
    ppcVar5 = (char **)0x0;
  }
  (*param_3)(param_4,EVar8,(char *)ppcVar5);
LAB_00b4e720:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


