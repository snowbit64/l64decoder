// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readHash
// Entry Point: 00a7bf0c
// Size: 208 bytes
// Signature: undefined __cdecl readHash(File * param_1, char * param_2, bool * param_3, uchar * param_4)


/* DDSUtil::readHash(File&, char const*, bool&, unsigned char*) */

uint DDSUtil::readHash(File *param_1,char *param_2,bool *param_3,uchar *param_4)

{
  long lVar1;
  uint uVar2;
  DDSHeaderDX10 aDStack_128 [24];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined4 local_c4;
  undefined2 local_c0;
  DDSHeader aDStack_b8 [28];
  int local_9c;
  byte local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_3 = false;
  local_110 = 0;
  local_d0 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_108 = 0x100000001;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = 0;
  uVar2 = readHeader(param_1,0,aDStack_b8,aDStack_128,(ImageDesc *)&local_110,param_2);
  if ((((uVar2 & 1) != 0) && (local_9c == 0x288ae8d9)) && ((local_94 >> 3 & 1) != 0)) {
    *param_3 = true;
    *(undefined8 *)(param_4 + 8) = uStack_88;
    *(undefined8 *)param_4 = local_90;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


