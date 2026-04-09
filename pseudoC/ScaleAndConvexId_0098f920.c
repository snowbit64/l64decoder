// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ScaleAndConvexId
// Entry Point: 0098f920
// Size: 24 bytes
// Signature: undefined __thiscall ScaleAndConvexId(ScaleAndConvexId * this, Vector3 * param_1, bool param_2)


/* Bt2PhysicsColShapeCache::ScaleAndConvexId::ScaleAndConvexId(Vector3 const&, bool) */

void __thiscall
Bt2PhysicsColShapeCache::ScaleAndConvexId::ScaleAndConvexId
          (ScaleAndConvexId *this,Vector3 *param_1,bool param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  this[0xc] = (ScaleAndConvexId)param_2;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined8 *)this = uVar2;
  return;
}


