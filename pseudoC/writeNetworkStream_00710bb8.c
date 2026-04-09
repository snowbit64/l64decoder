// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeNetworkStream
// Entry Point: 00710bb8
// Size: 428 bytes
// Signature: undefined __thiscall writeNetworkStream(AnimalSoundSystem * this, GsBitStream * param_1)


/* AnimalSoundSystem::writeNetworkStream(GsBitStream*) */

void __thiscall AnimalSoundSystem::writeNetworkStream(AnimalSoundSystem *this,GsBitStream *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_5c = CONCAT31(local_5c._1_3_,
                      (char)((uint)(*(int *)(this + 0x38) - *(int *)(this + 0x30)) >> 2) * -0x49);
  GsBitStream::writeBits(param_1,(uchar *)&local_5c,8,true);
  lVar2 = *(long *)(this + 0x30);
  if (*(long *)(this + 0x38) != lVar2) {
    uVar4 = 0;
    do {
      lVar5 = uVar4 * 0x1c;
      local_5c._0_2_ = (short)*(undefined4 *)(lVar2 + lVar5);
      GsBitStream::writeBits(param_1,(uchar *)&local_5c,0x10,true);
      local_5c = CONCAT22(local_5c._2_2_,(short)*(undefined4 *)(*(long *)(this + 0x30) + lVar5 + 4))
      ;
      GsBitStream::writeBits(param_1,(uchar *)&local_5c,0x10,true);
      local_5c = CONCAT31(local_5c._1_3_,*(undefined *)(*(long *)(this + 0x30) + lVar5 + 0x18));
      GsBitStream::writeBits(param_1,(uchar *)&local_5c,1,true);
      local_5c = *(undefined4 *)(*(long *)(this + 0x30) + lVar5 + 8);
      GsBitStream::writeBits(param_1,(uchar *)&local_5c,0x20,true);
      local_5c = *(undefined4 *)(*(long *)(this + 0x30) + lVar5 + 0xc);
      GsBitStream::writeBits(param_1,(uchar *)&local_5c,0x20,true);
      local_5c = *(undefined4 *)(*(long *)(this + 0x30) + lVar5 + 0x10);
      GsBitStream::writeBits(param_1,(uchar *)&local_5c,0x20,true);
      lVar2 = *(long *)(this + 0x30);
      uVar4 = (ulong)((int)uVar4 + 1);
      uVar3 = (*(long *)(this + 0x38) - lVar2 >> 2) * 0x6db6db6db6db6db7;
    } while (uVar4 <= uVar3 && uVar3 - uVar4 != 0);
  }
  this[0x50] = (AnimalSoundSystem)0x0;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


