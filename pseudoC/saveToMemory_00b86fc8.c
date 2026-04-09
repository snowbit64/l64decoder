// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveToMemory
// Entry Point: 00b86fc8
// Size: 380 bytes
// Signature: undefined __thiscall saveToMemory(DensityMap * this, bool param_1, uchar * * param_2, uint * param_3)


/* DensityMap::saveToMemory(bool, unsigned char*&, unsigned int&) */

void __thiscall
DensityMap::saveToMemory(DensityMap *this,bool param_1,uchar **param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uchar *puVar7;
  uint *puVar8;
  long *plVar9;
  uint uVar10;
  uint *local_78;
  uint local_6c;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if (this[0x90] == (DensityMap)0x0) {
    plVar9 = *(long **)(this + 0xa0);
    iVar3 = *(int *)(plVar9 + 1);
    uVar4 = iVar3 + 7U >> 3;
    puVar7 = (uchar *)operator_new__((ulong)uVar4);
    if (7 < iVar3 + 7U) {
      uVar10 = 0;
      do {
        uVar1 = uVar10 & 0xffff;
        uVar5 = (*(int *)(plVar9 + 1) + 7U >> 3) - uVar10;
        uVar2 = 0x10000 - uVar1;
        if (uVar5 + uVar1 < 0x10001) {
          uVar2 = uVar5;
        }
        memcpy(puVar7 + uVar10,
               (void *)(*(long *)(*plVar9 + (ulong)(uVar10 >> 0x10) * 8) + (ulong)uVar1),
               (ulong)uVar2);
        uVar10 = uVar2 + uVar10;
      } while (uVar10 < uVar4);
    }
    *param_2 = puVar7;
    *param_3 = uVar4;
  }
  else {
    puVar7 = (uchar *)ChunkedBitSquare::saveToMem(*(ChunkedBitSquare **)(this + 0x98),param_3,true);
    *param_2 = puVar7;
  }
  if ((param_1) && (uVar4 = *param_3, uVar4 != 0)) {
    local_6c = LZMACompressionUtil::getCompressionBufferSize(puVar7,uVar4);
    puVar8 = (uint *)operator_new__((ulong)local_6c + 4);
    *param_2 = (uchar *)puVar8;
    local_78 = puVar8 + 1;
    *puVar8 = uVar4;
    LZMACompressionUtil::compress(puVar7,uVar4,(uchar **)&local_78,&local_6c,false);
    *param_3 = local_6c + 4;
    if (puVar7 != (uchar *)0x0) {
      operator_delete__(puVar7);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


