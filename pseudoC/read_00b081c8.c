// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: read
// Entry Point: 00b081c8
// Size: 212 bytes
// Signature: undefined __cdecl read(OggVorbis_File * param_1, char * param_2, int param_3, int param_4, int param_5)


/* AudioLoaderOGG::read(OggVorbis_File*, char*, int, int, int) */

int AudioLoaderOGG::read(OggVorbis_File *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  undefined auStack_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_3 < 0) {
    dVar5 = (double)ov_time_total(param_1,0xffffffff);
    param_3 = param_4 * param_5 * (int)(dVar5 + 1.0) * 2;
  }
  iVar2 = 0;
  do {
    iVar4 = iVar2;
    if (param_3 - iVar4 == 0 || param_3 < iVar4) break;
    iVar3 = (*fn_ov_read)(param_1,param_2 + iVar4,param_3 - iVar4,0,2,1,auStack_4c);
    iVar2 = iVar4 + iVar3;
  } while (0 < iVar3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


