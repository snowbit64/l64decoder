// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveImage
// Entry Point: 00a90de8
// Size: 368 bytes
// Signature: undefined __cdecl saveImage(char * param_1, ImageDesc * param_2)


/* GS2DUtil::saveImage(char const*, ImageDesc const&) */

uint GS2DUtil::saveImage(char *param_1,ImageDesc *param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 local_b0;
  uint local_ac;
  uchar *local_a8;
  GS2DHeader aGStack_a0 [72];
  uint auStack_58 [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,1,
                                    false);
  if (plVar3 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar4 = compressContent(param_2,&local_a8,&local_ac,auStack_58);
    if ((uVar4 & 1) == 0) {
      (**(code **)(*plVar3 + 8))(plVar3);
      uVar2 = 0;
    }
    else {
      uVar2 = buildGS2DHeader(param_2,local_ac,auStack_58,aGStack_a0);
      if ((uVar2 & 1) != 0) {
        local_b0 = 6;
        (**(code **)(*plVar3 + 0x30))(plVar3,s_GS2DHeaderID,4);
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_b0,4);
        (**(code **)(*plVar3 + 0x30))(plVar3,aGStack_a0,0x48);
        (**(code **)(*plVar3 + 0x30))(plVar3,local_a8,local_ac);
      }
      if (local_a8 != (uchar *)0x0) {
        operator_delete__(local_a8);
      }
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 1;
}


