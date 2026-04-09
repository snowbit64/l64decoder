// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_open_memory
// Entry Point: 00e4a860
// Size: 380 bytes
// Signature: undefined stb_vorbis_open_memory(void)


void * stb_vorbis_open_memory(void *param_1,int param_2,undefined4 *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined4 local_7d4;
  undefined4 local_7d0;
  undefined4 local_7cc;
  undefined auStack_7c8 [8];
  int local_7c0;
  undefined8 local_798;
  undefined4 local_78c;
  void *local_788;
  void *local_780;
  long lStack_778;
  int local_770;
  undefined local_76c;
  long local_748;
  undefined8 uStack_740;
  int local_738;
  uint local_734;
  undefined8 local_730;
  undefined8 local_710;
  undefined4 local_b8;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1 == (void *)0x0) goto LAB_00e4a954;
  memset(auStack_7c8,0,0x770);
  if (param_4 != (long *)0x0) {
    local_748 = *param_4;
    uStack_740._0_4_ = (int)param_4[1];
    local_734 = (int)uStack_740 + 3U & 0xfffffffc;
    uStack_740._4_4_ = (undefined4)((ulong)param_4[1] >> 0x20);
    uStack_740 = CONCAT44(uStack_740._4_4_,(int)uStack_740 + 3U) & 0xfffffffffffffffc;
  }
  lStack_778 = (long)param_1 + (long)param_2;
  local_730 = 0;
  local_710 = 0;
  local_b8 = 0xffffffff;
  local_78c = 0;
  local_798 = 0;
  local_76c = 0;
  local_788 = param_1;
  local_780 = param_1;
  local_770 = param_2;
  iVar2 = FUN_00e46bd4(auStack_7c8);
  if (iVar2 != 0) {
    local_7c0 = local_7c0 + 0x770;
    if (local_748 == 0) {
      param_1 = malloc(0x770);
    }
    else {
      if ((int)local_734 < local_738 + 0x770) goto LAB_00e4a93c;
      param_1 = (void *)(local_748 + local_738);
      local_738 = local_738 + 0x770;
    }
    if (param_1 != (void *)0x0) {
      memcpy(param_1,auStack_7c8,0x770);
      iVar2 = FUN_00e4589c(param_1,&local_7cc,&local_7d4,&local_7d0);
      if (iVar2 != 0) {
        FUN_00e46748(param_1,local_7cc,local_7d4,local_7d0);
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0;
      }
      goto LAB_00e4a954;
    }
  }
LAB_00e4a93c:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_730._4_4_;
  }
  FUN_00e44d50(auStack_7c8);
  param_1 = (void *)0x0;
LAB_00e4a954:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}


