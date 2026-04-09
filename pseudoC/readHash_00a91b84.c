// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readHash
// Entry Point: 00a91b84
// Size: 128 bytes
// Signature: undefined __cdecl readHash(File * param_1, char * param_2, bool * param_3, uchar * param_4)


/* GS2DUtil::readHash(File&, char const*, bool&, unsigned char*) */

uint GS2DUtil::readHash(File *param_1,char *param_2,bool *param_3,uchar *param_4)

{
  long lVar1;
  uint uVar2;
  GS2DHeader aGStack_80 [24];
  byte local_68;
  undefined8 local_54;
  undefined8 uStack_4c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_3 = false;
  uVar2 = readHeader(param_1,aGStack_80,param_2);
  if (((uVar2 & 1) != 0) && ((local_68 >> 2 & 1) != 0)) {
    *param_3 = true;
    *(undefined8 *)(param_4 + 8) = uStack_4c;
    *(undefined8 *)param_4 = local_54;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


