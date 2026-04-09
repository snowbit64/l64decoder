// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateSaveGameList
// Entry Point: 00b4d2b4
// Size: 820 bytes
// Signature: undefined __cdecl updateSaveGameList(_func_void_void_ptr_ErrorCode_char_ptr * param_1, void * param_2)


/* GenericSaveGameUtil::updateSaveGameList(void (*)(void*, SaveGameUtilBase::ErrorCode, char
   const*), void*) */

void GenericSaveGameUtil::updateSaveGameList
               (_func_void_void_ptr_ErrorCode_char_ptr *param_1,void *param_2)

{
  int **ppiVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  int **ppiVar7;
  undefined4 *puVar8;
  ulong uVar9;
  int **ppiVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  int *piVar14;
  size_t __n;
  uchar *local_480;
  uint local_474;
  char acStack_470 [511];
  undefined local_271;
  char acStack_270 [511];
  undefined local_71;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  ppiVar10 = DAT_0211c588;
  if (DAT_0211c588 != s_saveGames) {
    uVar12 = 0;
    ppiVar7 = DAT_0211c588;
    ppiVar10 = s_saveGames;
    do {
      piVar14 = ppiVar10[uVar12];
      if (piVar14 != (int *)0x0) {
        if (*(void **)(piVar14 + 2) != (void *)0x0) {
          operator_delete__(*(void **)(piVar14 + 2));
        }
        if (*(void **)(piVar14 + 4) != (void *)0x0) {
          operator_delete__(*(void **)(piVar14 + 4));
        }
        operator_delete(piVar14);
        ppiVar7 = DAT_0211c588;
        ppiVar10 = s_saveGames;
      }
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (uVar12 < (ulong)((long)ppiVar7 - (long)ppiVar10 >> 3));
  }
  DAT_0211c588 = ppiVar10;
  CloudDeviceManager::getInstance();
  plVar6 = (long *)CloudDeviceManager::getCloudDevice();
  if (plVar6 == (long *)0x0) {
    iVar13 = 1;
    do {
      uVar2 = DAT_0211c558;
      if ((s_saveGameDirectoryBase & 1) == 0) {
        uVar2 = 0x211c549;
      }
      uVar3 = DAT_0211c570;
      if ((s_saveGameDirPostfix & 1) == 0) {
        uVar3 = 0x211c561;
      }
      FUN_00b4d19c(acStack_270,0x200,0x200,"%ssavegame%u%s",uVar2,iVar13,uVar3);
      local_71 = 0;
      iVar5 = NativeFileUtil::getFileType(acStack_270,true);
      if (iVar5 == 2) {
        FUN_00b4d19c(acStack_470,0x200,0x200,"%s/%s",acStack_270,META_FILENAME);
        local_271 = 0;
        local_480 = (uchar *)0x0;
        uVar12 = NativeFileUtil::loadFile(acStack_470,&local_480,&local_474,1);
        if ((uVar12 & 1) != 0) {
          local_480[local_474] = '\0';
          piVar14 = (int *)operator_new(0x20);
          ppiVar1 = DAT_0211c590;
          ppiVar7 = DAT_0211c588;
          *piVar14 = iVar13;
          *(undefined *)(piVar14 + 6) = 0;
          *(uchar **)(piVar14 + 2) = local_480;
          *(undefined8 *)(piVar14 + 4) = 0;
          ppiVar10 = s_saveGames;
          if (ppiVar7 < ppiVar1) {
            DAT_0211c588 = ppiVar7 + 1;
            *ppiVar7 = piVar14;
          }
          else {
            __n = (long)ppiVar7 - (long)s_saveGames;
            uVar12 = ((long)__n >> 3) + 1;
            if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar9 = (long)ppiVar1 - (long)s_saveGames;
            uVar11 = (long)uVar9 >> 2;
            if (uVar12 <= uVar11) {
              uVar12 = uVar11;
            }
            if (0x7ffffffffffffff7 < uVar9) {
              uVar12 = 0x1fffffffffffffff;
            }
            if (uVar12 == 0) {
              ppiVar7 = (int **)0x0;
            }
            else {
              if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
              ppiVar7 = (int **)operator_new(uVar12 << 3);
            }
            ppiVar1 = ppiVar7 + ((long)__n >> 3);
            *ppiVar1 = piVar14;
            if (0 < (long)__n) {
              memcpy(ppiVar7,ppiVar10,__n);
            }
            DAT_0211c590 = ppiVar7 + uVar12;
            s_saveGames = ppiVar7;
            DAT_0211c588 = ppiVar1 + 1;
            if (ppiVar10 != (int **)0x0) {
              operator_delete(ppiVar10);
            }
          }
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != 0x1f);
    if (param_1 != (_func_void_void_ptr_ErrorCode_char_ptr *)0x0) {
      (*param_1)(param_2,0,(char *)0x0);
    }
  }
  else if (s_state == 0) {
    puVar8 = (undefined4 *)operator_new(0x20);
    *puVar8 = 0;
    *(_func_void_void_ptr_ErrorCode_char_ptr **)(puVar8 + 2) = param_1;
    *(void **)(puVar8 + 4) = param_2;
    *(undefined8 *)(puVar8 + 6) = 0;
    s_state = 1;
    (**(code **)(*plVar6 + 0x40))(plVar6,s_pCloudSession,&s_pGetMetaDataOperation,puVar8);
  }
  else if (param_1 != (_func_void_void_ptr_ErrorCode_char_ptr *)0x0) {
    (*param_1)(param_2,0xb,(char *)0x0);
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


