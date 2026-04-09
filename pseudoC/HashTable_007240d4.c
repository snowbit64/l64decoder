// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~HashTable
// Entry Point: 007240d4
// Size: 68 bytes
// Signature: undefined __thiscall ~HashTable(HashTable<unsigned_int,DynamicAvoidance::ObstacleHash> * this)


/* HashTable<unsigned int, DynamicAvoidance::ObstacleHash>::~HashTable() */

void __thiscall
HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::~HashTable
          (HashTable<unsigned_int,DynamicAvoidance::ObstacleHash> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x20);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


