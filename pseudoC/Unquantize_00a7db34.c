// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Unquantize
// Entry Point: 00a7db34
// Size: 148 bytes
// Signature: undefined __cdecl Unquantize(int param_1, uchar param_2, bool param_3)


/* BC6BC7Util::D3DX_BC6H::Unquantize(int, unsigned char, bool) */

int BC6BC7Util::D3DX_BC6H::Unquantize(int param_1,uchar param_2,bool param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_3) {
    if (param_2 < 0x10) {
      iVar3 = -param_1;
      if (-1 < param_1) {
        iVar3 = param_1;
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else if (iVar3 < ~(-1 << (ulong)(param_2 - 1 & 0x1f))) {
        iVar3 = (int)(iVar3 << 0xf | 0x4000U) >> (param_2 - 1 & 0x1f);
      }
      else {
        iVar3 = 0x7fff;
      }
      iVar1 = -iVar3;
      if (-1 < param_1) {
        iVar1 = iVar3;
      }
      return iVar1;
    }
  }
  else {
    uVar2 = (uint)param_2;
    if ((uVar2 < 0xf) && (param_1 != 0)) {
      if (~(-1 << (ulong)(uVar2 & 0x1f)) == param_1) {
        return 0xffff;
      }
      param_1 = (int)(param_1 << 0x10 | 0x8000U) >> (uVar2 & 0x1f);
    }
  }
  return param_1;
}


