// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: identifierEnd
// Entry Point: 00b90bc0
// Size: 296 bytes
// Signature: undefined __thiscall identifierEnd(Preprocessor * this, uint param_1)


/* Preprocessor::identifierEnd(unsigned int) */

uint __thiscall Preprocessor::identifierEnd(Preprocessor *this,uint param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = getChar(this,param_1);
  if ((uVar3 & 0xff) == 0) {
    return param_1;
  }
  if (*(char *)(*(long *)(this + 0x30) + 0x30) == (char)uVar3) {
    cVar1 = getChar(this,param_1 + 1);
    if (cVar1 == '\0') {
      return param_1 + 1;
    }
    uVar3 = (uint)cVar1;
    param_1 = param_1 + 2;
    if ((((uVar3 != 0x5f) && (0x19 < ((uVar3 & 0xffffffdf) - 0x41 & 0xff))) && (-1 < (int)uVar3)) &&
       (9 < (uVar3 - 0x30 & 0xff))) {
      return param_1;
    }
    uVar3 = getChar(this,param_1);
  }
  if ((((uVar3 & 0xff) == 0x5f) || (((uVar3 & 0xffffffdf) - 0x41 & 0xff) < 0x1a)) ||
     (((uVar3 >> 7 & 1) != 0 || ((uVar3 - 0x30 & 0xff) < 10)))) {
    do {
      do {
        param_1 = param_1 + 1;
        bVar2 = getChar(this,param_1);
      } while (bVar2 == 0x5f);
    } while ((((byte)((bVar2 & 0xdf) + 0xbf) < 0x1a) || ((char)bVar2 < '\0')) ||
            ((byte)(bVar2 - 0x30) < 10));
  }
  return param_1;
}


