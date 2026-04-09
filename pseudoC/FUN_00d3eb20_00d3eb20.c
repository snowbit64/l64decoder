// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3eb20
// Entry Point: 00d3eb20
// Size: 304 bytes
// Signature: undefined FUN_00d3eb20(void)


undefined FUN_00d3eb20(undefined8 param_1,byte **param_2,byte *param_3,void **param_4,long param_5)

{
  undefined uVar1;
  byte *pbVar2;
  byte bVar3;
  byte *__src;
  byte *pbVar4;
  byte *pbVar5;
  long lVar7;
  size_t __n;
  byte *pbVar6;
  
  __src = *param_2;
  param_5 = param_5 - (long)*param_4;
  pbVar2 = __src + param_5;
  if ((long)param_3 - (long)__src <= param_5) {
    pbVar2 = param_3;
  }
  pbVar4 = pbVar2;
  if (__src < pbVar2) {
    lVar7 = 0;
    pbVar6 = pbVar2;
    do {
      pbVar5 = pbVar6 + -1;
      bVar3 = *pbVar5;
      if ((bVar3 & 0xf8) == 0xf0) {
        if (lVar7 - 3U < 0xfffffffffffffffc) {
          pbVar4 = pbVar6 + 3;
          break;
        }
LAB_00d3ebc0:
        lVar7 = 0;
      }
      else {
        if ((bVar3 & 0xf0) == 0xe0) {
          if (0xfffffffffffffffc < lVar7 - 2U) goto LAB_00d3ebc0;
          pbVar4 = pbVar6 + 2;
          break;
        }
        if ((bVar3 & 0xe0) == 0xc0) {
          if (0xfffffffffffffffd < lVar7 - 1U) goto LAB_00d3ebc0;
          pbVar4 = pbVar6 + 1;
          break;
        }
        pbVar4 = pbVar6;
        if (-1 < (char)bVar3) break;
      }
      lVar7 = lVar7 + 1;
      pbVar4 = __src;
      pbVar6 = pbVar5;
    } while (__src < pbVar5);
  }
  __n = (long)pbVar4 - (long)__src;
  memcpy(*param_4,__src,__n);
  *param_2 = *param_2 + __n;
  uVar1 = 2;
  if ((long)param_3 - (long)__src <= param_5) {
    uVar1 = pbVar4 < pbVar2;
  }
  *param_4 = (void *)((long)*param_4 + __n);
  return uVar1;
}


