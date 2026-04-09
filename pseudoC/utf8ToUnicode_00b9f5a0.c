// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: utf8ToUnicode
// Entry Point: 00b9f5a0
// Size: 216 bytes
// Signature: undefined __cdecl utf8ToUnicode(char * param_1, uint * param_2)


/* StringUtil::utf8ToUnicode(char const*, unsigned int&) */

undefined8 StringUtil::utf8ToUnicode(char *param_1,uint *param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  
  uVar4 = (uint)(byte)*param_1;
  if (*param_1 < '\0') {
    pbVar3 = (byte *)(param_1 + 1);
    if (*pbVar3 == 0) {
      return 0;
    }
    if ((uVar4 & 0xe0) == 0xc0) {
      uVar4 = (uVar4 & 0x1f) << 6;
      uVar1 = 2;
      pbVar2 = pbVar3;
    }
    else {
      pbVar5 = (byte *)(param_1 + 2);
      if (*pbVar5 == 0) {
        return 0;
      }
      if ((uVar4 & 0xf0) == 0xe0) {
        uVar4 = (uVar4 & 0xf) << 0xc;
        uVar1 = 3;
        *param_2 = uVar4;
        uVar4 = uVar4 | (*pbVar3 & 0x3f) << 6;
        pbVar2 = pbVar5;
      }
      else {
        pbVar2 = (byte *)(param_1 + 3);
        if (*pbVar2 == 0) {
          return 0;
        }
        if ((uVar4 & 0xf8) != 0xf0) {
          return 0;
        }
        uVar4 = (uVar4 & 7) << 0x12;
        uVar1 = 4;
        *param_2 = uVar4;
        uVar4 = uVar4 | (*pbVar3 & 0x3f) << 0xc;
        *param_2 = uVar4;
        uVar4 = uVar4 | (*pbVar5 & 0x3f) << 6;
      }
    }
    *param_2 = uVar4;
    uVar4 = uVar4 | *pbVar2 & 0x3f;
  }
  else {
    uVar1 = 1;
  }
  *param_2 = uVar4;
  return uVar1;
}


