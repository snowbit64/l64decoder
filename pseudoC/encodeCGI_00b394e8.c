// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encodeCGI
// Entry Point: 00b394e8
// Size: 224 bytes
// Signature: undefined __cdecl encodeCGI(char * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HTTPUtil::encodeCGI(char const*) */

void HTTPUtil::encodeCGI(char *param_1)

{
  byte bVar1;
  size_t sVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  
  sVar2 = strlen(param_1);
  pbVar3 = (byte *)operator_new__(sVar2 * 3 + 1);
  bVar1 = *param_1;
  if (bVar1 != 0) {
    pbVar4 = pbVar3;
    pbVar5 = (byte *)(param_1 + 1);
    do {
      uVar6 = (uint)bVar1;
      if ((*(byte *)(__ctype_ + (ulong)bVar1 + 1) & 7) == 0) {
        if (bVar1 < 0x5f) {
          if (uVar6 - 0x2d < 2) goto LAB_00b39538;
          if (uVar6 != 0x20) goto LAB_00b3958c;
          pbVar3 = pbVar4 + 1;
          *pbVar4 = 0x2b;
        }
        else {
          if ((bVar1 == 0x7e) || (uVar6 == 0x5f)) goto LAB_00b39538;
LAB_00b3958c:
          pbVar3 = pbVar4 + 3;
          *pbVar4 = 0x25;
          bVar1 = "0123456789ABCDEF"[bVar1 >> 4];
          pbVar4[2] = "0123456789ABCDEF"[uVar6 & 0xf];
          pbVar4[1] = bVar1;
        }
      }
      else {
LAB_00b39538:
        pbVar3 = pbVar4 + 1;
        *pbVar4 = bVar1;
      }
      bVar1 = *pbVar5;
      pbVar4 = pbVar3;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  *pbVar3 = 0;
  return;
}


