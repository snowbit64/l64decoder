// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readFromStream
// Entry Point: 00b87408
// Size: 460 bytes
// Signature: undefined __thiscall readFromStream(DensityMap * this, GsBitStream * param_1)


/* DensityMap::readFromStream(GsBitStream*) */

bool __thiscall DensityMap::readFromStream(DensityMap *this,GsBitStream *param_1)

{
  uint uVar1;
  uint uVar2;
  DensityMap DVar3;
  long lVar4;
  int iVar5;
  uchar *puVar6;
  long lVar7;
  BitVector *pBVar8;
  uint local_58;
  int local_54;
  int local_50;
  int local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  DVar3 = this[0x90];
  uVar1 = *(uint *)(this + 0xcc);
  if (((byte)DVar3 | uVar1) != 0) goto LAB_00b875a4;
  local_4c = 0;
  local_54 = 0;
  local_50 = 0;
  GsBitStream::readBits(param_1,(uchar *)&local_4c,0x20,true);
  GsBitStream::readBits(param_1,(uchar *)&local_50,0x20,true);
  GsBitStream::readBits(param_1,(uchar *)&local_54,0x20,true);
  if (((local_4c == *(int *)(this + 0xd4)) && (local_50 == *(int *)(this + 0xd8))) &&
     (local_54 == *(int *)(this + 0xc4))) {
    if (this[0x90] == (DensityMap)0x0) {
      lVar7 = *(long *)(this + 0xa0);
    }
    else {
      if (*(long *)(this + 0x98) == 0) goto LAB_00b874f0;
      lVar7 = *(long *)(*(long *)(this + 0x98) + 0x28);
    }
    if (lVar7 == 0) goto LAB_00b874f0;
    BitVector::clearAll();
  }
  else {
LAB_00b874f0:
    pBVar8 = *(BitVector **)(this + 0xa0);
    if (pBVar8 != (BitVector *)0x0) {
      BitVector::~BitVector(pBVar8);
      operator_delete(pBVar8);
    }
    iVar5 = local_4c;
    pBVar8 = (BitVector *)operator_new(0x10);
                    /* try { // try from 00b87524 to 00b8752f has its CatchHandler @ 00b875d4 */
    BitVector::BitVector(pBVar8,local_50 * iVar5 * local_54,true,false);
    *(BitVector **)(this + 0xa0) = pBVar8;
    *(int *)(this + 0xd4) = local_4c;
    *(int *)(this + 0xd8) = local_50;
    *(int *)(this + 0xc4) = local_54;
  }
  local_58 = 0;
  GsBitStream::readBits(param_1,(uchar *)&local_58,0x20,true);
  uVar2 = local_58;
  puVar6 = (uchar *)operator_new__((ulong)local_58);
  GsBitStream::readAlignedBytes(param_1,puVar6,uVar2);
  uVar2 = *(uint *)(this + 0xc4);
  RLEUtil::decode(puVar6,local_58,uVar2 + 7 >> 3,uVar2,uVar2,*(BitVector **)(this + 0xa0));
  operator_delete__(puVar6);
LAB_00b875a4:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return ((byte)DVar3 | uVar1) == 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


