// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getColorNames
// Entry Point: 0074d578
// Size: 276 bytes
// Signature: undefined __thiscall getColorNames(DebugMarkerManager * this, vector * param_1)


/* DebugMarkerManager::getColorNames(std::__ndk1::vector<char const*, std::__ndk1::allocator<char
   const*> >&) */

void __thiscall DebugMarkerManager::getColorNames(DebugMarkerManager *this,vector *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = *(undefined8 **)param_1;
  uVar2 = *(long *)(param_1 + 8) - (long)puVar1;
  if (uVar2 < 0x80) {
    std::__ndk1::vector<char_const*,std::__ndk1::allocator<char_const*>>::__append
              ((vector<char_const*,std::__ndk1::allocator<char_const*>> *)param_1,
               0x10 - (uVar2 >> 3));
    puVar1 = *(undefined8 **)param_1;
  }
  else if (uVar2 != 0x80) {
    *(undefined8 **)(param_1 + 8) = puVar1 + 0x10;
  }
  *puVar1 = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(*(long *)param_1 + 8) = *(undefined8 *)(this + 0x20);
  *(undefined8 *)(*(long *)param_1 + 0x10) = *(undefined8 *)(this + 0x28);
  *(undefined8 *)(*(long *)param_1 + 0x18) = *(undefined8 *)(this + 0x30);
  *(undefined8 *)(*(long *)param_1 + 0x20) = *(undefined8 *)(this + 0x38);
  *(undefined8 *)(*(long *)param_1 + 0x28) = *(undefined8 *)(this + 0x40);
  *(undefined8 *)(*(long *)param_1 + 0x30) = *(undefined8 *)(this + 0x48);
  *(undefined8 *)(*(long *)param_1 + 0x38) = *(undefined8 *)(this + 0x50);
  *(undefined8 *)(*(long *)param_1 + 0x40) = *(undefined8 *)(this + 0x58);
  *(undefined8 *)(*(long *)param_1 + 0x48) = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(*(long *)param_1 + 0x50) = *(undefined8 *)(this + 0x68);
  *(undefined8 *)(*(long *)param_1 + 0x58) = *(undefined8 *)(this + 0x70);
  *(undefined8 *)(*(long *)param_1 + 0x60) = *(undefined8 *)(this + 0x78);
  *(undefined8 *)(*(long *)param_1 + 0x68) = *(undefined8 *)(this + 0x80);
  *(undefined8 *)(*(long *)param_1 + 0x70) = *(undefined8 *)(this + 0x88);
  *(undefined8 *)(*(long *)param_1 + 0x78) = *(undefined8 *)(this + 0x90);
  return;
}


