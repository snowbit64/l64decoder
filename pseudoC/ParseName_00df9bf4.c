// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ParseName
// Entry Point: 00df9bf4
// Size: 236 bytes
// Signature: undefined __thiscall ParseName(StrPair * this, char * param_1)


/* tinyxml2::StrPair::ParseName(char*) */

byte * __thiscall tinyxml2::StrPair::ParseName(StrPair *this,char *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  if (((param_1 != (char *)0x0) && (bVar1 = *param_1, bVar1 != 0)) &&
     (((char)bVar1 < '\0' ||
      (((uVar2 = (uint)bVar1, 0xffffffe5 < (uVar2 & 0xffffffdf) - 0x5b || (uVar2 == 0x5f)) ||
       (uVar2 == 0x3a)))))) {
    pbVar3 = (byte *)(param_1 + 1);
    bVar1 = *pbVar3;
    while ((bVar1 != 0 &&
           (((uVar2 = (uint)bVar1, (char)bVar1 < '\0' || (0xffffffe5 < (uVar2 & 0xdf) - 0x5b)) ||
            (((uVar2 == 0x3a || ((uVar2 == 0x5f || (uVar2 - 0x2d < 2)))) || (uVar2 - 0x30 < 10))))))
          ) {
      pbVar3 = pbVar3 + 1;
      bVar1 = *pbVar3;
    }
    if ((((byte)this[1] >> 1 & 1) != 0) && (*(void **)(this + 8) != (void *)0x0)) {
      operator_delete__(*(void **)(this + 8));
    }
    *(char **)(this + 8) = param_1;
    *(byte **)(this + 0x10) = pbVar3;
    *(undefined4 *)this = 0x100;
    return pbVar3;
  }
  return (byte *)0x0;
}


