// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readFromStream
// Entry Point: 008761dc
// Size: 384 bytes
// Signature: undefined __cdecl readFromStream(GsBitStream * param_1, float param_2, float param_3, float param_4)


/* AnimalCompanionManager::readFromStream(GsBitStream*, float, float, float) */

void AnimalCompanionManager::readFromStream
               (GsBitStream *param_1,float param_2,float param_3,float param_4)

{
  long lVar1;
  GsBitStream *in_x1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uchar local_8c [4];
  Vector3 aVStack_88 [8];
  uchar auStack_80 [8];
  Vector3 aVStack_78 [4];
  float local_74;
  uchar auStack_70 [8];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x18c) != 0) {
    lVar2 = 0;
    lVar3 = 0;
    uVar4 = 0;
    do {
      local_8c[0] = '\0';
      param_2 = (float)GsBitStream::readBits(in_x1,local_8c,1,true);
      if (local_8c[0] != '\0') {
        GsBitStream::readBits(in_x1,(uchar *)aVStack_78,0x20,true);
        GsBitStream::readBits(in_x1,(uchar *)((ulong)aVStack_78 | 4),0x20,true);
        GsBitStream::readBits(in_x1,auStack_70,0x20,true);
        GsBitStream::readBits(in_x1,(uchar *)aVStack_88,0x20,true);
        GsBitStream::readBits(in_x1,(uchar *)((ulong)aVStack_88 | 4),0x20,true);
        GsBitStream::readBits(in_x1,auStack_80,0x20,true);
        AnimalSteering::setPositionAndDirection
                  ((AnimalSteering *)(*(long *)(param_1 + 0xf8) + lVar3),aVStack_78,aVStack_88);
        AnimalSteering::setGroundHeight
                  ((AnimalSteering *)(*(long *)(param_1 + 0xf8) + lVar3),local_74);
        param_2 = (float)AnimalAnimationSystem::readNetworkStream
                                   ((AnimalAnimationSystem *)(*(long *)(param_1 + 0x128) + lVar2),
                                    in_x1);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0xe0;
      lVar2 = lVar2 + 0x338;
    } while (uVar4 < *(uint *)(param_1 + 0x18c));
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


