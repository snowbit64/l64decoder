// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: construct<DeviceMappingManager::NamedDeviceMapping,DeviceMappingManager::NamedDeviceMapping_const&>
// Entry Point: 00b1fce8
// Size: 96 bytes
// Signature: void __thiscall construct<DeviceMappingManager::NamedDeviceMapping,DeviceMappingManager::NamedDeviceMapping_const&>(allocator<DeviceMappingManager::NamedDeviceMapping> * this, NamedDeviceMapping * param_1, NamedDeviceMapping * param_2)


/* void 
   std::__ndk1::allocator<DeviceMappingManager::NamedDeviceMapping>::construct<DeviceMappingManager::NamedDeviceMapping,
   DeviceMappingManager::NamedDeviceMapping const&>(DeviceMappingManager::NamedDeviceMapping*,
   DeviceMappingManager::NamedDeviceMapping const&) */

void __thiscall
std::__ndk1::allocator<DeviceMappingManager::NamedDeviceMapping>::
construct<DeviceMappingManager::NamedDeviceMapping,DeviceMappingManager::NamedDeviceMapping_const&>
          (allocator<DeviceMappingManager::NamedDeviceMapping> *this,NamedDeviceMapping *param_1,
          NamedDeviceMapping *param_2)

{
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)param_1);
                    /* try { // try from 00b1fd1c to 00b1fd23 has its CatchHandler @ 00b1fdf8 */
  vector<DeviceMappingManager::ProductName,std::__ndk1::allocator<DeviceMappingManager::ProductName>>
  ::vector((vector<DeviceMappingManager::ProductName,std::__ndk1::allocator<DeviceMappingManager::ProductName>>
            *)(param_1 + 0x18),(vector *)(param_2 + 0x18));
                    /* try { // try from 00b1fd2c to 00b1fd2f has its CatchHandler @ 00b1fd48 */
  DeviceMappingManager::DeviceMapping::DeviceMapping
            ((DeviceMapping *)(param_1 + 0x30),(DeviceMapping *)(param_2 + 0x30));
  return;
}


