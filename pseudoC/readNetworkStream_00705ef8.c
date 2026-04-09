// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readNetworkStream
// Entry Point: 00705ef8
// Size: 232 bytes
// Signature: undefined __thiscall readNetworkStream(AnimalAnimationSystem * this, GsBitStream * param_1)


/* AnimalAnimationSystem::readNetworkStream(GsBitStream*) */

void __thiscall
AnimalAnimationSystem::readNetworkStream(AnimalAnimationSystem *this,GsBitStream *param_1)

{
  long lVar1;
  byte bVar2;
  byte local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  GsBitStream::readBits(param_1,local_3c,8,true);
  bVar2 = local_3c[0];
  if (5 < local_3c[0]) {
    bVar2 = 6;
  }
  if ((((bVar2 != 0) &&
       (AnimationTrack::readNetworkStream((AnimationTrack *)(this + 0x18),param_1), bVar2 != 1)) &&
      (AnimationTrack::readNetworkStream((AnimationTrack *)(this + 0x80),param_1), bVar2 != 2)) &&
     (((AnimationTrack::readNetworkStream((AnimationTrack *)(this + 0xe8),param_1), bVar2 != 3 &&
       (AnimationTrack::readNetworkStream((AnimationTrack *)(this + 0x150),param_1), bVar2 != 4)) &&
      (AnimationTrack::readNetworkStream((AnimationTrack *)(this + 0x1b8),param_1), bVar2 != 5)))) {
    AnimationTrack::readNetworkStream((AnimationTrack *)(this + 0x220),param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


