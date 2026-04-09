// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: base64Encode
// Entry Point: 00ba0bf8
// Size: 532 bytes
// Signature: undefined __cdecl base64Encode(uchar * param_1, uint param_2, bool param_3, char * * param_4)


/* StringUtil::base64Encode(unsigned char const*, unsigned int, bool, char*&) */

int StringUtil::base64Encode(uchar *param_1,uint param_2,bool param_3,char **param_4)

{
  int iVar1;
  size_t __n;
  uint uVar2;
  undefined **ppuVar3;
  long lVar4;
  char *__s;
  long lVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined *puVar8;
  int iVar9;
  byte local_60;
  byte local_5f;
  byte local_5e;
  byte local_5d;
  byte local_5c [4];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  ppuVar3 = &s_pBase64UrlChars;
  if (!param_3) {
    ppuVar3 = &s_pBase64Chars;
  }
  puVar8 = *ppuVar3;
  __s = (char *)operator_new__((ulong)((param_2 + 2) / 3 << 2 | 1));
  *param_4 = __s;
  if (param_2 != 0) {
    iVar9 = 0;
    pcVar7 = __s;
    do {
      param_2 = param_2 - 1;
      iVar1 = iVar9 + 1;
      local_5c[iVar9] = *param_1;
      __s = pcVar7;
      iVar9 = iVar1;
      if (iVar1 == 3) {
        iVar9 = 0;
        local_5f = local_5c[1] >> 4 | (byte)((local_5c[0] & 3) << 4);
        uVar2 = (uint)(local_5c[2] >> 6) | (local_5c[1] & 0xf) << 2;
        *pcVar7 = puVar8[local_5c[0] >> 2];
        local_5e = (byte)uVar2;
        local_5d = (byte)(local_5c[2] & 0x3f);
        pcVar7[1] = puVar8[local_5f];
        pcVar7[2] = puVar8[uVar2];
        __s = pcVar7 + 4;
        pcVar7[3] = puVar8[local_5c[2] & 0x3f];
      }
      pcVar7 = __s;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
    if (iVar9 != 0) {
      if (iVar9 < 3) {
        memset(local_5c + iVar9,0,(ulong)(2 - iVar9) + 1);
      }
      local_60 = local_5c[0] >> 2;
      local_5f = local_5c[1] >> 4 | (byte)((local_5c[0] & 3) << 4);
      local_5e = local_5c[2] >> 6 | (byte)((local_5c[1] & 0xf) << 2);
      local_5d = local_5c[2] & 0x3f;
      if (-1 < iVar9) {
        lVar5 = (ulong)(iVar9 + 1) - 1;
        *__s = puVar8[local_60];
        pbVar6 = (byte *)((ulong)&local_60 | 1);
        pcVar7 = __s + 1;
        do {
          lVar5 = lVar5 + -1;
          __s = pcVar7 + 1;
          *pcVar7 = puVar8[*pbVar6];
          pbVar6 = pbVar6 + 1;
          pcVar7 = __s;
        } while (lVar5 != 0);
      }
      if ((!param_3) && (iVar9 < 3)) {
        __n = (ulong)(2 - iVar9) + 1;
        memset(__s,0x3d,__n);
        __s = __s + __n;
      }
    }
  }
  *__s = '\0';
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return ((int)__s - *(int *)param_4) + 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


