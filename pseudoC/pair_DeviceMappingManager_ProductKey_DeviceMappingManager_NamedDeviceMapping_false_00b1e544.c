// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pair<DeviceMappingManager::ProductKey&,DeviceMappingManager::NamedDeviceMapping&,false>
// Entry Point: 00b1e544
// Size: 124 bytes
// Signature: undefined __thiscall pair<DeviceMappingManager::ProductKey&,DeviceMappingManager::NamedDeviceMapping&,false>(pair<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping> * this, ProductKey * param_1, NamedDeviceMapping * param_2)


/* std::__ndk1::pair<DeviceMappingManager::ProductKey,
   DeviceMappingManager::NamedDeviceMapping>::pair<DeviceMappingManager::ProductKey&,
   DeviceMappingManager::NamedDeviceMapping&, false>(DeviceMappingManager::ProductKey&,
   DeviceMappingManager::NamedDeviceMapping&) */

void __thiscall
std::__ndk1::pair<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>::
pair<DeviceMappingManager::ProductKey&,DeviceMappingManager::NamedDeviceMapping&,false>
          (pair<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping> *this,
          ProductKey *param_1,NamedDeviceMapping *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined2 *)(this + 4) = *(undefined2 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 8));
                    /* try { // try from 00b1e590 to 00b1e597 has its CatchHandler @ 00b1e670 */
  vector<DeviceMappingManager::ProductName,std::__ndk1::allocator<DeviceMappingManager::ProductName>>
  ::vector((vector<DeviceMappingManager::ProductName,std::__ndk1::allocator<DeviceMappingManager::ProductName>>
            *)(this + 0x20),(vector *)(param_2 + 0x18));
                    /* try { // try from 00b1e5a0 to 00b1e5a3 has its CatchHandler @ 00b1e5c0 */
  DeviceMappingManager::DeviceMapping::DeviceMapping
            ((DeviceMapping *)(this + 0x38),(DeviceMapping *)(param_2 + 0x30));
  return;
}


