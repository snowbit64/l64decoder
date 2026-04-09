// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeNetworkStream
// Entry Point: 00705fe0
// Size: 180 bytes
// Signature: undefined __thiscall writeNetworkStream(AnimalAnimationSystem * this, GsBitStream * param_1)


/* AnimalAnimationSystem::writeNetworkStream(GsBitStream*) */

void __thiscall
AnimalAnimationSystem::writeNetworkStream(AnimalAnimationSystem *this,GsBitStream *param_1)

{
  long lVar1;
  uchar local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c[0] = '\x06';
  GsBitStream::writeBits(param_1,local_3c,8,true);
  AnimationTrack::writeNetworkStream((AnimationTrack *)(this + 0x18),param_1);
  AnimationTrack::writeNetworkStream((AnimationTrack *)(this + 0x80),param_1);
  AnimationTrack::writeNetworkStream((AnimationTrack *)(this + 0xe8),param_1);
  AnimationTrack::writeNetworkStream((AnimationTrack *)(this + 0x150),param_1);
  AnimationTrack::writeNetworkStream((AnimationTrack *)(this + 0x1b8),param_1);
  AnimationTrack::writeNetworkStream((AnimationTrack *)(this + 0x220),param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


