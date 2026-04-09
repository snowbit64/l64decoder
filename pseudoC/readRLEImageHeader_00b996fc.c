// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readRLEImageHeader
// Entry Point: 00b996fc
// Size: 244 bytes
// Signature: undefined __cdecl readRLEImageHeader(File * param_1, uint * param_2, uint * param_3, uint * param_4, uint * param_5, uchar * param_6, bool * param_7)


/* RLEUtil::readRLEImageHeader(File*, unsigned int&, unsigned int&, unsigned int&, unsigned int&,
   unsigned char&, bool&) */

void RLEUtil::readRLEImageHeader
               (File *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uchar *param_6
               ,bool *param_7)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int local_70;
  uchar local_6c;
  uint local_6b;
  uint local_67;
  uint local_63;
  uint local_5f;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_70,0x15);
  if (iVar2 == 0x15) {
    *param_7 = false;
    if (local_70 == 0x5a4c5247) {
      *param_7 = true;
    }
    else if (local_70 != 0x454c5247) goto LAB_00b99784;
    uVar3 = 1;
    *param_2 = local_6b;
    *param_3 = local_67;
    *param_4 = local_63;
    *param_5 = local_5f;
    *param_6 = local_6c;
  }
  else {
LAB_00b99784:
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


