// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeToStream
// Entry Point: 00876048
// Size: 404 bytes
// Signature: undefined __thiscall writeToStream(AnimalCompanionManager * this, GsBitStream * param_1)


/* AnimalCompanionManager::writeToStream(GsBitStream*) */

void __thiscall
AnimalCompanionManager::writeToStream(AnimalCompanionManager *this,GsBitStream *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x18c) != 0) {
    lVar2 = 0;
    lVar3 = 0;
    uVar4 = 0;
    lVar5 = 8;
    do {
      lVar6 = *(long *)(*(long *)(this + 0xb0) + lVar5);
      local_7c = CONCAT31(local_7c._1_3_,lVar6 != 0);
      GsBitStream::writeBits(param_1,(uchar *)&local_7c,1,true);
      if (lVar6 != 0) {
        AnimalSteering::getPositionAndDirection
                  ((AnimalSteering *)(*(long *)(this + 0xf8) + lVar3),(Vector3 *)&local_68,
                   (Vector3 *)&local_78);
        local_7c = local_68;
        GsBitStream::writeBits(param_1,(uchar *)&local_7c,0x20,true);
        local_7c = local_64;
        GsBitStream::writeBits(param_1,(uchar *)&local_7c,0x20,true);
        local_7c = local_60;
        GsBitStream::writeBits(param_1,(uchar *)&local_7c,0x20,true);
        local_7c = local_78;
        GsBitStream::writeBits(param_1,(uchar *)&local_7c,0x20,true);
        local_7c = local_74;
        GsBitStream::writeBits(param_1,(uchar *)&local_7c,0x20,true);
        local_7c = local_70;
        GsBitStream::writeBits(param_1,(uchar *)&local_7c,0x20,true);
        AnimalAnimationSystem::writeNetworkStream
                  ((AnimalAnimationSystem *)(*(long *)(this + 0x128) + lVar2),param_1);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0xe0;
      lVar2 = lVar2 + 0x338;
      lVar5 = lVar5 + 0x58;
    } while (uVar4 < *(uint *)(this + 0x18c));
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


