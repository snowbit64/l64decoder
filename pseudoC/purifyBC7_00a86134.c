// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: purifyBC7
// Entry Point: 00a86134
// Size: 208 bytes
// Signature: undefined __cdecl purifyBC7(uchar * param_1, uchar * param_2, uint param_3, uint param_4)


/* BC6BC7Util::purifyBC7(unsigned char*, unsigned char*, unsigned int, unsigned int) */

void BC6BC7Util::purifyBC7(uchar *param_1,uchar *param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uchar *puVar5;
  uint uVar6;
  
  bVar4 = param_2 != (uchar *)0x0;
  uVar1 = 0;
  if (bVar4) {
    uVar1 = (ulong)(param_3 << 4);
  }
  if (3 < param_4) {
    uVar2 = param_3 >> 2;
    uVar6 = 0;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    do {
      puVar5 = param_2;
      uVar3 = uVar2;
      if (3 < param_3) {
        do {
          D3DX_BC7::Purify(param_1,(uint)puVar5);
          param_1 = param_1 + 0x10;
          puVar5 = puVar5 + (ulong)bVar4 * 0x10;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      uVar6 = uVar6 + 1;
      param_2 = param_2 + uVar1;
    } while (uVar6 != param_4 >> 2);
  }
  return;
}


