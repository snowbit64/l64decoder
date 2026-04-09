// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btManifoldResult
// Entry Point: 00f55b08
// Size: 32 bytes
// Signature: undefined __thiscall btManifoldResult(btManifoldResult * this, btCollisionObjectWrapper * param_1, btCollisionObjectWrapper * param_2)


/* btManifoldResult::btManifoldResult(btCollisionObjectWrapper const*, btCollisionObjectWrapper
   const*) */

void __thiscall
btManifoldResult::btManifoldResult
          (btManifoldResult *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2)

{
  *(btCollisionObjectWrapper **)(this + 0x10) = param_1;
  *(btCollisionObjectWrapper **)(this + 0x18) = param_2;
  this[0x30] = (btManifoldResult)0x1;
  *(undefined ***)this = &PTR__Result_01019d38;
  *(undefined8 *)(this + 8) = 0;
  return;
}


