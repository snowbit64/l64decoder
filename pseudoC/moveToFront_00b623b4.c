// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: moveToFront
// Entry Point: 00b623b4
// Size: 84 bytes
// Signature: undefined __thiscall moveToFront(BoundingVolumeFactory * this, __list_iterator param_1)


/* BoundingVolumeFactory::moveToFront(std::__ndk1::__list_iterator<BoundingVolumeFactory::Vector3F32,
   void*>) */

void __thiscall
BoundingVolumeFactory::moveToFront(BoundingVolumeFactory *this,__list_iterator param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  
  puVar1 = (ulong *)(ulong)param_1;
  if (*(ulong **)(this + 0xe8) == puVar1) {
    *(ulong *)(this + 0xe8) = puVar1[1];
  }
  puVar2 = *(ulong **)(this + 0xf8);
  if ((puVar2 != puVar1) && ((ulong *)puVar1[1] != puVar2)) {
    uVar3 = *puVar1;
    *(ulong **)(uVar3 + 8) = (ulong *)puVar1[1];
    *(ulong *)puVar1[1] = uVar3;
    uVar3 = *puVar2;
    *(ulong **)(uVar3 + 8) = puVar1;
    *puVar1 = uVar3;
    *puVar2 = (ulong)puVar1;
    puVar1[1] = (ulong)puVar2;
  }
  return;
}


