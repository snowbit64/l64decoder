// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_book_decodevv_add
// Entry Point: 00e0a9bc
// Size: 244 bytes
// Signature: undefined vorbis_book_decodevv_add(void)


undefined8
vorbis_book_decodevv_add
          (long *param_1,long param_2,long param_3,int param_4,undefined8 param_5,int param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  
  if (0 < param_1[2]) {
    lVar2 = (long)param_4;
    iVar9 = 0;
    if (lVar2 != 0) {
      iVar9 = (int)((param_3 + param_6) / lVar2);
    }
    lVar8 = (long)iVar9;
    lVar7 = 0;
    if (lVar2 != 0) {
      lVar7 = param_3 / lVar2;
    }
    if (lVar7 < lVar8) {
      iVar9 = 0;
      do {
        lVar2 = FUN_00e0a388(param_1,param_5);
        if (lVar2 == -1) {
          return 0xffffffffffffffff;
        }
        if ((lVar7 < lVar8) && (lVar1 = *param_1, 0 < lVar1)) {
          lVar4 = param_1[4];
          lVar3 = 0;
          do {
            lVar5 = *(long *)(param_2 + (long)iVar9 * 8);
            lVar6 = lVar7 * 4;
            if (iVar9 + 1 == param_4) {
              lVar7 = lVar7 + 1;
              iVar9 = 0;
            }
            else {
              iVar9 = iVar9 + 1;
            }
            *(float *)(lVar5 + lVar6) =
                 *(float *)(lVar4 + lVar1 * lVar2 * 4 + lVar3 * 4) + *(float *)(lVar5 + lVar6);
          } while ((lVar7 < lVar8) && (lVar3 = lVar3 + 1, lVar3 < lVar1));
        }
      } while (lVar7 < lVar8);
    }
  }
  return 0;
}


