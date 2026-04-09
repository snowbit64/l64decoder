// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stristr
// Entry Point: 00b9e7f8
// Size: 164 bytes
// Signature: undefined __cdecl stristr(char * param_1, char * param_2)


/* StringUtil::stristr(char const*, char const*) */

byte * StringUtil::stristr(char *param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    bVar3 = *param_1;
    if (bVar3 == 0) {
      return (byte *)0x0;
    }
    bVar4 = *param_2;
    uVar5 = bVar4 | 0x20;
    if (0x19 < bVar4 - 0x41) {
      uVar5 = (uint)bVar4;
    }
    do {
      uVar6 = (uint)bVar3;
      uVar2 = uVar6 | 0x20;
      if (0x19 < uVar6 - 0x41) {
        uVar2 = uVar6;
      }
      if (uVar2 == uVar5) {
        lVar7 = 1;
        do {
          bVar3 = param_2[lVar7];
          if (bVar3 == 0) {
            return (byte *)param_1;
          }
          bVar4 = ((byte *)param_1)[lVar7];
          if (bVar4 == 0) {
            return (byte *)0x0;
          }
          bVar1 = bVar4 | 0x20;
          if (0x19 < bVar4 - 0x41) {
            bVar1 = bVar4;
          }
          lVar7 = lVar7 + 1;
          bVar4 = bVar3 | 0x20;
          if (0x19 < bVar3 - 0x41) {
            bVar4 = bVar3;
          }
        } while (bVar1 == bVar4);
      }
      param_1 = (char *)((byte *)param_1 + 1);
      bVar3 = *param_1;
    } while (bVar3 != 0);
  }
  return (byte *)0x0;
}


