// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: swap
// Entry Point: 00971e80
// Size: 276 bytes
// Signature: undefined __thiscall swap(__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>>> * this, __hash_table * param_1)


/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long long,
   TextureStreamingManager::TextureUsageInternal>, std::__ndk1::__unordered_map_hasher<unsigned long
   long, std::__ndk1::__hash_value_type<unsigned long long,
   TextureStreamingManager::TextureUsageInternal>, std::__ndk1::hash<unsigned long long>, true>,
   std::__ndk1::__unordered_map_equal<unsigned long long, std::__ndk1::__hash_value_type<unsigned
   long long, TextureStreamingManager::TextureUsageInternal>, std::__ndk1::equal_to<unsigned long
   long>, true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long long,
   TextureStreamingManager::TextureUsageInternal> >
   >::swap(std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long long,
   TextureStreamingManager::TextureUsageInternal>, std::__ndk1::__unordered_map_hasher<unsigned long
   long, std::__ndk1::__hash_value_type<unsigned long long,
   TextureStreamingManager::TextureUsageInternal>, std::__ndk1::hash<unsigned long long>, true>,
   std::__ndk1::__unordered_map_equal<unsigned long long, std::__ndk1::__hash_value_type<unsigned
   long long, TextureStreamingManager::TextureUsageInternal>, std::__ndk1::equal_to<unsigned long
   long>, true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long long,
   TextureStreamingManager::TextureUsageInternal> > >&) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>>>
::swap(__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>>>
       *this,__hash_table *param_1)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  
  uVar11 = *(undefined8 *)this;
  *(undefined8 *)this = 0;
  uVar4 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  pvVar3 = *(void **)this;
  *(undefined8 *)this = uVar4;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)param_1;
  *(undefined8 *)param_1 = uVar11;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  puVar6 = (undefined8 *)(this + 0x10);
  uVar11 = *puVar6;
  puVar5 = (undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar10 = *(undefined8 *)(this + 8);
  uVar12 = *(undefined4 *)(this + 0x20);
  *puVar6 = *puVar5;
  *(undefined8 *)(this + 8) = uVar4;
  *(undefined8 *)(param_1 + 8) = uVar10;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  lVar7 = *(long *)(this + 0x18);
  *puVar5 = uVar11;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x18) = uVar4;
  *(long *)(param_1 + 0x18) = lVar7;
  lVar9 = *(long *)(this + 0x18);
  *(undefined4 *)(param_1 + 0x20) = uVar12;
  if (lVar9 != 0) {
    uVar1 = *(ulong *)(this + 8);
    uVar8 = *(ulong *)(*(long *)(this + 0x10) + 8);
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar8 = uVar1 - 1 & uVar8;
    }
    else if (uVar1 <= uVar8) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar8 / uVar1;
      }
      uVar8 = uVar8 - uVar2 * uVar1;
    }
    *(undefined8 **)(*(long *)this + uVar8 * 8) = puVar6;
  }
  if (lVar7 != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    uVar8 = *(ulong *)(*(long *)(param_1 + 0x10) + 8);
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar8 = uVar1 - 1 & uVar8;
    }
    else if (uVar1 <= uVar8) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar8 / uVar1;
      }
      uVar8 = uVar8 - uVar2 * uVar1;
    }
    *(undefined8 **)(*(long *)param_1 + uVar8 * 8) = puVar5;
  }
  return;
}


