// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: measurePreTnlCacheEfficiency
// Entry Point: 00b7d478
// Size: 320 bytes
// Signature: undefined __cdecl measurePreTnlCacheEfficiency(uint param_1, uint param_2, uint param_3, ushort * param_4, uint param_5)


/* GeometryUtil::measurePreTnlCacheEfficiency(unsigned int, unsigned int, unsigned int, unsigned
   short const*, unsigned int) */

float GeometryUtil::measurePreTnlCacheEfficiency
                (uint param_1,uint param_2,uint param_3,ushort *param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *__s;
  void *__s_00;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  
  fVar12 = 0.0;
  if (param_1 != 0) {
    __s = operator_new__((ulong)param_3);
    memset(__s,0,(ulong)param_3);
    __s_00 = operator_new__((ulong)param_5 << 2);
    if (param_5 != 0) {
      memset(__s_00,0xff,(ulong)param_5 << 2);
    }
    iVar6 = param_1 * 3;
    uVar11 = 0;
    if (iVar6 == 0) {
      uVar10 = 1;
    }
    else {
      uVar9 = (uint)*param_4;
      uVar5 = 0;
      uVar10 = 1;
      puVar7 = param_4 + 1;
      uVar8 = uVar9;
      while( true ) {
        iVar6 = iVar6 + -1;
        uVar3 = uVar9 - param_2;
        if (*(char *)((long)__s + (ulong)uVar3) == '\0') {
          uVar2 = *(uint *)((long)__s_00 + (ulong)uVar5 * 4);
          iVar4 = uVar9 - uVar8;
          iVar1 = -iVar4;
          if (-1 < iVar4) {
            iVar1 = iVar4;
          }
          if (uVar2 != 0xffffffff) {
            *(undefined *)((long)__s + (ulong)uVar2) = 0;
          }
          uVar10 = iVar1 + uVar10;
          uVar11 = uVar11 + 1;
          uVar8 = 0;
          if (uVar5 + 1 < param_5) {
            uVar8 = uVar5 + 1;
          }
          *(undefined *)((long)__s + (ulong)uVar3) = 1;
          *(uint *)((long)__s_00 + (ulong)uVar5 * 4) = uVar3;
          uVar5 = uVar8;
          uVar8 = uVar9;
        }
        if (iVar6 == 0) break;
        uVar9 = (uint)*puVar7;
        puVar7 = puVar7 + 1;
      }
    }
    operator_delete__(__s);
    operator_delete__(__s_00);
    if (uVar11 != 0) {
      fVar12 = (float)(ulong)uVar10 / (float)(ulong)uVar11;
    }
  }
  return fVar12;
}


