// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processOverlap
// Entry Point: 00f481e4
// Size: 40 bytes
// Signature: undefined __thiscall processOverlap(btCollisionPairCallback * this, btBroadphasePair * param_1)


/* btCollisionPairCallback::processOverlap(btBroadphasePair&) */

undefined8 __thiscall
btCollisionPairCallback::processOverlap(btCollisionPairCallback *this,btBroadphasePair *param_1)

{
  (**(code **)(*(long *)(this + 0x10) + 0x68))
            (param_1,*(long *)(this + 0x10),*(undefined8 *)(this + 8));
  return 0;
}


