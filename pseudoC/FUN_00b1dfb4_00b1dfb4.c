// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00b1dfb4
// Entry Point: 00b1dfb4
// Size: 84 bytes
// Signature: undefined FUN_00b1dfb4(void)


void FUN_00b1dfb4(vector<DeviceMappingManager::NamedDeviceMapping,std::__ndk1::allocator<DeviceMappingManager::NamedDeviceMapping>>
                  *param_1,NamedDeviceMapping *param_2)

{
  NamedDeviceMapping *pNVar1;
  
  pNVar1 = *(NamedDeviceMapping **)(param_1 + 8);
  if (pNVar1 != *(NamedDeviceMapping **)(param_1 + 0x10)) {
                    /* try { // try from 00b1dfd8 to 00b1dfdf has its CatchHandler @ 00b1e008 */
    std::__ndk1::allocator<DeviceMappingManager::NamedDeviceMapping>::
    construct<DeviceMappingManager::NamedDeviceMapping,DeviceMappingManager::NamedDeviceMapping_const&>
              ((allocator<DeviceMappingManager::NamedDeviceMapping> *)(param_1 + 0x10),pNVar1,
               param_2);
    *(NamedDeviceMapping **)(param_1 + 8) = pNVar1 + 0xbe8;
    return;
  }
  std::__ndk1::
  vector<DeviceMappingManager::NamedDeviceMapping,std::__ndk1::allocator<DeviceMappingManager::NamedDeviceMapping>>
  ::__push_back_slow_path<DeviceMappingManager::NamedDeviceMapping_const&>(param_1,param_2);
  return;
}


