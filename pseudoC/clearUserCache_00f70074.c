// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearUserCache
// Entry Point: 00f70074
// Size: 60 bytes
// Signature: undefined __thiscall clearUserCache(btPersistentManifold * this, btManifoldPoint * param_1)


/* btPersistentManifold::clearUserCache(btManifoldPoint&) */

void __thiscall
btPersistentManifold::clearUserCache(btPersistentManifold *this,btManifoldPoint *param_1)

{
  if ((*(long *)(param_1 + 0x70) != 0) && (gContactDestroyedCallback != (code *)0x0)) {
    (*gContactDestroyedCallback)();
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}


