// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: flipX
// Entry Point: 00a94c84
// Size: 424 bytes
// Signature: undefined __cdecl flipX(uchar * param_1, uint param_2, uint param_3, uint param_4, uint param_5, FORMAT param_6, TYPE param_7)


/* ImageUtil::flipX(unsigned char*, unsigned int, unsigned int, unsigned int, unsigned int,
   ImageDesc::FORMAT, ImageDesc::TYPE) */

void ImageUtil::flipX(uchar *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                     FORMAT param_6,TYPE param_7)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  void *__dest;
  uint uVar5;
  uint uVar6;
  ulong __n;
  ulong uVar7;
  ulong uVar8;
  ulong local_90;
  
  if (5 < param_6 - 1) {
    return;
  }
  uVar4 = getMemorySize(1,1,1,param_6,param_7);
  __n = (ulong)uVar4;
  __dest = operator_new__(__n);
  if (param_5 != 0) {
    uVar2 = 0;
    if (param_5 != 0) {
      uVar2 = param_2 / param_5;
    }
    local_90 = 0;
    uVar1 = param_3 >> 1;
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    do {
      if (param_4 != 0) {
        uVar8 = 0;
        do {
          if (1 < param_3) {
            uVar6 = 0;
            lVar3 = (ulong)(uVar4 * param_3 * (int)uVar8) + (ulong)(uVar2 * (int)local_90);
            uVar7 = (ulong)uVar1;
            uVar5 = uVar4 * (param_3 - 1);
            do {
              memcpy(__dest,param_1 + (ulong)uVar6 + lVar3,__n);
              memcpy(param_1 + (ulong)uVar6 + lVar3,param_1 + (ulong)uVar5 + lVar3,__n);
              memcpy(param_1 + (ulong)uVar5 + lVar3,__dest,__n);
              uVar6 = uVar6 + uVar4;
              uVar5 = uVar5 - uVar4;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != param_4);
      }
      local_90 = local_90 + 1;
    } while (local_90 != param_5);
  }
  operator_delete__(__dest);
  return;
}


