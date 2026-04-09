// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeNonAsciiFromUtf8InPlace
// Entry Point: 00b9f678
// Size: 260 bytes
// Signature: undefined __cdecl removeNonAsciiFromUtf8InPlace(char * param_1)


/* StringUtil::removeNonAsciiFromUtf8InPlace(char*) */

int StringUtil::removeNonAsciiFromUtf8InPlace(char *param_1)

{
  byte *__src;
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  char *__dest;
  size_t __n;
  
  bVar1 = *param_1;
  __src = (byte *)param_1;
  __dest = param_1;
  while (bVar1 != 0) {
    uVar3 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      bVar1 = __src[1];
      uVar4 = (uint)bVar1;
      if (bVar1 == 0) break;
      if ((uVar3 & 0xe0) == 0xc0) {
        uVar3 = (uVar3 & 0x1f) << 6;
        __n = 2;
      }
      else {
        bVar2 = __src[2];
        uVar4 = (uint)bVar2;
        if (bVar2 == 0) break;
        if ((uVar3 & 0xf0) == 0xe0) {
          __n = 3;
          uVar3 = (uVar3 & 0xf) << 0xc | (bVar1 & 0x3f) << 6;
        }
        else {
          uVar4 = (uint)__src[3];
          if ((uVar4 == 0) || ((uVar3 & 0xf8) != 0xf0)) break;
          __n = 4;
          uVar3 = (uVar3 & 7) << 0x12 | (bVar1 & 0x3f) << 0xc | (bVar2 & 0x3f) << 6;
        }
      }
      uVar3 = uVar3 | uVar4 & 0x3f;
      if (uVar3 == 0) break;
    }
    else {
      __n = 1;
    }
    if (uVar3 < 0xff) {
      memmove(__dest,__src,__n);
      __dest = __dest + __n;
    }
    __src = __src + __n;
    bVar1 = *__src;
  }
  *__dest = '\0';
  return (int)__dest - (int)param_1;
}


