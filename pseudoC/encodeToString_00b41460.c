// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encodeToString
// Entry Point: 00b41460
// Size: 148 bytes
// Signature: undefined __cdecl encodeToString(uchar * param_1, uint param_2, bool param_3)


/* HexStringStreamUtil::encodeToString(unsigned char const*, unsigned int, bool) */

void HexStringStreamUtil::encodeToString(uchar *param_1,uint param_2,bool param_3)

{
  char *pcVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  ulong uVar5;
  
  pvVar3 = operator_new__((ulong)(param_2 << 1 | 1));
  pcVar1 = "0123456789ABCDEF";
  if (!param_3) {
    pcVar1 = "0123456789abcdef";
  }
  if (param_2 != 0) {
    uVar5 = 0;
    do {
      iVar4 = (int)uVar5;
      cVar2 = pcVar1[(ulong)*param_1 & 0xf];
      *(char *)((long)pvVar3 + (uVar5 & 0xffffffff)) = pcVar1[*param_1 >> 4];
      uVar5 = uVar5 + 2;
      *(char *)((long)pvVar3 + (ulong)(iVar4 + 1)) = cVar2;
      param_1 = param_1 + 1;
    } while ((ulong)param_2 * 2 - uVar5 != 0);
  }
  *(undefined *)((long)pvVar3 + (ulong)(param_2 << 1)) = 0;
  return;
}


