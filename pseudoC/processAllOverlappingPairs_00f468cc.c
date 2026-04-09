// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processAllOverlappingPairs
// Entry Point: 00f468cc
// Size: 172 bytes
// Signature: undefined __thiscall processAllOverlappingPairs(btHashedOverlappingPairCache * this, btOverlapCallback * param_1, btDispatcher * param_2)


/* btHashedOverlappingPairCache::processAllOverlappingPairs(btOverlapCallback*, btDispatcher*) */

void __thiscall
btHashedOverlappingPairCache::processAllOverlappingPairs
          (btHashedOverlappingPairCache *this,btOverlapCallback *param_1,btDispatcher *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  
  if (0 < *(int *)(this + 0xc)) {
    iVar3 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(this + 0x18) + (long)iVar3 * 0x20);
      uVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1,puVar1);
      if ((uVar2 & 1) == 0) {
        iVar3 = iVar3 + 1;
      }
      else {
        (**(code **)(*(long *)this + 0x18))(this,*puVar1,puVar1[1],param_2);
        gOverlappingPairs = gOverlappingPairs + -1;
      }
    } while (iVar3 < *(int *)(this + 0xc));
  }
  return;
}


