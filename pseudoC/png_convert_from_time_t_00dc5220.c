// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_convert_from_time_t
// Entry Point: 00dc5220
// Size: 132 bytes
// Signature: undefined png_convert_from_time_t(void)


void png_convert_from_time_t(short *param_1,time_t param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  long lVar6;
  tm *ptVar7;
  time_t local_30;
  long local_28;
  
  lVar6 = tpidr_el0;
  local_28 = *(long *)(lVar6 + 0x28);
  local_30 = param_2;
  ptVar7 = gmtime(&local_30);
  iVar1 = ptVar7->tm_hour;
  sVar5 = *(short *)&ptVar7->tm_year;
  cVar4 = *(char *)&ptVar7->tm_mon;
  iVar2 = ptVar7->tm_min;
  *(char *)((long)param_1 + 3) = (char)ptVar7->tm_mday;
  iVar3 = ptVar7->tm_sec;
  *(char *)(param_1 + 2) = (char)iVar1;
  *(char *)((long)param_1 + 5) = (char)iVar2;
  *(char *)(param_1 + 3) = (char)iVar3;
  *param_1 = sVar5 + 0x76c;
  *(char *)(param_1 + 1) = cVar4 + '\x01';
  if (*(long *)(lVar6 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


