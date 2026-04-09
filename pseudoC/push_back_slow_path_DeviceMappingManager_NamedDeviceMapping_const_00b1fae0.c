// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<DeviceMappingManager::NamedDeviceMapping_const&>
// Entry Point: 00b1fae0
// Size: 500 bytes
// Signature: void __thiscall __push_back_slow_path<DeviceMappingManager::NamedDeviceMapping_const&>(vector<DeviceMappingManager::NamedDeviceMapping,std::__ndk1::allocator<DeviceMappingManager::NamedDeviceMapping>> * this, NamedDeviceMapping * param_1)


/* void std::__ndk1::vector<DeviceMappingManager::NamedDeviceMapping,
   std::__ndk1::allocator<DeviceMappingManager::NamedDeviceMapping>
   >::__push_back_slow_path<DeviceMappingManager::NamedDeviceMapping
   const&>(DeviceMappingManager::NamedDeviceMapping const&) */

void __thiscall
std::__ndk1::
vector<DeviceMappingManager::NamedDeviceMapping,std::__ndk1::allocator<DeviceMappingManager::NamedDeviceMapping>>
::__push_back_slow_path<DeviceMappingManager::NamedDeviceMapping_const&>
          (vector<DeviceMappingManager::NamedDeviceMapping,std::__ndk1::allocator<DeviceMappingManager::NamedDeviceMapping>>
           *this,NamedDeviceMapping *param_1)

{
  ulong uVar1;
  NamedDeviceMapping *pNVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  NamedDeviceMapping *pNVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  lVar7 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar7 * -0x2b00ac02b00ac02b + 1;
  if (0x15805601580560 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar9 = lVar8 * -0x5601580560158056;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (0xac02b00ac02af < (ulong)(lVar8 * -0x2b00ac02b00ac02b)) {
    uVar1 = 0x15805601580560;
  }
  if (uVar1 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (0x15805601580560 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(uVar1 * 0xbe8);
  }
  pNVar11 = (NamedDeviceMapping *)((long)pvVar5 + lVar7 * 8);
                    /* try { // try from 00b1fbb8 to 00b1fbc7 has its CatchHandler @ 00b1fcd4 */
  allocator<DeviceMappingManager::NamedDeviceMapping>::
  construct<DeviceMappingManager::NamedDeviceMapping,DeviceMappingManager::NamedDeviceMapping_const&>
            ((allocator<DeviceMappingManager::NamedDeviceMapping> *)(this + 0x10),pNVar11,param_1);
  puVar10 = *(undefined8 **)this;
  puVar3 = *(undefined8 **)(this + 8);
  pNVar2 = pNVar11 + 0xbe8;
  puVar12 = puVar10;
  if (puVar3 != puVar10) {
    do {
      puVar12 = puVar3 + -0x17d;
      uVar14 = puVar3[-0x17c];
      uVar13 = *puVar12;
      *(undefined8 *)(pNVar11 + -0xbd8) = puVar3[-0x17b];
      *(undefined8 *)(pNVar11 + -0xbe0) = uVar14;
      *(undefined8 *)(pNVar11 + -0xbe8) = uVar13;
      puVar3[-0x17c] = 0;
      puVar3[-0x17b] = 0;
      *puVar12 = 0;
      *(undefined8 *)(pNVar11 + -0xbd0) = 0;
      *(undefined8 *)(pNVar11 + -0xbc8) = 0;
      *(undefined8 *)(pNVar11 + -0xbc0) = 0;
      *(undefined8 *)(pNVar11 + -0xbd0) = puVar3[-0x17a];
      *(undefined8 *)(pNVar11 + -0xbc8) = puVar3[-0x179];
      *(undefined8 *)(pNVar11 + -0xbc0) = puVar3[-0x178];
      puVar3[-0x17a] = 0;
      puVar3[-0x179] = 0;
      puVar3[-0x178] = 0;
      DeviceMappingManager::DeviceMapping::DeviceMapping
                ((DeviceMapping *)(pNVar11 + -3000),(DeviceMapping *)(puVar3 + -0x177));
      pNVar11 = pNVar11 + -0xbe8;
      puVar3 = puVar12;
    } while (puVar12 != puVar10);
    puVar10 = *(undefined8 **)(this + 8);
    puVar12 = *(undefined8 **)this;
  }
  *(NamedDeviceMapping **)this = pNVar11;
  *(NamedDeviceMapping **)(this + 8) = pNVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar1 * 0xbe8);
  while (puVar10 != puVar12) {
    puVar10 = puVar10 + -0x17d;
    FUN_00b1f010((allocator<DeviceMappingManager::NamedDeviceMapping> *)(this + 0x10),puVar10);
  }
  if (puVar12 != (undefined8 *)0x0) {
    operator_delete(puVar12);
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


