// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cmp<unsigned_char_const>
// Entry Point: 00b80618
// Size: 104 bytes
// Signature: int __cdecl cmp<unsigned_char_const>(uchar * param_1, uchar * param_2, uint param_3, uchar param_4)


/* int IndexedTriangleSetBuilder::cmp<unsigned char const>(unsigned char const*, unsigned char
   const*, unsigned int, unsigned char const) */

int IndexedTriangleSetBuilder::cmp<unsigned_char_const>
              (uchar *param_1,uchar *param_2,uint param_3,uchar param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  
  if (param_3 != 0) {
    uVar4 = (ulong)param_3;
    do {
      bVar2 = *param_1;
      bVar3 = *param_2;
      if (((double)(ulong)param_4 < ABS((double)((uint)bVar2 - (uint)bVar3))) ||
         ((double)(ulong)param_4 < ABS((double)((uint)bVar3 - (uint)bVar2)))) {
        iVar1 = 1;
        if (bVar2 < bVar3) {
          iVar1 = -1;
        }
        return iVar1;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return 0;
}


