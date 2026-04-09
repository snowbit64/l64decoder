// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateOverlappingPairs
// Entry Point: 00f44404
// Size: 80 bytes
// Signature: undefined __thiscall calculateOverlappingPairs(btDbvtBroadphase * this, btDispatcher * param_1)


/* btDbvtBroadphase::calculateOverlappingPairs(btDispatcher*) */

void __thiscall
btDbvtBroadphase::calculateOverlappingPairs(btDbvtBroadphase *this,btDispatcher *param_1)

{
  (**(code **)(*(long *)this + 0x70))();
  collide((btDispatcher *)this);
  performDeferredRemoval(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00f44450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x78))(this);
  return;
}


