// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeNextInstance
// Entry Point: 008c6618
// Size: 64 bytes
// Signature: undefined __thiscall writeNextInstance(LockData * this, void * param_1)


/* InstancedGeometryManager::LockData::writeNextInstance(void const*) */

void __thiscall InstancedGeometryManager::LockData::writeNextInstance(LockData *this,void *param_1)

{
  memcpy(*(void **)(this + 8),param_1,(ulong)*(uint *)(this + 0x10));
  *(ulong *)(this + 8) = *(long *)(this + 8) + (ulong)*(uint *)(this + 0x10);
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
  return;
}


