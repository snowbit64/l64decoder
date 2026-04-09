// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeNetworkStream
// Entry Point: 00704d6c
// Size: 312 bytes
// Signature: undefined __thiscall writeNetworkStream(AnimationTrack * this, GsBitStream * param_1)


/* AnimalAnimationSystem::AnimationTrack::writeNetworkStream(GsBitStream*) */

void __thiscall
AnimalAnimationSystem::AnimationTrack::writeNetworkStream(AnimationTrack *this,GsBitStream *param_1)

{
  long lVar1;
  undefined2 uVar2;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = CONCAT31(local_3c._1_3_,this[0x41]);
  GsBitStream::writeBits(param_1,(uchar *)&local_3c,1,true);
  if (this[0x41] != (AnimationTrack)0x0) {
    uVar2 = CharacterSet::getAssignedClip(*(CharacterSet **)this,*(uint *)(this + 8));
    local_3c = CONCAT22(local_3c._2_2_,uVar2);
    GsBitStream::writeBits(param_1,(uchar *)&local_3c,0x10,true);
    local_3c = CharacterSet::getTime(*(CharacterSet **)this,*(uint *)(this + 8));
    GsBitStream::writeBits(param_1,(uchar *)&local_3c,0x20,true);
    local_3c = *(undefined4 *)(*(long *)this + (ulong)*(uint *)(this + 8) * 4 + 0xb4);
    GsBitStream::writeBits(param_1,(uchar *)&local_3c,0x20,true);
    local_3c = CharacterSet::getSpeedScale(*(CharacterSet **)this,*(uint *)(this + 8));
    GsBitStream::writeBits(param_1,(uchar *)&local_3c,0x20,true);
    local_3c = CONCAT31(local_3c._1_3_,
                        (char)(*(uint *)(*(long *)this + (ulong)*(uint *)(this + 8) * 4 + 0x54) >> 2
                              )) & 0xffffff01;
    GsBitStream::writeBits(param_1,(uchar *)&local_3c,1,true);
  }
  this[0x42] = (AnimationTrack)0x0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


