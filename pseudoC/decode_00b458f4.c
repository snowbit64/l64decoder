// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decode
// Entry Point: 00b458f4
// Size: 152 bytes
// Signature: undefined __thiscall decode(TextFilterManager * this, uchar * param_1, uint param_2, uchar * * param_3, uint param_4)


/* TextFilterManager::decode(unsigned char*, unsigned int, unsigned char**, unsigned int) */

void __thiscall
TextFilterManager::decode
          (TextFilterManager *this,uchar *param_1,uint param_2,uchar **param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 != 0) {
    uVar4 = 0;
    uVar3 = 0;
    uVar5 = 0;
    do {
      while (iVar6 = (int)((uVar4 & 0xffffffff) * 0x24924925 >> 0x20), bVar1 = param_1[uVar4],
            bVar2 = (&TextFilterManagerData::s_xorPattern)
                    [(int)uVar4 + (iVar6 + ((uint)((int)uVar4 - iVar6) >> 1) >> 2) * -7],
            param_1[uVar4] = bVar2 ^ bVar1, (bVar2 ^ bVar1) == 0) {
        param_3[uVar5] = param_1 + uVar3;
        if (param_4 < uVar5 + 1) {
          return;
        }
        uVar4 = uVar4 + 1;
        uVar3 = (uint)uVar4;
        uVar5 = uVar5 + 1;
        if (uVar4 == param_2) {
          return;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_2);
  }
  return;
}


