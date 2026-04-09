// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTypeNames
// Entry Point: 0074d4d8
// Size: 132 bytes
// Signature: undefined __thiscall getTypeNames(DebugMarkerManager * this, vector * param_1)


/* DebugMarkerManager::getTypeNames(std::__ndk1::vector<char const*, std::__ndk1::allocator<char
   const*> >&) */

void __thiscall DebugMarkerManager::getTypeNames(DebugMarkerManager *this,vector *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = *(undefined8 **)param_1;
  uVar2 = *(long *)(param_1 + 8) - (long)puVar1;
  if (uVar2 < 0x20) {
    std::__ndk1::vector<char_const*,std::__ndk1::allocator<char_const*>>::__append
              ((vector<char_const*,std::__ndk1::allocator<char_const*>> *)param_1,4 - (uVar2 >> 3));
    puVar1 = *(undefined8 **)param_1;
  }
  else if (uVar2 != 0x20) {
    *(undefined8 **)(param_1 + 8) = puVar1 + 4;
  }
  *puVar1 = *(undefined8 *)(this + 0x98);
  *(undefined8 *)(*(long *)param_1 + 8) = *(undefined8 *)(this + 0xa0);
  *(undefined8 *)(*(long *)param_1 + 0x10) = *(undefined8 *)(this + 0xa8);
  *(undefined8 *)(*(long *)param_1 + 0x18) = *(undefined8 *)(this + 0xb0);
  return;
}


