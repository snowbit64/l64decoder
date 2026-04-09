// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getChunkPairs
// Entry Point: 00929160
// Size: 316 bytes
// Signature: undefined __thiscall getChunkPairs(DestructionGeometryShared * this, Matrix4x4 * param_1, vector * param_2, vector * param_3)


/* DestructionGeometryShared::getChunkPairs(Matrix4x4 const&, std::__ndk1::vector<unsigned int,
   std::__ndk1::allocator<unsigned int> > const&,
   std::__ndk1::vector<DestructionGeometryShared::ChunkPairInfo,
   std::__ndk1::allocator<DestructionGeometryShared::ChunkPairInfo> >&) */

void __thiscall
DestructionGeometryShared::getChunkPairs
          (DestructionGeometryShared *this,Matrix4x4 *param_1,vector *param_2,vector *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  DestructionChunk *pDVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)param_2;
  lVar3 = *(long *)(param_2 + 8);
  if (lVar3 != lVar2) {
    uVar6 = 0;
    do {
      uVar7 = (ulong)((int)uVar6 + 1);
      uVar4 = lVar3 - lVar2 >> 2;
      if (uVar7 < uVar4) {
        lVar3 = *(long *)(this + 0x58);
        pDVar5 = *(DestructionChunk **)(lVar3 + (ulong)*(uint *)(lVar2 + uVar6 * 4) * 8);
        uVar8 = uVar7;
        while( true ) {
          uVar4 = DestructionUtil::getChunksCollisionPoint
                            (pDVar5,param_1,
                             *(DestructionChunk **)(lVar3 + (ulong)*(uint *)(lVar2 + uVar8 * 4) * 8)
                             ,param_1,(Vector3 *)&local_78,0.005);
          if ((uVar4 & 1) != 0) {
            local_90 = *(undefined4 *)(*(long *)param_2 + uVar6 * 4);
            uStack_8c = *(undefined4 *)(*(long *)param_2 + uVar8 * 4);
            local_88 = local_78;
            local_80 = local_70;
            FUN_0092929c(param_3,&local_90);
          }
          lVar2 = *(long *)param_2;
          lVar3 = *(long *)(param_2 + 8);
          uVar8 = (ulong)((int)uVar8 + 1);
          uVar4 = lVar3 - lVar2 >> 2;
          if (uVar4 <= uVar8) break;
          lVar3 = *(long *)(this + 0x58);
        }
      }
      uVar6 = uVar7;
    } while (uVar7 < uVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


