// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConvertUTF32ToUTF8
// Entry Point: 00dfa3d0
// Size: 252 bytes
// Signature: undefined __cdecl ConvertUTF32ToUTF8(ulong param_1, char * param_2, int * param_3)


/* tinyxml2::XMLUtil::ConvertUTF32ToUTF8(unsigned long, char*, int*) */

void tinyxml2::XMLUtil::ConvertUTF32ToUTF8(ulong param_1,char *param_2,int *param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 local_50 [4];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long local_18;
  
  lVar2 = tpidr_el0;
  local_18 = *(long *)(lVar2 + 0x28);
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[3] = 0xe0;
  local_50[2] = 0xc0;
  uStack_28 = 0xf8;
  uStack_30 = 0xf0;
  local_20 = 0xfc;
  if (param_1 < 0x80) {
    lVar3 = 1;
    *param_3 = 1;
  }
  else {
    if (param_1 < 0x800) {
      *param_3 = 2;
    }
    else {
      if (param_1 >> 0x10 == 0) {
        *param_3 = 3;
      }
      else {
        if (0x1fffff < param_1) {
          *param_3 = 0;
          lVar2 = *(long *)(lVar2 + 0x28);
          goto joined_r0x00dfa4c4;
        }
        bVar1 = (byte)param_1;
        param_1 = param_1 >> 6;
        *param_3 = 4;
        param_2[3] = bVar1 & 0x3f | 0x80;
      }
      bVar1 = (byte)param_1;
      param_1 = param_1 >> 6;
      param_2[2] = bVar1 & 0x3f | 0x80;
    }
    bVar1 = (byte)param_1;
    param_1 = param_1 >> 6;
    param_2[1] = bVar1 & 0x3f | 0x80;
    lVar3 = (long)*param_3;
  }
  *param_2 = (byte)local_50[lVar3] | (byte)param_1;
  lVar2 = *(long *)(lVar2 + 0x28);
joined_r0x00dfa4c4:
  if (lVar2 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


