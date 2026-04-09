// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readNetworkStream
// Entry Point: 00704c20
// Size: 332 bytes
// Signature: undefined __thiscall readNetworkStream(AnimationTrack * this, GsBitStream * param_1)


/* AnimalAnimationSystem::AnimationTrack::readNetworkStream(GsBitStream*) */

void __thiscall
AnimalAnimationSystem::AnimationTrack::readNetworkStream(AnimationTrack *this,GsBitStream *param_1)

{
  long lVar1;
  long lVar2;
  AnimationTrack *pAVar3;
  ushort local_3c [2];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pAVar3 = this + 0x41;
  *pAVar3 = (AnimationTrack)0x0;
  GsBitStream::readBits(param_1,(uchar *)pAVar3,1,true);
  if (*pAVar3 != (AnimationTrack)0x0) {
    GsBitStream::readBits(param_1,(uchar *)local_3c,0x10,true);
    GsBitStream::readBits(param_1,(uchar *)(this + 0x28),0x20,true);
    GsBitStream::readBits(param_1,(uchar *)(this + 0x24),0x20,true);
    GsBitStream::readBits(param_1,(uchar *)(this + 0x2c),0x20,true);
    this[0x40] = (AnimationTrack)0x0;
    GsBitStream::readBits(param_1,(uchar *)(this + 0x40),1,true);
    if (*(CharacterSet **)this != (CharacterSet *)0x0) {
      CharacterSet::assignClip(*(CharacterSet **)this,*(uint *)(this + 8),(uint)local_3c[0]);
      CharacterSet::enable(*(CharacterSet **)this,*(uint *)(this + 8));
      CharacterSet::setTime(*(CharacterSet **)this,*(uint *)(this + 8),*(float *)(this + 0x28));
      CharacterSet::setBlendWeight
                (*(CharacterSet **)this,*(uint *)(this + 8),*(float *)(this + 0x24));
      CharacterSet::setSpeedScale
                (*(CharacterSet **)this,*(uint *)(this + 8),*(float *)(this + 0x2c));
      lVar1 = *(long *)this + (ulong)*(uint *)(this + 8) * 4;
      *(uint *)(lVar1 + 0x54) = *(uint *)(lVar1 + 0x54) & 0xfffffffb | (uint)(byte)this[0x40] << 2;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


