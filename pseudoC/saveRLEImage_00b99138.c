// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveRLEImage
// Entry Point: 00b99138
// Size: 328 bytes
// Signature: undefined __cdecl saveRLEImage(char * param_1, uchar * param_2, uint param_3, uint param_4, uint param_5)


/* RLEUtil::saveRLEImage(char const*, unsigned char const*, unsigned int, unsigned int, unsigned
   int) */

uint RLEUtil::saveRLEImage(char *param_1,uchar *param_2,uint param_3,uint param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  uint local_74;
  undefined4 local_70;
  undefined local_6c;
  uint local_6b;
  uint local_67;
  uint local_63;
  uint local_5f;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,1,
                                    false);
  if (plVar3 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar3 + 0x10))();
    if ((uVar2 & 1) != 0) {
      local_74 = 0;
      (**(code **)(*plVar3 + 0x38))(plVar3,0x15);
      encode(param_2,param_4 * param_3 * param_5,param_5,param_5,(File *)plVar3,&local_74);
      (**(code **)(*plVar3 + 0x38))(plVar3,0);
      local_70 = 0x454c5247;
      local_5f = local_74;
      local_6c = 1;
      local_6b = param_3;
      local_67 = param_4;
      local_63 = param_5;
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_70,0x15);
    }
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


