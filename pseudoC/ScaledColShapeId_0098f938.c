// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ScaledColShapeId
// Entry Point: 0098f938
// Size: 24 bytes
// Signature: undefined __thiscall ScaledColShapeId(ScaledColShapeId * this, ulonglong param_1, Vector3 * param_2, bool param_3)


/* Bt2PhysicsColShapeCache::ScaledColShapeId::ScaledColShapeId(unsigned long long, Vector3 const&,
   bool) */

void __thiscall
Bt2PhysicsColShapeCache::ScaledColShapeId::ScaledColShapeId
          (ScaledColShapeId *this,ulonglong param_1,Vector3 *param_2,bool param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined8 *)param_2;
  this[0x14] = (ScaledColShapeId)param_3;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(ulonglong *)this = param_1;
  *(undefined8 *)(this + 8) = uVar2;
  return;
}


