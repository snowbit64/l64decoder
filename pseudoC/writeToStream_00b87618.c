// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeToStream
// Entry Point: 00b87618
// Size: 284 bytes
// Signature: undefined __thiscall writeToStream(DensityMap * this, GsBitStream * param_1)


/* DensityMap::writeToStream(GsBitStream*) */

bool __thiscall DensityMap::writeToStream(DensityMap *this,GsBitStream *param_1)

{
  uint uVar1;
  DensityMap DVar2;
  long lVar3;
  uint local_4c;
  undefined8 local_48;
  uint local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  DVar2 = this[0x90];
  uVar1 = *(uint *)(this + 0xcc);
  if (((byte)DVar2 | uVar1) == 0) {
    local_48._0_4_ = *(undefined4 *)(this + 0xd4);
    GsBitStream::writeBits(param_1,(uchar *)&local_48,0x20,true);
    local_48._0_4_ = *(undefined4 *)(this + 0xd8);
    GsBitStream::writeBits(param_1,(uchar *)&local_48,0x20,true);
    local_48._0_4_ = *(undefined4 *)(this + 0xc4);
    GsBitStream::writeBits(param_1,(uchar *)&local_48,0x20,true);
    RLEUtil::encode(*(BitVector **)(this + 0xa0),*(int *)(this + 0xd8) * *(int *)(this + 0xd4),
                    *(uint *)(this + 0xc4),*(uint *)(this + 0xc4),(uchar **)&local_48,&local_4c,
                    false);
    local_3c = local_4c;
    GsBitStream::writeBits(param_1,(uchar *)&local_3c,0x20,true);
    GsBitStream::writeAlignedBytes
              (param_1,(uchar *)CONCAT44(local_48._4_4_,(undefined4)local_48),local_4c);
    if ((void *)CONCAT44(local_48._4_4_,(undefined4)local_48) != (void *)0x0) {
      operator_delete__((void *)CONCAT44(local_48._4_4_,(undefined4)local_48));
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return ((byte)DVar2 | uVar1) == 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


