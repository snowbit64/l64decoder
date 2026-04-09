// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadRLEImage
// Entry Point: 00b9953c
// Size: 448 bytes
// Signature: undefined __cdecl loadRLEImage(char * param_1, uchar * * param_2, uint * param_3, uint * param_4, uint * param_5)


/* RLEUtil::loadRLEImage(char const*, unsigned char*&, unsigned int&, unsigned int&, unsigned int&)
    */

undefined4
RLEUtil::loadRLEImage(char *param_1,uchar **param_2,uint *param_3,uint *param_4,uint *param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uchar *puVar7;
  undefined4 uVar8;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined uStack_60;
  undefined4 local_5f;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0,
                                    false);
  if (plVar4 == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar4 + 0x10))();
    if (((((uVar5 & 1) == 0) || (lVar6 = (**(code **)(*plVar4 + 0x48))(plVar4), lVar6 < 0x15)) ||
        (iVar3 = (**(code **)(*plVar4 + 0x28))(plVar4,&local_70,0x15), iVar3 != 0x15)) ||
       ((local_70 != 0x5a4c5247 && (local_70 != 0x454c5247)))) {
      uVar8 = 0;
    }
    else {
      uVar2 = CONCAT13(uStack_60,uStack_64._1_3_);
      *param_3 = CONCAT13((undefined)uStack_68,uStack_6c._1_3_);
      *param_4 = CONCAT13((undefined)uStack_64,uStack_68._1_3_);
      *param_5 = uVar2;
      uVar8 = 0;
      if (((char)uStack_6c == '\x01') && (uVar8 = 0, local_70 != 0x5a4c5247)) {
        puVar7 = (uchar *)operator_new__((ulong)(*param_4 * *param_3 * uVar2));
        *param_2 = puVar7;
        if (uVar2 == 1) {
          local_70 = (int)plVar4;
          uStack_6c = (undefined4)((ulong)plVar4 >> 0x20);
          uVar8 = 1;
          uStack_68 = local_5f;
          uStack_64 = 0;
          _decode<unsigned_char,unsigned_char,CompressedIoUtil::CompressedFileInput<unsigned_char,File>>
                    ((CompressedFileInput *)&local_70,1,1,puVar7);
        }
        else {
          DebugUtil::message("Error",
                             "RLEUtil: decoding to char array is only supported with input char width 1"
                             ,(char *)0x0,"T:/src/base/misc/RLEUtil.cpp",0x7e);
          uVar8 = 1;
        }
      }
    }
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


