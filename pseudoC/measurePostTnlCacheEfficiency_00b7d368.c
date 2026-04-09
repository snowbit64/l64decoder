// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: measurePostTnlCacheEfficiency
// Entry Point: 00b7d368
// Size: 272 bytes
// Signature: undefined __cdecl measurePostTnlCacheEfficiency(uint param_1, uint param_2, uint param_3, ushort * param_4, uint param_5)


/* GeometryUtil::measurePostTnlCacheEfficiency(unsigned int, unsigned int, unsigned int, unsigned
   short const*, unsigned int) */

float GeometryUtil::measurePostTnlCacheEfficiency
                (uint param_1,uint param_2,uint param_3,ushort *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  void *__s;
  void *__s_00;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 != 0) {
    __s = operator_new__((ulong)param_3);
    memset(__s,0,(ulong)param_3);
    __s_00 = operator_new__((ulong)param_5 << 2);
    if (param_5 != 0) {
      memset(__s_00,0xff,(ulong)param_5 << 2);
    }
    uVar5 = 0;
    iVar3 = param_1 * 3;
    if (iVar3 != 0) {
      uVar4 = 0;
      do {
        uVar2 = *param_4 - param_2;
        if (*(char *)((long)__s + (ulong)uVar2) == '\0') {
          uVar1 = *(uint *)((long)__s_00 + (ulong)uVar4 * 4);
          if (uVar1 != 0xffffffff) {
            *(undefined *)((long)__s + (ulong)uVar1) = 0;
          }
          uVar5 = uVar5 + 1;
          uVar1 = 0;
          if (uVar4 + 1 < param_5) {
            uVar1 = uVar4 + 1;
          }
          *(undefined *)((long)__s + (ulong)uVar2) = 1;
          *(uint *)((long)__s_00 + (ulong)uVar4 * 4) = uVar2;
          uVar4 = uVar1;
        }
        param_4 = param_4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    operator_delete__(__s);
    operator_delete__(__s_00);
    return (float)(ulong)uVar5 / (float)(ulong)param_1;
  }
  return 0.0;
}


