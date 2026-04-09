// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadFromMemory
// Entry Point: 00b87144
// Size: 436 bytes
// Signature: undefined __thiscall loadFromMemory(DensityMap * this, bool param_1, uchar * param_2, uint param_3)


/* DensityMap::loadFromMemory(bool, unsigned char const*, unsigned int) */

void __thiscall
DensityMap::loadFromMemory(DensityMap *this,bool param_1,uchar *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long **pplVar5;
  DensityMap DVar6;
  uint uVar7;
  uchar *puVar8;
  ulong uVar9;
  long *plVar10;
  int iVar11;
  long **pplVar12;
  uint uVar13;
  
  if ((*(long *)(this + 0xa0) == 0) && (*(long *)(this + 0x98) == 0)) {
    return;
  }
  if (param_1) {
    uVar13 = param_3 - 4;
    if (param_3 < 4) {
      return;
    }
    param_3 = *(uint *)param_2;
    puVar8 = (uchar *)operator_new__((ulong)param_3);
    uVar9 = LZMACompressionUtil::decompress(param_2 + 4,uVar13,puVar8,param_3);
    if ((uVar9 & 1) == 0) {
      operator_delete__(puVar8);
      return;
    }
    DVar6 = this[0x90];
    param_2 = puVar8;
  }
  else {
    puVar8 = (uchar *)0x0;
    DVar6 = this[0x90];
  }
  if (DVar6 == (DensityMap)0x0) {
    plVar10 = *(long **)(this + 0xa0);
    iVar11 = *(int *)(plVar10 + 1);
    if (param_3 != iVar11 + 7U >> 3) {
      return;
    }
    if (param_3 != 0) {
      uVar13 = 0;
      while( true ) {
        uVar1 = uVar13 & 0xffff;
        uVar7 = (iVar11 + 7U >> 3) - uVar13;
        uVar2 = 0x10000 - uVar1;
        if (uVar7 + uVar1 < 0x10001) {
          uVar2 = uVar7;
        }
        memcpy((void *)(*(long *)(*plVar10 + (ulong)(uVar13 >> 0x10) * 8) + (ulong)uVar1),
               param_2 + uVar13,(ulong)uVar2);
        uVar13 = uVar2 + uVar13;
        if (param_3 <= uVar13) break;
        plVar10 = *(long **)(this + 0xa0);
        iVar11 = *(int *)(plVar10 + 1);
      }
    }
  }
  else {
    ChunkedBitSquare::initializeFromMemFile(*(ChunkedBitSquare **)(this + 0x98),param_2,param_3);
  }
  if (puVar8 != (uchar *)0x0) {
    operator_delete__(puVar8);
  }
  pplVar12 = *(long ***)(this + 0x78);
  pplVar5 = *(long ***)(this + 0x80);
  if (pplVar12 != pplVar5) {
    uVar3 = *(undefined4 *)(this + 0xd4);
    uVar4 = *(undefined4 *)(this + 0xd8);
    uVar13 = *(uint *)(this + 0xc4);
    do {
      if ((*(char *)(pplVar12 + 1) != '\0') ||
         ((*(int *)(pplVar12 + 2) != 0 && (*(uint *)((long)pplVar12 + 0xc) < uVar13)))) {
        (**(code **)(**pplVar12 + 0x10))(*pplVar12,this,0,0,uVar3,uVar4,0xffffffff,1);
      }
      pplVar12 = pplVar12 + 3;
    } while (pplVar12 != pplVar5);
  }
  return;
}


