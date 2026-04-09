// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: utf8Next
// Entry Point: 00b9ebe0
// Size: 388 bytes
// Signature: undefined __cdecl utf8Next(char * param_1)


/* StringUtil::utf8Next(char const*) */

undefined8 StringUtil::utf8Next(char *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  
  bVar3 = *param_1;
  if (-1 < (char)bVar3) {
    return 1;
  }
  if ((byte)(bVar3 + 0xb) < 0xcd) {
    return 0;
  }
  bVar4 = param_1[1];
  if (((bVar3 < 0xe0) && ((char)bVar4 < '\0')) && (bVar4 < 0xc0)) {
    return 2;
  }
  bVar1 = param_1[2];
  if ((((bVar3 != 0xed) && ((byte)(bVar3 + 0x1f) < 0xf)) &&
      (((char)bVar4 < '\0' && ((bVar4 < 0xc0 && ((char)bVar1 < '\0')))))) && (bVar1 < 0xc0)) {
    return 3;
  }
  if ((((bVar3 == 0xe0) && (0x9f < bVar4)) && (bVar4 < 0xc0)) &&
     (((char)bVar1 < '\0' && (bVar1 < 0xc0)))) {
    return 3;
  }
  if ((((bVar3 == 0xed) && (((char)bVar4 < '\0' && (bVar4 < 0xa0)))) && ((char)bVar1 < '\0')) &&
     (bVar1 < 0xc0)) {
    return 3;
  }
  bVar2 = param_1[3];
  if (((((((byte)(bVar3 + 0xf) < 3) && ((char)bVar4 < '\0')) && (bVar4 < 0xc0)) &&
       (((char)bVar1 < '\0' && (bVar1 < 0xc0)))) && (((char)bVar2 < '\0' && (bVar2 < 0xc0)))) ||
     (((((bVar3 == 0xf0 && (0x8f < bVar4)) && (bVar4 < 0xc0)) &&
       (((((char)bVar1 < '\0' && (bVar1 < 0xc0)) && ((char)bVar2 < '\0')) && (bVar2 < 0xc0)))) ||
      ((((uVar5 = 0, bVar3 == 0xf4 && ((char)bVar4 < '\0')) &&
        ((bVar4 < 0x90 && (((char)bVar1 < '\0' && (bVar1 < 0xc0)))))) &&
       (((char)bVar2 < '\0' && (bVar2 < 0xc0)))))))) {
    uVar5 = 4;
  }
  return uVar5;
}


