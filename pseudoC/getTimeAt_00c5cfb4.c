// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTimeAt
// Entry Point: 00c5cfb4
// Size: 180 bytes
// Signature: undefined __cdecl getTimeAt(uint param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6)


/* EnvUtil::getTimeAt(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned
   int) */

void EnvUtil::getTimeAt(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       uint param_6)

{
  long lVar1;
  tm *ptVar2;
  time_t tStack_98;
  tm local_90;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  time(&tStack_98);
  ptVar2 = localtime(&tStack_98);
  local_90.tm_wday = ptVar2->tm_wday;
  local_90.tm_yday = ptVar2->tm_yday;
  local_90.tm_gmtoff = ptVar2->tm_gmtoff;
  local_90.tm_isdst = ptVar2->tm_isdst;
  local_90._36_4_ = *(undefined4 *)&ptVar2->field_0x24;
  local_90.tm_zone = ptVar2->tm_zone;
  local_90.tm_year = param_1 - 0x76c;
  local_90.tm_mon = param_2 - 1;
  local_90.tm_mday = param_3;
  local_90.tm_hour = param_4;
  local_90.tm_min = param_5;
  local_90.tm_sec = param_6;
  mktime(&local_90);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


