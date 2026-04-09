// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_open_pushdata
// Entry Point: 00e46a70
// Size: 356 bytes
// Signature: undefined stb_vorbis_open_pushdata(void)


void * stb_vorbis_open_pushdata
                 (long param_1,int param_2,int *param_3,undefined4 *param_4,long *param_5)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  void *__dest;
  undefined auStack_7c8 [8];
  int local_7c0;
  undefined8 local_798;
  undefined4 local_78c;
  long local_788;
  long local_778;
  undefined local_76c;
  long local_748;
  undefined8 uStack_740;
  int local_738;
  uint local_734;
  undefined8 local_730;
  undefined8 local_710;
  undefined4 local_b8;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  memset(auStack_7c8,0,0x770);
  if (param_5 != (long *)0x0) {
    local_748 = *param_5;
    uStack_740._0_4_ = (int)param_5[1];
    local_734 = (int)uStack_740 + 3U & 0xfffffffc;
    uStack_740._4_4_ = (undefined4)((ulong)param_5[1] >> 0x20);
    uStack_740 = CONCAT44(uStack_740._4_4_,(int)uStack_740 + 3U) & 0xfffffffffffffffc;
  }
  local_730 = 0;
  local_710 = 0;
  local_b8 = 0xffffffff;
  local_778 = param_1 + param_2;
  local_78c = 0;
  local_798 = 0;
  local_76c = 1;
  local_788 = param_1;
  iVar3 = FUN_00e46bd4(auStack_7c8);
  if (iVar3 == 0) {
    __dest = (void *)0x0;
    uVar1 = local_730._4_4_;
    if ((int)local_730 != 0) {
      uVar1 = 1;
    }
    *param_4 = uVar1;
    goto LAB_00e46ba0;
  }
  local_7c0 = local_7c0 + 0x770;
  if (local_748 == 0) {
    __dest = malloc(0x770);
joined_r0x00e46b7c:
    if (__dest != (void *)0x0) {
      memcpy(__dest,auStack_7c8,0x770);
      *param_3 = *(int *)((long)__dest + 0x40) - (int)param_1;
      *param_4 = 0;
      goto LAB_00e46ba0;
    }
  }
  else if (local_738 + 0x770 <= (int)local_734) {
    __dest = (void *)(local_748 + local_738);
    local_738 = local_738 + 0x770;
    goto joined_r0x00e46b7c;
  }
  FUN_00e44d50(auStack_7c8);
  __dest = (void *)0x0;
LAB_00e46ba0:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __dest;
}


