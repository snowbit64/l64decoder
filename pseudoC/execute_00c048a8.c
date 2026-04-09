// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: execute
// Entry Point: 00c048a8
// Size: 272 bytes
// Signature: undefined __thiscall execute(Main * this, PerItemData * param_1, uint param_2, uint * param_3, uint * param_4, Config * param_5)


/* DictionaryCompressor::Main::execute(DictionaryCompressor::PerItemData*, unsigned int, unsigned
   int&, unsigned int&, MapFold::Config const&) */

uint __thiscall
DictionaryCompressor::Main::execute
          (Main *this,PerItemData *param_1,uint param_2,uint *param_3,uint *param_4,Config *param_5)

{
  uint uVar1;
  void **ppvVar2;
  ulong uVar3;
  PerItemData *pPVar4;
  PerItemData **ppPVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar8 = (ulong)param_2;
  *(undefined8 *)(this + 0x18) = 0;
  ppvVar2 = (void **)operator_new__(uVar8 << 3);
  if (param_2 != 0) {
    if (param_2 < 4) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar8 & 0xfffffffc;
      ppPVar5 = (PerItemData **)(ppvVar2 + 2);
      lVar9 = 1;
      lVar6 = 0;
      uVar7 = uVar3;
      do {
        lVar10 = lVar6 * 0x20;
        lVar11 = lVar9 * 0x20;
        uVar7 = uVar7 - 4;
        lVar6 = lVar6 + 4;
        lVar9 = lVar9 + 4;
        ppPVar5[-1] = param_1 + lVar11;
        ppPVar5[-2] = param_1 + lVar10;
        ppPVar5[1] = param_1 + lVar11 + 0x40;
        *ppPVar5 = param_1 + lVar10 + 0x40;
        ppPVar5 = ppPVar5 + 4;
      } while (uVar7 != 0);
      if (uVar3 == uVar8) goto LAB_00c0496c;
    }
    lVar6 = uVar8 - uVar3;
    pPVar4 = param_1 + uVar3 * 0x20;
    ppPVar5 = (PerItemData **)(ppvVar2 + uVar3);
    do {
      *ppPVar5 = pPVar4;
      lVar6 = lVar6 + -1;
      pPVar4 = pPVar4 + 0x20;
      ppPVar5 = ppPVar5 + 1;
    } while (lVar6 != 0);
  }
LAB_00c0496c:
  uVar1 = MapFold::execute((MapFold *)this,ppvVar2,param_2,param_5);
  operator_delete__(ppvVar2);
  *param_3 = *(uint *)(this + 0x18);
  *param_4 = *(uint *)(this + 0x1c);
  return uVar1 & 1;
}


